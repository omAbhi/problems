//accpet char & check whether its alphabet or not
# include<stdio.h>
# include<stdlib.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkAlpha(char ch)
{
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
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
	BOOL bRet= FALSE;
	char cValue='\0';
	printf("enter character\n");
	scanf("%c",&cValue);
	bRet=ChkAlpha(cValue);
	
	if(bRet==TRUE)
	{
		printf("character is alphabet\n");
	}
	else
	{
		printf("character isn't alphabet");
	}
	return 0;
}