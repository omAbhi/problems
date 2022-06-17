//accept no & return difference between summation of even digits & summation of odd digits

# include<stdio.h>
int CountDiff(int iNo)
{
	int iDigit=0,iEven=0,iOdd=0,iDiff=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iEven=iEven+iDigit;
		}
		else
		{
			iOdd= iOdd+iDigit;
		}
		iNo=iNo/10;
	}
	iDiff= iEven-iOdd;
	printf("sum of even digits: %d\n",iEven);
	printf("sum of odd digits: %d\n",iOdd);
	return iDiff;
	
}
int main()
{
	int iValue=0,bRet=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet=CountDiff(iValue);
	printf("Difference is: %d",bRet);
	return 0;
}