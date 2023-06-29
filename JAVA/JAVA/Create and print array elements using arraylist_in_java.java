import java.util.Arrays;

//Create and print array elements using arraylist
public class prog_43 
{
    // Program to convert Object array to String array in Java
    public static void main(String args [])
    {
        Object[] src = {"C", "C++", "Java", "Pearl", "Python", "Ruby"};
        String[] dest = new String[src.length];
        System.arraycopy (src, 0, dest, 0, src.length);
        System.out.println(Arrays.toString(dest));
    }    
}
