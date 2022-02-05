#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

class GradeCalculator {
private:
    int scores[100];
    int counter;
    int dropLowest();

public:
    GradeCalculator();
    void addScore(int score);
    void printResults();

    virtual ~GradeCalculator();
};

#endif //GRADECALCULATOR_H