 #include <iostream>
 #include <iomanip>

/* Hotel_Rooms.cp - Totals the number of rooms occupied from floors 10-16 of a hotel.
 *
 * Author: Matt Sheehan
 */
 int main () {
     const int NUMBER_OF_ROOMS_AVAILABLE_IN_HOTEL = 120;
     const int NUMBER_OF_ROOMS_AVIALABLE_PER_FLOOR = 20;
     
     int rooms_occupied_this_floor;
     int total_number_of_rooms_occupied = 0;
     double total_room_occupation_percentage;
     
     std::cout << "Hello. I need you to please enter how many suites are occupied on each floor.\n\n";
     
     for (int i = 10; i < 17; i++) {
         if (i == 13) // No 13th floor in this hotel.
           continue;
         
         std::cout << "Enter the number of rooms occupied on the " << i << "th floor: ";
         std::cin >> rooms_occupied_this_floor;
         
         while (rooms_occupied_this_floor < 0 || rooms_occupied_this_floor > NUMBER_OF_ROOMS_AVIALABLE_PER_FLOOR) {
               std::cout << "Rooms occupied can only be 0-20. Try again: ";
               std::cin >> rooms_occupied_this_floor;
         }
         total_number_of_rooms_occupied += rooms_occupied_this_floor;
     }
     
     total_room_occupation_percentage = ((double) total_number_of_rooms_occupied / NUMBER_OF_ROOMS_AVAILABLE_IN_HOTEL);
     total_room_occupation_percentage *= 100;
     
     std::cout << std::left << std::setw(25) << "\nTotal suites available: " << std::right << std::setw (9) << NUMBER_OF_ROOMS_AVAILABLE_IN_HOTEL << "\n";
     std::cout << std::left << std::setw (25) << "Rooms occupied: " << std::right << std::setw(8) << total_number_of_rooms_occupied << "\n";
     std::cout << std::left << std::setw (25) << "Percentage occupied: " << std::right << std::setw (8) << std::fixed << std::setprecision(2) << total_room_occupation_percentage
     << "%\n\n";
 
     system ("pause");
     return 0;
 }
 
 
