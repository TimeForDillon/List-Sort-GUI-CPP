#include "rational.h"
#include <sstream>

/*******************************************************************************
 * Constructor Rational: Class Rational
 *______________________________________________________________________________
 * This constructor initializes the objects numer and denom. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Rational::Rational()
{
    numer = 0;
    denom = 1;
}

/*******************************************************************************
 * Constructor Rational: Class Rational
 *______________________________________________________________________________
 * This constructor initializes the objects denom and sets numer to user entered
 * numerator. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      int numerator: int value that will be stored in objects numer
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Rational::Rational(int numerator)   // IN - int numer value
{
    numer = numerator;
    denom = 1;
}

/*******************************************************************************
 * Constructor Rational: Class Rational
 *______________________________________________________________________________
 * This constructor initializes the objects. Sets numer to user entered
 * numerator and denom to user entered denominator. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      int numerator: int value that will be stored in objects numer
 *      int denominator: int value that will be stored in objects denom
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/


Rational::Rational(int numerator,       // IN - int numer value
                   int denominator)     // IN - int denom value
{
    numer = numerator;
    denom = denominator;
}

/*******************************************************************************
 * Method display: Class Rational
 *______________________________________________________________________________
 * This method prints out objects numer/denom. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Rational::display() const
{
    // OUTPUT - output Rational obj fraction
    cout << numer << "/" << denom;
}

/*******************************************************************************
 * Method add: Class Rational
 *______________________________________________________________________________
 * This method adds two Rational objects. returns rational obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Rational &fraction: Rational object holding numer and denom.
 *
 * POST-CONDITIONS
 *      returns Rational object after perfoming operation.
 ******************************************************************************/

const Rational Rational::add(const Rational &fraction) const // IN - ratio obj
{
    int numerator;      // CALC - new numerator
    int denominator;    // CALC - new denom

    // PROCESSING - calculate sum
    numerator = ((numer * fraction.denom) + (denom * fraction.numer));
    denominator = (denom * fraction.denom);

    return Rational(numerator,denominator);
}

/*******************************************************************************
 * Method subtract: Class Rational
 *______________________________________________________________________________
 * This method subtracts two Rational objects. returns rational obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Rational &fraction: Rational object holding numer and denom.
 *
 * POST-CONDITIONS
 *      returns Rational object after perfoming operation.
 ******************************************************************************/

const Rational Rational::subtract(const Rational &fraction) const//IN -ratio obj
{
    int numerator;      // CALC - new numerator
    int denominator;    // CALC - new denom

    // PROCESSING - calculate difference
    numerator = ((numer * fraction.denom) - (denom * fraction.numer));
    denominator = (denom * fraction.denom);

    return Rational(numerator,denominator);
}

/*******************************************************************************
 * Method multiply: Class Rational
 *______________________________________________________________________________
 * This method multiplys two Rational objects. returns rational obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Rational &fraction: Rational object holding numer and denom.
 *
 * POST-CONDITIONS
 *      returns Rational object after perfoming operation.
 ******************************************************************************/

const Rational Rational::multiply(const Rational &fraction) const//IN -ratio obj
{
    int numerator;      // CALC - new numerator
    int denominator;    // CALC - new denom

    // PROCESSING - calculate product
    numerator = (numer * fraction.numer);
    denominator = (denom * fraction.denom);

    return Rational(numerator,denominator);
}

/*******************************************************************************
 * Method divide: Class Rational
 *______________________________________________________________________________
 * This method divides two Rational objects. returns rational obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Rational &fraction: Rational object holding numer and denom.
 *
 * POST-CONDITIONS
 *      returns Rational object after perfoming operation.
 ******************************************************************************/

const Rational Rational::divide(const Rational &fraction) const //IN - ratio obj
{
    int numerator;      // CALC - new numerator
    int denominator;    // CALC - new denom

    // PROCESSING - calculate quotient
    numerator = (numer * fraction.denom);
    denominator = (denom * fraction.numer);

    return Rational(numerator,denominator);
}

ostream& operator<<(ostream& output,    // IN - for output
                    Rational& number)    // IN - rational object
{
    // PROECSSING - override << for output
    output << number.numer << "/" << number.denom;
    return output;
}

string Rational::to_string(Rational r)
{
    ostringstream ss;
    ss << r;
    return ss.str();
}

bool Rational::operator==(const Rational r) const
{
    if(this->numer == r.numer && this->denom == r.denom) return true;
    else return false;
}

bool Rational::operator<(const Rational r) const
{
    double left, right;
    left = this->numer / this->denom;
    right = r.numer / r.denom;
    if(left < right) return true;
    else return false;
}
