#include <iostream>

int main() {
    char name[100]; // Array to hold the name

    // Prompt the user to enter their name
    std::cout << "Enter your name: ";
    
    // Read the name from the user
    std::cin.getline(name, 100);

    // Print the name
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
