#include<include.h>
int main(){
	pid_t pid;
	char process_inter = 0;
	//pipe agrument
	int fd[2];
	if(pipe(fd)<0){
		printf("pipe failure\n");
		return -1;
	}
	//use fork do no_name process
	pid = fork();
	Father(pid,fd);
	Son(pid,fd);
}
void Father(int pid,int fd[]){
	char value;
	char *code;
	if(pid >0){
		
		printf("father\n");
		value =1;
		//write(fd[1],&value,1);
		printf("input value\n");
		scanf("%s",code);
		write(fd[1],&value,1);
		write(fd[1],code,sizeof(code));

	}
	return;

}
