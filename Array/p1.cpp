/*
Problem: Write a program to read four (4) Celsius and Fahrenheit degrees and displays a table of these
degrees with their corresponding degrees Fahrenheit and Kelvin. Implement the program using
1D array

 IOFC:
      Input :
      1) degreeCelsius
      2) degreeFahrenheit

      Output:
      1) degreeCelsius in Fahrenheit
      2) degreeFahrenheit in Kelvin

      Formula:
      1) degreeFahrenheit = (degreeCelsius * 9/5) + 32
      2) degreeKelvin = (degreeFahrenheit + 459.67) * 5/9

      Condition:
      1) i < 4

 IO Format :

Enter four Celsius and Fahrenheit degrees:
x.xx     y.yy
x.xx     y.yy
x.xx     y.yy
x.xx     y.yy

Table of Fahrenheit and Kelvin degrees
Fahrenheit     Kelvin
----------------------------------------
h.hhh          z.zzzz
h.hhh          z.zzzz
h.hhh          z.zzzz
h.hhh          z.zzzz
----------------------------------------

 Variables / constants:
    1) degreeCelsius
      2) degreeFahrenheit
      3) celciusToFahrenheit
      4) fahrenheitToKelvin

 Algorithm:
 
 BEGIN
   SET degreeCelsius[4] = {0.0}, degreeFahrenheit[4] = {0.0}, celciusToFahrenheit[4] = {0.0}, fahrenheitToKelvin[4] = {0.0}
   
   FOR i = 0 to 3
     READ degreeCelsius[i]
     READ degreeFahrenheit[i]
   ENDFOR

   FOR i = 0 to 3
     celciusToFahrenheit[i] = (degreeCelsius[i] * 9/5) + 32
     fahrenheitToKelvin[i] = (degreeFahrenheit[i] + 459.67) * 5/9
   ENDFOR

   PRINT "Table of Fahrenheit and Kelvin degrees"
   PRINT "Fahrenheit     Kelvin"
   PRINT "----------------------------------------"
   FOR i = 0 to 3
     PRINT celciusToFahrenheit[i] << "          " << fahrenheitToKelvin[i]
   ENDFOR
   PRINT "----------------------------------------"
 END

 
 Test data:

 1) Enter four Celsius and Fahrenheit degrees:
    0.00     32.00
    10.00    50.00
    20.00    68.00
    30.00    86.00

    Table of Fahrenheit and Kelvin degrees
    Fahrenheit     Kelvin
    ----------------------------------------
    32.000          273.150
    50.000          283.150
    68.000          293.150
    86.000          303.150
    ----------------------------------------

   2) Enter four Celsius and Fahrenheit degrees:
      55.00    131.00
      65.00    149.00
      75.00    167.00
      85.00    185.00

      Table of Fahrenheit and Kelvin degrees
      Fahrenheit     Kelvin
      ----------------------------------------
      131.000          403.150
      149.000          413.150
      167.000          423.150
      185.000          433.150
      ----------------------------------------
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      double degreeCelsius[4] = {0.0}, degreeFahrenheit[4] = {0.0}, celciusToFahrenheit[4] = {0.0}, fahrenheitToKelvin[4] = {0.0};
      
      cout << "Enter four Celsius and Fahrenheit degrees: " << endl;
      for (int i = 0; i < 4; i++)
      {
         cin >> degreeCelsius[i];
         cin >> degreeFahrenheit[i];
      }
      
      for (int i = 0; i < 4; i++)
      {
         celciusToFahrenheit[i] = (degreeCelsius[i] * 9/5) + 32;
         fahrenheitToKelvin[i] = (degreeFahrenheit[i] + 459.67) * 5/9;
      }
      
      cout << "\nTable of Fahrenheit and Kelvin degrees" << endl;
      cout << "Fahrenheit     Kelvin" << endl;
      cout << "----------------------------------------" << endl;
      for (int i = 0; i < 4; i++)
      {
         cout << fixed << setprecision(3) << celciusToFahrenheit[i] << "          " << fahrenheitToKelvin[i] << endl;
      }
      cout << "----------------------------------------" << endl;
      
      return 0;
}