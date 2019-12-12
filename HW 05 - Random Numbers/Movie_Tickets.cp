/* Movie_Tickets.cpp - Calculates the total sale, after distribution pay, of movie tickets sold.
 * Author: Matthew Sheehan
 * Project: HW5, Part 2.
 *
 * Algorithm:
 * 
 * 1. Prompt the user for the number of adult tickets sold, followed by the
 * number of children tickets sold.
 *
 * 2. Calculate the sum by multiplying number of adult tickets sold by their 
 * price, and adding it to the product of number of children tickets sold by
 * their price. 
 *
 * 3. Because the theatre must pay 20% to the distributor, the program will 
 * have a breakdown of the ticket sales, total, and the total after the distribution
 * pay.
 *
 */
 
 #include <iostream>
 #include <iomanip>  // Needed for formatting the price breakdown.
 #include <string>   // For creating an underscore border.
 using namespace std;
 
 int main()
 {
     // Constants, ticket prices and the rate kept from gross ticket sales.
     const double ADULT_TICKET_PRICE    = 10.00;
     const double CHILDREN_TICKET_PRICE =  6.00;
     const double NET_RATE = 0.80;
     
     // Instance Variables.
     int adult_tickets, children_tickets;
     double sum;             // Sum of ticket sales.
     double net_pay;         // The percentage the theatre keeps.
     double distributor_pay; // The percentage paid to the distributor.
     string border;          // A border for the formatted printout.
     
     // Prompt user for tickets sold.
     cout << "Hello. Please enter the number of adult tickets sold: ";
     cin  >> adult_tickets;
     cout << endl;
     
     cout << "Now please enter the number of childrens' tickets sold: ";
     cin  >> children_tickets;
     cout << endl;
     
     // Total ticket sales.
     sum = ((adult_tickets * ADULT_TICKET_PRICE) + (children_tickets + CHILDREN_TICKET_PRICE));
     
     // Theatre's percentage.
     net_pay = (sum * NET_RATE);
     
     // Distributor percentage.
     distributor_pay = (sum - net_pay);
     
     // Print the sales breakdown to the user.
     cout << "SALE BREAKDOWN:" << endl;
     
     border.assign(40, '_');
     
     cout << border << endl << endl;
     
     cout << "Movie Title: Best of the Olympics." << endl << endl;
     
     cout << left  << setw(30) << "Adult Tickets Sold: " 
          << right << setw(12) << adult_tickets << endl;
     
     cout << left  << setw(30) << "Childrens' Tickets Sold: " 
          << right << setw(12) << children_tickets << endl;
          
     cout << left  << setw(30) << "Gross Box Office Revenue: " 
          << right << setw(3)  << "$" << setw(9) << fixed << setprecision(2) 
          << sum   << endl;
          
     cout << left  << setw(30) << "Amount Paid to Distributor: " 
          << right << setw(3)  << "-$" << setw(9) << fixed << setprecision(2) 
          << distributor_pay   << endl;
          
     cout << left  << setw(30) << "Net Box Office Revenue: " 
          << right << setw(3)  << "$" << setw(9) << fixed << setprecision(2) 
          << net_pay << endl   << endl;
     
     system("pause");
     return 0;
 }// End main.
     
     
     
     
     
 
