//count of LowerCase letters
import java.lang.*;
import java.util.*;

class Capital
{
	int i,iLowerCase;
	
	public void ChkCapital(String word)
	{
		for(i=0;i<word.length();i++)
		{
			char ch= word.charAt(i);
			if(ch>='a' && ch<='z')
			{
				iLowerCase++;
			}
		}
		System.out.println("count of lowerCase letters: "+iLowerCase);
	}
}
class B
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