/* input: irow:4   icol:4
output:   1 2 3 4
          5 6 7 8
          9 1 2 3
          4 5 6 7
*/
# include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=-0,iNo=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iNo);
			iNo++;
			if(iNo>9)
			{
				iNo= 1;
			}
		}
		
		printf("\n");
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("enter number of column\n");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	
	
	return 0;
}