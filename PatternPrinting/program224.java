import java.util.*;
/*
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5

*/

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i =0, j = 0;
         if(iRow != iCol)    /// Filter for Diagonal pattern
        {
            System.out.println("Invalid parameters");
            System.out.println("Number of rows and columns should be same");
            return;
        }
        else
        {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            {
                
                    System.out.print(j+"\t");
                
                
            }
            System.out.println();
        }
        }
    }
}
class program224
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2 = 0;
        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();
        System.out.println("Enter number of columns:");
        iValue2 = sobj.nextInt();


        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}