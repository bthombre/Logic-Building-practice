
import java.util.Scanner;

class DigitX
{
   public int CountDigits(int iNo)
    {
        int iCount = 0;
        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount++;
        }
        return iCount;
    }
}
public class program84
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter number: \n");
        iValue = sobj.nextInt();

       int iRet = 0;
        iRet = dobj.CountDigits(iValue);
        System.out.println("Count is: " +iRet);
    }
}