//accept no. & check whether it contains zero in it

# include<stdio.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit= iNo%10;
	//	printf("%d  ",iDigit);
		iNo= iNo/10;
	
		if(iDigit<=0)
		{
			//printf("contains zero");
			return TRUE;
		}
		

	}
	
}


int main()
{
	BOOL bRet= FALSE;
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet= ChkZero(iValue);
	if(bRet== TRUE)
	{
		printf("it contains zero\n");
	}
else
{
	printf("it doesn't contains zero\n");
}
	
	return 0;
}