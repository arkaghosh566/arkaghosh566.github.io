//Linear search & Is present
import java.util.*;
public class prog_33_34
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int array[] ={10,42,50,87,48,67,100};
        System.out.println("Enter the no. : ");
        int n = sc.nextInt();
        int num =-1;
        for(int i=0;i<array.length;i++)
            if(array[i]==n)
            {
                System.out.println(n+" Found");
                num=1;
                break; 
            }
        if(num<=0)
            System.out.println(n+" Not found");
        sc.close();
    }    
}
