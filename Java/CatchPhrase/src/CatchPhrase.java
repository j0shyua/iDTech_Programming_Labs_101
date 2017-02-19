import java.util.Scanner;
public class CatchPhrase {

	public static void main(String[] args) 
	{
		Scanner input = new Scanner (System.in);
		String userInput;
		
		System.out.println ("List of Characters: The Donald, The Soup Nazi, and Julia Child");
		System.out.println ("Type a character name:");
		userInput = input.nextLine();
		
		if (userInput.equalsIgnoreCase ("The Donald"))
		{
			System.out.println ("You're Fired!");
		}
		
		if (userInput.equalsIgnoreCase ("The Soup Nazi"))
		{
			System.out.println ("No Soup for You!");
		}
		
		if (userInput.equalsIgnoreCase ("Julia Child"))
		{
			System.out.println ("Needs more butter!!!");
		}

	}

}
