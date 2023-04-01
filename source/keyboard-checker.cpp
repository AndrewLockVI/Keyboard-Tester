#include <stdio.h>
#include <ncurses.h>
#include <iostream>
#include <stdlib.h>
int main(){

    //Initializes the blank screen
    initscr();
    //This makes the inputted characters not display in the terminal
    noecho();
    //Moves cursor to line 0 and position 0
    move(0,0);
    //Print w is used to print to a specific window. This is done because the window is seperate from std::cout
    printw("Press CTRL+C To Exit");
    move(2,0);
    printw("Character Code: 999 Character Value: N/A ");
    move(3,0);
    while(1){
        //getch() returns the current pressed key if none are pressed sends -1 or c's equivalent to false
        int ch = getch();
        //If character == ERR then does not print to screen. This basically checks that a key is pressed
        if(ch != ERR){
            //Clears the window of everything
            clear();
            move(0,0);
            printw("Press CTRL+C To Exit");
            move(2,0);
            //Prints first the integer code of the character then the actual character
            printw("Character Code: %i Character Value: %c" , ch, ch); 
            move(3,0);
        }
    
    }
    //This is used to close the window and return to the console. This is here in case I wanted to exit the application using the esc keycode
    endwin();
}
