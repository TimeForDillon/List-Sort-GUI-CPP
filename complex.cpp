#include "complex.h"
#include <sstream>

const Complex i(0, 1);      // CONST - complex i

/*******************************************************************************
 * Constructor Complex: Class Complex
 *______________________________________________________________________________
 * This constructor sets the complex number to 0. The real part and imaginary
 *  part will both be set to 0. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Complex::Complex()
{
    // PROCESSING - set real to 0 and imaginary to 0
    real = 0;
    imaginary = 0;
}

/*******************************************************************************
 * Constructor Complex: Class Complex
 *______________________________________________________________________________
 * This constructor sets the real part to the input and the imaginary part
 *  to 0. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      double real_part: real number part of complex number
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Complex::Complex(double real_part)      // IN - real part of complex number
{
    // PROCESSING - set real to input and imaginary to 0
    real = real_part;
    imaginary = 0;
}

/*******************************************************************************
 * Constructor Complex: Class Complex
 *______________________________________________________________________________
 * This constructor sets the real part to the input and the imaginary part
 *  to the input. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      double real_part     : real number part of complex number
 *      double imaginary_part: imaginary number part of complex number
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Complex::Complex(double real_part,          // IN - real part of complex number
                 double imaginary_part)     // IN - imaginary part of complex
{
    // PROCESSING - set real to input and imaginary to input
    real = real_part;
    imaginary = imaginary_part;
}

/*******************************************************************************
 * Method operator==: Class Complex
 *______________________________________________________________________________
 * This method compares equality of two complex objects. returns int.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex number: complex number
 *
 * POST-CONDITIONS
 *      int: returns 1 for true 0 for false
 ******************************************************************************/

int Complex::operator==(const Complex number) const     // IN - complex object
{
    // PROCESSING - if equal return 1 not equal return 0
    if ((real == number.real) && (imaginary == number.imaginary)) return 1;
    else return 0;

}

/*******************************************************************************
 * Method operator+: Class Complex
 *______________________________________________________________________________
 * This method adds two complex objects. returns complex obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex number: complex number
 *
 * POST-CONDITIONS
 *      const Complex: returns sum as a complex number
 ******************************************************************************/

const Complex Complex::operator+(const Complex number) const // IN - comp object
{
    // PROCESSING - calculate sum
    Complex sum;
    sum.real = real + number.real;
    sum.imaginary = imaginary + number.imaginary;
    return sum;
}

/*******************************************************************************
 * Method operator-: Class Complex
 *______________________________________________________________________________
 * This method subtracts two complex objects. returns complex obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex number: complex number
 *
 * POST-CONDITIONS
 *      const Complex: returns diff as a complex number
 ******************************************************************************/

const Complex Complex::operator-(const Complex number) const // IN - comp object
{
    // PROCESSING - calculate difference
    Complex difference;
    difference.real = real - number.real;
    difference.imaginary = imaginary - number.imaginary;
    return difference;
}

/*******************************************************************************
 * Method operator*: Class Complex
 *______________________________________________________________________________
 * This method multiplys two complex objects. returns complex obj.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex number: complex number
 *
 * POST-CONDITIONS
 *      const Complex: returns product as a complex number
 ******************************************************************************/

const Complex Complex::operator*(const Complex number) const // IN - comp object
{
    // PROCESSING - calculate product
    Complex product;
    product.real = ((real * number.real) - (imaginary * number.imaginary));
    product.imaginary = ((real * number.imaginary) + (imaginary * number.real));
    return product;
}

/*******************************************************************************
 * Method operator>>: Class Complex
 *______________________________________________________________________________
 * This method allows the use of input into obj. returns istream&.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex& number: complex number
 *      istream& input       : user input
 *
 * POST-CONDITIONS
 *      istream&: user input
 ******************************************************************************/

istream& operator>>(istream& input,     // IN - user input
                    Complex& number)    // IN - complex object
{
    // PROECSSING - override >> for input
    char iSymbol;
    input >> number.real >> number.imaginary >> iSymbol;
    return input;
}

/*******************************************************************************
 * Method operator<<: Class Complex
 *______________________________________________________________________________
 * This method allows the use of output into obj. returns ostream&.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Complex& number: complex number
 *      ostream& output      : output
 *
 * POST-CONDITIONS
 *      ostream&: output
 ******************************************************************************/

ostream& operator<<(ostream& output,    // IN - for output
                    Complex& number)    // IN - complex object
{
    // PROECSSING - override << for output
    if(number.imaginary >= 0)
        output << number.real << "+" << number.imaginary << "i";
    else
        output << number.real << "-" << (number.imaginary*-1) << "i";
    return output;
}

/*******************************************************************************
 * Method display: Class Complex
 *______________________________________________________________________________
 * This method prints out the complex number in correct format. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Complex::display()const
{
    // PROCESSING - output complex
    if(imaginary >= 0) cout << real << "+" << imaginary << "i";
    else cout << real << "-" << (imaginary*-1) << "i";
}

string Complex::to_string(Complex c)
{
    ostringstream ss;
    ss << c;
    return ss.str();
}

bool Complex::operator<(const Complex number) const
{
    if(this->real < number.real) return true;
    else return false;
}
