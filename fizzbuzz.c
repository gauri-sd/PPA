#include<stdio.h>

void task()
{
	int i=0;
	for(i=1;i<=100;i++)
	{
		if((i%5==0) && (i%3==0))
		{
			printf("Fizz Buzz\t");
		}
		else if(i%5==0)
		{
			printf("Buzz\t");
		}
		else if(i%3==0)
		{
			printf("Fizz\t");
		}
		else
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	task();
	return 0;
}
