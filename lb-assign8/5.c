//accept N nos & display elements which are multiples of 11

# include<stdio.h>
# include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt=0;
	printf("elements which are multiples of 11 are:   ");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("%d  ",Arr[iCnt]);
		}
	}
}
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter elements of array\n");
	p=(int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}	
	Display(p,iSize);
	free(p);
	return 0;
}