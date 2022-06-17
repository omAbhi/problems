/*input    irow:4  icol:4
output  1 2 3 4
          2 3 4
            3 4
              4
*/


# include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
	if(i==1 || i<=j)
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