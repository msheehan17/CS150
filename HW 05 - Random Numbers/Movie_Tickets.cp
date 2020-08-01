 #include <iostream>
 #include <iomanip>
 #include <string>

/* Movie_Tickets.cpp - Determines the total amount for tickets, and the amount
 * paid to distributors/the theater.
 *
 * Author: Matt Sheehan.
 */
 int main () {
     // Constants, ticket prices and the rate kept from gross ticket sales.
     const double ADULT_TICKET_PRICE = 10.00;
     const double CHILDREN_TICKET_PRICE = 6.00;
     const double NET_RATE = 0.80;
     
     int number_of_adult_tickets;
     int number_of_child_tickets;
     double total_price_of_tickets;
     double paid_to_the_theater;
     double paid_to_the_distributor;
     std::string border;
     
     std::cout << "Hello. Please enter the number of adult tickets sold: ";
     std::cin  >> number_of_adult_tickets;
     std::cout << "\n";
     
     std::cout << "Now please enter the number of childrens' tickets sold: ";
     std::cin  >> number_of_child_tickets;
     std::cout << "\n";
     
     total_price_of_tickets = (( number_of_adult_tickets * ADULT_TICKET_PRICE) +
     (number_of_child_tickets + CHILDREN_TICKET_PRICE));
     
     paid_to_the_theater = (total_price_of_tickets * NET_RATE);
     
     paid_to_the_distributor = (total_price_of_tickets - paid_to_the_theater);
     
     std::cout << "SALE BREAKDOWN:\n";
     border.assign(40, '_');
     std::cout << border << "\n\n";
     std::cout << "Movie Title: Best of the Olympics.\n\n";
     std::cout << std::left << std::setw(30) << "Adult Tickets Sold: "
     << std::right << std::setw(12) << number_of_adult_tickets << "\n";
     
     std::cout << std::left << std::setw(30) << "Childrens' Tickets Sold: "
     << std::right << std::setw(12) << number_of_child_tickets << "\n";
          
     std::cout << std::left << std::setw(30) << "Gross Box Office Revenue: "
     << std::right << std::setw(3) << "$" << std::setw(9) << std::fixed << std::setprecision(2)
     << total_price_of_tickets << "\n";
          
     std::cout << std::left << std::setw(30) << "Amount Paid to Distributor: "
     << std::right << std::setw(3) << "-$" << std::setw(9) << std::fixed << std::setprecision(2)
     << paid_to_the_distributor << "\n";
          
     std::cout << std::left << std::setw(30) << "Net Box Office Revenue: "
     << std::right << std::setw(3) << "$" << std::setw(9) << std::fixed << std::setprecision(2)
     << paid_to_the_theater << "\n\n";
     
     system ( "pause" );
     return 0;
 }
