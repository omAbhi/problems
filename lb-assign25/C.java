//toggle letters of a string...uppercase to lowercase & lowercase to uppercase
import java.util.*;

class Toggle
{
	public void ToggleCase(String word)
	{
		int a=0;
		char ch[]= word.toCharArray();
		for(a=0;a<ch.length;a++)
		{
			if(ch[a]>='a' && ch[a]<='z')
			{
			ch[a]=(char)((int)ch[a]-32);
			}
			else if(ch[a]>='A' && ch[a]<='Z')
			{
				ch[a]=(char)((int)ch[a]+32);
			}
		}
		
		for( a=0;a<ch.length;a++)     //printint string
		{
			System.out.print(ch[a]);
		}
		
	}
}
class C
{
	public static void main(String a[])
	{
		System.out.print("enter string");
		Scanner sobj=new Scanner(System.in);
		String word= sobj.nextLine();
		
		Toggle obj=new Toggle();
		obj.ToggleCase(word);
	}
}