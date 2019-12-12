/* CalorieCounter.cpp - 
 * Author: Matthew Sheehan
 * Project: HW 6, Part 2
 * Description: This program will take the weight of a person, and determine how
 * many calories they burn performing various aerobic activities, based on
 * their activity level.
 *
 * Algortihm: 
 *
 * 1. Prompt the user for their weight.
 *
 * 2. Because the formula calculating calories burned requires the user's weight 
 * to be in kilograms, the user's weight will be divided by 2.2 to get weight 
 * in kiligrams.
 *
 * 3. The formula for determining how many calories are burned per minute is
 * (weight in kg * MET * 0.0175).  The variable MET (metabolic equivalents) will
 * be different for each activity. Running (at 6mph) is 10 METS, playing basketball
 * is 8, and sleeping is 1.  Following the user entering their weight, the conversion
 * will be made to determine how many calories would be burned during each activity.
 *
 * 4. The user will then have four options to choose from to describe their activity
 * level. Options available are: sedentary, somewhat active, active, and highly active.
 * Should the user pick option 1, their calories will be multipled by .8% as due to 
 * their activity level, they are only burning 80% of those calories. Users who choose
 * option 2, the calories will remain the same. Choosing option 3 will result in calories
 * being multiplied by 1.2 as the calories burned is 120% of what is normally burned.
 * Finally, option 4 will multiply the calories burned normally by 1.5 as 150% of calories
 * are burned. 
 * 
 * 5. The sum of the calories burned will be totaled. Each calories burned total
 * will be typecasted to round the numbers.
 *
 * 6. Results will be printed to the screen.
 *
 */
 
 # include <iostream>
 using namespace std;
 
 int main()
 {
     // Constants, METs, conversion rate, and activity durations.
     const int RUNNING_MET     = 10;
     const int BASKETBALL_MET  = 8;
     const int SLEEPING_MET    = 1;
     const int RUNNING_TIME    = 30;
     const int BASKETBALL_TIME = 30;
     const int SLEEPING_TIME   = 360; // 6 Hours = 360 minutes.
     const double CONVERSION_RATE = 0.0175;
     
     // Instance variables.
     int activity_level;
     double weight, running, basketball, sleeping, sum;
     
     // Introductions.
     cout << "Hello user, I can help determine your calories burned. please enter\n";
     cout << "your weight: ";
     cin  >> weight;
     cout << endl;
     
     if (weight < 0.0){
        cout << "Weight must be positive.\n";
        system("pause"); 
        exit(0);
     }
     
     // Calculate weight to kilograms.
     weight /= 2.2; 
     
     // Determine each activity's calories per minute.
     running    = (CONVERSION_RATE * weight * RUNNING_MET);
     basketball = (CONVERSION_RATE * weight * BASKETBALL_MET);
     sleeping   = (CONVERSION_RATE * weight * SLEEPING_MET);
     
     /* 
      * Determine how many calories were burned should the user run for 30
      * minutes, play basketball for 30 minutes, and sleep for 6 hours.
      *
      */
     running    *= RUNNING_TIME;
     basketball *= BASKETBALL_TIME;
     sleeping   *= SLEEPING_TIME;
     
     // Prompt the user for their activity level.
     cout << "Next, please select your activity level: \n\n";
     
     cout << "\"1\" for sedentary. \n";
     cout << "\"2\" for somewhat active (exercise occasionally). \n";
     cout << "\"3\" for active (exercise 3-4 times per week). \n";
     cout << "\"4\" for highly active (exercises daily). \n";
     
     cin  >> activity_level;
     cout << endl;
     
     // Calculate the calories burned adjusted to activity level.
     switch (activity_level){
        case 1:
           running    *= .8;
           basketball *= .8;
           sleeping   *= .8;
           break;
        
        // Calories burned remains unchanced with somewhat active regime.   
        case 2:
             break;
             
        case 3:
           running    *= 1.2;
           basketball *= 1.2;
           sleeping   *= 1.2;
           break;

        case 4:
           running    *= 1.5;
           basketball *= 1.5;
           sleeping   *= 1.5;
           break;
     }
        
     // Total calories burned.
     sum = (running + basketball + sleeping); 
     
     
     // Output to user.
     cout << "Based on your your weight, were you to run for 30 minutes, play \n";
     cout << "basketball for 30 minutes, and sleep for six hours, you would burn \n";
     cout << "the following amount of calories: \n\n";
     
     cout << "Running (30 Minutes): "    << (int) running    << endl;
     cout << "Basketball (30 Minutes): " << (int) basketball << endl;
     cout << "Sleeping (6 Hours): "      << (int) sleeping   << endl << endl;
     
     cout << "Total calories burned: " << (int) sum << endl;
     
     system("pause");
     return 0;    
 }
