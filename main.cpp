#include <iostream>
#include <vector>

#include "Classes/UniformDistanceCalculator.h"
#include "Classes/AccelaratedDistanceCalculator.h"

int main() {
    std::vector<DistanceCalculatorBase*> list1;
    list1.push_back(new UniformDistanceCalculator(15));
    list1.push_back(new AccelaratedDistanceCalculator(15, 6));
    for (DistanceCalculatorBase* distance : list1) {
        std::cout << distance->Calculate(3) << std::endl;
        delete distance;
    }
    return 0;
}
