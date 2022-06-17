//accept no & count 2's in it

# include<stdio.h>

int CountTwo(int iNo)
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
		if(iDisplay==2)
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
bRet= CountTwo(iValue);
printf("occurence of 2 is %d ",bRet);
return 0;
}