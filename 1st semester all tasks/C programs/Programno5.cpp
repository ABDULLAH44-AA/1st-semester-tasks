#include<stdio.h>
int main(){
	int english,physics,math,computer,urdu,pakstudy;
	int totalmarks = 600;
	int obtainedmarks,lostmarks;
	printf("Enter marks for 6 subjects:\n");
	printf("english:");
	scanf("%d",&english);	
	printf("physics:");
	scanf("%d",&physics);	
	printf("math:");
	scanf("%d",&math);	
	printf("computer:");
	scanf("%d",&computer);
	printf("urdu:");
	scanf("%d",&urdu);
	printf("pakstudy:");
	scanf("%d",&pakstudy);
	obtainedmarks = english+physics+math+computer+urdu+pakstudy;
	lostmarks = totalmarks - obtainedmarks;
	printf("\nTotal Marks:%d\n",totalmarks);
	printf("\nObtained Marks:%d\n",obtainedmarks);
	printf("\nLost Marks:%d\n",lostmarks);
	return 0;
	
	
}