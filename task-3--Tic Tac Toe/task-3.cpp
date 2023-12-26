#include <iostream>
#include <conio.h>  


void ClearScreen() {
    std::cout <<"\033[2J\033[H" ;
}


void SetTextAttributes(int textAttribute) {
    std::cout << "\033[" << textAttribute << "m";

}

void SetTextColor(int textColor) {
    std::cout << "\033[38;5;" << textColor << "m";

}

void WaitForEnter() {
	std::cout << "\nPress Enter to continue...";
	do {
		// Wait for user to press enter
	} while (getch()!=13);
}


char block[10] = {'0','1','2','3','4','5','6','7','8','9'};

//function to return the game result 

int checkresult(){
  if(block[1]==block[2] && block[2]==block[3]){
    return 1;
  }
  else if(block[4]==block[5] && block[5]==block[6]){
    return 1;
  }
  else if(block[7]==block[8] && block[8]==block[9]){
    return 1;
  }
  else if(block[1]==block[4] && block[4]==block[7]){
    return 1;
  }
  else if(block[2]==block[5] && block[5]==block[8]){
    return 1;
  }
  else if(block[3]==block[6] && block[6]==block[9]){
      return 1;
  }
  else if(block[1]==block[5] && block[5]==block[9]){
    return 1;
  }
  else if(block[3]==block[5] && block[5]==block[7]){
    return 1;
  }
  else if(block[1]!='1' && block[2]!='2' && block[3]!='3' 
    && block[4]!='4' && block[5]!='5' && block[6]!='6'
    && block[7]!='7' && block[8]!='8' && block[9]!='9')
    {
      return 0;
    }
    else {
      return -1;
    }

}

//function to introduce the game

void Welcome(){
  ClearScreen();
  SetTextColor(208);
  SetTextAttributes(1);
  SetTextAttributes(2);
  SetTextAttributes(4);

  std::cout << "\n\n\t\t\t\t\t\tWelcome to tic tac toe game\n\n";
  SetTextAttributes(0);
  SetTextAttributes(4);
  SetTextColor(196);
  std::cout << "Rules:" << std::endl << std::endl;
  SetTextAttributes(0);
  SetTextColor(214);
  std::cout << "1)";
  SetTextAttributes(0);
  std::cout << "Form a line of three of your symbols (either 'X' or 'O') horizontally, vertically, or diagonally on the 3x3 grid." << std::endl;
  SetTextColor(214);
  std::cout << "2)";
  SetTextAttributes(0);
  std::cout << "Players alternate turns, placing their symbol in an empty cell." << std::endl << std::endl;
  SetTextAttributes(1);
  SetTextAttributes(3);
  SetTextColor(208);
  std::cout << "\t\t\t\t\t\t\tHAPPY GAMING!";
  SetTextAttributes(0);
}

//function to draw the board with players attribute

void board(int player){
  ClearScreen();
  std::cout << std::endl << std::endl;
  // drawing of the board
  std::cout << "       |       |       " << std::endl;

  std::cout << "    ";
  SetTextColor((block[1] == 'X') ? (player == 1 ? 9 : 214) :(block[1] == 'O') ? (player == 1 ? 214 : 9): 0);
  std::cout << block[1];
  SetTextAttributes(0);
  std::cout << "  |   ";
  
  SetTextColor((block[2] == 'X') ? (player == 1 ? 9 : 214) :(block[2] == 'O') ? (player == 1 ? 214 : 9): 0);
  std::cout << block[2];
  SetTextAttributes(0);
  std::cout << "   |   ";
  
  SetTextColor((block[3] == 'X') ? (player == 1 ? 9 : 214):(block[3] == 'O') ? (player == 1 ? 214 : 9) : 0);
  std::cout << block[3];
  SetTextAttributes(0);
  std::cout << std::endl;

  std::cout << "_______|_______|_______" << std::endl;
  std::cout << "       |       |       " << std::endl;

  std::cout << "    ";
  SetTextColor((block[4] == 'X') ? (player == 1 ? 9 : 214) :(block[4] == 'O') ? (player == 1 ? 214 : 9): 0);
  std::cout << block[4];
  SetTextAttributes(0);
  std::cout << "  |   ";
  
  SetTextColor((block[5] == 'X') ? (player == 1 ? 9 : 214):(block[5] == 'O') ? (player == 1 ? 214 : 9) : 0);
  std::cout << block[5];
  SetTextAttributes(0);
  std::cout << "   |   ";
  
  SetTextColor((block[6] == 'X') ? (player == 1 ? 9 : 214):(block[6] == 'O') ? (player == 1 ? 214 : 9) : 0);
  std::cout << block[6];
  SetTextAttributes(0);
  std::cout << std::endl;

  std::cout << "_______|_______|_______" << std::endl;
  std::cout << "       |       |       " << std::endl;

  std::cout << "    ";
  SetTextColor((block[7] == 'X') ? (player == 1 ? 9 : 214):(block[7] == 'O') ? (player == 1 ? 214 : 9) : 0);
  std::cout << block[7];
  SetTextAttributes(0);
  std::cout << "  |   ";
  
  SetTextColor((block[8] == 'X') ? (player == 1 ? 9 : 214) :(block[8] == 'O') ? (player == 1 ? 214 : 9): 0);
  std::cout << block[8];
  SetTextAttributes(0);
  std::cout << "   |   ";
  
  SetTextColor((block[9] == 'X') ? (player == 1 ? 9 : 214) : (block[9] == 'O') ? (player == 1 ? 214 : 9) : 0);
  std::cout << block[9];
  SetTextAttributes(0);   
  std::cout << std::endl;

  std::cout << "       |       |       " << std::endl;
}



int main(){
  int player = 1 , result = -1 , choice;

  char mark,c;

  Welcome();
  std::cout << std::endl;

  WaitForEnter();

  ClearScreen();
  do{
    // Reset the board for a new game
    for (int i = 1; i <= 9; ++i) {
        block[i] = '0' + i;
    }
    do {
            board(player);

            player = (player % 2) ? 1 : 2;

            SetTextColor(player != 1 ? 9 : 214); // Set color based on player
            std::cout << "Player " << player << ", enter the number : ";
            SetTextAttributes(0);

            std::cin >> choice;
            mark = (player == 1) ? 'X' : 'O';
            if (choice >= 1 && choice <= 9 && block[choice] != 'X' && block[choice] != 'O') {
                block[choice] = mark;

            } else {
                SetTextColor(196);
                std::cout << "Invalid Move !";
                SetTextAttributes(0);
                player--;
                std::cin.ignore();
                std::cin.get();
                continue;
            }
            result = checkresult();
            player++;
        } while (result == -1);
        
        board(player);
        if (result == 1) {
            std::cout << std::endl;
            SetTextColor(202);
            std::cout << "Congratulations! \033[0mPlayer " << --player << " wins \033[93m :)\033[0m !" ;

            SetTextAttributes(0);
            WaitForEnter();

        } 
        else {
            std::cout << std::endl;
            SetTextColor(213);
            std::cout << "\n\nGame Draw!";
            SetTextAttributes(0);
            WaitForEnter();

        }

        
        SetTextColor(202);
        std::cout << std::endl;
        std::cout << "Play again? \033[0m(y/n): ";
        SetTextAttributes(0);
        std::cin >> c;

    } while (c == 'y' || c == 'Y');
  
  return 0;


}
