//
// Created by Gabriel Spranger Rojas on 2019-06-07.
//

#ifndef PRACTICA_3_FRESH_AVOCADO_SUMAMATRICES_H
#define PRACTICA_3_FRESH_AVOCADO_SUMAMATRICES_H

#include <iostream>

using namespace std;

template <class T, int n, int m>
class SumaMatrices {
    int dimension1 = n;
    int dimension2 = m;
public:
    T matriz[n][m];
    SumaMatrices() {};

//    void set(int i, int j, T value) {
//        matriz[i][j] = value;
//    }

    SumaMatrices<T, n, m> operator+(const SumaMatrices<T, n, m>& otra_matriz) {
        SumaMatrices<T, n, m> matriz_resultante;
        if (otra_matriz.dimension1 == dimension1 && otra_matriz.dimension2 == dimension2) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    matriz_resultante.matriz[i][j] = otra_matriz.matriz[i][j] + matriz[i][j];
                }
            }
            return matriz_resultante;
        } else {
            cout << "Las matrices no tienen las mismas dimensiones." << "\n";
            return matriz_resultante;
        }
    }

};

#endif //PRACTICA_3_FRESH_AVOCADO_SUMAMATRICES_H
