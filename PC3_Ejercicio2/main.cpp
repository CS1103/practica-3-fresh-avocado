#include <iostream>
#include <deque>
#include <cassert>

using namespace std;

template <class T>
deque<T> buscar(deque<T> deque1, int n) {
    deque<T> deque_result;
    if (n <= deque1.size()) {
        for (int i = 0; i < deque1.size()-n+1; ++i) {
            T valor_minimo = deque1[i];
            for (int j = i; j < n+i; ++j) {
                if (deque1[j] < valor_minimo)
                    valor_minimo = deque1[j];
            }
            deque_result.push_back(valor_minimo);
        }
        return deque_result;
    } else {
        cout << "n debe ser menor igual al size del deque." << endl;
        return deque_result;
    }
}

int main() {

    deque<int> d;
    d.push_back(5);
    d.push_back(1);
    d.push_back(4);
    d.push_back(8);
    d.push_back(2);
    d.push_back(4);

    deque<int> dq = buscar(d, 3);

    cout << "Deque result:" << endl;
    for (auto item: dq)
        cout << item << " ";
    cout << endl;

    return 0;
}