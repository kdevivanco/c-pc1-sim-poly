//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC1_V2022_1_POLYNOMICAL_H
#define PROG3_PC1_V2022_1_POLYNOMICAL_H
#include <iostream>
#include <array>
#include <cmath>
using namespace std;


template<int...coeficientes, typename T>
T generate_polynomial(T x){
    int arr[] = {coeficientes...};
    const int size = sizeof...(coeficientes);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i] * pow(x, i);
    }

    return sum;

}

#endif //PROG3_PC1_V2022_1_POLYNOMICAL_H
