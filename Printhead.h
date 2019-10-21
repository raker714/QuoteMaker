//
// Created by Akerlow on 10/19/2019.
//

#ifndef QUOTEMAKER_PRINTHEAD_H
#define QUOTEMAKER_PRINTHEAD_H
#include "Product.h"
#include <string>

using namespace std;

class Printhead: public Product {
private:
    static constexpr const int def_dpi = 0;
    static constexpr const int def_height = 0;

protected:
    int dpi;
    int height;

public:
    Printhead(string name = def_name, string description = def_description, string part_number = def_part_number,
            double cost = def_cost, int dpi = def_dpi, int height = def_height);
    int get_dpi();
    int get_height();
    bool set_cost(string);
    bool set_height(int);
    virtual ~Printhead() = default;
};


#endif //QUOTEMAKER_PRINTHEAD_H
