#include <stdio.h>
int main(){
	float rent,utilities,groceries,transportation,entertainment,total;
	printf("Monthly Expense Calculator\n");
	printf("-----------------\n");
	printf("Enter rent: $");
	scanf("%f",&rent);
		printf("Enter utilities: $");
	scanf("%f",&utilities);
		printf("Enter groceries: $\b");
	scanf("%f",&groceries);
		printf("Enter transportation: $");
	scanf("%f",&transportation);
		printf("Enter entertainment: $"); 
	scanf("%f",&entertainment);
	total = rent +utilities+groceries+transportation+entertainment;
	printf("\nTotal monthly expenses: $%.2f\n",total);
	return 0;
	
}