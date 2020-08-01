 #include <iostream>
 #include <iomanip>

 const int ARRAY_ROWS = 4;
 const int ARRAY_COLUMNS = 12;

 void printWeatherReport(int theArray[ARRAY_ROWS][ARRAY_COLUMNS], int rows);
 void monthAvg(int theArray[ARRAY_ROWS][ARRAY_COLUMNS]);
 
 void printWeatherReport( int weather_patterns[ARRAY_ROWS][ARRAY_COLUMNS], int rows) {
     
     std::cout << std::left << std::setw(15) << " " << std::setw(5) << "Jan" << std::setw(5) << "Feb" << std::setw(5) << "Mar" << std::setw(5) << "Apr" << std::setw(5) << "May"
     << std::setw(5) << "Jun" << std::setw(5) << "Jul" << std::setw(5) << "Aug" << std::setw(5) << "Sep" << std::setw(5) << "Oct" << std::setw(5) << "Nov" << std::setw(5) << "Dec"
     << std::setw(5) << "AVG\n";
      
     for (int i = 0; i < rows; i++) {
         int cityAvg = 0;
        
         if (i == 0)
             std::cout << std::left << std::setw(13) << "Los Angeles: ";
         if ( i == 1 )
             std::cout << std::left << std::setw(13) << "New York: ";
         if ( i == 2 )
             std::cout << std::left << std::setw(13) << "Miami: ";
         if ( i == 3 )
            std::cout << std::left << std::setw(13) << "Seattle: ";
         
         for ( int j = 0; j < ARRAY_COLUMNS; j++ ) {
             std::cout << std::right << std::setw(5) << weather_patterns[i] [j];
             cityAvg += weather_patterns[i][j];
         }
         cityAvg /= 12;
        
         std::cout << std::right << std::fixed << std::setprecision(2) << std::setw(5) << cityAvg << "\n";
    }
     std::cout << std::left << std::setw(17) << "\nMonth Avg: ";
     monthAvg(weather_patterns);
 }
 
 void monthAvg ( int theArray[][ARRAY_COLUMNS]) {
     
     for (int i = 0; i < ARRAY_COLUMNS; i++) {
         int avg = 0;
         
         for (int j = 0; j < ARRAY_ROWS; j++)
             avg += theArray[j][i];
           
          avg /= 4;
          std::cout << std::left << std::fixed << std::setprecision(2) << std::setw(5) << avg;
      }
      std::cout << "\n\n";
 } 
   
/* WeatherPatterns - For finding the average temperature for a city.
 *
 * Author: Matt Sheehan
 */
int main ( ) {
    int weather_patterns[ARRAY_ROWS][ARRAY_COLUMNS] = {
        { 68, 69, 70, 73, 75, 79, 83, 84, 83, 79, 73, 68 },  // Los Angeles
        { 39, 42, 50, 62, 72, 80, 85, 84, 76, 65, 54, 44 },  // New York
        { 73, 74, 75, 78, 81, 84, 85, 86, 85, 82, 78, 76 },  // Miami
        { 47, 51, 55, 59, 65, 70, 75, 75, 69, 60, 51, 46 }   // Seattle
    };
    
    printWeatherReport(weather_patterns, ARRAY_ROWS);
    std::cout << "\n\n";
    
    system ("pause");
    return 0;
}
