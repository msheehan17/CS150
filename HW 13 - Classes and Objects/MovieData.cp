#include <iostream>
#include <string>
#include <iomanip>

struct RunningTime {
    short hours;
    short minutes;
};

struct MovieData {
    std::string title;
    std::string director;
    int year;
    RunningTime length;
    double production_costs;
    double first_year_revenues;
     
     MovieData(std::string new_title = " ", std::string new_director = " ", int neW_year = 0, int new_hours = 0, int new_minutes = 0, double new_production_costs = 0.0,
               double neW_first_year_revenue = 0.0 ) {
         title = new_title;
         director = new_director;
         year = neW_year;
         length.hours = new_hours;
         length.minutes = new_minutes;
         production_costs = new_production_costs;
         first_year_revenues = neW_first_year_revenue;
     }  
};

void displayMovieInformation(const MovieData &movie);


void displayMovieInformation(const MovieData &movie) {
     std::cout << "Title: " << movie.title << "\n"; std::cout << "Director: " << movie.director << "\n"; std::cout << "Year: " << movie.year << "\n"; std::cout << "Running time: "
     << movie.length.hours << " hour(s) " << movie.length.minutes << " minute(s)\n"; std::cout << "Production costs: $" << std::showpoint << std::fixed << std::setprecision(2)
     << movie.production_costs << "\n"; std::cout << "First year revenue: $" << std::showpoint << std::fixed << std::setprecision(2) << movie.first_year_revenues << "\n\n\n";
}

/* MovieData.cp - Movie class and tester.
 *
 * Author: Matt Sheehan
 */
int main() {
    MovieData movie1 ("Avengers", "Russo Brothers", 2019, 3, 2, 1000000000, 1000000000);
    MovieData movie2 ("Step Brothers", "Adam McKay", 2008, 1, 34, 65000000, 700000000);
    MovieData movie3 ("Avatar", "James Cameron", 2009, 2, 40, 800000000, 990000000);
    
    displayMovieInformation(movie1);
    displayMovieInformation(movie2);
    displayMovieInformation(movie3);

    system("pause");
    return 0;
}
