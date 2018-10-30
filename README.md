#Latihan-3-yang-genap


**mencari program segitiga sama kaki dan sisi**

**Alur Program**
1. Mendeklarasikan variabel int A, B, C sebagai variabel input.
2. Membaca input dari key board cin >> A >> B >> C.
3. Membandingkan Nilai variabel A dengan variabel B JIka sama.
4. Bandingkan kembali variabel A dengan variabel C.
5. Jika kondisi **TRUE** / ketiga variabel sama maka tercetaklah **SEGITIGA SAMA SISI**
6. Jika **False** / jika kurang dari tiga variabel maka tercetaklah **SEGITIGA SAMA KAKI**
7. Dan JIka Variabel A sama dengan variabel C, jika kondisi **True** maka tercetak **SEGITIGA SAMA KAKI**
8. jika kondisi **False** samakan kembali variabel C dengan variabel B, jika kondisi **True** tercetaklah **SEGITIGA SAMA KAKI**
9. Jika kondisi **False** Cetaklah **SEGITIGA SAMA KAKI**
10. END

**ScreenShot Hasil**

https://github.com/aldae7/Latihan-3-yang-genap/blob/master/samakaki.png

https://github.com/aldae7/Latihan-3-yang-genap/blob/master/samasisi.png

https://github.com/aldae7/Latihan-3-yang-genap/blob/master/sembarang.png

**CODE PROGRAM**

```c++

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


```
