//accept N nos from user & return product of all odd nos

//accept N nos & accept range, display all elements from that range

# include <stdio.h>
# include<stdlib.h>

void OddProduct(int Arr[],int iLength)
{
int iCnt=0,iMult=1;
for(iCnt=0;iCnt<iLength;iCnt++)
{
	if(Arr[iCnt]%2!=0)
	{
	iMult= iMult * Arr[iCnt];
	}
}
printf("product of odd elements is: %d ",iMult);
}
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter %d elements of array\n",iSize);
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter %d element of array:  ",iCnt);
		scanf("%d",&p[iCnt]);
	}

	OddProduct(p,iSize);
	free(p);
	return 0;
}