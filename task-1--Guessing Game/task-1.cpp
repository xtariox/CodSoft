#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <conio.h>
#include <cstdlib>  

void ClearScreen() {
    std::cout <<"\033[2J\033[H" ;
}


void MoveCursor(int columns) {
    std::cout << "\033[" << columns << "C"; // Move cursor 'columns' columns forward
}



void SetTextAttributes(int textAttribute) {
    std::cout << "\033[" << textAttribute << "m";

}

void SetTextColor(int textColor) {
    std::cout << "\033[38;5;" << textColor << "m";

}

void WaitForEnter() {
    MoveCursor(60);
	std::cout << "Press Enter to continue...";
	do {
		// Wait for user to press enter
	} while (getch()!=13);
}

void Printing(std::string message, int number){
    MoveCursor(number);
    std::cout << message << std:: endl;
    SetTextAttributes(0);

}

int SetMaxNumber (int &MaxNumber){
    std::cout << "Enter the maximum number to limit your guesses : ";
    std:: cin >> MaxNumber ;
    return MaxNumber;
}

void CheckGuess (int ran, int max){
int guess, attempts = 1;
	while (true)
	{

		std::cin >> guess;
        if(guess > max){
            SetTextColor(196);
            Printing("Enter a number in the specified range !",57);

        }
        else{
            // Get edge value
            int edge = max / 10;

            // Check for correct guess
            if (guess == ran)
            {
                std::cout <<std:: endl;
                std::cout << "You guessed it! The number was \033[38;5;202m"<< ran << std::endl;
                SetTextAttributes(0);
                std::cout << "Number of attempts: \033[38;5;202m" << attempts <<std::endl;
                break;
            }
            // Check if guess is too low
            else if (guess < ran)
            {
                if(guess < ran - edge ){
                    SetTextColor(12);
                    std::cout << "Too low. ";
                }
                else {
                    SetTextColor(202);

                    std::cout << "Close! " ;
                }
                SetTextAttributes(0);

                std::cout << "Try again a higher number: ";

            }
            // Guess is too high
            else if (guess > ran)
            {
                SetTextAttributes(0);

                if(guess > ran + edge ) {
                    SetTextColor(12);
                    std::cout << "Too high. " ;
                }
                else {
                    SetTextColor(202);
                    std::cout << "Close! " ;
                }
                SetTextAttributes(0);
                std::cout << "Try again a lower number: ";
            }
            
		attempts++;
	}
}
}
void GenerateNumber(int & MaxNumber){
	// Generate random number generator
	srand(time(0));
    
	char c;
	do
	{
        ClearScreen();
        SetMaxNumber(MaxNumber);
		// Generate random number
		int ran = rand() % MaxNumber + 1;
		std::cout << "Guess a number between \033[38;5;214m1 \033[0mand \033[38;5;214m"
				  << MaxNumber << " \033[0m(inclusive): ";
        CheckGuess(ran,MaxNumber);
        SetTextColor(214);
        MoveCursor(65);
        std::cout<<"Play again? (y/n): ";
        SetTextAttributes(0);
		std::cin >> c;
	} while (c == 'y' || c == 'Y');
}

int main() {
    int num;

    ClearScreen();

    SetTextAttributes(1); // Bold text 
    SetTextColor(214); //yellow foreground
    std::cout << std::endl;
    Printing("Welcome to the Guessing Game!",60);
    Printing("In this game, you'll have the exciting task of guessing a number.",42);
    Printing("game will randomly select a number between a specified range,and",42);
    Printing("your mission is to figure out what that number is.",50);
    std::cout << std:: endl;
    SetTextAttributes(0);
    WaitForEnter();
    SetTextAttributes(0);

    ClearScreen();

    GenerateNumber(num);

    ClearScreen();

    return 0;
}