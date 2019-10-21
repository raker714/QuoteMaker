//
// Created by Akerlow on 10/19/2019.
//

#include "Printhead.h"
#include <string>

using namespace std;

Printhead::Printhead(string name, string description, string part_number, double cost, int dpi, int height)
    : Product(name, description, part_number, cost), dpi{dpi}, height{height}{
}

int Printhead::get_dpi(){
    return dpi;
}

int Printhead::get_height(){
    return height;
}

bool Printhead::set_cost(string cost){
    return true;
}

bool Printhead::set_height(int height) {
    return true;
}