//accept two string & concatenate second string after first string eg. 1)good  2)morning  output: goodmorning  (implement strcat())
# include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
	while(*dest!='\0')
	{
		dest++;
	}
	
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		*dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[21];
	char brr[21];
	
	cout<<"enter string1"<<endl;
	cin.getline(arr,21);
	
	cout<<"enter string2"<<endl;
	cin.getline(brr,21);
	
	strcatX(arr,brr);
	
	cout<<"string after concatination  "<<brr<<endl;
	
	return 0;
}