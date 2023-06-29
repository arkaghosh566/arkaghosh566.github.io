/*
Java program to create a class Game, which allows a user to play "Guess the Number" game once. 
Game should have the following methods:
1. Constructor to generate the random number,
2. takeUserInput() to take a user input of number,
3. is CorrectNumber() to detect whether the number entered by the user is true,
4. getter and setter for noOfGuesses,
Utilize the properties such as noOfGuesses(int), etc. to do the
 */
import java.util.Random;
import java.util.Scanner;
class Game
{
    public int num;
    public int ipnum;
    public int numOfGuesses=0;
    public int getNumOfGuesses()
    {
        return numOfGuesses;
    }
    // public void setNoOfGuesses()
    // {
    //     this.numOfGuesses = numOfGuesses;
    // }
    Game()
    {
        Random rand = new Random();
        this.num = rand.nextInt(1000);
    }
    void takeUserIp()
    {
        System.out.println("Guess the number : ");
        Scanner sc = new Scanner(System.in);
        ipnum = sc.nextInt();
    }
    boolean isCorrectNum()
    {
        numOfGuesses++;
        if(ipnum == num)
        {
            System.out.println("Yes ! you r right");
            return true;
        }
        else if(ipnum >num)
        {
            System.out.println("Higher than the no....");
        }
        else if(ipnum < num)
        {
            System.out.println("Lower than the no....");
        }
        return false;
    }
}
public class prog_67 
{
    public static void main(String[] args)
    {
        Game g = new Game();
        boolean b = false;
        while(!b)
        {
            g.takeUserIp();
            b=g.isCorrectNum();
        }
    }    
}
