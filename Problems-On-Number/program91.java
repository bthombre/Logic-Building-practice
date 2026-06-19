
import java.util.Scanner;

class DigitX
{
   public int SumDigits(int iNo)
    {
        int iSum = 0;
        while(iNo != 0)
        {
            iSum = iSum + (iNo  % 10);
            iNo = iNo / 10;
        }
        return iSum;
    }
}
public class program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter number: \n");
        iValue = sobj.nextInt();

       int iRet = 0;
        iRet = dobj.SumDigits(iValue);
        System.out.println("Sumation of digits is: " +iRet);
    }
}