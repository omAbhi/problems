//accept no. & return no. of even digits in it

# include <stdio.h>

int CountEven(int iNo)
{
	int iDigit=0;
	int iSum=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit%2==0)
		{
			iSum++;
		}
		
	}
	//printf("%d\n",iSum);
	return iSum;
}
int main()
{
	int iValue=0;
	int bRet=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet= CountEven(iValue);
	printf("%d",bRet);
	return 0;
}