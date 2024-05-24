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
    cout << R << endl;
    R.simplify();
    
    



    cout << "upr" <<  R <<  endl; 
    cout << r << " + " << R << " = " << r+R << endl;
    cout << r << " - " << R << " = " << r+(-R) << endl;
    
    cout <<  reducation(r, R)[0];
    cout << r <<endl;
    cout << r << " > " << R << " = " << (r>R) << endl;
    cout << r << " < " << R << " = " << (r<R) << endl;
}
