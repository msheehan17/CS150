/* Inventory.cpp - Program for managing inventory.
 *
 * HW 13, Part 1
 * 
 * Programmer: Matthew Sheehan
 *
 * Algorithm:
 *
 * 1. The program will create four inventory items, two of which will use the default 
 * constructor arguments.
 *
 * 2. The mutator methods will be tested on the two items created with the default
 * values to edit their information.
 *
 * 3. A table will be created to depict the item's number, description, quantity
 * cost, and total cost (quantity * cost). 
 *
 * 4. A print information function will be called for each item, which will call
 * the accessor methods for each of the item's variables, as well as a function
 * called calcTotalCost, which will return the product of the item's cost and
 * quantity.
 *
 */

#include "Inventory.h"
#include <iomanip>
#include <iostream>
using namespace std;

Inventory :: Inventory ( ){
          
    setItemNumber(" ");
    setDescription(" ");
    setQuantity(0);
    setCost(0.0);
}

Inventory :: Inventory(string item_number, string description, int quantity, double cost){
          
    setItemNumber(item_number);
    setDescription(description);
    setQuantity(quantity);
    setCost(cost);
}

// Mutator methods.
void Inventory :: setItemNumber(string item_number_arg){
     
     item_number = item_number_arg;
}

void Inventory :: setDescription(string description_arg){
     
     description = description_arg;
}

void Inventory :: setQuantity(int quantity_arg){
     
     if (quantity_arg < 0)
        quantity = 0;
     else 
        quantity = quantity_arg; 
}

void Inventory :: setCost(double cost_arg){
     
     if (cost_arg <= 0.0)
        cost = 0.01;
     else
        cost = cost_arg;
}

// Accessor methods.
string Inventory :: getItemNumber(){
       
    return item_number;
}

string Inventory :: getDescription(){
       
    return description;
}

int Inventory :: getQuantity(){
    
    return quantity;
}

double Inventory :: getCost(){
       
    return cost;
}

// Calculates the total cost of the item.
double Inventory :: calcTotalCost(){
     
    return (quantity * cost);
}

// Prints information on the item (Number, describtion, quantity, and cost).
void Inventory :: printItemReport(){
     
     // Printing item one's information.    
    cout << left  << setw(5)  << " " 
                  << setw(13) << getItemNumber() 
                  << setw(13) << getDescription()
         << right << setw(10) << getQuantity()
                  << setw(7)  << "$" << setw(8) << getCost()
                  << setw(5)  << "$" << setw(8) << calcTotalCost() << "\n\n";
}

int main(){
    
    // Create inventory items.
    Inventory item_one("JX65H3", "Keyboard", 77, 24.78);
    Inventory item_two("H43982", "Mouse",   108, 11.39);
    Inventory item_three; 
    Inventory item_four;
    
    // Use mutators on objects that called the default constructor.
    item_three.setItemNumber("G65FR3");
    item_three.setDescription("Monitor");
    item_three.setQuantity(44);
    item_three.setCost(54.88);
    
    item_four.setItemNumber("JGH673");
    item_four.setDescription("Canned Air");
    item_four.setQuantity(234);
    item_four.setCost(3.21);
    
    // Table header.
    cout << setw(13) << "Item-No." 
         << setw(16) << "Description" 
         << setw(13) << "Quantity" 
         << setw(14) << "Unit-Cost" 
         << setw(15) << "Total-Cost\n";
    
    // Border for table.
    for (int i = 0; i <= 70; i++)
        cout << "-";
        
    cout << "\n\n";
    
    // Print each item's information.
    item_one.printItemReport();
    item_two.printItemReport();
    item_three.printItemReport();
    item_four.printItemReport();
    
    system("pause");
    return 0;    
}



