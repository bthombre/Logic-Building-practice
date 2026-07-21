import java.util.*;
class program191
{

    public static void Display()
    {
        int iCnt = 0,i = 0, j = 0;
        for(i = 1; i<=4; i++)
        {
       for (iCnt = 1; iCnt < 5; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

       // System.out.println("Enter the number of elements");
        //int iValue = sobj.nextInt();

        Display();
    }
}