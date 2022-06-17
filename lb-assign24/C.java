//difference 0f upperCase & lowercase letters
import java.lang.*;
import java.util.*;

class Difference
{
	int i,iupperCase,iLowerCase;
	
	public void ChkDifference(String word)
	{
		for(i=0;i<word.length();i++)
		{
			char ch= word.charAt(i);
			if(ch>='A' && ch<='Z')
			{
				iupperCase++;
			}
			
			else if(ch>='a' && ch<='z')
			{
				iLowerCase++;
			}
		}
		System.out.println("difference of upperCase & lowercase letters: "+(iupperCase-iLowerCase));
	}
}
class C
{
	public static void main(String a[])
	{
		System.out.println("enter string");
		Scanner sobj=new Scanner(System.in);
		String word=sobj.nextLine();
		Difference obj=new Difference();
		obj.ChkDifference(word);
	}
}