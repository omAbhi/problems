//check 7th,15th,21st & 28th bit is on or off
import java.util.*;

class Bit
{
	public void Chk(int No)
	{
		 int Pos=3;
		
		int iResult=0;
		while(Pos!=30)
		{
		 if( Pos==7 || Pos==15 || Pos==21 || Pos==28)
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
class P3
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
