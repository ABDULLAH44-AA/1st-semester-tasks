#include<stdio.h>
int main(){
	char homework;
	printf("MUHAMMAD ABDULLAH BIN SHAHZAD.\n");
	printf("Have you finished your homework? (Y/N):");
	scanf("%c",&homework);
	if (homework=='Y'){
	printf("You can play the games!\n");	
	}
	else{
		printf("You need to finish your homework first.\n");
	}
	return 0;
}