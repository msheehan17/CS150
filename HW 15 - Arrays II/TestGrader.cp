 #include <iostream>
 #include <cctype>

 const int ARRAY_SIZE = 20;
 
 class TestGrader {
 public:
     char answers[ARRAY_SIZE];
     void setTestKey(std::string key);
     void grade(char user_answers[]);
 };
 
 void TestGrader :: setTestKey(std::string key) {
      for (int i = 0; i < ARRAY_SIZE; i++)
          answers[i] = key.at(i);
 }
 
 void TestGrader :: grade(char user_answers[]) {
      int number_correct = 0;
      int number_incorrect = 0;
      int wrong_answers[20];
      
      for ( int i = 0; i < ARRAY_SIZE; i++ ) {
          if (user_answers[i] == answers[i])
             number_correct++;
          else {
             wrong_answers[number_incorrect] = i + 1;
             number_incorrect++;
          }
      }
     
      if ( number_correct <= 14 ) {
         std::cout << "\nSorry, you did not pass the exam.\n You answered: " << number_correct << "/20 correctly.\n Questions missed: ";
         for (int i = 0; i < number_incorrect; i++)
             std::cout << wrong_answers[i] << " ";
      } else {
         std::cout << "\nCongratulations! You passed your exam.\n You answered: " << number_correct << "/20 correctly.\n Questions missed: ";
         for (int i = 0; i < number_incorrect; i++)
             std::cout << wrong_answers[i] << " ";
      }  
      std::cout << "\n\n";
 }
 
 char checkAnswerFormat(char answer);
 
 char checkAnswerFormat(char answer) {
     std::tolower(answer);
      
      while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd') {
        std::cout << "That is not an acceptable answer. Try again: ";
        std::cin >> answer;
        std::cout << "\n";
      }
      return answer;
 }

/* TestGrader.cp - A program for grading tests.
 *
 * Author: Matt sheehan
 */
int main() {
    char user_answers[ARRAY_SIZE];
    char user_answer;
    
    TestGrader test;
    
    test.setTestKey("bdcbcdabcdbccdbacdbc");
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << "Please enter your answer for question " << i + 1 << ": ";
        std::cin >> user_answer;
        user_answers[i] = checkAnswerFormat(user_answer);
    }
    
    test.grade(user_answers);
    
   system("pause");
   return 0;
}
