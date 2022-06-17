//accept N nos & return difference between frequency of even nos & odd nos.

# include<stdio.h>
# include <stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0,iEven=0,iOdd=0,iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEven++;
			
		}
		else//if(Arr[iCnt]%2!=0)
		{
			iOdd++;
			
		}
		
	}
	
	iDiff= iEven-iOdd;
	

	return iDiff;
}
int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	p= (int*)malloc(iSize*sizeof(int));
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
		iRet= Frequency(p, iSize);
		
	}
	printf("difference is : %d ",iRet);
	free(p);
	return 0;
}