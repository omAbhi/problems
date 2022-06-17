//accept string & also accept character & display index of last occurence of char
import java.util.*;

class Occur
{
	public int occurence(String word,char cValue)
	{
		
		char ch[]=word.toCharArray();
		int i=(ch.length-1);
		
		//for(i<=ch.length;i=0;i--)
			while(i!=-1)
		{
			if(ch[i]==cValue)
			{
				break;
			}
			i--;
		}
		return i;
	}
}

class D
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