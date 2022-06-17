//accept no. & return count of digits in between 3 & 7

# include<stdio.h>


int CountOdd(int iNo)
{
	int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit>3 && iDigit<7)
		{
			iSum++;
		}
	}
	return iSum;
}
int main()
{
int iValue=0;
int bRet=0;
printf("enter number\n");
scanf("%d",&iValue);
bRet= CountOdd(iValue);
printf("%d",bRet);

return 0;
}