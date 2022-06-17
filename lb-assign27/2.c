//copy contents of one string into another string (implement strncpy())
# include<stdio.h>
# include<stdlib.h>

void StrNCpyX(char *arr,char *brr,int iCnt)
{
	while(*arr!='\0' && iCnt!=0)
	{
		
		*brr=*arr;
		arr++;
		brr++;
		iCnt--;
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
	
	printf("enter number\n");
	scanf("%d",&iCnt);
	
	StrNCpyX(arr,brr,iCnt);
	printf("%s",brr);
	return 0;
}