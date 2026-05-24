////////////////////////////////////////////
//      Type 01
/////////////////////////////////////////

import java.util.*;
public class program39
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter a number:");
        iValue = sobj.nextInt();

        if((iValue%3 == 0) && (iValue%5 == 0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
        }

        sobj.close();
    }
}