// Inventory class specification file.

#ifndef INVENTORY_H
#define INVENTORY_H
#include < string >
using namespace std;

class Inventory {
     
 private:
     string item_number,  // The item number.
            description;  // A description of the item.
        int quantity;     // How many of the item is on hand.
     double cost;         // The cost per item.
  
 public:
     // Constructors. 
     Inventory ( );
     Inventory ( string item_number, string description, int quantity, double cost );
     
     // Mutator methods.
     void setItemNumber ( string item_number );
     void setDescription ( string description );
     void setQuantity ( int quantity );
     void setCost ( double cost );
     
     // Accessor methods.
     string getItemNumber ( );
     string getDescription ( );
     int getQuantity ( );
     double getCost ( );
     
     // Calculating item's total cost.
     double calcTotalCost ( ); 
     
     // Prints information on the item.
     void printItemReport ( );
};
#endif
