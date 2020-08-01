#include <iostream>
#include <iomanip>
#include <string>

/* Stadium_Seats.cpp - Calculate the total revenue from each seating section/total.
 *
 * Author: Matt Sheehan
 */
int main () {
    const double CLASS_A_SEAT_PRICE = 15.00;
    const double CLASS_B_SEAT_PRICE = 12.00;
    const double CLASS_C_SEAT_PRICE = 9.00;
     
    int number_of_class_a_seats_sold;
    int number_of_class_b_seats_sold;
    int number_of_class_c_seats_sold;
    double class_a_total_revenue;
    double class_b_total_revenue;
    double class_c_total_revenue;
    double total_revenue;
    std::string dotted_border_for_decoration;
     
    std::cout << "Hello, please enter the number of class A seats sold: ";
    std::cin >> number_of_class_a_seats_sold;
    std::cout << "\n";
     
    std::cout << "Now please enter the number of class B seats sold: ";
    std::cin >> number_of_class_b_seats_sold;
    std::cout << "\n";
     
    std::cout << "Finally, enter the number of class C seats sold: ";
    std::cin >> number_of_class_c_seats_sold;
    std::cout << "\n";
     
    class_a_total_revenue = (double) (number_of_class_a_seats_sold * CLASS_A_SEAT_PRICE);
    class_b_total_revenue = (double) (number_of_class_b_seats_sold * CLASS_B_SEAT_PRICE);
    class_c_total_revenue = (double) (number_of_class_c_seats_sold * CLASS_C_SEAT_PRICE);
    total_revenue = (class_a_total_revenue + class_b_total_revenue + class_c_total_revenue);
     
    std::cout << "SALE BREAKDOWN:\n";
    dotted_border_for_decoration.assign( 40, '_' );
    std::cout << dotted_border_for_decoration << "\n\n";
    
    std::cout << std::left << std::setw(20) << "Class A seats sold: " << std::right
    << std::setw(6) << number_of_class_a_seats_sold << std::setw (11) << " Total: $"
    << std::setw (10) << std::fixed << std::setprecision(2) << class_a_total_revenue << "\n";
          
    std::cout << std::left << std::setw(20) << "Class B seats sold: " << std::right
    << std::setw(6) << number_of_class_b_seats_sold << std::setw (11) << " Total: $"
    << std::setw (10) << std::fixed << std::setprecision(2) << class_b_total_revenue << "\n";
          
    std::cout << std::left << std::setw(20) << "Class C seats sold: " << std::right
    << std::setw(6) << number_of_class_c_seats_sold << std::setw (11) << " Total: $"
    << std::setw (10) << std::fixed << std::setprecision(2) << class_c_total_revenue << "\n";
          
    std::cout << "\nTotal sales: $" << total_revenue << "\n\n";
          
    system ( "pause" );
    return 0;
}
