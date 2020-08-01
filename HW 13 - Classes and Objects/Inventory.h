// Inventory class specification file.

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>

class Inventory {
     
 private:
    std::string item_number;
    std::string item_description;
    int item_quantity;
    double item_cost;
  
 public:
     Inventory();
     Inventory(std::string item_number, std::string item_description, int item_quantity, double item_cost);
     
     void setItemNumber(std::string item_number);
     void setItemDescription(std::string item_description);
     void setItemQuantity(int item_quantity);
     void setItemCost(double item_cost);
     
     std::string getItemNumber();
     std::string getItemDescription();
     int getItemuantity();
     double getItemCost();
    
     double calculateTotalCost();
     void printItemReport();
};
#endif
