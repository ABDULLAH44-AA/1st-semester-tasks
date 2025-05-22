#include<stdio.h>
int main(){
	int Num1,Num2;
	char ch1,ch2;
	float Fnum1,Fnum2;
	
	printf("\nEnter first integer:");
	scanf("%d",&Num1);
	printf("\nEnter first character:");
	scanf(" %c",&ch1);
	printf("\nEnter first float:");
	scanf("%f",&Fnum1);
	printf("Enter second integer:");
	scanf("%d",&Num2);
	printf("\nEnter second float:");
	scanf("%f",&Fnum2);
	printf("\nEnter second character:");
	scanf(" %c",&ch2);	

 	printf("\nFirst Integer:%d\n",Num1);
	printf("First Float:%f\n",Fnum1);
	printf("First Character:%c\n",ch1);
	printf("\nSecond Integer:%d\n",Num2);
	printf("Second Float:%f\n",Fnum2);
	printf("Second Character:%c",ch2);
		return 0;
}