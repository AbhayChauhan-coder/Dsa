#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << add(a, b) << endl;

    if (a > b) cout << a << " is greater" << endl;
    else if (b > a) cout << b << " is greater" << endl;
    else cout << "Both numbers are equal" << endl;

    cout << "Numbers from 1 to 5: ";
    for (int i = 1; i <= 5; i++) cout << i << " ";
    cout << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
