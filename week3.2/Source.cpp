#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter full score :");
	scanf_s("%d",& x);
	printf("Enter your score :");
	scanf_s("%d", &y);
	if (y > x / 2)
		printf("You passed the exam!");
	else
		printf("You failed the exam");

	return 0;
}