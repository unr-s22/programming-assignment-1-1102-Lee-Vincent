#include <iostream>
#include "GradeCalculator.h"

GradeCalculator::GradeCalculator():counter(0) {}

GradeCalculator::~GradeCalculator() {}

void GradeCalculator::addScore(int score) {
    scores[counter] = score;
    counter++;
}

int GradeCalculator::dropLowest() {
    int lowest = scores[0];
    int lowestIndex = 0;

    for(int i = 0; i < counter; i++) {
        if(scores[i] < lowest) {
            lowest = scores[i];
            lowestIndex = i;
        }
    }

    for(int i = lowestIndex; i < counter - 1; i++) {
        scores[i] = scores[i+1];
    }

    return counter - 1;
}

void GradeCalculator::printResults() {
    int total = 0;
    int size = dropLowest();

    for(int i = 0; i < size; i++) {
        total += scores[i];
    }
    
    std::cout << "Total points: " << total << std::endl;
    std::cout << "Average Points: " << (float)total / size << std::endl;    
}