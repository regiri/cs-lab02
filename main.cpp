#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter A and B: "; cin >> a >> b;
    cout << "A + B = " << a + b << endl << "A - B = " << a - b << endl << "A * B = " << a * b << endl << "A / B = " << a / b << endl;
    cout << min(a, b) << endl;
    cout << max(a, b);
    return 0;
}
