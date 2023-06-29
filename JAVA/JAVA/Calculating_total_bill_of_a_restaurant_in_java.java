//Calculating total bill of a restaurant : initial bill+GST(8%)+Tax(15%)
public class prog_17 
{
    public static void main(String[] args)
    {
        double subtotal = 10000;
        double GSt = subtotal *0.08;
        double Tax = subtotal * 0.15;
        double Total = subtotal + GSt + Tax;
        System.out.printf("Subtotal : Rs. %.2f \n",subtotal);
        System.out.printf("GST : Rs. %.2f \n",GSt);
        System.out.printf("TAX : Rs. %.2f \n",Tax);
        System.out.printf("Total : Rs. %.2f \n",Total);
        
    }
}
