//accept no. & return mult of all the digits

# include <stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0,iMult=1;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult= iMult*iDigit;
		iNo=iNo/10;
	}
	//printf("%d",iMult);
	return iMult;
}
int main()
{
	int iValue=0,bRet=0;
printf("enter number\n");
scanf("%d",&iValue);
bRet=MultDigits(iValue);
printf("%d",bRet);
return 0;
}