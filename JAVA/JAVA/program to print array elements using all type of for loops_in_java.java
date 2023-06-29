//Java program to print array elements using all type of for loops
public class prog_38 
{
    public static void main(String[] args)
    {
        float [] marks = {98.5f, 89.5f, 99.5f, 86.5f};
        String [] students ={"Mike", "Bob", "Dustin", "Will"};
        System.out.println("Number of Students are:" + students.length + "\n");
        System.out.println(students[0]);
        System.out.println(students[1]);
        System.out.println(students[2]);
        System.out.println(students[3]);
        System.out.println("\n");
        // Displaying the Array (Naive way)
        System.out.println("Printing Marks using Naive Way: \n");
        System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);
        System.out.println(marks[3]);
        System.out.println("\n");
        // Displaying the Array (for Loop)
        System.out.println("Printing Marks using General for Loop: \n");
        for(int i=0;i<marks.length;System.out.println(marks[i++]));
        System.out.println("\n");
        // Quick Quiz: Displaying the Array in Reverse order (for Loop)
        System.out.println("Printing marks using for loop in reverse order");
        for(int i=marks.length -1;i>=0; System.out.println(marks[i--]));
        System.out.println("\n");
        // Quick Quiz: Displaying the Array (for-each Loop)
        System.out.println("Printing Marks using for-each Loop: \n");
        for (float element: marks)
            System.out.println(element);
    }
}
