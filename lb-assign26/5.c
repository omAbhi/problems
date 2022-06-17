# include<stdio.h>
# include<stdlib.h>

void Reverse(char *str)
{
	char *start=str;
	char *end=str;
	char temp='\0';
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
		
	}
}
int main()
{
	char arr[21];
	printf("enter string");
	scanf("%[^'\n']s",arr);
	Reverse(arr);
	printf("modified string is %s",arr);
	return 0;
}