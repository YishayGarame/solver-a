#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace solver
{

class RealVariable
{
public:
    int pow;
    double beforeX;
    double freeNumber;
    //RealVariable() : pow(0), beforeX(0.0), freeNumber(0.0){};
    // RealVariable(const int &pow, const double &beforeX, const double &freeNumber) : pow(pow), beforeX(beforeX), freeNumber(freeNumber){};
};

double solve(RealVariable x);

class ComplexVariable
{
public:
    double re;
    double im;

    //  ComplexVariable() : re(0), im(0){};
    // ComplexVariable(double &re, double &im) : re(re), im(im) {}
};

double solve(ComplexVariable y);

////////////////////////////////operators RealVarible ////////////////////////////////

//operator + //

RealVariable &operator+(solver::RealVariable &x, RealVariable &y);
RealVariable &operator+(solver::RealVariable &x, double y);
RealVariable &operator+(double y, solver::RealVariable &x);

//operator - //

RealVariable &operator-(RealVariable &x, RealVariable &y);
RealVariable &operator-(RealVariable &x, double y);
RealVariable &operator-(double y, RealVariable &x);

//operator * //

solver::RealVariable &operator*(RealVariable &x, RealVariable &y);
RealVariable &operator*(RealVariable &x, double y);
RealVariable &operator*(double y, RealVariable &x);

//operator / //

RealVariable &operator/(RealVariable &x, RealVariable &y);
RealVariable &operator/(RealVariable &x, double y);
RealVariable &operator/(double y, RealVariable &x);

//operator ^ //

RealVariable &operator^(RealVariable &x, RealVariable &y);
RealVariable &operator^(RealVariable &x, double y);
RealVariable &operator^(double y, RealVariable &x);

//operator == //

RealVariable &operator==(RealVariable &x, RealVariable &y);
RealVariable &operator==(RealVariable &x, double y);
RealVariable &operator==(double y, RealVariable &x);

////////////////////////////////operators ComplexVariable////////////////////////////////

//operator + //

ComplexVariable &operator+(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator+(ComplexVariable &x, double y);
ComplexVariable &operator+(double y, ComplexVariable &x);

//operator - //

ComplexVariable &operator-(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator-(ComplexVariable &x, double y);
ComplexVariable &operator-(double y, ComplexVariable &x);

//operator * //

ComplexVariable &operator*(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator*(ComplexVariable &x, double y);
ComplexVariable &operator*(double y, ComplexVariable &x);

//operator / //

ComplexVariable &operator/(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator/(ComplexVariable &x, double y);
ComplexVariable &operator/(double y, ComplexVariable &x);
//operator ^ //

ComplexVariable &operator^(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator^(ComplexVariable &x, double y);
ComplexVariable &operator^(double y, ComplexVariable &x);

//operator == //

ComplexVariable &operator==(ComplexVariable &x, ComplexVariable &y);
ComplexVariable &operator==(ComplexVariable &x, double y);
ComplexVariable &operator==(double y, ComplexVariable &x);

} // namespace solver
