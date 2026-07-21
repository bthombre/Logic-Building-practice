import java.util.*;
class program177
{

    public static void Display(int iNo)
    {
        int iCnt = 0, iVar = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           if(iCnt % 2 ==0)
           {
             System.out.print("*\t");
           }
           else
           {
             System.out.print(iVar+"\t");
              iVar++;
           }
          
        }
        System.out.println();
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int iValue = sobj.nextInt();

        Display(iValue);
    }
}