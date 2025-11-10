#include <iostream>
using namespace std;

int main() {
    int nilai;
    int *ptr;

    cout << "Masukkan nilai integer: ";
    cin >> nilai;
    ptr = &nilai;

    cout << "Nilai melalui Pointer: " << *ptr << endl;
    cout << "Alamat pointer: " << ptr << endl;

    cout << "Masukkan nilai baru: ";
    cin >> *ptr;

    cout << "Nilai Baru :" << *ptr << endl;

    return 0;
}
