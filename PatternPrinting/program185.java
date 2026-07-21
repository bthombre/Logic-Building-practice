import java.util.*;
class program185
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
        {
           if(ch %2 ==0 )
           {
            System.out.print("*\t");
           }
           else
           {
            System.out.print(ch+"\t");
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