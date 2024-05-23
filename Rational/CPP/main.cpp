#include "../Hfile/Rational.h"
# include <iostream>
using namespace std;


int main()
{
    int a = 355;
    int b = 15;

    cout << Nod(a, b) << " " << Nok(a, b) << endl;

    Rational r(2, 5);
    Rational R(5, 15);
    // R+=r;
    cout << R;
    R.simplify();
    cout << R;
}