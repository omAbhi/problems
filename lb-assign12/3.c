//input: 5
//output: 1 * 2 * 3 * 4 * 5 *
# include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
		
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