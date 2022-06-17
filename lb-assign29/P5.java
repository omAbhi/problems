//check whether 7th,15th,21th& 28th bit is ON or OFF
import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo,int Pos)
	{
		int iMask=1;                    //135282752;
		int iResult=0;
		iMask=iMask<<(Pos-1);
		iResult=iNo & iMask;
		
		if(iResult==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class P
{
	public static void main(String a[])
	{
		System.out.println("enter number");
		Scanner sobj=new Scanner(System.in);
		int Value=sobj.nextInt();
		
		System.out.println("enter position to check");
		int Pos=sobj.nextInt();
		
		Bitwise obj=new Bitwise();
		boolean bRet =obj.CheckBit(Value,Pos);
		
		if(bRet==true)
		{
			System.out.println("bit is on");
		}
		else
		{
			System.out.println("bit is off");
		}
	}
}