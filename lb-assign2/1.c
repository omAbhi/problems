//accept no. from user and print that many stars on screen

# include <stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("*");
	}
}
int main ()
{
	int iValue=0;
	printf("ehter the no. of stars to display\n");
	scanf("%d",&iValue);
	Display(iValue);

return 0;
}