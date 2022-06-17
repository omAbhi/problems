//accept string & also accept character & display index of first occurence of char
import java.util.*;

class Occur
{
	public int occurence(String word,char cValue)
	{
		int i=0;
		char ch[]=word.toCharArray();
		for( i=0;i<ch.length;i++)
		{
			if(ch[i]==cValue)
			{
				break;
			}
		}
		return i;
	}
}

class C
{
	public static void main(String a[])
	{
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word=sobj.nextLine();
		
		System.out.println("enter character");
		char cValue=sobj.next().charAt(0);
		
		Occur obj=new Occur();
		int Ret=obj.occurence(word,cValue);
		
		System.out.println("index is: "+Ret);
	}
}