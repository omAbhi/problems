/* input: irow-4  icol-4
output:  A B C D
         a b c d
         A B C D
         a b c d
*/
# include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch= '\0',gh='\0';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A',gh='a';j<=iCol;j++,ch++,gh++)
		{
			if(i%2!=0)
			printf("%c\t",ch);
		else
		{
			printf("%c\t",gh);
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
	
	Display(iValue1,iValue2);
	
	
	return 0;
}