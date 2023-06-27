import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		ArrayList<String> A=new ArrayList();
		ArrayList<String> B=new ArrayList();
		A.add("a");
		A.add("b");
		A.add("c");
		A.add("d");
		A.add("e");
		System.out.println("A:"+A);
		A.remove("b");
		A.remove("d");
		System.out.println("A:"+A);
		B.add("f");
		B.add("g");
		B.add("b");
		B.add("d");
		System.out.println("After two Student shifted to paper B from paper A:");
		System.out.println("B:"+B);
		B.remove("f");
		B.remove("g");
		A.add("f");
		A.add("g");
		System.out.println("After two Student shifted to paper A from paper B:");
		System.out.println("A:"+A);
		System.out.print("B:"+B);
	}
}