// Alphanzo Moore

//CIS-5 Online (or Hybrid)

// 9/02/23

// Assignment 2B: Laser Wars Cantina


#include <iostream>
#include <iomanip>

int main() {
    // Declare variables
    double mealCharge, taxRate, tipRate;
    
    // Constants for tax rate (8%) and tip rate (20%)
    const double TAX_RATE = 0.08;
    const double TIP_RATE = 0.20;

    // Get the meal charge from the user
    std::cout << "Enter the bill total: $";
    std::cin >> mealCharge;

    // Calculate the tax amount
    double taxAmount = mealCharge * TAX_RATE;

    // Calculate the tip amount (pre-tax)
    double tipAmount = mealCharge * TIP_RATE;

    // Calculate the total due
    double totalDue = mealCharge + taxAmount + tipAmount;

    // Display the results
    std::cout << std::fixed << std::setprecision(2); // Set decimal precision to 2
    std::cout << "Welcome to Laser Wars Cantina. Home of that one song." << std::endl;
    std::cout << "Food items ............$" << mealCharge << std::endl;
    std::cout << "Tax 8%........$"<< taxAmount << std::endl;
    std::cout << "Tip 20%..........$"<< tipAmount << std::endl;
    std::cout << "Total $" << totalDue << std::endl;

    return 0;
}
