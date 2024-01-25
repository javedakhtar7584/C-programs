#include<stdio.h>
int main(){
	struct protocol{
		unsigned int wsize: 4;
		unsigned int flags: 2;
	}tcp;
	tcp.flags=3;
	printf("%u\n",tcp.flags);
	tcp.flags=4;
	printf("%u\n",tcp.flags);
	printf("%d\n",(int)sizeof(tcp));
	return 0;
}
