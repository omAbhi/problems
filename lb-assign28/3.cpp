//accept string & copy that string into another string by converting all lowercase into uppercase eg. My New Book    output: MY NEW BOOK
# include<iostream>
using namespace std;

void UpperCase(char *arr,char *brr)
{
	while(*arr!='\0')
	{
		if(*arr>='a' && *arr<='z')
		{
			*arr= *arr-32;
		}
		*brr=*arr;
			brr++;
		arr++;
		
	}
	*brr='\0';
	
}


int main()
{
	char arr[51];
	char brr[51];
	cout<<"enter string1"<<endl;
	cin.getline(arr,51);
	
	UpperCase(arr,brr);
	cout<<brr;
	return 0;
}