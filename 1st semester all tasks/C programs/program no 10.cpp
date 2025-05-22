#include<stdio.h>
int main(){
	int unitsSold1,unitsSold2,
	unitsSold3,unitsSold4,unitsSold5;
	float price1,price2,price3,price4,price5,totalRevenue;
	printf("Enter price for product 1 :");
	scanf("%f",&price1);
	printf("Enter units sold for product 1 :");
	scanf("%d",&unitsSold1);
	printf("Enter price for product 2 :");
	scanf("%f",&price2);
	printf("Enter units sold for product 2 :");
	scanf("%d",&unitsSold2);
	printf("Enter price for product 3 :");
	scanf("%f",&price3);
	printf("Enter units sold for product 3 :");
	scanf("%d",&unitsSold3);
	printf("Enter price for product 4 :");
	scanf("%f",&price4);
	printf("Enter units sold for product 4 :");
	scanf("%d",&unitsSold4);
	printf("Enter price for product 5 :");
	scanf("%f",&price5);
	printf("Enter units sold for product 5 :");
	scanf("%d",&unitsSold5);
	totalRevenue =(price1*unitsSold1)+	(price2*unitsSold2)+(price3*unitsSold3)+
	(price4*unitsSold4)+(price5*unitsSold5);
	printf("Total Revenue:$%f\n",totalRevenue);
	return 0;
}