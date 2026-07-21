import java.util.*;
class program180
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
        {
           System.out.print(ch+"\t");
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