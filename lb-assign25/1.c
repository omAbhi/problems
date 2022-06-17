//accept string & convert it into lower case
# include<stdio.h>
# include<stdlib.h>

void strlwrx(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			*str=*str+32;
		}
		str++;
	}
}
int main()
{
	char arr[21];
	printf("enter string\n");
	scanf("%[^'\n']s",arr);
	
	strlwrx(arr);
	printf("modified string is:   %s",arr);
	return 0;
}