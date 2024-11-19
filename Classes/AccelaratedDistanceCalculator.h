//
// Created by ASUS on 12.11.2024.
//

#ifndef ACCELARATEDDISTANCECALCULATOR_H
#define ACCELARATEDDISTANCECALCULATOR_H
#include "DistanceCalculatorBase.h"


class AccelaratedDistanceCalculator : public  DistanceCalculatorBase{
private:
    double _speed;
    double _acceleration;
public:
    void SetSpeed(double speed);
    void SetAcceleration(double acceleration);
    double GetSpeed();
    double GetAcceleration();
    double Calculate(double time) override;
    AccelaratedDistanceCalculator(double speed, double acceleration);
    ~AccelaratedDistanceCalculator() = default;
};



#endif //ACCELARATEDDISTANCECALCULATOR_H
