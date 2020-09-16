#include<stdio.h>
#include<stdlib.h>

int main(){
	char* server_name=getenv ("SERVER_NAME");
	if(server_name==NULL){
		server_name= "server.my-company.com";
	}
	printf("entrando al servidor %s\n",server_name); 
	//terminal export SERVER_NAME="cualquiercosasadada"
	return 0;
}