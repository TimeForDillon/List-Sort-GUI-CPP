#include "date.h"
#include <sstream>

/*******************************************************************************
 * Constructor Date: Class Date
 *______________________________________________________________________________
 * This constructor initializes the date to a default value. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Date::Date()
{
    // PROCESSING - sets day, month, and year to default values
    day = 1;
    month = 1;
    monthName = "January";
    year = 2000;
}

/*******************************************************************************
 * Constructor Date: Class Date
 *______________________________________________________________________________
 * This constructor initializes the date to a numeric date value depending on
 * the input values. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned m: numeric month value
        unsigned d: numeric day value
        unsigned y: numeric year value
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Date::Date(unsigned m,      // IN - numeric month value
           unsigned d,      // IN - numeric day value
           unsigned y)      // IN - numeric year value
{
    bool dateCorrected;        // CALC - tracks invalid inputs

    dateCorrected = false;

    // PROCESSING - corrects out of bounds month
    if((m > 0) && (m <= 12))
    {
        // PROCESSING - set month to input
        month = m;
    }
    else if(m > 12)
    {
        // PROCESSING - set month to 12 if over 12 and track invalid input
        month = 12;
        dateCorrected = true;
    }
    else if(m <= 0)
    {
        // PROCESSING - set month to 1 if 0 or below and track invalid input
        month = 1;
        dateCorrected = true;
    }

    // PROCESSING - set month name for numeric value
    // name() - returns string month name for numeric month value
    monthName = name(month);

    // PROECSSING - corrects out of bounds day
    if((d > 0) && (d <= daysPerMonth(month,y)))
    {
        // PROCESSING - sets day to input
        day = d;
    }
    // daysPerMonth() - returns number of days in given month
    else if(d > daysPerMonth(m,y))
    {
        // PROCESSING - sets day to last day of month if over last day
        // daysPerMonth() - returns number of days in given month
        day = daysPerMonth(m,y);
        dateCorrected = true;
    }
    else
    {
        // PROCESSING - sets day to 1 if 0 or below and tracks correction
        day = 1;
        dateCorrected = true;
    }

    // PROCESSING - sets year to input
    year = y;

    // PROCESSING - run if there was a correction
    if(dateCorrected == true)
    {
        // OUTPUT - correction output
        cout << "Invalid date values: Date corrected to "
             << month << "/" << day << "/" << year << ".\n";
    }
}

/*******************************************************************************
 * Constructor Date: Class Date
 *______________________________________________________________________________
 * This constructor initializes the date to an alphabet date value depending on
 * the input values. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const string &mn: alphabetic month value
        unsigned d      : numeric day value
        unsigned y      : numeric year value
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Date::Date(const string &mn,    // IN - alphabetic month value
           unsigned d,          // IN - numeric day value
           unsigned y)          // IN - numeric year value
{
    bool dateCorrected;     // CALC - tracts invalid month input
    bool dayCorrected;      // CALC - tracts invlaid day input
    unsigned m;             // CALC - numeric value of month name

    // number() - returns numeric month value for month name
    m = number(mn);
    dateCorrected = false;
    dayCorrected = false;

    // PROCESSING - run for error input month name otherwise set month to input
    if(m == 0)
    {
        // PROECSSING - track month correction
        dateCorrected = true;
    }
    // PROCESSING - set month to input
    else month = m;

    // name() - returns month name for numeric month value
    monthName = name(month);

    // PROCESSING - corrects out of bounds day
    // daysPerMonth() - returns number of days in given month
    if((d > 0) && (d <= daysPerMonth(m,y)))
    {
        day = d;
    }
    // daysPerMonth() - returns number of days in given month
    else if(d > daysPerMonth(m,y))
    {
        // PROCESSING - set day to last day of month if over & track correction
        // daysPerMonth() - returns number of days in given month
        day = daysPerMonth(m,y);
        dayCorrected = true;
    }
    else
    {
        // PROCESSING - set day to first day of month if 0 or less
        day = 1;
        dayCorrected = true;
    }

    // PROCESSING - set year to input
    year = y;

    // PROCESSING - run if month correction
    if(dateCorrected == true)
    {
        // PROCESSING - set date to default correction
        day = 1;
        month = 1;
        year = 2000;
        // OUTPUT - default correction
        cout << "Invalid month name: the Date was set to 1/1/2000.\n";
    }
    // PROCESSING - run if day correction
    else if(dayCorrected == true)
    {
        // OUTPUT - corrected date
        cout << "Invalid date values: Date corrected to "
             << month << "/" << day << "/" << year << ".\n";
    }
}

/*******************************************************************************
 * Method printNumeric: Class Date
 *______________________________________________________________________________
 * This method prints out the numeric date value. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Date::printNumeric() const
{
    // OUTPUT - output numeric date
    cout << month << "/" << day << "/" << year;
}

/*******************************************************************************
 * Method printAlpha: Class Date
 *______________________________________________________________________________
 * This method prints out the alphabetic date value. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Date::printAlpha() const
{
    // OUTPUT - output date as word
    cout << monthName << " " << day << ", " << year;
}

/*******************************************************************************
 * Method isLeap: Class Date
 *______________________________________________________________________________
 * This method determines whether or not the given year is a leap year. returns
 * true for leap year and false for no leap year
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned y: numeric year value
 *
 * POST-CONDITIONS
 *      bool      : leap year/not leap year
 ******************************************************************************/

bool Date::isLeap(unsigned y) const     // IN - numeric year value
{
    // PROCESSING - tests for leap year.
    if ((y % 4) == 0)
    {
        if ((y % 100) == 0)
        {
            if ((y % 400) == 0) return true;
            else return false;
        }
        else return true;
    }
    else return false;

}

/*******************************************************************************
 * Method daysPerMonth: Class Date
 *______________________________________________________________________________
 * This method determines how many days are in a given month. returns the number
 * of days as an unsigned.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned m: numeric month value
 *      unsigned y: numeric year value
 *
 * POST-CONDITIONS
 *      unsigned  : number of days
 ******************************************************************************/

unsigned Date::daysPerMonth(unsigned m,         // IN - numeric month value
                            unsigned y) const   // IN - numeric year value
{
    // PROCESSING - return number of days in given numeric month value
    switch(m)
    {
    default: return 0;
    case 1: return 31;
        // isLeap() - determines if given year is leap year
    case 2: if(isLeap(y)) return 29;
            else return 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    }

}

/*******************************************************************************
 * Method name: Class Date
 *______________________________________________________________________________
 * This method determines the month name for the given numeric month value
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned m: numeric month value
 *
 * POST-CONDITIONS
 *      string    : month name
 ******************************************************************************/

string Date::name(unsigned m) const     // IN - numeric month value
{
    // PROCESSING - return month name for given month numeric value
    switch(m)
    {
    default: return "January";
    case 1: return "January";
    case 2: return "February";
    case 3: return "March";
    case 4: return "April";
    case 5: return "May";
    case 6: return "June";
    case 7: return "July";
    case 8: return "August";
    case 9: return "September";
    case 10: return "October";
    case 11: return "November";
    case 12: return "December";
    }
}

/*******************************************************************************
 * Method number: Class Date
 *______________________________________________________________________________
 * This method determines the numeric month value for the given numeric month
 * name
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const string &mn: month name
 *
 * POST-CONDITIONS
 *      unsigned        : numeric month value
 ******************************************************************************/

unsigned Date::number(const string &mn) const   // IN - month name
{
    // PROCESSING - return numeric month value for given month name
    if((mn == "january") || (mn == "January")) return 1;
    else if((mn == "february") || (mn == "February")) return 2;
    else if((mn == "march") || (mn == "March")) return 3;
    else if((mn == "april") || (mn == "April")) return 4;
    else if((mn == "may") || (mn == "May")) return 5;
    else if((mn == "june") || (mn == "June")) return 6;
    else if((mn == "july") || (mn == "July")) return 7;
    else if((mn == "august") || (mn == "August")) return 8;
    else if((mn == "september") || (mn == "September")) return 9;
    else if((mn == "october") || (mn == "October")) return 10;
    else if((mn == "november") || (mn == "November")) return 11;
    else if((mn == "december") || (mn == "December")) return 12;
    else return 0;
}

ostream& operator<<(ostream& output,    // IN - for output
                    Date& number)    // IN - date object
{
    // PROECSSING - override << for output
    output << number.month << "/" << number.day << "/" << number.year;
    return output;
}

string Date::to_string(Date d)
{
    ostringstream ss;
    ss << d;
    return ss.str();
}

bool Date::operator==(const Date d) const
{
    if(this->day == d.day && this->month == d.month && this->year == d.year)
        return true;
    else return false;
}

bool Date::operator<(const Date d) const
{
    if(this->year < d.year) return true;
    else if(this->year == d.year)
    {
        if(this->month < d.month) return true;
        else if(this->month == d.month)
        {
            if(this->day < d.day) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}
