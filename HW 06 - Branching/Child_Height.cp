#include <iostream>
#include <string>

/* Determine child's height, based on given height from mother and father.
 *
 * Author: Matt Sheehan
 */
int main () {
    char beginning_leter_of_childs_gender;
    int feet_in_dads_height;
    int inches_in_dads_height;
    int total_dad_height;
    int feet_in_moms_height;
    int inches_in_moms_height;
    int total_mom_height;
    int total_child_height;
    int feet_in_child_height;
    int inches_in_child_height;
    
    std::cout << "Hello. I can help determine the height of your child. All I need is the father's height, the mother's height, and the child's gender.\n\n";
    
    std::cout << "First, please enter the father's height. Seperate the feet and inches with a space, and do not use \' or \'': ";
    std::cin >> feet_in_dads_height >> inches_in_dads_height;
    std::cout << "\n";
    
    if (feet_in_dads_height < 0) {
       std::cout << "Feet cannot be negative.\n";
       system ("pause");
       exit (0);
    } else if (inches_in_dads_height > 12) {
       std::cout << "12 inches is the same as 1 foot, please reduce your inches to feet.\n";
       system ("pause");
       exit (0);
    }
    
    total_dad_height = ((feet_in_dads_height * 12) + inches_in_dads_height);
    
    std::cout << "Next, please enter the mother's height. Seperate the feet and inches with a space, and do not use \' or \'': ";
    std::cin >> feet_in_moms_height >> inches_in_moms_height;
    std::cout << "\n";
    
    if (feet_in_moms_height < 0) {
       std::cout << "Feet cannot be negative.\n";
       system("pause");
       exit ( 0 );
    } else if (inches_in_moms_height > 12) {
       std::cout << "12 inches is the same as 1 foot, please reduce your inches to feet.\n";
       system ( "pause" );
       exit ( 0 );
    }
    
    total_mom_height = ((feet_in_moms_height * 12) + inches_in_moms_height);
    
    std::cout << "Finally, can you please enter the gender of the child? (b for boy/g for girl): ";
    std::cin >> beginning_leter_of_childs_gender;
    std::cout << "\n";
                      
    switch (beginning_leter_of_childs_gender) {
       case 'b':
       case 'B':
       case 'm':
       case 'M':
          total_child_height = (int) (((total_mom_height * (13.0 / 12.0)) + total_dad_height) / 2);
          break;
       case 'g':
       case 'G':
       case 'f':
       case 'F':
          total_child_height = (int) (((total_dad_height * (12.0 / 13.0)) + total_mom_height) / 2);
          break;
       default:
          std::cout << "That is not an acceptable input, goodbye.";
          system ("pause");
          exit  (0);
          break;
    }
    
    feet_in_child_height = (total_child_height / 12);
    inches_in_child_height = (total_child_height % 12);
    
    std::cout << "Projected child height: " << feet_in_child_height << "\' " << inches_in_child_height << "\".\n\n";
    
    system ("pause");
    return 0;    
 }
