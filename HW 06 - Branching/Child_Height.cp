/* Child_Height.cpp - Predicts a child's height based on parents' height and the child's gender.
 * Author: Matthew Sheehan
 * Project: HW6
 *
 * Algorithm:
 *
 * 1. The program will prompt the user for the height of the father, the height
 * of the mother, and the gender of the child who's height the program is predicting.
 *
 * 2. The user will be able to enter the respective height in feet and inches, but
 * because the formula requires the height be in inches, the height will be converted
 * by dividing feet by 12, and the remainder (found with %) will be the inches.
 *
 * 3. Once the user has entered the heights, the gender will be entered. A switch
 * statement will determine which formula to use. If the child is a boy, then 
 * (((mom_height * (12.0 / 13.0)) + dad_height) / 2) will be used. And if the 
 * child is a girl, then (((dad_height * (12.0 / 13.0)) + mom_height) / 2)  will
 * be used. 
 *
 * 4. Following the formula's calculations, the predicted height will be displayed
 * back to the user in feet and inches (using the same techniques for converting
 * feet to inches in step 2, backwards).
 *
 */
             

# include <iostream>
# include <string>
using namespace std;

int main(){
    
    // Instance variables.
    char child_gender;
    int feet, inches, mom_height, dad_height, child_height;
    
    
    // Introduction to program.
    cout << "Hello. I can help determine the height of your child. All I need  \n";
    cout << "is the father's height, the mother's height, and the child's gender.\n\n";
    
    
    // Prompt the user for the father's height.
    cout << "First, please enter the father's height. Seperate the feet and inches \n";
    cout << "with a space, and do not use \' or \'': ";
    cin  >> feet >> inches;
    cout << endl;
    
    if (feet < 0){
       cout << "Feet cannot be negative.\n";
       system("pause");
       exit(0);
    } 
    
    if (inches > 12){
       cout << "12 inches is the same as 1 foot, please reduce your inches to feet.\n";
       system("pause");
       exit(0);
    }
    
    // Because the formula requires height in inches, this converts the measurement in feet.
    dad_height = ((feet * 12) + inches);
    
    
    // Prompt the user for the mother's height.
    cout << "Next, please enter the mother's height. Seperate the feet and inches \n";
    cout << "with a space, and do not use \' or \'': ";
    cin  >> feet >> inches;
    cout << endl;
    
    if (feet < 0){
       cout << "Feet cannot be negative.\n";
       system("pause");
       exit(0);
    }
    
    if (inches > 12){
       cout << "12 inches is the same as 1 foot, please reduce your inches to feet.\n";
       system("pause");
       exit(0);
    }
    
    // Because the formula requires height in inches, this converts the measurement in feet.
    mom_height = ((feet * 12) + inches);
    
    
    // Prompt the user for the gender of the child.
    cout << "Finally, can you please enter the gender of the child? (b for boy/g for girl): ";
    cin  >> child_gender;
    cout << endl;
                      
    switch (child_gender){
       // Boy
       case 'b':
       case 'B':
          child_height = (int) (((mom_height * (13.0 / 12.0)) + dad_height) / 2);
          break;
       // Girl
       case 'g':
       case 'G':
          child_height = (int) (((dad_height * (12.0 / 13.0)) + mom_height) / 2); 
          break;
       default:
          cout << "That is not an acceptable input, goodbye.";
          system("pause");
          exit(0);
          break;
    }
    
  
    // Convert the height in inches back to feet and inches.
    feet   = (child_height / 12);
    inches = (child_height % 12);
    
    
    // Print the result back to the user.
    cout << "Projected child height: " << feet << "\' " << inches << "\".\n\n";      
    
    system("pause");
    return 0;    
 }
    
    
    
