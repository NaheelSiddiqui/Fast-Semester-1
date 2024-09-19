#include<stdio.h>

int main() {
	printf("Enter your age: ");
	int age;
	scanf("%d", &age);
	if (age<0)
	printf("Invalid age");
	else if (age>=0 && age<=4)
	printf("You are an infant");
	else if (age>4 && age<=12)
	printf("You are a child");
	else if (age>12 && age<=18)
	printf("You are a teenager");
	else if (age>18 && age<=49)
	printf("You are a adult");
	else if (age>50)
	printf ("You are a senior");
	
	return 0;
}