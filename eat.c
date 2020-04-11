#include<stdio.h>
int main()
{
	printf("Enter your choice: \n1.Pizza, Rs-239 \n2.Burger, Rs-129 \n3.Psta, Rs-179 \n4.French Fries, Rs-99 \n5.Sandwitch, Rs-149 \n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza \nPrice-Rs239");
			break;
		case 2:
			printf("Food item-Burger \nPrice-Rs129");
			break;
		case 3:
			printf("Food item-Pasta \nPrice-Rs179");
			break;
		case 4:
			printf("Food item-French Fries \nPrice-Rs99");
			break;
		case 5:
			printf("Food item-Sandwitch \nPrice-Rs149");
			break;
		default:
			printf("No item in this section");				
	}
	return 0;
}
