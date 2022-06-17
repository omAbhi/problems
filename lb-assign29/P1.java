//check whether 15th bit is ON or OFF
import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask=16384;
		int iResult=0;
		
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

class P1
{
	public static void main(String a[])
	{
		System.out.println("enter number");
		Scanner sobj=new Scanner(System.in);
		int Value=sobj.nextInt();
		
		Bitwise obj=new Bitwise();
		boolean bRet =obj.CheckBit(Value);
		
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