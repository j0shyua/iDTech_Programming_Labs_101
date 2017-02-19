import java.util.Scanner;
public class HelloUser {

	public static void main(String[] args) 
	{
		Scanner input = new Scanner (System.in);
		String userInput;
		
		System.out.println ("What's your name?");

		userInput = input.nextLine();
		
		System.out.println ("Hello, " + userInput + ", have a good day!");

	}

}
