//
// Created by ASUS on 12.11.2024.
//

#ifndef UNIFORMDISTANCECALCULATOR_H
#define UNIFORMDISTANCECALCULATOR_H
#include "DistanceCalculatorBase.h"


class UniformDistanceCalculator : public DistanceCalculatorBase {
private:
    double _speed;
public:
    void SetSpeed(double speed);
    double GetSpeed();
    double Calculate(double time) override;
    UniformDistanceCalculator(double speed);
    ~UniformDistanceCalculator() = default;
};




#endif //UNIFORMDISTANCECALCULATOR_H
