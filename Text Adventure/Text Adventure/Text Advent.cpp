#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// This function alternates between printing characters and sleeping
// so that it looks like the words are being typed out on the screen
void printText (string printOut)
{
	string hello = printOut;
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(40);
		x++;
	}
}

// This function allows the user input to be uppercase or lower case
// and will convert every character to uppercase.
string getInputUpper()
{
	string userInput;
	cin >> userInput;
	int i = 0;
	while (i < userInput.length())
	{
		if (userInput[i] >= 'a')
		{
			userInput[i] -= 32;
		}
		
		i++;
	}
	return userInput;
}

int main()
{
	cout << ("Hi, welcome to my cave adventure game! You will make several decisions on where to go and try to exit \nthe cave quickly and safely.");
	cout << endl << endl;
	Sleep(700);

	printText("You enter a dark and mysterious cave.\nThe paths possible are North, East, and West. Which way do you want to go?\n");

	string userInput = getInputUpper();

	if (userInput == "NORTH")
	{
		printText ("The room has one path going east. The gravel beneath your feet looks like there's been many \npeeople walking here before.\n");
		printText("You walk into a larger cave towards the east with exits to the north and east. Both are equally dark.\nWhich way do you want to go?\n");
		
		string userInput = getInputUpper();

		if (userInput == "NORTH")
		{
			printText("There is the slightest breeze coming from ahead of you. There is also a dark room to the east.\nWhere do you want to go?\n");

			string userInput = getInputUpper();
			
			if (userInput == "EAST")
			{
				printText("Suddenly you hear some rumbling and the roof collapses.\n");
					Sleep(400);
				printText("GAME OVER...\n");
			}

			if (userInput == "NORTH")
			{
				printText("You see a faint light coming from the east.\n");
					Sleep (400);
				printText("The light gets stronger.\n");
					Sleep(500);
				printText("You reach a last split in the cave system. Do you want to go up to the dark room towards the north, or exit east?\n");

				string userInput = getInputUpper();

				if (userInput == "EAST")
				{
					printText("You step out into the bright light and start heading towards the signs of civilization nearby.\n");

				}
				if (userInput == "NORTH")
				{
					printText("You look around and suddenly a huge monstrosity blocks the exit. You instantly know it's not friendly.\n");
						Sleep(400);
					printText("GAME OVER...\n");
				}
			}
		}

		if (userInput == "EAST")
		{
			printText("The room is dark and musty. You bump around and you can feel an exit to the north.\n");
				Sleep(400);;
			printText("There appears to be a rusty knife on the ground. You pick it up and head out the west.\n");
				Sleep(400);
			printText("There is the slightest breeze coming from ahead of you as you keep walking forward...\n");
				Sleep(500);
			printText("You see a faint light coming from the east.\n");
				Sleep(400);
			printText("You start sprinting towards the exit but suddenly a monster appears.\nDo you want to run or fight? (Type run/fight)\n");

			string userInput = getInputUpper();

			if (userInput == "RUN")
			{
				printText("You manage to quickly slip past the monster and make it outside. Freedom!\n");
			}
			if (userInput == "FIGHT")
			{
				printText("You use your rusty blade you found a few rooms back. You slash and stab the monster, and manage to make it out\nwith a few bruises and cuts. Free at last!\n");
			}
		}
	}
	
	
	if (userInput == "EAST")
	{
		printText("The room has one path going east. It seems to be fairly clean.\n");
			Sleep(400);
		printText("You continue into another dark room east.\n");
		printText("This rooom has the faintest breeze coming from the north.\nThere is also very large, dark room to the east.\nWhich way do you want to go?\n");

		string userInput = getInputUpper();
			
		if (userInput == "NORTH")
		{
			printText("The room has some strange stains on the wall. You hurrily exit through the only available one in the north.\n");
			printText("You come to a split in the cave system. You could either go west or east. Which direction?\n");

			string userInput = getInputUpper();
			
			if (userInput == "WEST")
			{
				printText("You walk around for a while, and then accidentally trip on a rock on the ground.\nYou hit your head hard against the wall and pass out.\n");
					Sleep(400);
				printText("GAME OVER..\n");
				
			}
			if (userInput == "EAST")
			{
				printText("You see light coming through a pile of rocks to the east.\nYou desperately dig your way out\n");
				cout << "."; Sleep(700); cout << "."; Sleep(700); cout << "."; Sleep(700); cout << ".\n"; Sleep(700);
				printText("Congratulations, you made it out of the cave!\n");
			}
		}
		if (userInput == "EAST")
		{
			printText("You stumble around blindly and suddenly fall through a deep hole in the ground you didn't see.\n");
				Sleep(400);
			printText("Crunch..\n");
				Sleep(400);
			printText("GAME OVER\n");
		}
	}
	
	
	if (userInput == "WEST")
	{
		printText("The room has one path going north. There appears to be bones on the ground?\n");
			Sleep(500);
		printText("You continue to the north. The room is very damp and musty. There's an exit to the west and north.\nWhich way do you want to go?\n");

		string userInput = getInputUpper();

		if (userInput == "WEST")
		{
			printText("The room is dark and mysterious. You suddenly hear a sound, and a rabid dog starts attacking you.\nYou try to fight it off but you start losing consciousness.\n");
				Sleep(400);
			printText("GAME OVER\n");
		}
		if (userInput == "NORTH")
		{
			printText("For some reason, the cave appears to get darker. You continue forward towards the only exit.\n");
				Sleep(400);
			printText("You find a pile of old weapons in front of you. Upon closer inspection, they are covered in blood.\nBefore you can run, you get knocked out by an unkown figure.\n");
				Sleep(500);
			printText("GAME OVER\n");
		}
	}
}