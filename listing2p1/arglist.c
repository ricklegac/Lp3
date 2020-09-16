#include<stdio.h>
int main(int argc, char* argv[]){
	printf("el nombre de este programa es '%s'.\n", argv[0]);
	printf("this program was invoked with %d arguments.\n",argc-1);
	if(argc>1){
		int i;
		printf("the arguments are: \n");
		for(i=1;i<argc;++i){
			printf(" %s \n", argv[i]);
		}
	}
	return 0;
}