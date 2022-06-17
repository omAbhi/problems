/* input: irow:4   icol:4
output:   2 4 6 8 10
          1 3 5 7 9
          2 4 6 8 10
          1 3 5 7 9
*/
# include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iNo=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=0;j<=iCol;j++)
		{
			if(i%2!=0)
		{
			printf("%d\t",2*iNo);
			iNo++;
			if(iNo>(iCol+1))
			{
				iNo= 1;
			}
			}
			else
			{
		printf("%d\t",(2*iNo)-1);
			iNo++;
			if(iNo>(iCol+1))
			{
				iNo= 1;
			}
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