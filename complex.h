#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
private:
    double real;            // IN - real portion of complex number
    double imaginary;       // IN - imaginary portion of complex number
public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    Complex();
    Complex(double real_part);
    Complex(double real_part, double imaginary_part);

    /***************
     ** ACCESSORS **
     ***************/

    int operator==(const Complex number) const;
    const Complex operator+(const Complex number) const;
    const Complex operator-(const Complex number) const;
    const Complex operator*(const Complex number) const;
    friend istream& operator>>(istream& input, Complex& number);
    friend ostream& operator<<(ostream& output, Complex& number);
    void display()const;
    string to_string(Complex c);
    bool operator<(const Complex number) const;
};

/*******************************************************************************
 * Complex Class
 *  This class represents a complex number. This class makes it possible to
 *  perform many functions on complex numbers.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Complex();
 * Constructor; Sets real to 0 and imaginary to 0.
 * Parameters: none
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Complex(double real_part);
 * Constructor; Sets real to input and imaginary to 0.
 * Parameters: double
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Complex(double real_part, double imaginary_part);
 * Constructor; Sets real to input and imaginary to input.
 * Parameters: double, double
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * int operator==(const Complex number) const;
 *
 * Accessor; Compares complex for equality.
 * -----------------------------------------------------------------------------
 * Parameters: const Complex
 * -----------------------------------------------------------------------------
 * Return: int
 ******************************************************************************/

/*******************************************************************************
 * const Complex operator+(const Complex number) const;
 *
 * Accessor; adds two complex objeccts.
 * -----------------------------------------------------------------------------
 * Parameters: const Complex
 * -----------------------------------------------------------------------------
 * Return: const Complex
 ******************************************************************************/

/*******************************************************************************
 * const Complex operator-(const Complex number) const;
 *
 * Accessor; subtracts two complex objeccts.
 * -----------------------------------------------------------------------------
 * Parameters: const Complex
 * -----------------------------------------------------------------------------
 * Return: const Complex
 ******************************************************************************/

/*******************************************************************************
 * const Complex operator*(const Complex number) const;
 *
 * Accessor; multiplys two complex objeccts.
 * -----------------------------------------------------------------------------
 * Parameters: const Complex
 * -----------------------------------------------------------------------------
 * Return: const Complex
 ******************************************************************************/

/*******************************************************************************
 * friend istream& operator>>(istream& input, Complex& number);
 *
 * Accessor; overrides >> for input
 * -----------------------------------------------------------------------------
 * Parameters: istream&, Complex&
 * -----------------------------------------------------------------------------
 * Return: istream&
 ******************************************************************************/

/*******************************************************************************
 * friend ostream& operator<<(ostream& output, Complex& number);
 *
 * Accessor; overrides << for output
 * -----------------------------------------------------------------------------
 * Parameters: ostream&, Complex&
 * -----------------------------------------------------------------------------
 * Return: ostream&
 ******************************************************************************/

/*******************************************************************************
 * void display()const;
 *
 * Accessor; Prints out complex number in correct form.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

#endif // COMPLEX_H
