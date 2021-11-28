#include "function.h"

int main()
{
    int a, b, c;
    double x1, x2;

    cout << "Input a, b, c for quadractic equation in form of ax^2 + bx + c = 0\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (realRootCheck(a, b, c) == false)
    {
        cout << "No real roots!";
    }
    else
    {
        solver(&x1, &x2, a, b, c);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

        cout << "\nPlug x1, x2 in equation:\n";
        cout << "a * (x1)^2 + b * x1 + c = " << residual(x1, a, b, c) << endl;
        cout << "a * (x2)^2 + b * x2 + c = " << residual(x1, a, b, c);
    }

    return 0;
}