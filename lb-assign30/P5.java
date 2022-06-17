//check 1st & last bit, on or off  (last means 32nd bit

import java.lang.*;
import java.util.*;

class Bit
{
	public void Chk(int No)
	{
		 int Pos=0;
		
		int iResult=0;
		while(Pos!=35)
		{
		 if( Pos==1 || Pos==32)
		  {
			 int iMask=1;
			  System.out.print("for "+Pos+" bit:  ");
			iMask=iMask<<(Pos-1);
			 iResult=No & iMask;
		            if(iResult==0)
		            {
			                  System.out.println("bit is off");  //return false;  
		            }
		            else
		            {
			         System.out.println("bit is on");   //return true;
		            }
		   }
		   Pos++;
		}
		
		//return true;
	}
}
class P4
{
	public static void main(String a[])
	{
		System.out.println("enter number");
		Scanner s=new Scanner(System.in);
		int iValue=s.nextInt();
		Bit obj=new Bit();
		obj.Chk(iValue);
		/*if(bRet==false)
		{
			System.out.println("bit is off");
		}
		else
		{
			System.out.println("bit is on");
		}*/
	}
}
