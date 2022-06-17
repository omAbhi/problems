//accept string & copy that string into another string by removing spaces eg. my new book    output: mynewbook
# include<iostream>
using namespace std;

void Space(char *arr,char *brr)
{
	while(*arr!='\0')
	{
		if(*arr!=' ')
		{
			*brr=*arr;
			brr++;
		}
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
	
	Space(arr,brr);
	cout<<brr;
	return 0;
}