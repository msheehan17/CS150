#include < iostream >
#include < string >
#include < vector >
#include < fstream >
using namespace std;

const int TEAMS_ARRAY_SIZE = 30; // The number of teams that will be entered into the array.

int main( ) {
    
    string teams [ TEAMS_ARRAY_SIZE ];     // The array that will store the team names. 
    vector < string > world_series_winners; // The vector that will store the world series team names.
    
    // Create an input stream and connect it to the team names file.
    ifstream input ( "Teams.txt" );
    
    // The count of inputs made from the file.
    int count = 0;

    // Check if the file exists and if it doesn't, close the program.
    if ( ! input ) {
       cout << "Error locating file.\n";
       exit(0);
    }
    
    // Take in names from the file and store them in the array.
    while ( count < TEAMS_ARRAY_SIZE && input >> teams [ count ] )
          count++;
          
    input.clear ( );
    
    count = 0;
    
    while ( input >> world_series_winners [ count ] )
          count++;
    
    system ( "pause" );
    return 0;
}
