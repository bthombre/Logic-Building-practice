////////////////////////////////////////////
//    To Check that whether number is prime or not
//     first in this type
/////////////////////////////////////////

import java.util.*;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
              break;
            }
        }
        
        if(iCnt >= ((iNo/2)+1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
}
public class program65
{
   
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter a number:");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("it is prime number");
        }
        else
        {
            System.out.println("it is not prime number");
        }
        sobj.close();
    }
}

//   Time complexity : O(N/2)
//   Where N >= 0