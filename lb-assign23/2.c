//accpet char & if its in lowercase then convert it to uppercase, viceversa. symbols must be displayed as it is
# include<stdio.h>
# include<stdlib.h>

void Display(char cValue)
{
int i=0;

	if(cValue>='A' && cValue<='Z')
	{
		cValue=cValue+32;
		printf("%c",cValue);
	}
	else if(cValue>='a' && cValue<='z')
	{
		cValue=cValue-32;
		printf("%c",cValue);
	}
	else
	{
		printf("%c",cValue);
	}

}
int main()
{
	char cValue;
	printf("enter character\n");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}