// accept char & return true if its a special character(! @ # $%^&*)
# include<stdio.h>
# include<stdlib.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

int ChkSpecial(char cValue)
{
	if(cValue=='!' || cValue=='@' || cValue=='#' || cValue=='$' || cValue=='%' || cValue=='^' || cValue=='&' || cValue=='*'  )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	printf("enter character\n");
	scanf("%c",&cValue);
	bRet=ChkSpecial(cValue);
	
	if(bRet==TRUE)
	{
		printf("it is a special character");
	}
	else
	{
		printf("it is not a special character");
	}
	
	return 0;
}