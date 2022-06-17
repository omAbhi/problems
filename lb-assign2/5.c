//accept no. from user & check whether no. is even/odd

# include <stdio.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if((iNo % 2 == 0))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue=0;
	BOOL bRet= FALSE;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet= ChkEven(iValue);
	
	if(bRet ==TRUE)
	{
		printf("number is even\n");
	}
		else
		{
			printf("number is odd\n");
		}
	
	return 0;
}