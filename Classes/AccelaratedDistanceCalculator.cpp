//
// Created by ASUS on 12.11.2024.
//

#include "AccelaratedDistanceCalculator.h"

#include <cmath>
#include <stdlib.h>

void AccelaratedDistanceCalculator::SetSpeed(double speed) {
     _speed = abs(speed);
 }

void AccelaratedDistanceCalculator::SetAcceleration(double acceleration) {
    _acceleration = abs(acceleration);
}

double AccelaratedDistanceCalculator::GetSpeed() {
    return _speed;
}

double AccelaratedDistanceCalculator::GetAcceleration() {
    return _acceleration;
}

double AccelaratedDistanceCalculator::Calculate(double time) {
    double distance;
    return distance = _speed * time + (_acceleration * pow(time, 2))/2;
}

AccelaratedDistanceCalculator::AccelaratedDistanceCalculator(double speed, double acceleration) {
    _speed = speed;
    _acceleration = acceleration;
}

