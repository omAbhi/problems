//accept N nos & display all elements which are divisible by 5

# include<stdio.h>
# include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int iCnt=0,iFact=0;
	printf("elements divisible by 5 are: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%5==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	p=(int*)malloc(iSize*sizeof(int));
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	Display(p,iSize);
	free(p);
	return 0;
}