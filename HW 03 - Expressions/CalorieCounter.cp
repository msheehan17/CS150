 #include < iostream >
 using namespace std;
 
/* CalorieCounter.cpp - 
 * Author: Matthew Sheehan
 * Project: HW 3, Project 1
 * Description: This program will take the weight of a person, and determine how
 * many calories they burn performing various aerobic activities.
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
 * is 8, and sleeping is 1. 
 *
 * 4. Create double variables named after each ativity. Using the formula in 
 * step 3, calculate each activity's calories burned per minute, and store it 
 * in the respective variable.
 *
 * 5. This program will determine how many calories are burned should the user
 * run for 30 minutes, play basketball for 30 minutes, and sleep for 6 hours.
 * To determine the amount of calories burned (based on the whole duration), we will 
 * need to take running's calories per minutes and mutiply it by 30 (for 30 minutes), 
 * take basketball's calories per minute and multiply it by 30, and take 
 * sleeping's calories per minute and multiply it by 360 (1 hour = 60 minutes, 
 * so 6 hours = 360 minutes). 
 *
 * 6. Print to the user how many calories they burned during each activity, and
 * the total amount of calories they burned as a whole.
 *  
 */
 int main ( ) {
     double weight, running, basketball, sleeping;
     double sum; // This will store the total calories burned.
     
     cout << "Hello user, please enter your weight: " << "\n";
     cin  >> weight;
     cout << "\n";
     
     // Calculate weight to kilograms.
     weight /= 2.2; 
     
     // Determine each activity's calories per minute.
     running    = ( 0.0175 * weight * 10 );
     basketball = ( 0.0175 * weight * 8 );
     sleeping   = ( 0.0175 * weight * 1 );
     
     /* Determine how many calories were burned should the user run for 30
      * minutes, play basketball for 30 minutes, and sleep for 6 hours.
      */
     running    *= 30;
     basketball *= 30;
     sleeping   *= 360;
     
     // Total calories burned.
     sum = ( running + basketball + sleeping ); 
     
     cout << "Based on your your weight, were you to run for 30 minutes, play \n";
     cout << "basketball for 30 minutes, and sleep for six hours, you would burn \n";
     cout << "the following amount of calories \n" << "\n";
     
     cout << "Running (30 Minutes): "    << running    << "\n";
     cout << "Basketball (30 Minutes): " << basketball << "\n";
     cout << "Sleeping (6 Hours): "      << sleeping   << "\n";
     cout << endl;
     
     cout << "Total calories burned: " << sum << "\n";
     
     system("pause");
     return 0;    
 }
