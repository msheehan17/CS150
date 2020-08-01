#include <iostream>
#include <string>
#include <vector>
#include <fstream>

const int TEAMS_ARRAY_SIZE = 30;

/*
 *
 *
 */
int main() {
    int number_of_inputs = 0;
    string team_names[TEAMS_ARRAY_SIZE];
    vector <string> world_series_winners;
    
    ifstream file_input ("Teams.txt");
    if (!file_input) {
       cout << "Error locating file.\n";
       exit(0);
    }
    
    while (number_of_inputs < TEAMS_ARRAY_SIZE && file_input >> team_names[number_of_inputs])
        count++;
          
    file_input.clear();
    
    number_of_inputs = 0;
    
    while (file_input >> world_series_winners[number_of_inputs])
        number_of_inputs++;
    
    system ("pause");
    return 0;
}
