//accept no. & display its digit in reverse order

# include<stdio.h>

void DisplayDigit(int iNo)
{
	if(iNo<=0)
	{
		iNo= -iNo;
	} 
	int iDigit=0;
	printf("reverse order of digits is:\n");
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}
int main()
{
	int iValue=0;
	printf("enter number");
	scanf("%d",&iValue);
	DisplayDigit(iValue);
	return 0;
}