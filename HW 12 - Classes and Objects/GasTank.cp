/* GasTank.cpp - This program will hold the class for GasTank, which includes 
 * gas tank characteristics.  
 *
 * HW 12
 * 
 * Programmer: Matthew Sheehan
 *
 * Algorithm: 
 *
 * 1. The program will test the functionality of the gas tank class. This will be
 * done by creating four separate gas tanks. One will be fed no arguments, so
 * it will set the level to 0.0 and capacity to the default capacity.
 *
 * 2. Following the creating of the gas tank, a show info function will be used
 * to show the information for the gas tank (level, capacity, fill). The showInfo
 * function will be called after the creation of every gas tank.
 *
 * 3. The second gas tank will have a value for capacity, but not for level, as
 * to test the ability to set a default value for level.
 * 
 * 4. The third gas tank will be created with arguments 0 for level, and 50 for 
 * capacity.
 * 
 * 5. The fourth gas tank will be created with arguments 18.6 for level, and 
 * 35.2 for capacity.
 *
 */
 
 static double const DEFAULT_CAPACITY = 30.0;
 static double const MINIMUM_CAPACITY = 4.0;
 
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 class GasTank{
       
 private:  
     double level;    // The capacity of the gas tank.
     double capacity; // The level of the gas tank.
            
 public:  
          
     GasTank(double levelArg = 0.0, double capacityArg = DEFAULT_CAPACITY){
     
         setCapacity(capacityArg);
         setLevel(levelArg);       
     }               
       
     // Accessor and mutator methods.               
     void setCapacity(double capacityArg);
     void setLevel(double levelArg);
     double getCapacity();
     double getLevel(); 
     
     // Member functions.
     double calcFill();
       void showInfo();
     
     // Desturctor.
     ~GasTank(){};  
 };
 
 // Shows the gas tank's current capacity.
 double GasTank::getCapacity(){
        
     return capacity;
 }
 
 // Shows the gas tank's current level.
 double GasTank::getLevel(){
        
     return level;
 }
 
 // Sets the level for the gas tank, so long as it is not negative, nor exceeds capacity.
 void GasTank::setLevel(double levelArg){
      
      if (levelArg <= 0.0) // Level cannot be negative, so it will be the minimum.
         level = 0.0;
      else if (levelArg > capacity) // Level cannot exceed capacity, so the level must be capacity.
         level = capacity;
      else 
         level = levelArg;
 }
 
 // Sets the capacity for the gas tank. Capacity entered cannot be below minimum required.
 void GasTank::setCapacity(double capacityArg){
      
      if (capacityArg < MINIMUM_CAPACITY) // Capacity cannot be below 4.0, so the tanks capacity must be atleast 4.0
         capacity = MINIMUM_CAPACITY;
      else
         capacity = capacityArg;
 }
 
 // Determinds the percent of the gas tank filled (divided what is taken up by the total allowed).
 double GasTank::calcFill(){
        
        return ((level / capacity) * 100);
 }
 
 // Shows the gas tank's capacity, amount filled, and percent filled.
 void GasTank::showInfo(){
      
      cout << left << setw(10) << "Level: "    << setw(5) << right << fixed      << setprecision(1) << level << "\n" 
           << left << setw(10) << "Capacity: " << setw(5) << right << capacity   << "\n"
           << left << setw(10) << "Fill: "     << setw(5) << right << calcFill() << "%\n\n";
 }

 int main(){
     
     GasTank tankOne; 
     cout << "Showing info for gas tank one:\n";
     tankOne.showInfo();
     
     GasTank tankTwo(12.5);
     cout << "Showing info for gas tank two:\n";
     tankTwo.showInfo();
     
     GasTank tankThree(0.0, 50.0);
     cout << "Showing info for gas tank three:\n";
     tankThree.showInfo();
     
     GasTank tankFour(40.00, 30.0); 
     cout << "Showing info for gas tank four:\n";
     tankFour.showInfo();
     
     system("pause");
     return 0;    
 }
