// Lab3.3.cpp
// Огонюк Назар
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double R;

    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;

    if (x <= -6)
        y = R;
    else
        if (x > -6 && x <= -R)
            y = (x + R) / (6 - R);
        else
            if (x > -R && x <= 0)
                y = -sqrt(-(pow(R, 2) + pow(x, 2)));
            else
                if (x > 0 && x <= R)
                    y = sqrt(pow(R, 2) - pow(x, 2));
                else
                    y = R - x;


    cout << "y = " << y << endl;

    system("pause");
    cin.get();
    return 0;

}

