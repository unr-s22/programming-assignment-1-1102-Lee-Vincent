#include <iostream>
#include "GradeCalculator.h"

#define NUM_ASSIGNMENTS 5

int main() {
    std::cout << "Grade Calculator" << std::endl;;
    std::cout << "================" << std::endl;;
    std::cout << "This program will calculate your grade average on your assignments." << std::endl;;
    std::cout << "Your lowest grade will be dropped." << std::endl;;

    GradeCalculator calc;
    int points;

    for( int i = 0; i < NUM_ASSIGNMENTS; i++ ) {
        std::cout << "Enter points for assignment " << i+1 << ": ";
        std::cin >> points;
        calc.addScore(points);
    }

    calc.printResults();

    return 0;
}