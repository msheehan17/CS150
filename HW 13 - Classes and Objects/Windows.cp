 #include "Windows.h"
 #include <iostream>
 
/* Windows.cp - A small program for windows creen manipulation.
 *
 * Author: Matt Sheehan
 */
 int main () {
     const short UP_X = 5;
     const short DOWN_X = 50;
     const short UP_Y = 24;
     const short DOWN_Y = 0;
     
     HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
     
     COORD up, down;
     up.X = UP_X;
     down.X = DOWN_X;
     
     for (int i = 0; i < 3; i++) {
         up.Y = UP_Y;
         down.Y = DOWN_Y; 
            
         while (up.Y > 0 ) {
             Sleep(800);
             
             SetConsoleCursorPosition(screen, up);
             std::cout << "UP";
             SetConsoleCursorPosition(screen, down);
             std::cout << "DOWN";
             
             Sleep(1000);
             
             SetConsoleCursorPosition(screen, up);
             std::cout << "    ";
             SetConsoleCursorPosition(screen, down);
             std::cout << "    ";
             
             up.Y--;
             down.Y++;
         }
     }
     system("pause");
     return 0;
 }
 
 
 
 
 
 
