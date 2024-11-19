//
// Created by ASUS on 12.11.2024.
//

#include "UniformDistanceCalculator.h"

#include <cmath>
#include <stdlib.h>

#include "AccelaratedDistanceCalculator.h"

void UniformDistanceCalculator::SetSpeed(double speed) {
    _speed = abs(speed);
}

double UniformDistanceCalculator::GetSpeed() {
    return _speed;
}

double UniformDistanceCalculator::Calculate(double time) {
    double distance;
    return (distance = _speed * time);
}

UniformDistanceCalculator::UniformDistanceCalculator(double speed) {
    _speed = speed;
}

