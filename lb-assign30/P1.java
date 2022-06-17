//check 15th bit is ON or OFF
import java.util.*;

class Bit
{
	public boolean Chk(int No)
	{
		int iMask=16384;
		int iResult=No & iMask;
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
		Scanner s=new Scanner(System.in);
		int iValue=s.nextInt();
		Bit obj=new Bit();
		boolean bRet=obj.Chk(iValue);
		if(bRet==false)
		{
			System.out.println("bit is off");
		}
		else
		{
			System.out.println("bit is on");
		}
	}
}
