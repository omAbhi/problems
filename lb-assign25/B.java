//accept string & convert it into upper case

import java.lang.*;
import java.util.*;

class UpperCase
{
	public void Upper(String word)
	{
		int a=0;
		char[] ch= word.toCharArray();
		for( a=0;a<ch.length;a++)
		{
			if(ch[a]>='a' && ch[a]<='z')
			{
				ch[a]=(char)((int)ch[a]-32);
			}
		}
		System.out.println("new string");
		for( a=0;a<ch.length;a++)
		{
			System.out.print(ch[a]);
		}
	}
}

class B
{
	public static void main(String a[])
	{
		
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word=sobj.nextLine();
		
	UpperCase obj=new UpperCase();
		obj.Upper(word);
		
	}
}