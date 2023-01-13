/*
     Created by mohamed ahmed on 14/10/2022
     Copyright © 2019 Dr Badariah. All rights reserved. (sample)
     Date Created: 14/10/2022
 
Problem: You are given 10 pieces of RM50 BB1M book voucher to purchase books. Currently, there are 3
bookstores which doing promotion on usage of BB1M book voucher. Write a program to calculate the
best value of voucher usage. Your program MUST validate the input of the voucher amount. For instance,
buyer cannot enter an amount such as RM460 since every voucher minimum value is RM50. Implement
multiple programmer-defined functions (of various types) in the program. Refer to Table below for
promotion:

---------------------------------------------------------------------------------------------
Name of bookstore                            Promotion
--------------------------------------------------------------------------------------------
MPA                                          Spend RM250 get RM50 cash voucher
Kinokaya                                     Spend RM300 get RM50 cash voucher
Pupil                                        Spend RM150 get RM20 cash voucher
---------------------------------------------------------------------------------------------

 IOFC:
      Input :
      1) voucherAmount

      Output:
      1) bookstoreName with the best value of voucher usage || invalid voucher amount

      Formula:
      1) a = (10*50)/250
      2) b = (10*50)/300
      3) c = (10*20)/150

      Condition:
      1) n/a

 IO Format :
VALID DATA:

******************************************
  Best Value Of Voucher Usage Determiner
******************************************

Enter the voucher amount: 500
MPA gives the best voucher usage

INVALID DATA:

******************************************
  Best Value Of Voucher Usage Determiner
******************************************

Enter the voucher amount: 460
Voucher amount invalid

 Variables / constants:
    1) voucherAmount
      2) a
      3) b
      4) c
      5) MPA
      6) Kinokaya
      7) Pupil

 Algorithm:
 
 BEGIN main()
      SET VoucherAmount, MPA, Kinokaya, Pupil

      DISPLAY "******************************************"
      DISPLAY "  Best Value Of Voucher Usage Determiner"
      DISPLAY "******************************************"

      voucherAmount = CALL getVoucherAmount()
      MPA = CALL getMPA()
      Kinokaya = CALL getKinokaya()
      Pupil = CALL getPupil()

      IF voucherAmount != 50 && voucherAmount != 100 && voucherAmount != 150 && voucherAmount != 200 && voucherAmount != 250 && voucherAmount != 300 && voucherAmount != 350 && voucherAmount != 400 && voucherAmount != 450 && voucherAmount != 500
         DISPLAY "Voucher amount invalid"
      ELSE
         CALL getBestValue(MPA, Kinokaya, Pupil)
      END IF

   END main()

   BEGIN getVoucherAmount()
      DISPLAY "Enter the voucher amount: "
      INPUT voucherAmount
      RETURN voucherAmount
   END getVoucherAmount()

   BEGIN getMPA()
      a = (10*50)/250
      RETURN a
   END getMPA()

   BEGIN getKinokaya()
      b = (10*50)/300
      RETURN b
   END getKinokaya()

   BEGIN getPupil()
      c = (10*20)/150
      RETURN c
   END getPupil()

   BEGIN getBestValue(MPA, Kinokaya, Pupil)
      IF MPA > Kinokaya && MPA > Pupil
         DISPLAY "MPA gives the best voucher usage"
      ELSE IF Kinokaya > MPA && Kinokaya > Pupil
         DISPLAY "Kinokaya gives the best voucher usage"
      ELSE IF Pupil > MPA && Pupil > Kinokaya
         DISPLAY "Pupil gives the best voucher usage"
      END IF
   END getBestValue(MPA, Kinokaya, Pupil)
 
 Test data:

 1) input: 500
    output: MPA gives the best voucher usage

   2) input: 460
      output: Voucher amount invalid

 I hereby declare that this C++ program is the result of
 my own work. No part of the program has been copied or
 altered from other student(s)or by other student(s)or from
 other sources such as books, Internet, etc.

 */

#include <iostream>
#include <iomanip>
using namespace std;
float getVoucherAmount();
float getMPA();
float getKinokaya();
float getPupil();
void getBestValue(float x, float y, float z);

int main()
{
    float voucherAmount=0.0, MPA=0.0, Kinokaya=0.0, Pupil=0.0;

    cout << "******************************************" << endl;
    cout << "  Best Value Of Voucher Usage Determiner" << endl;
    cout << "******************************************" << endl;

    voucherAmount = getVoucherAmount();
    MPA = getMPA();
    Kinokaya = getKinokaya();
    Pupil = getPupil();

    if (voucherAmount != 50 && voucherAmount != 100 && voucherAmount != 150 && voucherAmount != 200 && voucherAmount != 250 && voucherAmount != 300 && voucherAmount != 350 && voucherAmount != 400 && voucherAmount != 450 && voucherAmount != 500)
    {
        cout << "Voucher amount invalid" << endl;
    }
    else
    {
        getBestValue(MPA, Kinokaya, Pupil);
    }

    return 0;
}

float getVoucherAmount()
{
    float v;
    cout << "Enter the voucher amount: ";
    cin >> v;
    return v;
}

float getMPA()
{
    float a;
    a = ((10*50)/250);
    return a;
}

float getKinokaya()
{
    float b;
    b = ((10*50)/300);
    return b;
}

float getPupil()
{
    float c;
    c = ((10*20)/150);
    return c;
}

void getBestValue(float x, float y, float z)
{
    if (x > y && x > z)
        cout << "MPA gives the best voucher usage" << endl;
    else if (y > x && y > z)
         cout << "Kinokaya gives the best voucher usage" << endl;
      else
         cout << "Pupil gives the best voucher usage" << endl;
}













