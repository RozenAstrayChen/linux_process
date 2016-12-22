#include<include.h>
void Son(int pid,int fd[]){
	char value;
	char *code;
	read(fd[0],&value,1);

	while(value ==0);
	printf("child\n");
	read(fd[0],code,10);
	printf("get is %s\n",code);
	return;
}
