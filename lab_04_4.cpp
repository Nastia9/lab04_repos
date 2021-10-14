#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, R, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
         << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= (-8-R))
        y = -R;
    else
        if (x > (-8 - R) && x <=(-8 + R))
            y =-R + sqrt((R * R) - (x+8)*(x+8));
        else
            if (x> (-8 + R) && x<=2)
                y = ((x+8-R)*(-R-2)/(2+8-R))+2;
             else 
                 if (x>2 && x <= 6)
                     y = 0;
                 else   
                     y = (x - 6) * (x - 6);

      cout << "|" << setw(7) << setprecision(2) << x     
             << "   |" << setw(10) << setprecision(3) << y
             << "    |" << endl;
    x += dx;    
    }
    cout << "---------------------------" << endl;
    
    return 0;               
}