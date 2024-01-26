#include <iostream>
using namespace std;

int main() {
    const int Most_Size = 1000;
    int numbers[Most_Size];
    int Array1[Most_Size], Array2[Most_Size], Array3[Most_Size];

    cout << "Enter values (enter a negative value to end):\n";

    int num;
    int count1 = 0, count2 = 0, count3 = 0;

    while (true) {
        cin >> num;
        if (num < 0) {
            break;
        }
        numbers[count1++] = num;
    }

    for (int i = 0; i < count1; ++i) {
        int num = numbers[i];
        if (num >= 1 && num <= 99) {
            Array1[count2++] = num;
        } else if (num >= 100 && num <= 999) {
            Array2[count3++] = num;
        } else if (num >= 1000) {
            Array3[count3++] = num;
        }
    }

    cout << "Array1: ";
    for (int i = 0; i < count2; ++i) {
        cout << Array1[i] << " ";
    }
    cout << "\n";

    cout << "Array2: ";
    for (int i = 0; i < count3; ++i) {
        cout << Array2[i] << " ";
    }
    cout << "\n";

    cout << "Array3: ";
    for (int i = 0; i < count3; ++i) {
        cout << Array3[i] << " ";
    }
    cout << "\n";

    return 0;
}
