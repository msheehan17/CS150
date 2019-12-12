/* Class_Line_Up.cpp - Finds the first and last named listed, in alphabetical
 * ordering, from a text file. 
 *
 * Programmer: Matthew Sheehan
 *
 * Homework 9, Part 1.
 *
 * Algorithm:
 *
 * 1. The program will create three seperate input streams, each connecting to 
 * a file that contains a list of students. 
 *
 * 2. A for loop will cycle through as many iterations as there are teachers. 
 * In this case, there are three teachers.
 *
 * 3. For each iteration, a respective teacher's file will be handled. This will
 * be done using if statments (if i == 1, if i == 2, etc.)
 *
 * 4. During the iteration, the first name in the list will be placed in a 
 * variable called first_student. Another variable called last_student will be
 * set equal to first_student as at this point, the only name is both the first
 * and last student.
 * 
 * 5. The next name in the list will then be placed in a temporary variable 
 * called name. name will be compared against first_student to see if it comes
 * first in lexicographical ordering (meaning it comes first alphabetically as
 * we're assuming all names are formatted the same with the first letter capital
 * and remaining letters lowercase). This will continue so long as the input
 * stream has information to acquire from the file.
 *
 * 6. Should the name variable come before the first_student in lexioographical
 * order, then first_student will be set equal to the information in name.
 *
 * 7. The same will be done with the last_student variable, but the if statement
 * will check that name comes after last_studnet. If true, then last_student
 * will be set equal to the information in name.
 *
 * 8. After the for loop has executed and all teacher's student names have been
 * entered, the teacher's number, the teache'rs name, the first student in their
 * line, and the last student in their line will be printed to the screen.
 *
 */
 
 #include <iostream>
 #include <iomanip>
 #include <fstream>
 #include <string>
 using namespace std;
 
 int main(){
     
     string border_line,   // A border line for formatting the report.
            name,          // This will temporarily hold a name until it can be determined if it is the first/last student, or not.
            first_student, // The first student in the line.
            last_student,  // The last student in the line.
            teacher_name;  // The name of the teacher.
            
     ifstream input;
     
     // Print table header.
     cout << left << setw(3)  << " " << setw(10) << "Line" << setw(15) << "Teacher" << setw(20) << "First Student" 
                  << setw(20) << "Last Student"  << endl;
     border_line.assign(70, '_');
     cout << border_line << endl << endl;
         
     for (int i = 1; i <= 3; i++){    
     
         switch(i)
         {
            case 1:
                 input.open("Lineup1.txt");
                 teacher_name = "Leslie";
                 break;
            case 2:
                 input.open("Lineup2.txt");
                 teacher_name = "Robert";
                 break;
            case 3:
                 input.open("Lineup3.txt");
                 teacher_name = "Alice";
                 break;
         }
     
         // Check if the file cannot be opened.
         if (input.fail()){
                           
            cout << "Error opening file.\n\n";
            system("pause");
            exit(0);
         }
         
         // Get initial name.
         getline(input, first_student);
         last_student = first_student;
         // Get name to compare.  
         while(getline(input,name)){
             // Set new first name if applicable.
             if (name < first_student)
                first_student = name;
             // Set new last name if applicable.  
             if (name > last_student)
                last_student = name;
         }
         // Print class information.
         cout << setw(4) << " " << setw(10) << i << setw(16) << teacher_name << setw(21) << first_student << setw(20) << last_student << endl << endl;
         
         input.close();
         input.clear();
     }
     
     cout << "\n";
         
     system("pause");
     return 0;        
 }
