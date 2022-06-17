//ascii table....accept char & display its value in decimal,binary etc
import java.lang.*;
import java.util.*;

class Display
{
	public void Display(int ch)
	{
		int Arr[]=new int[10],i;
		int Brr[]=new int[20];
		System.out.println("Decimal value:  "+ch);
		System.out.println("Octal value: "+Integer.toOctalString(ch));
		String hex=Integer.toHexString(ch);
		System.out.println("Hexadecimal value:  "+hex);
		
		for(i=0;ch>0;i++)
		{
			Arr[i]=ch%2;
			ch=ch/2;
		}
		
		System.out.print("Binary value: ");
		for(i=i-1;i>=0;i--)
		{
		System.out.print( Arr[i]);
		}
		
	}
	
}

class A
{
	public static void main(String a[])
	{
		char ch;
		System.out.println("enter character");
		Scanner sobj=new Scanner(System.in);
		ch=sobj.next().charAt(0);
		
		Display obj=new Display();
		obj.Display(ch);
	}
	}