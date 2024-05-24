#include <iostream>
using namespace std;



// Класс рациональных чисел
class Rational
{
    public:
        // Числитель
        int numer;
        //Знаменатель >=1
        int denom;

        Rational();

        Rational(int number);

        Rational(int n, int d);

        Rational& operator += (const Rational& r);
        Rational& operator -= (const Rational& r);

        Rational operator + (const Rational& r) const;
        Rational operator -() const;

        Rational& operator ++(); // префикс
        Rational operator ++(int); // постфикс

        

        bool operator ==(const Rational& r) const;
        bool operator !=(const Rational& r) const;
        bool operator >=(const Rational& r) const;
        bool operator <=(const Rational& r) const;
        bool operator >(const Rational& r) const;
        bool operator <(const Rational& r) const;

        void simplify();


        friend istream& operator >>(istream& in, Rational& r);
        friend ostream& operator <<(ostream& out, const Rational& r);

};



// Наименьший общий делитель
int Nod(int a, int b);

// Наименьшее общее кратное 
int Nok(int a, int b);

// Приведение к общему знаменателю
Rational* reducation(Rational a, Rational b);