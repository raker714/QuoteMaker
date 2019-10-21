//
// Created by Akerlow on 10/19/2019.
//

#include "Product.h"
#include <string>

Product::Product(string name, string description, string part_number, double cost)
    : name{name}, description{description}, part_number{part_number}, cost{cost}{

}

double Product::get_cost() {
    return cost;
}

string Product::get_part_number() {
    return part_number;
}

string Product::get_description() {
    return description;
}

string Product::get_name(){
    return name;
}