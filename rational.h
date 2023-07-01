#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

class Rational
{
   public:
      /********************************
       ** CONSTRUCTORS & DESTRUCTORS **
       ********************************/

      Rational();           //constructor
      Rational(int);        //constructor
      Rational(int, int);   //constructor

      /***************
       ** ACCESSORS **
       ***************/

      const Rational add(const Rational &) const;
      const Rational subtract(const Rational &) const;
      const Rational multiply(const Rational &) const;
      const Rational divide(const Rational &) const;
      void display() const;
      friend ostream& operator<<(ostream& output, Rational& number);
      string to_string(Rational r);
      bool operator==(const Rational r) const;
      bool operator<(const Rational r) const;

    private:
       int numer;    // IN - numerator of fraction
       int denom;    // IN - denominator of fraction
};

/*******************************************************************************
 * Rational Class
 *  This class represents a rational number object. It manages 2 attributes,
 *  numer and denom.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Rational();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Rational(int);
 * Constructor; Initialize class attributes
 * Parameters: int
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Rational(int, int);
 * Constructor; Initialize class attributes
 * Parameters: int, int
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * const Rational add(const Rational &) const;
 *
 * Accessor; This method will add two rational numbers
 * -----------------------------------------------------------------------------
 * Parameters: const Rational &
 * -----------------------------------------------------------------------------
 * Return: const Rational
 ******************************************************************************/

/*******************************************************************************
 * const Rational subtract(const Rational &) const;
 *
 * Accessor; This method will subtract two rational numbers
 * -----------------------------------------------------------------------------
 * Parameters: const Rational &
 * -----------------------------------------------------------------------------
 * Return: const Rational
 ******************************************************************************/

/*******************************************************************************
 * const Rational multiply(const Rational &) const;
 *
 * Accessor; This method will multipy two rational numbers
 * -----------------------------------------------------------------------------
 * Parameters: const Rational &
 * -----------------------------------------------------------------------------
 * Return: const Rational
 ******************************************************************************/

/*******************************************************************************
 * const Rational divide(const Rational &) const;
 *
 * Accessor; This method will divide two rational numbers
 * -----------------------------------------------------------------------------
 * Parameters: const Rational &
 * -----------------------------------------------------------------------------
 * Return: const Rational
 ******************************************************************************/

/*******************************************************************************
 * void display() const
 *
 * Accessor; This method will print out the Rational object.
 * -----------------------------------------------------------------------------
 * Parameters: n/a
 * -----------------------------------------------------------------------------
 * Return: n/a
 ******************************************************************************/

#endif // RATIONAL_H
