//accept char & display its decimal,octal,hexadecimal values
# include<stdio.h>
# include<stdlib.h>

void Display(char cValue)
{
	printf("Decimal:     %d\n",cValue);
	printf("octal:       %o\n",cValue);
	printf("hexaDecimal: %x\n",cValue);
}
int main()
{
	char cValue;
	printf("enter character\n");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}