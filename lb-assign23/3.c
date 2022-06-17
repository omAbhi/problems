//accept char. if input is uppercase, then display all alphabets after it & if input is lowercase then display alphabets in reverse till a
//input Q  output: Q R S T U V W X Y Z   input d  output d c b a 
# include<stdio.h>
# include<stdlib.h>

void Display(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		printf("%c ",ch);
		while(ch!='Z')
		{
			ch++;
			printf("%c ",ch);
		}
	}
	
	else if(ch>='a' && ch<='z')
	{
		printf("%c ",ch);
		while(ch!='a')
		{
			ch--;
			printf("%c ",ch);
		}
	}
	else
	{
		printf("%c ",ch);
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