////////////////////////////////////////////
//    To Check that whether number is prime or not
//    Flag in java
/////////////////////////////////////////

import java.util.*;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(bFlag = true, iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
              bFlag = false;
              break;
            }
        }
        return bFlag;
    }   
}
public class program69
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
