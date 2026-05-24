////////////////////////////////////////////
//      Check that number is perfect or not
/////////////////////////////////////////

import java.util.*;

class NumberX
{
    public void DisplayFactors(int iNo)
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
        System.out.println("Summation of factors : "+iSum);
    }   
}
public class program48
{
   
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter a number:");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        nobj.DisplayFactors(iValue);
        
        sobj.close();
    }
}

//   Time complexity : O(N/2)
//   Where N >= 0