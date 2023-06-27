import java.util.Arrays;
public class Main
{
	public static void main(String[] args) 
	{
	    //Variables
		String name0="Arka";//String variable
		int age=30;//Integer variable
		String classmate="Adi";
		String friend=classmate;//assigning variable to another variable
		System.out.println("name:"+name0+"\nage:"+age+"\nclassmate:"+classmate+"\nfriend:"+friend);//Adding a new line in Java is as simple as including “\n” , “\r”, or “\r\n” at the end of our string.
		//byte  -> 1[-128 to 127]
		//short -> 2
		//int   -> 4 (1,2,3,...)
		int alphabets=12345678;
		//long  -> 8 
		long more_than_int=123456789L;//At the end 'L' must be written.
		//float -> 4 (3.14 like that)
		float pi=3.14f;//To define a float type, we must use the suffix f or F , whereas it is optional to use the suffix d or D for double.
		//double -> 8 
		//char   -> 2 (a,b,c,d,..)
		char alphabet='a';//Any letter then also '@' and...
		//boolean -> 1(true/false)
		boolean alive= true;
		///Non-primitive Type
		String name1 = "Arka";
		System.out.println(name1.length());
		//String
		//concatenate
		String name2 = "ghosh";
		String name3=name1+ " " +name2;
		System.out.println(name3);//output: Arka ghosh. "It can concatenate space also".
		//charAt
		String name4="Arka ghosh";
		System.out.println(name4.charAt(0));//print any character,interger etc in that position.
		//replace
		String name5="orko";
		String name6=name5.replace('o','a');//replace(oldchar,newchar) and both '' and "" works.
		System.out.println(name6);
		//substring
		String name7="Arka and Java";
		System.out.println(name7.substring(0,4));//output: Arka.That is from 0(A),1(r),2(k) and 3(a) excluding 4.
		
		//ARRAY(non primitive data-type)
		
		int maths=98;
		int phy=94;
		int eng=95;
		int[] marks=new int[3];
		marks[0]=maths;
		marks[1]=phy;
		marks[2]=eng;
		System.out.println("Subject:Marks\nMaths:"+marks[0]+"\nPhysics:"+marks[1]+"\nEnglish:"+marks[2]);
		//lenght of array.
		System.out.println("Length of array:"+marks.length);//Its a property so no parenthesis i.e () is required.
		//sort array.
		Arrays.sort(marks);
		System.out.println("Subject:Marks\nPhysics:"+marks[0]+"\nEnglish:"+marks[1]+"\nMaths:"+marks[2]);
		//1D array
		int[] numbers_oneD={97,98,95};
		System.out.println(numbers_oneD[0]+" "+numbers_oneD[1]+" "+numbers_oneD[2]);
		//2D array
		int[][] numbers_twoD={{97,98,99},{1,2,3}};
		System.out.println("\n"+numbers_twoD[0][0]+" "+numbers_twoD[0][1]+" "+numbers_twoD[0][2]+"\n"+numbers_twoD[1][0]+" "+numbers_twoD[1][1]+" "+numbers_twoD[1][2]);
		//casting
		
	}
}



