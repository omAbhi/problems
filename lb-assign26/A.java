//accept string & also accept character & display "char present", if that character is present in the string
import java.util.*;

class StringX
{
	public int ChkChar(String word,char search)
	{
		int i=0;
		int count=0;
		char ch[]= word.toCharArray();
		for(i=0;i<ch.length;i++)
		{
			if(ch[i]==search)
			{
				count++;
			}
			
		}
		return count;
		
	}
}
class A
{
	public static void main(String a[])
	{
		int bRet=0;
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word= sobj.nextLine();
		
		System.out.println("enter character to search");
		char cValue= sobj.next().charAt(0);
		
		StringX obj=new StringX();
		 bRet=obj.ChkChar(word,cValue);
		
		if(bRet==1)
		{
			System.out.println("char found");
		}
		else
		{
			System.out.println("char not found");
		}
	}
}