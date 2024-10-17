#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int size = 7;
    double temperatures[size]; 
    double sum = 0.0;            
    double maxTemp, minTemp;     
    int mid = 0;

    cout << "Введіть температуру за 7 днів:\n";
    for (int i = 0; i < size; ++i) {
        cout << "День " << i + 1 << ": ";
        cin >> temperatures[i];
        sum += temperatures[i];  
    }

    maxTemp = minTemp = temperatures[0];

    for (int i = 1; i < size; ++i) {
        if (temperatures[i] > maxTemp) {
            maxTemp = temperatures[i];
        }
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }
    }

    double averageTemp = sum / size;

    for (int i = 0; i < size; ++i) {
        if (temperatures[i] > averageTemp) {
            mid++;
        }
    }

    cout << "\nНайвища температура: " << maxTemp << endl;
    cout << "Найнижча температура: " << minTemp << endl;
    cout << "Середня температура: " << averageTemp << endl;
    cout << "Кількість днів з температурою вище середньої: " << mid << endl;

    return 0;
}
