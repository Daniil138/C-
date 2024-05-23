#include <iostream>
#include "../Hfile/Rational.h"
using namespace std;

Rational::Rational()
{
 numer=0;
 denom=1;
}

Rational::Rational(int number)
{
 numer=number;
 denom=1;
}

Rational::Rational(int n, int d)
{
 numer=n;
 denom=d;
}

int Nod(int a, int b)
{
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return Nod(a % b, b);
    return Nod( a, b % a);
}

int Nok(int a, int b)
{
    return (a*b)/Nod(a,b);
}


Rational& Rational::operator += (const Rational& r)
{

    int denom_schet = Nok(denom, r.denom);
    numer = (numer*(denom_schet/denom)+(denom_schet/r.denom)*r.numer);
    denom = denom_schet;
    
    return *this;
}

Rational Rational::operator +(const Rational &r) const
{
    Rational res(*this);
    return res += r;
}

Rational Rational::operator - () const
{
    Rational r(-numer, denom);
    return r;
}

Rational& Rational::operator -=(const Rational& r)
{
    return (*this += (-r));
}

Rational& Rational::operator ++()
{
    numer += denom;
    return *this;
}

Rational Rational::operator ++(int)
{
    Rational r(*this);
    numer += denom;
    return r;
}

void  Rational::simplify()
{
    int NOD = Nod(numer, denom);
    numer /= NOD;
    denom /= NOD;
}

bool Rational::operator ==(const Rational& r) const
{
    return (numer==r.numer) && (denom==r.denom);
}

bool Rational::operator !=(const Rational& r) const
{
     return !(*this==r);
}

bool Rational::operator > (const Rational& r) const
{
    return (numer>r.numer) && (denom==r.denom);
}

bool Rational::operator < (const Rational& r) const
{
    return (numer<r.numer) && (denom==r.denom);
}


bool Rational::operator >= (const Rational& r) const
{
    return (numer>=r.numer) && (denom==r.denom);
}

bool Rational::operator <= (const Rational& r) const
{
    return (numer<=r.numer) && (denom==r.denom);
}




istream& operator >>(istream& in, Rational& r)
{
    in>>r.numer>>r.denom;
    return in;
}

ostream& operator <<(ostream& out, const Rational& r)
{
    out<<r.numer<<"/"<<r.denom;
    return out;
}