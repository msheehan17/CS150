#include "Inventory.h"
#include <iomanip>
#include <iostream>

Inventory :: Inventory() {
    setItemNumber(" ");
    setItemDescription(" ");
    setItemQuantity(0);
    setItemCost(0.0);
}

Inventory :: Inventory(std::string item_number, std::string item_description, int item_quantity, double item_cost) {
    setItemNumber(item_number);
    setItemDescription(item_description);
    setItemQuantity(item_quantity);
    setItemCost(item_cost);
}

void Inventory :: setItemNumber(std::string new_item_number) {
     item_number = new_item_number;
}

void Inventory :: setItemDescription(std::string new_item_description) {
     item_description = new_item_description;
}

void Inventory :: setItemQuantity(int new_item_quantity) {
     if (new_item_quantity < 0)
        item_quantity = 0;
     else 
        item_quantity = new_item_quantity;
}

void Inventory :: setItemCost(double new_item_cost) {
     if (new_item_cost <= 0.0)
        item_cost = 0.01;
     else
        item_cost = new_item_cost;
}

std::string Inventory :: getItemNumber() {
    return item_number;
}

std::string Inventory :: getItemDescription() {
    return item_description;
}

int Inventory :: getItemQuantity() {
    return item_quantity;
}

double Inventory :: getItemCost() {
    return item_cost;
}

double Inventory :: calculateTotalCost() {
    return (item_quantity * item_cost);
}

void Inventory :: printItemReport() {
    std::cout << std::left  << std::setw(5) << " " << std::setw(13) << getItemNumber() << std::setw(13) << getItemDescription() << std::right << std::setw(10) << getItemQuantity()
    << std::setw(7)  << "$" << setw(8) << getItemCost() << std::setw(5)  << "$" << setw(8) << calculateTotalCost() << "\n\n";
}

/* Inventory.cp - Inventory class and tester.
 *
 * Author: Matt Sheehan
 */
int main () {
    Inventory item_one("JX65H3", "Keyboard", 77, 24.78);
    Inventory item_two("H43982", "Mouse",   108, 11.39);
    Inventory item_three; 
    Inventory item_four;
    
    item_three.setItemNumber("G65FR3");
    item_three.setItemDescription("Monitor");
    item_three.setItemQuantity(44);
    item_three.setItemCost(54.88);
    
    item_four.setItemNumber("JGH673");
    item_four.setItemDescription("Canned Air");
    item_four.setItemQuantity(234);
    item_four.setItemCost(3.21);
    
    std::cout << std::setw(13) << "Item-No." << std::setw(16) << "Description" << std::setw(13) << "Quantity" << std::setw(14) << "Unit-Cost" << std::setw(15) << "Total-Cost\n";
    
    for (int i = 0; i <= 70; i++)
       std::cout << "-";
        
    std::cout << "\n\n";
    
    item_one.printItemReport();
    item_two.printItemReport();
    item_three.printItemReport();
    item_four.printItemReport();
    
    system("pause");
    return 0;    
}
