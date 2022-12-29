// Online C++ compiler to run C++ program online

/**
 * Pseudocode
 * 
 * Prompt the user to enter number of rooms
 * display number of rooms
 * display price per room
 * 
 * Display cost
 * Display tax
 * Display total estimated
 * Display estimated time
*/





#include <iostream>
using namespace std;

void Clear(){
    system("clear");
}

void Home(){
    
    // write code here
    
    cout << "Welcome to Illiyyin Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned ";
}

void Display_all(){
    
    // Declare variable
    int number_of_rooms{0};
    cin >> number_of_rooms;
    
    cout << "\nEstimated for carpet cleaning service\n";
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room : $" << 30 << endl;
    cout << "Cost : $" << 30 * number_of_rooms << endl;
    cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;

    cout << "====================================\n";    
    cout << "Total estimates: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
    cout << "This estimates is valid for " << 30 << " days" << endl;
    
}


int main() {
    // Write C++ code here
    
    // Call function Clear
    Clear();
    
    // Call function
    Home();
    Display_all();
  

    return 0;
}
