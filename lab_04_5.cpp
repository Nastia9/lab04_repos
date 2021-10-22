#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
int main()
{
    double x, y, R;
   
    srand((unsigned) time(NULL));
    
     for (int i=0; i<10; i++)
    { 
       cout << "R = "; cin >> R;
       cout << "x = "; cin >> x; 
       cout << "y = "; cin >> y; 
       

       if((x >= 0 && (x*x + y*y <= R*R)) 
         || (x < 0 && x >= -R && y <= R && y >= 0 && x >= -y)
         || (x < 0 && x >= -R && y >= -R && y <= 0 && x >= y))

          cout << "yes" << endl;
        else
          cout << "no" << endl; 
    }

    cout << endl << fixed;
    for (int i=0; i<10; i++)
    {
        x = (2 * R) *rand()/RAND_MAX - R;
        y = (2 * R) *rand()/RAND_MAX - R;

        if((x >= 0 && (x*x + y*y <= R*R)) 
           || (x < 0 && x >= -R && y <= R && y >= 0 && x >= -y)
           || (x < 0 && x >= -R && y >= -R && y <= 0 && x >= y))
           cout << setw(8) << setprecision(4) << x << "  "
                << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "no" << endl;            
    }

}
