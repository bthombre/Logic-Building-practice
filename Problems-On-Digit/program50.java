////////////////////////////////////////////
//    To Check that whether number is perfect or not
/////////////////////////////////////////

import java.util.*;

class NumberX
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
}
public class program50
{
   
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter a number:");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPerfect(iValue);
        
        if(bRet == true)
        {
            System.out.println("it is perfect number");
        }
        else
        {
            System.out.println("it is not perfect number");
        }
        sobj.close();
    }
}

//   Time complexity : O(N/2)
//   Where N >= 0