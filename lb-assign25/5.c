//accept string & count number of spaces in it
# include<stdio.h>
# include<stdlib.h>

void Space(char *str)
{
	int Space=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			Space++;
		}
		
		str++;
	}
	printf("count of spaces: %d",Space);
}


int main()
{
	char arr[21];
	printf("enter string\n");
	scanf("%[^'\n']s",arr);
	
	Space(arr);
	//printf("modified string is:   %s",arr);
	return 0;
}