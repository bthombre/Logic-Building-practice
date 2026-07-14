class program145
{

public static void update(int Arr[])
{
    int iCnt  = 0;
    for(iCnt = 0; iCnt <Arr.length; iCnt++)
    {
        Arr[iCnt]++;
    }
}
public static void main(String A[])
{

    int Brr[] = {10,20,30,40,50};
    int iCnt = 0;

    System.out.println("Array elements before function call: \n");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
        System.out.println(Brr[iCnt]);
    }

    update(Brr);

     System.out.println("Array elements after function call: \n");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
        System.out.println(Brr[iCnt]);
    }
}
}