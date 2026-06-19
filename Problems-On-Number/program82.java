
import java.util.Scanner;

class DigitX
{
   public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        int iCnt = 0;
        for(; iNo != 0 ; iNo = iNo / 10)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
        }
    }
}
public class program82
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter number: \n");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);


    }
}