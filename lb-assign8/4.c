//accept N nos & display elements which are divisible by 3 & 5

# include<stdio.h>
# include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt=0;
	printf("elements divisible by 3 & 5 are:   ");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%3==0 && Arr[iCnt]%5==0)
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