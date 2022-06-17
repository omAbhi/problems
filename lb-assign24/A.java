//count of upperCase letters
import java.lang.*;
import java.util.*;

class Capital
{
	int i,iupperCase;
	
	public void ChkCapital(String word)
	{
		for(i=0;i<word.length();i++)
		{
			char ch= word.charAt(i);
			if(ch>='A' && ch<='Z')
			{
				iupperCase++;
			}
		}
		System.out.println("count of upperCase letters: "+iupperCase);
	}
}
class A
{
	public static void main(String a[])
	{
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word=sobj.nextLine();
		Capital obj=new Capital();
		obj.ChkCapital(word);
	}
}