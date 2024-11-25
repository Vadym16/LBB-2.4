#include <iostream>

using namespace std;

void XOR(unsigned char* arr, size_t size);




int main()
{
    setlocale(LC_ALL, "ukr");
    size_t size;
    unsigned char arr[] = { 0xff, 0x3D };
    size = sizeof(arr) / sizeof(arr[0]);
    cout << "До кодіровки: ";
    for (size_t i = 0; i < size; i++) {
        cout << hex << (int)arr[i] << " ";
    }

    XOR(arr, size);

    cout << "\nПісля: ";
    for (size_t i = 0; i < size; i++) {
        cout << hex << (int)arr[i] << " ";
    }


}

void XOR(unsigned char* arr, size_t size) {
    unsigned char mask = (size % 2 == 0) ? 0x55 : 0xAA;

    for (size_t i = 0; i < size; i++) {
        arr[i] ^= mask;
    }

}