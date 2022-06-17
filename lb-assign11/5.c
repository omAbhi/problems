//accept N nos & return summation of digit of all nos
//input:   12  234  367  32
//output:   3   9   16   5
# include<stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

int Digits(int Arr[], int iLength)
{
	int iCnt=0,iDigit=0,iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		while(Arr[iCnt]!=0)
		{
			iDigit= Arr[iCnt]%10;
			iSum= iSum+ iDigit;
			Arr[iCnt]= Arr[iCnt]/10;
			
		}
		printf("%d\t",iSum);
		iSum=0;
	}
	
	
}
int main()
{
	int iSize=0,iCnt=0;
	BOOL bRet=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter %d elements of array:  \n",iSize);
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter %d element of array",iCnt);
		scanf("%d",&p[iCnt]);
		
	}
	Digits(p,iSize);
free(p);
	
	return 0;
}