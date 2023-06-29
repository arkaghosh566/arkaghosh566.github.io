// //Demonstration of user defined package
// interface vehicle
// {
//     public void run();
//     public void speed();
// }
class Car //implements vehicle
{
    public void run()
    {
        System.out.println("Car is running ");
    }
    public void speed()
    {
        System.out.println("Speed of car : 50 Kmph ");
    }
}
public class prog_69 
{
    public static void main(String[] args)    
    {
        Car car = new Car();
        car.run();
        car.speed();
        System.out.println("Hello World!");
    }
}
