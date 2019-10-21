//
// Created by Akerlow on 10/19/2019.
//
#include "Printhead.h"
#include <string>
#include <iostream>

using namespace std;


int main(){

    Printhead cont {"Vseries", "Hello World", "78945612", 265.23, 6, 32};
    cout << cont.get_cost() << endl;
    cout << cont.get_dpi() << endl;
    cout << cont.get_height() << endl;

    Printhead cont2 {5, 9};
    cout << cont2.get_cost() << endl;


    return 0;
}