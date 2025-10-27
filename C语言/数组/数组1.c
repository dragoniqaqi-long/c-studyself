# include<stdio.h>

int main(void)
{
	int numbers[5] = { 1,2,3,4,5 };

	
	int length = sizeof(numbers) / sizeof(numbers[0]);

	printf("length = %d\n", length);

	return 0;

}