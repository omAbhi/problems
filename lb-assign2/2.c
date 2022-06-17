//accept no. from user and print that many stars on screen

# include <stdio.h>

void Display(iNo)
{
	int iCnt=0;
	while(iCnt<iNo)
	{
		printf("*");
		iCnt++;
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