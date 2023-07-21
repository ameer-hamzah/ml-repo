#include <iostream>
#include <chrono>

using namespace std;

int x, y;

void add_func()
{
    cout << "Enter x = ";
    cin >> x;
    cout << endl;
    cout << "Enter y = ";
    cin >> y;
    cout << endl;
    cout << "Sum = " << x + y << endl;
}

int main()
{
    add_func();
}