//accept string & copy that string into another string in reverse order eg. abcd   output: dcba

# include<iostream>
using namespace std;

void Reverse(char *arr,char *brr)
{
	int count=0;
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	arr--;
	while(count!=0)
	{
		*brr=*arr;
		brr++;
		arr--;
		count--;
	}
	*brr='\0';
	
	
}
int main()
{
	char arr[51];
	char brr[51];
	cout<<"enter string1"<<endl;
	cin.getline(arr,51);
	
	Reverse(arr,brr);
	cout<<brr;
	return 0;
}