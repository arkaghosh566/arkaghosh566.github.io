//Datatype ranges
public class prog_7 
{
    public static void main(String[] args)
    {
        //integer
        int MAX = Integer.MAX_VALUE;
        int MIN = Integer.MIN_VALUE;
        System.out.println("Minimum value of a integer : "+MIN+"\nMaiximum value of a integer : "+MAX+"\n");
        System.out.println("Underflow : "+(MIN-1));
        System.out.println("Overflow : "+(MAX+1)+"\n");
        //Byte
        byte min_val = Byte.MIN_VALUE;
        byte max_val = Byte.MAX_VALUE;
        System.out.println("Minimum value of a Byte : "+min_val+"\nMaximum value of a Byte : "+max_val+"\n");
        //Short
        short minimumShort = Short.MIN_VALUE;
        short maximumShort = Short.MAX_VALUE;
        System.out.println("Minimum value of a Short : "+minimumShort+"\nMaximum value of a Short : "+maximumShort+"\n");
        //Long
        long min_long = Long.MIN_VALUE;
        long max_long = Long.MAX_VALUE;
        System.out.println("Minimum value of a Long : "+min_long+"\nMaximum value of a Long : "+max_long+"\n");
        //Casting
        byte byteNum = 124;
        byte newnum = (byte) (byteNum / 2);
        System.out.println("New byte num : "+newnum);
        short shortNum =468;
        short newshort = (short) (shortNum / 2);
        System.out.println("New Short num : "+newshort);
        byte num01=12;
        short num02=123;
        int num03=1234;
        long num04 = 50000L + 10L*(num01 + num02 + num03);
        System.out.println("Sum and Mulplication : " + num04);
        short num05 = (short) (50000 + 10 * (num01 + num02 + num03));
        short testShort = Short.MAX_VALUE;
        System.out.println("Value after casting : " + num05);
        System.out.println("Max value of short : " + testShort);
    }

}
