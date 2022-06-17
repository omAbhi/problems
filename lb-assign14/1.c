/* input: irow-4  icol-4
output:   ABCD
ABCD
ABCD
ABCD
*/
# include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch= '\0';
	for(i=0;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++,ch++)
		{
			printf("%c\t",ch);
			
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("enter number of rows\n");
	scanf("%d",&iValue1);
	printf("enter number of columns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	
	return 0;
}