//accept one charcter from user & convert case of that charcter

# include <stdio.h>

void DisplayConvert(char cValue)
{
	if(cValue<=91)
{
	printf("%c",(cValue+32));
}
else
{
	printf("%c",(cValue-32));
}
}

int main()
{
	char cValue= '\0';
	printf("enter alphabet\n");
scanf("%c",&cValue);

DisplayConvert(cValue);
	return 0;
}