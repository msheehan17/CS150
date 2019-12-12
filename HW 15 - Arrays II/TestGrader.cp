/**
 * TestGrader.cpp - Grades the DMV test the user has taken.
 *
 * HW15, Part 2.
 *
 * Programmer: Matthew Sheehn
 *
 * Algorithm:
 *
 * 1. The program will create a test object that will represent the user's DMV
 * test. A function for creating the answer key will be called and it will set 
 * answer for each question in the answers array from the TestGrade class.
 *
 * 2. A for loop will be used to prompt the user for the answer to each question,
 * storing each answer in the user_answers array in main.
 *
 * 3. Following the user answering all the questions, the program will do
 * a side by side comparison of the answers array, and the user answer array.
 * For each questions answered correctly, the program will add to the count of
 * questions correct. Another count will track which questions we're answered
 * incorrect.
 *
 * 4. Within that same method that compares answers, an integer array will track
 * the index of each question the user answered incorrect.
 *
 * 5. After the comparisons have been made for all questions, a reprot will be
 * printed that shows:
 *  
 * - If the user passed (answers 15 or more questions correctly).
 * - How many questions they answered correctly.
 * - The question number of each question they answered incorrect.
 *
 */
 
 #include<iostream>
 #include<cctype>
 using namespace std;
 
 const int SIZE = 20;
 
 class TestGrader{
    
 public:
     char answers[SIZE];
     void setKey(string key);
     void grade(char user_answers[]);
 };
 
 // Sets the correct answers in the answers array.
 void TestGrader :: setKey(string key){
      
      for (int i = 0; i < SIZE; i++)
          answers[i] = key.at(i);
 }
 
 // Determines the number of questions the user answered correctly.
 void TestGrader :: grade(char user_answers[]){
      
      int number_correct   = 0; // Tracks the number of questions the user got right.
      int number_incorrect = 0; // Tracks the number of questions the user got wrong.
      int wrong_answers[20];    // Tracks which questions the user answered incorrectly.
      
      // Cycles through each question on the exam.
      for (int i = 0; i < SIZE; i++){
          
          // User answers correctly.
          if (user_answers[i] == answers[i])
             number_correct++;
             
          // User answers wrong.
          else {
             // Add to the list the question number that was answered incorrectly.
             wrong_answers[number_incorrect] = i + 1; 
             number_incorrect++;
          }
      }
      
      // User does not guess 15 questions correctly.
      if (number_correct <= 14){
         cout << "\nSorry, you did not pass the exam.\n";
         cout << "You answered: " << number_correct << "/20 correctly.\n";
         cout << "Questions missed: ";
         
         for (int i = 0; i < number_incorrect; i++)
             cout << wrong_answers[i] << " ";
         
      // User answers 15 or more questons correctly.
      } else {
         cout << "\nCongratulations! You passed your exam.\n";
         cout << "You answered: " << number_correct << "/20 correctly.\n";
         cout << "Questions missed: ";
         
         for (int i = 0; i < number_incorrect; i++)
             cout << wrong_answers[i] << " ";
      }  
           
      cout << "\n\n";
 }
 
 
 // MAIN
 
 char checkAnswer(char answer);
 
 int main(){
     
     char user_answers[SIZE]; // The array that will hold the user answers.
     char user_answer; // The answer the user gives.
     
     // The test the user will take.
     TestGrader test; 
     
     // Sets the answer key.
     test.setKey("bdcbcdabcdbccdbacdbc");
     
     // Prompts the user for the answer to each question.
     for (int i = 0; i < SIZE; i++){
         
         cout << "Please enter your answer for question " << i + 1 << ": ";
         cin  >> user_answer;
         user_answers[i] = checkAnswer(user_answer);
     }
     
     // Grade the test by comparing the user's answers against the answer key.
     test.grade(user_answers);
     
    system("pause");
    return 0;     
 }
 
 // Ensures the answer input is a letter a-d.
 char checkAnswer(char answer){
      
      tolower(answer);
      
      while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd'){
            
            cout << "That is not an acceptable answer. Try again: ";
            cin  >> answer;
            cout << "\n";
      }
      
      return answer;
 }
