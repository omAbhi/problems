//accpet char & check whether its capital or not
# include<stdio.h>
# include<stdlib.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkCapital(char ch)
{
	if(ch>='A' && ch<='Z') 
	{
		return TRUE;
	}
	else if(ch>='a' && ch<='z')
	{
		return FALSE;
	}
}
int main()
{
	BOOL bRet= FALSE;
	char cValue='\0';
	printf("enter character\n");
	scanf("%c",&cValue);
	bRet=ChkCapital(cValue);
	
	if(bRet==TRUE)
	{
		printf("capital alphabet\n");
	}
	else
	{
		printf("not a capital alphabet");
	}
	return 0;
}