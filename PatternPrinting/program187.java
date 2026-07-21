import java.util.*;
class program187
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch2 = '\0';
        char ch1 = '\0';
        for(iCnt = 1,ch2 = 'a', ch1 = 'A'; iCnt <= iNo; iCnt++,ch2++, ch1++)
        {
           if(ch %2 ==0 )
           {
            System.out.print(ch2+"\t");
           }
           else
           {
            System.out.print(ch1+"\t");
           
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