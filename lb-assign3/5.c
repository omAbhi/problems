//accept one character from user & check whether that character is vowel or not // input: A/a  output: its a vowel (should check uppercase & lowercase)

# include <stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char cValue)
{
	if(cValue==65 || cValue==69 || cValue==73 || cValue==79|| cValue==85 || cValue==97 || cValue==101 || cValue==105 || cValue==111|| cValue==117 )
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
char cValue= '\0';
int bRet=0;
printf("enter character\n");
scanf("%c",&cValue);

bRet= ChkVowel(cValue);

if(bRet== TRUE)
{
	printf("it's a vowel");
}
else
{
	printf("it is not a vowel");
}
return 0;

}