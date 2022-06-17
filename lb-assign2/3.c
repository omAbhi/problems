//accept number from user. print hello, if no is smaller than 10, otherwise print demo


# include <stdio.h>

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("hello");
	}
	else
	{printf("demo");}
}

int main ()
{
	int iValue=0;
	printf("enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);
	
	
	return 0;
}