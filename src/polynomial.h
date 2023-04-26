//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC1_V2022_1_POLYNOMICAL_H
#define PROG3_PC1_V2022_1_POLYNOMICAL_H
#include <iostream>
#include <array>
#include <cmath>
#include <initializer_list>
#include <vector>
#include <algorithm>
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
//Basados en la pregunta anterior, desarrollar la clase template polinomial que a
//        partir de una lista de valores x genere un arreglo dinámico de pares ordenado x,
//        f(x) (se sugiere utilizar std::pair para crear el par ordenado).
//La clase contará con 2 constructores con parámetros: uno del tipo
//        std::initializer_list y otro del tipo std::vector, donde se ingresarán la lista de
//valores x que permitirán generar por cada valor de x un par ordenado x, f(x). El
//        valor de f(x) se generará utilizando el template de funciones generate_polynomial
//        desarrollado en la pregunta anterior.
//La clase template contará con 2 parámetros de template colocados de forma inversa
//a la función generate_polynomial debido a que el primer parámetro no podrá ser
//        deducido:
//• El primer parámetro será un parámetro tipo que generalizará el tipo de dato
//        de x y será deducible del valor del parámetro de la función.
//• El segundo parámetro será un parámetro variadic no tipo (int) donde cada
//valor entero representará el coeficiente cada uno de los miembros del
//        polinomio. Así por ejemplo si se deseara generar el siguiente polinomio:

template<typename T,int...coefficientes>
class polynomial{
        private:
            const int size = sizeof...(coefficientes);
            T arr[sizeof...(coefficientes)] = {coefficientes...};
            vector<pair<T,T>> values;

        public:
            polynomial() = default;

            polynomial(initializer_list<T> x_vals){
                std::sort(x_vals.begin(), x_vals.end());
                for (const auto& x : x_vals) {
                    T y = generate_polynomial<coefficientes...>(x);
                    values.emplace_back(x, y);
                }
            }

            polynomial(const vector<T>& x_vals){
               for (const auto& x : x_vals) {
                   T y = generate_polynomial<coefficientes...>(x);
                   values.emplace_back(x, y);
               }
            }


            friend ostream& operator<<(ostream& out, const polynomial& poli){
                vector<pair<T,T>> sorted_values = poli.values;
                sort(sorted_values.begin(), sorted_values.end(),
                     [](const pair<T,T>& a, const pair<T,T>& b) {
                         return a.first < b.first;
                     });
                for(const auto& i : sorted_values){
                    out << "{" << i.first << "," << i.second << "} ";
                }
                return out;
//                for(const auto& i : poli.values){
//                    cout << i.first << "," << i.second << " ";
//                }
//                return out;
            }
        };


#endif //PROG3_PC1_V2022_1_POLYNOMICAL_H
