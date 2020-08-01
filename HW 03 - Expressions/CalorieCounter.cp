 #include <iostream>
 
/* CalorieCounter.cp - Based on the user's weight determines the calories burned perfoming various activities.
 *
 * Author: Matt Sheehan
 */
int main () {
    double user_weight_in_pounds;
    double user_weight_in_kilograms;
    double divisor_for_turning_pouds_to_kilograms = 2.2;
    double standard_rate_for_determining_calorie_rates = 0.0175; // Calorie formula = (standard rate * weight in kilograms * activity metabolic equivalent)
    double running_calorie_rate;
    double calories_burned_running;
    double basketball_calorie_rate;
    double calories_burned_playing_basketball;
    double sleeping_calorie_rate;
    double calories_burned_sleeping;
    double total_calories_burned;
    int running_metabolic_equivalent = 10;
    int basketball_metabolic_rate = 8;
    int sleeping_metabolic_rate = 1;
    int half_hour_in_minutes = 30;
    int six_hours_in_minutes = 360;
     
    std::cout << "Hello user, please enter your weight: ";
    std::cin  >> user_weight_in_pounds;
    std::cout << "\n";
     
    user_weight_in_kilograms = (user_weight_in_pounds / divisor_for_turning_pouds_to_kilograms);
     
    running_calorie_rate = (standard_rate_for_determining_calorie_rates * user_weight_in_kilograms * running_metabolic_equivalent);
    basketball_calorie_rate = (standard_rate_for_determining_calorie_rates * user_weight_in_kilograms * basketball_metabolic_rate);
    sleeping_calorie_rate = (standard_rate_for_determining_calorie_rates * user_weight_in_kilograms * sleeping_metabolic_rate);
     
    calories_burned_running = (running_calorie_rate * half_hour_in_minutes);
    calories_burned_playing_basketball = (basketball_calorie_rate * half_hour_in_minutes);
    calories_burned_sleeping = (sleeping_calorie_rate * six_hours_in_minutes);
     
    total_calories_burned = (calories_burned_running + calories_burned_playing_basketball + calories_burned_sleeping);
    
    std::cout << "Given your weight, this is your project calories burned for the following activities: \n\n";\
    
    std::cout << " - Running (1/2 Hour): " << calories_burned_running << "\n";
    std::cout << " - Playing basketball (1/2 hour): " << calories_burned_playing_basketball << "\n";
    std::cout << " - Sleeping (6 hours): " << calories_burned_sleeping << "\n\n";
    
    std::cout << "Total calories burned: " << total_calories_burned << "\n\n";
     
    system("pause");
    return 0;
 }
