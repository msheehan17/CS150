 #include <iostream>
 #include <iomanip>

 static double const DEFAULT_CAPACITY = 30.0;
 static double const MINIMUM_CAPACITY = 4.0;

/* GasTank.cpp - Gas Tank class and tester.
 *
 * Author: Matt Sheehan
 */
 class GasTank{
       
 private:  
     double level;
     double capacity;
            
 public:    
     GasTank(double levelArg = 0.0, double capacityArg = DEFAULT_CAPACITY) {
         setCapacity(new_capacity);
         setLevel(new_level);
     }               
       
     void setCapacity(double new_capacity);
     void setLevel(double new_level);
     double getCapacity();
     double getLevel();
     
     double calcFill();
     void showInfo();
     
     ~GasTank (){};
 };
 
 double GasTank::getCapacity() {
     return capacity;
 }
 
 double GasTank::getLevel() {
     return level;
 }
 
 void GasTank::setLevel(double new_level) {
      if (new_level <= 0.0)
         level = 0.0;
      else if (new_level > capacity)
         level = capacity;
      else 
         level = new_level;
 }
 
 void GasTank::setCapacity(double new_capacity) {
      if (new_capacity < MINIMUM_CAPACITY)
         capacity = MINIMUM_CAPACITY;
      else
         capacity = new_capacity;
 }
 
 double GasTank::calcFill() {
        return ((level / capacity) * 100);
 }
 
 void GasTank::showInfo() {
     std::cout << std::left << std::setw(10) << "Level: " << std::setw(5) << std::right << std::fixed << std::setprecision(1) << level << "\n" << std::left << std::setw(10)
     << "Capacity: " << std::setw(5) << std::right << capacity << "\n" << std::left << std::setw(10) << "Fill: " << std::setw(5) << std::right << calcFill() << "%\n\n";
 }

 int main () {
     GasTank tankOne; 
     std::cout << "Showing info for gas tank one:\n";
     tankOne.showInfo();
     
     GasTank tankTwo(12.5);
     std::cout << "Showing info for gas tank two:\n";
     tankTwo.showInfo();
     
     GasTank tankThree(0.0, 50.0);
     std::cout << "Showing info for gas tank three:\n";
     tankThree.showInfo();
     
     GasTank tankFour(40.00, 30.0);
     std::cout << "Showing info for gas tank four:\n";
     tankFour.showInfo ();
     
     system("pause");
     return 0;    
 }
