#include<stdio.h>
int main(){
	int totalmarks = 1100;
	int obtainedmarks = 615;
	float percentage;
	percentage = (float)obtainedmarks/totalmarks*100;
	printf("Total Marks:%d\n",totalmarks);
	printf("Obtained Marks:%d\n",obtainedmarks);
	printf("Percentage:%f\n",percentage);
	return 0;
}