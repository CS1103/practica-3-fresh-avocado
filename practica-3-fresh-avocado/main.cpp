#include <iostream>
#include <cassert>
#include <random>

#include "SumaMatrices.h"

using namespace std;

const int filas = 4;
const int columnas = 4;

int main() {
    random_device rd;
    //           tipo n  m
    SumaMatrices<int, filas, columnas> matriz1;
    SumaMatrices<int, filas, columnas> matriz2;
    /// Llenando matriz 1
    for (int k = 0; k < filas; ++k) {
        for (int i = 0; i < columnas; ++i) {
            matriz1.matriz[k][i] = 1;
        }
    }
    /// Llenando matriz 2
    for (int k = 0; k < filas; ++k) {
        for (int i = 0; i < columnas; ++i) {
            matriz2.matriz[k][i] = 1;
        }
    }


    SumaMatrices<int, filas, columnas> matriz3;
    matriz3 = matriz1 + matriz2;

    /// Comprobando que la matriz3 fue creada a partir dee matriz + matriz2;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            assert(matriz3.matriz[i][j] == matriz1.matriz[i][j]+matriz2.matriz[i][j]);
        }
    }

    return 0;
}