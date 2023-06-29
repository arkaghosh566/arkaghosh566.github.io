//Polymorphism by Dynamic Method Dispatch
class phone
{
    public void showtime()
    {
        System.out.println("The time is now 10 Pm");
    }
    public void on()
    {
        System.out.println("Turning the phone on");
    }
}
class smartphone extends phone
{
    public void music()
    {
        System.out.println("Playing music");
    }
    public void on()
    {
        System.out.println("Turning on the smartphone");
    }
}
public class prog_66 
{
    public static void main(String[] args)
    {
        phone p = new phone();
        p.showtime();
        p.on();
        smartphone obj = new smartphone();
        obj.showtime();
        obj.on();
        obj.music();
    }    
}
