//accept string & also accept character & display frequency of that char in the string eg. good  char.'0'  output: 2 (occurence of 'o')

import java.util.*;

class Search
{
	public int freq(String word,char cValue)
	{
		int i=0;
		int count=0;
		char ch[]=word.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]==cValue)
			{
				count++;
			}
		}
		return count;
	}
}

class B
{
	public static void main(String a[])
	{
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word= sobj.nextLine();
		
		System.out.println("enter character to search");
		char cValue=sobj.next().charAt(0);
		
		Search obj=new Search();
		int bRet=obj.freq(word,cValue);
		System.out.println("frequency is: "+bRet);
	}
}