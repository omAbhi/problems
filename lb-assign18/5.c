/*  input    irow:4    icol:4
output        1 2 3 4 5
              1 2     5
              1   3   5
			  1     4 5
              1 2 3 4 5

*/

# include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	for(i=1;i<=(iRow+1);i++)
	{
		for(j=1;j<=(iCol+1);j++)
		{
			if(j==1 || j==(iCol+1) || i==j)
			{
				printf("%d\t",j);
			}
			else if(i==1 || i==(iRow+1))
			{
				printf("%d\t",j);
			}
			else
			{
				printf("\t");
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
	
	printf("enter number of columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}