/* WeatherPatterns.cpp - Showcases weather patterns over the year for four different cities.
 *
 * HW 15, Part 1.
 *
 * Programmer: Matthew Sheehan
 *
 * Algorithm:
 *
 * 1. The program will contain a hard-coded 2D array that will store the average
 * temperate of each month for four different cities (so in total 48 values will
 * be stored as there are 12 months and 4 cities).
 *
 * 2. A function called printWeatherReport will take in the array as an argument
 * and will print a formatted table listing:
 * 
 * - Each month at the top for the header. Following the list of months, the header
 *   will also include an AVG column that will annotate the average temperature
 *   of that city. 
 * - Under the header, a column on the left will indicate which city's information
 *   is being reported. Following each city's name, the average temperature for
 *   that city during each month will be spaced evely to match the respective month
 *   (i.e. Los Angeles' temperature for January will be to the right of "Los Angeles"
 *   under the Jan column.
 * - Underneath each respective month will be an average value of each city's monthly
 *   temperature (so the January average will the average of each city's January
 *   temperature).
 *
 */
 
 #include<iostream>
 #include<iomanip>
 using namespace std;
 
 const int ROWS = 4;     // 2D array number of rows.
 const int COLUMNS = 12; // 2D array number of columns.
 
 void printWeatherReport(int theArray[ROWS][COLUMNS], int rows);
 void monthAvg(int theArray[ROWS][COLUMNS]);
 
 int main(){
     
     // The 2D array that holds the cities' temperature.
     int weather_patterns[ROWS][COLUMNS] = {{68, 69, 70, 73, 75, 79, 83, 84, 83, 79, 73, 68},  // Los Angeles
                                            {39, 42, 50, 62, 72, 80, 85, 84, 76, 65, 54, 44},  // New York
                                            {73, 74, 75, 78, 81, 84, 85, 86, 85, 82, 78, 76},  // Miami
                                            {47, 51, 55, 59, 65, 70, 75, 75, 69, 60, 51, 46}}; // Seattle
     
     // Print the weather report of the city temperature averages.
     printWeatherReport(weather_patterns, ROWS); 
     cout << "\n\n";   
     
     system("pause");
     return 0;
 }
 
 /**
  * Prints the average temperature for each city during each month of the year.
  * The report also shows the average temeprature of the city during the year 
  * (by adding each monthly temperature and dividing by 12). Finally, at the 
  * bottom of each month will be an average temperature of that month (by combining
  * the four cities' month temeprature for that month, then dividng by 4).
  *
  */ 
 void printWeatherReport(int theArray[ROWS][COLUMNS], int rows){
     
     // Header for the table. 
     cout << left << setw(15) << " " 
          << setw(5) << "Jan" << setw(5) << "Feb" << setw(5) << "Mar" 
          << setw(5) << "Apr" << setw(5) << "May" << setw(5) << "Jun" 
          << setw(5) << "Jul" << setw(5) << "Aug" << setw(5) << "Sep" 
          << setw(5) << "Oct" << setw(5) << "Nov" << setw(5) << "Dec"
          << setw(5) << "AVG" << "\n";
      
    // Print the respective city.    
    for (int i = 0; i < rows; i++){
        
        int cityAvg = 0;
        
        if (i == 0)
           cout << left << setw(13) << "Los Angeles: ";
        if (i == 1)
           cout << left << setw(13) << "New York: ";
        if (i == 2)
           cout << left << setw(13) << "Miami: ";
        if (i == 3)
           cout << left << setw(13) << "Seattle: ";
         
        // Print the montly temperatures.  
        for (int j = 0; j < COLUMNS; j++){
            
            cout << right << setw(5) << theArray[i][j];
            cityAvg += theArray[i][j];
        }
        
        // Calculate the average temperature for the year, print it to the screen.
        cityAvg /= 12;
        
        cout << right << fixed << setprecision(2) << setw(5) << cityAvg;   
        cout << "\n";
    }
    
    cout << left << setw(17) << "\nMonth Avg: ";
    monthAvg(theArray);
 }
 
 // Calculate the average monthly temperature.
 void monthAvg(int theArray[][COLUMNS]){
      
      // Go through each column (month)
      for (int i = 0; i < COLUMNS; i++){
          
          int avg = 0;
          
          // Add the column's rows' values together.
          for(int j = 0; j < ROWS; j++)
              avg += theArray[j][i];
           
          // Calculate the average, and print it to the screen.   
          avg /= 4;
              
          cout << left << fixed << setprecision(2) << setw(5) << avg;  
      }
      cout << "\n\n";
 } 
          
      
          
      
