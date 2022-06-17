//accept string & display numbers if present in it
# include<stdio.h>
# include<stdlib.h>


void Digit(char *str)
{
	while(*str!='\0')
	{
		if(*str>='0' && *str<='9')
		{
			//printf("if\n");
			printf("%c",*str);
		}
		str++;
	}

}

int main()
{
	char arr[21];
	printf("enter string\n");
	scanf("%[^'\n']s",arr);
	
	Digit(arr);
	//printf("modified string is:   %s",arr);
	return 0;
}