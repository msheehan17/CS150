 #include <iostream>
 #include <iomanip>
 #include <fstream>
 #include <string>

/* Class_Line_Up.cp - Prints the class line ups given from the file, in alphabetical order.
 *
 * Author: Matt Sheehan
 */
 int main () {
  
     std::string border_line_for_decoration;
     std::current_student_name;
     std::first_student;
     std::last_student;
     std::teacher_name;
            
     ifstream input;
     
     std::cout << std::left << std::setw(3) << " " << std::setw(10) << "Line" << std::setw(15) << "Teacher" << std::setw(20) << "First Student" << std::setw(20) << "Last Student" << "\n";
     border_line_for_decoration.assign( 70, '_' );
     cout << border_line_for_decoration << "\n\n";
         
     for (int i = 1; i <= 3; i++) {
         switch (i) {
            case 1: 
                 teacher_name = "Leslie";
                 input.open("Lineup1.txt");
                 break;
            case 2:
                 teacher_name = "Robert";
                 input.open("Lineup2.txt");
                 break;
            case 3:
                 teacher_name = "Alice";
                 input.open("Lineup3.txt");
                 break;
         }
     
         if (input.fail()) {
            std::cout << "Error opening file.\n\n";
            system("pause");
            exit (0);
         }
         
         getline (input, first_student);
         last_student = first_student;
          
         while (getline (input, current_student_name)) {
             if (current_student_name < first_student)
                first_student = current_student_name;
             if (current_student_name > last_student)
                last_student = current_student_name;
         }
         
         std::cout << std::setw(4) << " " << std::setw(10) << i << std::setw(16) << teacher_name << std::setw(21) << first_student << setw(20) << last_student << "\n\n";
         
         input.close();
         input.clear();
     }
     cout << "\n";
         
     system ("pause");
     return 0;        
 }
