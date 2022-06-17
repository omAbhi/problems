//check 5th & 18th bit is on or off
import java.util.*;

class Bit
{
	public void Chk(int No)
	{
		 int Pos=3;
		
		int iResult=0;
		while(Pos!=20)
		{
		 if( Pos==5 || Pos==18)
		  {
			 int iMask=1;
			  System.out.print("for "+Pos+" bit:  ");
			iMask=iMask<<(Pos-1);
			 iResult=No & iMask;
		            if(iResult==0)
		            {
			          System.out.println("bit is off");          //return 0;
		            }
		            else
		            {
			         System.out.println("bit is on");     //return 1;
		            }
		   }
		   Pos++;
		}
		
		//return 0;
	}
}
class P2
{
	public static void main(String a[])
	{
		System.out.println("enter number");
		Scanner s=new Scanner(System.in);
		int iValue=s.nextInt();
		Bit obj=new Bit();
		obj.Chk(iValue);
		/*if(bRet==0)
		{
			System.out.println("bit is off");
		}
		else
		{
			System.out.println("bit is on");
		}*/
	}
}
