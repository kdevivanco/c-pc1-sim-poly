//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "polynomial.h"
int main(){
    cout << generate_polynomial<10>(5) << endl;
    vector<int> vec = {1,4,5,2,3};
    polynomial <int, 1, 0, 3, 4> p1 = vec;
    cout << p1 << endl;
}

using namespace std;

