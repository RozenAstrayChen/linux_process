#include<opp.h>
struct func{
	void (*_new)(nn*,int);
	int (*_dev)(nn*);
	int m1;
	int m2;
};
void dev(nn* test){
	printf("%d / %d \n",test->m1,test->m2);
}
void init(nn* test,int i,int j){
	test->_new = init;
	test->_dev = dev;
	test->m1 = i;
	test->m2 = j;
}

int main(){
	nn f1;
	nn* f2;
	init(&f1,10,2);
	//f1->_dev(&f1);
	dev(&f1);
	f2 =&f1;
	f2->_dev(f2);

}
