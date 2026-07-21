import java.util.*;
class program194
{
    /*
    iRow = 4
    icol = 4

   1    1   1   1
   2    2   2   2
    3   3   3   3
    4   4   4   4
    */
    public static void Display(int iRow, int iCol)
    {
        int iCnt = 0,i = 0, j = 0;
        for(i = 1; i<=iRow; i++)
        {
       for (j = 1; j <= iCol; j++)
        {
            System.out.print(i+"\t");
        }
        System.out.println();
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0,iValue2 = 0;

       System.out.println("Enter the number of Rows");
         iValue1 = sobj.nextInt();
        System.out.println("Enter the number of Columns");
         iValue2 = sobj.nextInt();
         
        Display(iValue1,iValue2);
    }
}