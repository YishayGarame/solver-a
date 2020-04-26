#include <iostream>
#include <string>
#include <complex>
#include <cmath>
using namespace std;

namespace solver
{

class RealVariable
{
private:
    int pow;
    double beforeX;
    double freeNumber;

public:
    ////////////////////////////////operators RealVarible ////////////////////////////////

    //operator + //

    friend RealVariable &operator+(solver::RealVariable &x, RealVariable &y);
    friend RealVariable &operator+(solver::RealVariable &x, double y);
    friend RealVariable &operator+(double y, solver::RealVariable &x);

    //operator - //

    friend RealVariable &operator-(RealVariable &x, RealVariable &y);
    friend RealVariable &operator-(RealVariable &x, double y);
    friend RealVariable &operator-(double y, RealVariable &x);

    //operator * //

    friend solver::RealVariable &operator*(RealVariable &x, RealVariable &y);
    friend RealVariable &operator*(RealVariable &x, double y);
    friend RealVariable &operator*(double y, RealVariable &x);

    //operator / //

    friend RealVariable &operator/(RealVariable &x, RealVariable &y);
    friend RealVariable &operator/(RealVariable &x, double y);
    friend RealVariable &operator/(double y, RealVariable &x);

    //operator ^ //

    friend RealVariable &operator^(RealVariable &x, RealVariable &y);
    friend RealVariable &operator^(RealVariable &x, double y);
    friend RealVariable &operator^(double y, RealVariable &x);

    //operator == //

    friend RealVariable &operator==(RealVariable &x, RealVariable &y);
    friend RealVariable &operator==(RealVariable &x, double y);
    friend RealVariable &operator==(double y, RealVariable &x);
};

double solve(RealVariable x);

class ComplexVariable
{
private:
    double re;
    double im;

public:
    ////////////////////////////////operators ComplexVariable////////////////////////////////

    //operator + //

    friend ComplexVariable &operator+(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator+(ComplexVariable &x, std::complex<double> y);
    friend ComplexVariable &operator+(std::complex<double> y, ComplexVariable &x);
    friend ComplexVariable &operator+(ComplexVariable &x, double y);
    friend ComplexVariable &operator+(double y, ComplexVariable &x);

    //operator - //

    friend ComplexVariable &operator-(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator-(ComplexVariable &x, std::complex<double> y);
    friend ComplexVariable &operator-(std::complex<double> y, ComplexVariable &x);
    friend ComplexVariable &operator-(ComplexVariable &x, double y);
    friend ComplexVariable &operator-(double y, ComplexVariable &x);

    //operator * //

    friend ComplexVariable &operator*(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator*(ComplexVariable &x, double y);
    friend ComplexVariable &operator*(double y, ComplexVariable &x);

    //operator / //

    friend ComplexVariable &operator/(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator/(ComplexVariable &x, double y);
    friend ComplexVariable &operator/(double y, ComplexVariable &x);
    //operator ^ //

    friend ComplexVariable &operator^(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator^(ComplexVariable &x, double y);
    friend ComplexVariable &operator^(double y, ComplexVariable &x);

    //operator == //

    friend ComplexVariable &operator==(ComplexVariable &x, ComplexVariable &y);
    friend ComplexVariable &operator==(ComplexVariable &x, double y);
    friend ComplexVariable &operator==(double y, ComplexVariable &x);
};

double solve(ComplexVariable y);

} // namespace solver
