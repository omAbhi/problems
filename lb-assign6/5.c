//accept no. & display nos smaller than 6

# include<stdio.h>

int Count(int iNo)
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
		if(iDisplay<6)
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
bRet= Count(iValue);
printf("numbers smaller than 6 are %d ",bRet);
return 0;
}