//accept no & count occurence of four in it

# include<stdio.h>

int CountFour(int iNo)
{
	if(iNo<0)
	{
		iNo= -iNo;
	}
	int iDisplay=0;
	int iSum=0;
	while(iNo!=0)
	{
		iDisplay=iNo%10;
		if(iDisplay==4)
		{
			iSum++;
		}
		iNo= iNo/10;
	}
	return iSum;
}
int main()
{
int iValue=0;
int bRet=0;
printf("enter number\n");
scanf("%d",&iValue);
bRet= CountFour(iValue);
printf("occurence of 4 is %d ",bRet);
return 0;
}