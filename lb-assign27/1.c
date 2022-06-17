//copy contents of one string into another string (implement strcpy())
# include<stdio.h>
# include<stdlib.h>

void strcpyX(char *arr,char *brr)
{
	while(*arr!='\0')
	{
		
		*brr=*arr;
		arr++;
		brr++;
	}
	*brr='\0';
	
	
}
int main()
{
	char arr[21];
	char brr[21];
	
	printf("enter string\n");
	scanf("%[^'\n']s",arr);
	strcpyX(arr,brr);
	printf("%s",brr);
	return 0;
}