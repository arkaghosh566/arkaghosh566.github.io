// Program 44. Java program to create, add and remove ArrayList elements.
//import java.util.*;
import java.util.ArrayList;public class prog_44 
{
    public static void main(String args[])
    {
        ArrayList<String> alist = new ArrayList<String>();
        alist.add("Linear Algebra");
        alist.add("Analytic Geometry");
        alist.add("Graph Theory");
        alist.add("Vector Calculus");
        alist.add("Gaussian and Mixture Model");
        alist.add("Continuous Optimization");
        //Displaying elements
        System.out.println(alist + "\n");
        //Adding "Matrix Decomposition" at the fourth position
        alist.add(3, "Matrix Decomposition");
        //Displaying elements
        System.out.println(alist + "\n");
        //Removing "Continuous Optimization" from its position
        alist.remove("Continuous Optimization");
        //displaying elements
        System.out.println(alist + "\n");
    }
}
