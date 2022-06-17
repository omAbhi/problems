//input: 5
//output: A B C D E
# include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	char ch= 'A';
	for(iCnt=0;iCnt<=iNo;iCnt++)
	{
		printf("%c ",ch);
		ch++;
		
	}
	
}
int main()
{
	int iValue=0;
	printf("enter value\n");
	scanf("%d",&iValue);
	Pattern(iValue);
	
	return 0;
}