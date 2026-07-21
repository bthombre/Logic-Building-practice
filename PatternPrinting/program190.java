import java.util.*;
class program190
{

    public static void Display()
    {
        int iCnt = 0;
       for (iCnt = 1; iCnt < 5; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
         for (iCnt = 1; iCnt < 5; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    
     
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

       // System.out.println("Enter the number of elements");
        //int iValue = sobj.nextInt();

        Display();
    }
}