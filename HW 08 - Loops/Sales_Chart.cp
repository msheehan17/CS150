 #include <iostream>

/* Sales_Chart.cp - Displays the sales for each stores.
 *
 * Author: Matt Sheehan
 */
 int main () {
     int total_revenue_from_store_one;
     int total_revenue_from_store_two;
     int total_revenue_from_store_three;
     
     std::cout << "Please enter today's sales for store #1 (round to nearest hundre value): ";
     std::cin >> total_revenue_from_store_one;
     
     while (total_revenue_from_store_one < 0) {
        std::cout << "That is not an acceptable input. Try again: ";
        std::cin >> total_revenue_from_store_one;
     }
     
     while ((total_revenue_from_store_one % 100) != 0) {
        std::cout << "The number must be evenly divisible by 100. Try again: ";
        std::cin >> total_revenue_from_store_one;
     }
     
     total_revenue_from_store_one /= 100;
     
     // Store two:
     std::cout << "Please enter today's sales for store #2 (round to nearest hundre value): ";
     std::cin >> total_revenue_from_store_two;
     
     while (total_revenue_from_store_two < 0) {
        std::cout << "That is not an acceptable input. Try again: ";
        std::cin >> total_revenue_from_store_two;
     }
     
     while ((total_revenue_from_store_two % 100) != 0) {
        std::cout << "The number must be evenly divisible by 100. Try again: ";
        std::cin >> total_revenue_from_store_two;
     }
     
     total_revenue_from_store_two /= 100;
     
     // Store Three:
     std::cout << "Please enter today's sales for store #3 (round to nearest hundre value): ";
     std::cin >> total_revenue_from_store_three;
     
     while (total_revenue_from_store_three < 0) {
        std::cout << "That is not an acceptable input. Try again: ";
        std::cin >> total_revenue_from_store_three;
     }
     
     while ((total_revenue_from_store_three % 100) != 0) {
        std::cout << "The number must be evenly divisible by 100. Try again: ";
        std::cin >> total_revenue_from_store_three;
     }
     
     total_revenue_from_store_three/= 100;
     
     std::cout << "\nProjection of today's sales (* = $100.00): \n\n";
     std::cout << "Store #1: ";
     
     for ( int i = 0; i < total_revenue_from_store_one; i++)
         std::cout << "*";
     
     std::cout << "\nStore #2: ";
     
     for ( int i = 0; i < total_revenue_from_store_two; i++)
         std::cout << "*";
     
     std::cout << "\nStore #3: ";
     
     for ( int i = 0; i < total_revenue_from_store_three; i++)
         std::cout << "*";
     
     system ("pause");
     return 0;
 }
