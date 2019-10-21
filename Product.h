//
// Created by Akerlow on 10/19/2019.
//

#ifndef QUOTEMAKER_PRODUCT_H
#define QUOTEMAKER_PRODUCT_H

#include <string>

using namespace std;

class Product {
private:
    static constexpr const char *def_name = "No Product Name";
    static constexpr const char *def_description = "No Product Description";
    static constexpr const char *def_part_number = "xxxxxxxx";
    static constexpr const double def_cost = 0.0;

protected:
    Product(string, string, string, double);
    string name;
    string description;
    string part_number;
    double cost;

public:
    string get_name();
    double get_cost();
    string get_part_number();
    string get_description();
    virtual ~Product() = default;
};


#endif //QUOTEMAKER_PRODUCT_H
