#include <iostream>

using namespace std;

int main(){
    int A, B, C;

    cout << "BILANGAN 1 = "; cin >> A;
    cout << "BILANGAN 2 = "; cin >> B;
    cout << "BILANGAN 3 = "; cin >> C;

    if (A == B) {
        if (A == C)
            cout << "Hasilnya adalah : " << "SEGITIGA SAMA SISI";
        else
            cout << "Hasilnya adalah : " << "SEGITIGA SAMA KAKI";
    }else {
    if (A == C)
        cout << "Hasilnya Adalah : " << "SEGITGA SAMA KAKI";
    else {
        if (C == B)
            cout << "Hasilnya Adalah : " << "SEGITIGA SAMA KAKI";
        else
            cout << "Hasilnya Adalah : " << "SEGITIGA SEMBARANG";
    }
    }
}
