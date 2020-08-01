#include <iostream>
 
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
 int main () {
     const int RUNNING_METABOLIC_EQUIVALENT = 10;
     const int BASKETBALL_METABOLIC_EQUIVALENT = 8;
     const int SLEEPING_METABOLIC_EQUIVALENT = 1;
     const int RUNNING_TIME_IN_MINUTES = 30;
     const int BASKETBALL_TIME_IN_MINUTES = 30;
     const int SLEEPING_TIME_IN_MINUTES = 360;
     const double CONVERSION_RATE = 0.0175;
     
     double user_weight;
     double user_weight_in_kilograms;
     double calories_burned_per_minute_running;
     double calories_burned_per_minute_playing_basketball;
     double calories_burned_per_minute_sleeping;
     double total_calories_burned_running;
     double total_calories_burned_basketball;
     double total_calories_burned_sleeping;
     double total_calories_burned_sum;
     int activity_level_option_selected;
     
     std::cout << "Hello user, I can help determine your calories burned. please enter your weight: ";
     std::cin >> user_weight;
     std::cout << "\n";
     
     if (user_weight < 0.0) {
        std::cout << "Weight must be positive.\n";
        system("pause");
        exit(0);
     }
     
     user_weight_in_kilograms = (user_weight / 2.2);
     
     calories_burned_per_minute_running = (CONVERSION_RATE * user_weight_in_kilograms * RUNNING_METABOLIC_EQUIVALENT);
     calories_burned_per_minute_playing_basketball = (CONVERSION_RATE * user_weight_in_kilograms * BASKETBALL_METABOLIC_EQUIVALENT);
     calories_burned_per_minute_sleeping = (CONVERSION_RATE * user_weight_in_kilograms * SLEEPING_METABOLIC_EQUIVALENT);
     
     total_calories_burned_running = (calories_burned_per_minute_running * RUNNING_TIME_IN_MINUTES);
     total_calories_burned_basketball = (calories_burned_per_minute_playing_basketball * BASKETBALL_TIME_IN_MINUTES);
     total_calories_burned_sleeping = (calories_burned_per_minute_sleeping * SLEEPING_TIME_IN_MINUTES);
     
     std::cout << "Next, please select your activity level: \n\n";
     std::cout << "\"1\" for sedentary. \n";
     std::cout << "\"2\" for somewhat active (exercise occasionally). \n";
     std::cout << "\"3\" for active (exercise 3-4 times per week). \n";
     std::cout << "\"4\" for highly active (exercises daily). \n\n";
     
     std::cout << "Your choice: ";
     std::cin >> activity_level_option_selected;
     std::cout << "\n";
     
     switch (activity_level_option_selected) {
        case 1:
           total_calories_burned_sleeping *= .8;
           total_calories_burned_basketball *= .8;
           total_calories_burned_sleeping *= .8;
        break;
        case 2:
        break; // Rates are fine as they are.
        case 3:
           total_calories_burned_running *= 1.2;
           total_calories_burned_basketball *= 1.2;
           total_calories_burned_sleeping *= 1.2;
        break;
        case 4:
           total_calories_burned_running *= 1.5;
           total_calories_burned_basketball *= 1.5;
           total_calories_burned_sleeping *= 1.5;
       break;
     }
        
     total_calories_burned_sum = (total_calories_burned_running + total_calories_burned_basketball + total_calories_burned_sleeping);
     
     std::cout << "Based on your your weight and activity level, were you to run for 30 minutes, play basketball for 30 minutes, and sleep for six hours, you would burn \n";
     std::cout << "the following amount of calories: \n\n";
     std::cout << "Running (30 Minutes): " << (int) total_calories_burned_running << "\n";
     std::cout << "Basketball (30 Minutes): " << (int) total_calories_burned_basketball << "\n";
     std::cout << "Sleeping (6 Hours): " << (int) total_calories_burned_sleeping << "\n\n";
     std::cout << "Total calories burned: " << (int) total_calories_burned_sum << "\n";
     
     system ("pause");
     return 0;    
 }
