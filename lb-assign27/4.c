//copy only lowercase contents of one string into another string eg. HarHarMahadev  output: HHM
# include<stdio.h>
# include<stdlib.h>

void StrNCpyX(char *arr,char *brr)
{
	while(*arr!='\0')
	{
		if(*arr>='a' && *arr<='z')
		{
		*brr=*arr;
		brr++;
		}
		arr++;
		
		
	}
	*brr='\0';
	
	
}
int main()
{
	char arr[21];
	char brr[21];
	int iCnt=0;
	
	printf("enter string\n");
	scanf("%[^'\n']s",arr);
	
	
	
	StrNCpyX(arr,brr);
	printf("%s",brr);
	return 0;
}