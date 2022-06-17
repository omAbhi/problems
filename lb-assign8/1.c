//accept N nos & return difference between sum of even elements & sum of odd elements

# include <stdio.h>
# include <stdlib.h>
int Difference(int Arr[],int iLength)
{
	register int iCnt=0;
	int iEven=0,iOdd=0,iDiff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEven=iEven+Arr[iCnt];
		}
		else
		{
			iOdd=iOdd+Arr[iCnt];
		}
	}
	iDiff= iEven-iOdd;
	printf("sum of even elements: %d\n",iEven);
	printf("sum of odd elements: %d\n",iOdd);
	return iDiff;
}
int main()
{
	int iSize=0,*p=NULL,iRet=0;
	register int iCnt=0;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	p= (int*)malloc(iSize*sizeof(int));
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p, iSize);
	printf("Difference is %d",iRet);
	
	return 0;
}