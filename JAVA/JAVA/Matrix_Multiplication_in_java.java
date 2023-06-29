//Matrix-Multiplication
import java.util.Scanner;
public class prog_40 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        System.out.println("enter dimensions for A: \n");
        int rowsA = sc.nextInt ();
        int colsA = sc.nextInt();//Enter the dimensions of matrix A
        int a[][] = new int[rowsA][colsA];
        System.out.println("enter elements of A: \n");
        for(int i=0; i<rowsA; i++)
            for(int j = 0; j<colsA; j++)
                a[i][j] = sc.nextInt (); //Enter elements of matrix A
        System.out.println("enter dimensions for B: \n");
        int rowsB = sc.nextInt();
        int colsB = sc.nextInt(); //Enter the dimensions of matrix B
        int b[][] = new int[rowsB][colsB];
        int c[][] = new int[rowsA][colsB];
        if(colsA != rowsB)
            System.out.println("These matrix can't be multiplied with each other.");//If rows of matrix B != columns of matrix A   
        else 
        {
            System.out.println("enter the elements of B: \n"); //Else enter the elements of matrix B
            for(int i=0; i<rowsB; i++)
                for(int j=0; j<colsB; j++)
                    b[i][j] = sc.nextInt ();
            for(int i=0; i<rowsA; i++)
                for(int j=0; j<colsB; j++)
                {
                    for(int k=0; k<rowsB; k++)
                        sum += a[i][k] * b[k][j];
                    c[i][j] = sum;
                    sum = 0;
                }
            System.out.println("matrix A * matrix B");
            for(int i=0; i<rowsA; i++)
            {
                for(int j=0; j<colsB; j++)
                    System.out.print(c[i][j]+" ");
                System.out.println();
            }
        }
        sc.close();
    }
}

