#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx, y;


    cout << " xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|    x    |          y          |" << endl;
    cout << "---------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 0)
        {
            y = -4 + x;
        }
        else if (x >= 0 && x <= 2) 
        {
            y = 2 * x;
        }
        else {
            y = 4 - 0.5 * (x - 2);
        }

        cout << "| " << setw(6) << x << " | " << setw(18) << setprecision(3) << y << " |" << endl;
        x += dx;
    }

    cout << "---------------------------------" << endl;
    return 0;
}
