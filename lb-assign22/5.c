accept division & return time of exam ....A/a time is 7am, B/b time is 8;30am, C/c time is 9:30am,  D/d time is 10:30am   (case insensitive)
# include<stdio.h>
# include <stdlib.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0
void ChkDiv(char ch)
{
	switch(ch)
	{
	case 'A':   //('A'|| 'a'):
	printf("Exam is at 7 AM");
	break;
	
	case 'B':
	printf("Exam is at 8:30 AM");
	break;
	
	case 'C':
	printf("Exam is at 9:20 AM");
	break;
	
	case 'D':
	printf("Exam is at 10:30 AM");
	break;
	//////////lower case condition
	case 'a':   //('A'|| 'a'):
	printf("Exam is at 7 AM");
	break;
	
	case 'b':
	printf("Exam is at 8:30 AM");
	break;
	
	case 'c':
	printf("Exam is at 9:20 AM");
	break;
	
	case 'd':
	printf("Exam is at 10:30 AM");
	break;
	
	default:
	printf("please give correct Division");
}
}
int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	printf("enter your division\n");
	scanf("%c",&cValue);
	//bRet=
	ChkDiv(cValue);
	return 0;
}