//reverse string
# include<stdio.h>
# include<stdlib.h>

void ReverseString(char *str)
{
	char *start=str;
	char *end=str;
	char temp;
	while(*end !='\0')
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
	printf(str);
}

int main()
{
	
	char arr[21];
	printf("enter string");
	scanf("%[^'\n']s",arr);
	ReverseString(arr);
	
	
	return 0;
}