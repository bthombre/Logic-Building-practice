////////////////////////////////////////////
//      
/////////////////////////////////////////

import java.util.*;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }   
}
public class program47
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