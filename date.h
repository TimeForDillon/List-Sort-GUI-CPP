/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * ASSIGNMENT 3  : DATE CLASS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/15/2020
 ******************************************************************************/

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

class Date
{
    public:
        /********************************
         ** CONSTRUCTORS & DESTRUCTORS **
         ********************************/

        Date();                                         // constructor
        Date(unsigned m, unsigned d, unsigned y);       // constructor
        Date(const string &mn, unsigned d, unsigned y); // constructor

        /***************
         ** ACCESSORS **
         ***************/

        void printNumeric() const;
        void printAlpha() const;

    private:
        unsigned day;       // IN - day of the month in number form
        unsigned month;     // IN - month in number form
        string monthName;   // IN - month in word form
        unsigned year;      // IN - year in number form

        /***************
         ** ACCESSORS **
         ***************/

        bool isLeap(unsigned y) const;
        unsigned daysPerMonth(unsigned m, unsigned y) const;
        string name(unsigned m) const;
        unsigned number(const string &mn) const;
public:
        friend ostream& operator<<(ostream& output, Date& number);
        string to_string(Date d);
        bool operator==(const Date d) const;
        bool operator<(const Date d) const;
};

/*******************************************************************************
 * Date Class
 *  This class represents the calander date. This class aims to properly output
 *  the date in numeric and word forms.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Date();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Date(unsigned, unsigned, unsigned);
 * Constructor; Initialize class attributes
 * Parameters: unsigned, unsigned, unsigned
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Date(const string &, unsigned, unsigned);
 * Constructor; Initialize class attributes
 * Parameters: const string &, unsigned, unsigned
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * void printNumeric() const;
 *
 * Accessor; This method prints out the date in numeric form
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void printAlpha() const;
 *
 * Accessor; This method prints out the date in word form
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * bool isLeap(unsigned) const;
 *
 * Accessor; This method determins whetere or not the input year is a leap year
 * -----------------------------------------------------------------------------
 * Parameters: unsigned
 * -----------------------------------------------------------------------------
 * Return: bool
 ******************************************************************************/

/*******************************************************************************
 * unsigned daysPerMonth(unsigned, unsigned) const;
 *
 * Accessor; This method determins the number of days in a given month
 * -----------------------------------------------------------------------------
 * Parameters: unsigned, unsigned
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/

/*******************************************************************************
 * string name(unsigned) const;
 *
 * Accessor; This method takes in the numeric month and returns its name
 * -----------------------------------------------------------------------------
 * Parameters: unsigned
 * -----------------------------------------------------------------------------
 * Return: string
 ******************************************************************************/

/*******************************************************************************
 * unsigned number(const string &) const;
 *
 * Accessor; This method takes in the month name and returns its number equiv.
 * -----------------------------------------------------------------------------
 * Parameters: const string &
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/

#endif // DATE_H
