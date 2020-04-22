#include < iostream >
#include < string >
#include < iomanip >
using namespace std;

/* MovieData.cpp  - A program for managing movie information.
 *
 * HW13, Part 2.
 * 
 * Programmer: Matthew Sheehan
 *
 * Algorithm:
 *
 * 1. The program will create three movies objects. Arguments will be used to test 
 * the constructor, which will in turn test the mutator methods. 
 *
 * 2. Still in main, the "display" function wil be called for each movie object to
 * test the ability of the accessor methods.
 *
 */
struct RunningTime {
    short hours,
        minutes;
};

struct MovieData {
     // Member variables.
     string title,
     director;
     int year;
     RunningTime length; 
     double production_costs,
     first_year_revenues; 
     
     // Constructor (full w/ default values).
     MovieData( string title_arg = " ", string director_arg = " ", 
                int year_arg = 0, int hours_arg = 0, int minutes_arg = 0, 
                double production_costs_arg = 0.0, double first_year_revenue_arg= 0.0 ) {
         title               = title_arg;
         director            = director_arg;
         year                = year_arg;
         length.hours        = hours_arg;
         length.minutes      = minutes_arg;
         production_costs    = production_costs_arg;
         first_year_revenues = first_year_revenue_arg;      
     }  
};

void display ( const MovieData &movie );

int main ( ) {
    // Create our movies.
    MovieData movie1 ( "Avengers", "Russo Brothers", 2019, 3, 2, 1000000000, 1000000000 );
    MovieData movie2 ( "Step Brothers", "Adam McKay", 2008, 1, 34, 65000000, 700000000 );
    MovieData movie3 ( "Avatar", "James Cameron", 2009, 2, 40, 800000000, 990000000 );
    
    // Print the movie information.
    display ( movie1 );
    display ( movie2 );
    display ( movie3 );

    system ( "pause" ); 
    return 0;
}

// Displays the movie's information (title, director, year, running time, production costs, revenue). 
void display ( const MovieData &movie ) {
     cout << "Title: "               << movie.title          << "\n";
     cout << "Director: "            << movie.director       << "\n";
     cout << "Year: "                << movie.year           << "\n";
     cout << "Running time: "        << movie.length.hours   << " hour(s) " 
                                     << movie.length.minutes << " minute(s)\n";
     cout << "Production costs: $"   << showpoint << fixed   << setprecision ( 2 ) << movie.production_costs    << "\n";
     cout << "First year revenue: $" << showpoint << fixed   << setprecision ( 2 ) << movie.first_year_revenues << "\n\n\n";
}
 
