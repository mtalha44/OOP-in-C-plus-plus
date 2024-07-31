#include <iostream>
using namespace std;

class Vector {
    int Size;
    int* arr;

public:
    Vector(int a[], int m) {
        Size = m;
        arr = new int[Size];
        for (int i = 0; i < Size; i++) {
            arr[i] = a[i];
        }
    }

    Vector operator*(const Vector& V) {
        int* tempArr = new int[Size];
        for (int i = 0; i < Size; i++) {
            tempArr[i] = arr[i] * V.arr[i];
        }

    }

    void display() {
        cout << "Result: ";
        for (int i = 0; i < Size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Vector() {
        delete[] arr;
    }
};

int main() {
    int Size = 4;
    int a[Size];
    for (int i = 0; i < Size; i++) {
        cin >> a[i];
    }

    int a1[Size];
    for (int i = 0; i < Size; i++) {
        cin >> a1[i];
    }

    Vector V1(a, Size);
    Vector V2(a1, Size);

    Vector res = V1 * V2;

    res.display();

    return 0;
}
