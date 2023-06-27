import java.util.Scanner;
public class Main
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the grade:");
        int num = sc.nextInt();
        int num1 = encrypt(num);
        int num2 = decrypt(num1);
        System.out.println("After Encrypted the grade is: "+num1);
        System.out.println("Actual grade after Decrypted is : "+num2);
    }
    public static int encrypt(int num)
    {
        return (num+8);
    }
    public static int decrypt(int num)
    {
        return (num-8);
    }
}

