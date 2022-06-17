//accept string & if vowels are present then return true else return false
# include<stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	int iCount=0;
	while(*str!='\0')
	{
		if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U') || (*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
		{
			//printf("vowel present\n");
			iCount++;
		}
		
		
		str++;
	}
	if(iCount>0)
		{
			return TRUE;
		}
		/*else
		{
			return FALSE;
		}*/
}
int main()
{
	BOOL bRet=FALSE;
	char arr[21];
	printf("enter string");
	scanf("%[^'\n']s",arr);
	bRet=ChkVowel(arr);
	
	if(bRet==TRUE)
	{
		printf("vowels present\n");
	}
	else
	{
		printf("vowels not present\n");
	}
	
	return 0;
}