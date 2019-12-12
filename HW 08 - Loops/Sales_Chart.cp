/* Sales_Chart.cpp - Displays a bar graph based on the sales numbers.
 *
 * Programmer: Matthew Sheehan
 *
 * Homework 8, Part 2.
 * 
 * Algorithm:
 *
 * 1. The program will prompt the user to enter the sales numbers (rounded to 
 * the nearest hundred).  Should the user enter negative value, or a value that
 * is not evenly divisible by 100, the program will prompt the user to enter a
 * number that follow the rules. The user will do this for three seperate stores.
 *
 * 2. Following the user entering the sales for the three seperate stores, a for
 * loop (one for each store) will print an asterik for each $100 the store made
 * that day. The loop will iterate for each $100 dollar you can take from the
 * sales (i.e. 500 dollars will make the loop cycle 5 times, 200 makes two times,
 * etc.)
 *                
 */
 
 #include <iostream>
 using namespace std;
 
 int main(){
     
     int store_one_sales, store_two_sales, store_three_sales; // Store sales.
     
     
     
     // Prompt for store one's sales.
     cout << "Please enter today's sales for store #1 (round to nearest hundre value): ";
     cin  >> store_one_sales;
     
     // Checks that the sales total is not negative.
     while (store_one_sales < 0){
           
           cout << "That is not an acceptable input. Try again: ";
           cin  >> store_one_sales;
     }
     
     // Checks that the sales total is rounded to the nearest 100.
     while ((store_one_sales % 100) != 0){
           
           cout << "The number must be evenly divisible by 100. Try again: ";
           cin  >> store_one_sales;
     }
     
     // Determine the number of $100 increments come from the sales total.
     store_one_sales /= 100;
     
     
     
     // Prompt for store two's sales.
     cout << "Please enter today's sales for store #2 (round to nearest hundre value): ";
     cin  >> store_two_sales;
     
     // Checks that the sales total is not negative.
     while (store_two_sales < 0){
           
           cout << "That is not an acceptable input. Try again: ";
           cin  >> store_two_sales;
     }
     
     // Checks that the sales total is rounded to the nearest 100.
     while ((store_two_sales % 100) != 0){
           
           cout << "The number must be evenly divisible by 100. Try again: ";
           cin  >> store_two_sales;
     }
     
     // Determine the number of $100 increments come from the sales total.
     store_two_sales /= 100;
     
     
     
     // Prompt for store three's sales.
     cout << "Please enter today's sales for store #3 (round to nearest hundre value): ";
     cin  >> store_three_sales;
     
     // Checks that the sales total is not negative.
     while (store_three_sales < 0){
           
           cout << "That is not an acceptable input. Try again: ";
           cin  >> store_three_sales;
     }
     
     // Checks that the sales total is rounded to the nearest 100.
     while ((store_three_sales % 100) != 0){
           
           cout << "The number must be evenly divisible by 100. Try again: ";
           cin  >> store_three_sales;
     }
     
     // Determine the number of $100 increments come from the sales total.
     store_three_sales /= 100;
     
     
     
     // Output the sales for today.
     cout << "\nProjection of today's sales: \n\n";
     
     // Store one's sales.
     cout << "Store #1: ";
     
     for (int i = 0; i < store_one_sales; i++){
         
         cout << "*";
     }
     
     // Store two's sales.
     cout << "\nStore #2: ";
     
     for (int i = 0; i < store_two_sales; i++){
         
         cout << "*";
     }
     
     // Store three's sales.
     cout << "\nStore #3: ";
     
     for (int i = 0; i < store_three_sales; i++){
         
         cout << "*";
     }
     
     cout << "\n\n* = $100. \n\n";
     
     system("pause");
     return 0;
 }
