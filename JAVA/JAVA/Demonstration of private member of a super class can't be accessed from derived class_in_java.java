//Demonstration of private member of a super class can't be accessed from derived class
class college_room
{
    private int l,b;
    college_room(int x,int y)
    {
        l=x;
        b=y;
    }
    int area()
    {
        return (l*b);
    }
}
class class_room extends college_room
{
    int h;
    class_room(int x,int y, int z)
    {
        super(x,y);
        h=z;
    }
    int volume()
    {
        return (area()*h);
    }
}
public class prog_62 
{
    public static void main(String args[])
    {
        class_room cr = new class_room(10, 20, 15);
        int a1=cr.area();
        int v1=cr.volume();
        System.out.println("Area of Room : "+a1);
        System.out.println("Volume of Room : "+v1);
    }    
}
