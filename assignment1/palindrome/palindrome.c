#include<stdio.h>

int main()
{
	int r, n, new = 0, num;
	printf("Enter a number:");
	scanf_s("%d", &n);

	num = n;
	while (num != 0)
	{
		r = num % 10;
		new = new * 10 + r;
		num /= 10;
	}
	if (new == n)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	getch();
	return 0;
}

