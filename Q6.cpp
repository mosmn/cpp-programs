/*
     Created by mohamed ahmed on 14/10/2022
     Copyright © 2019 Dr Badariah. All rights reserved. (sample)
     Date Created: 14/10/2022
 
Problem: Write a C++ program to calculate the final marks for a subject. There are three assessment types for the
subject. Below are the percentages of the marks that will be taken into account for the Total Final Marks.

----------------------------------------------------------------------------------------------------------------
Assessment Type                  Original Mark                    Percentage
----------------------------------------------------------------------------------------------------------------      
Final Exam                       100                              50
Quiz                             100                              30
Lab                              20                               20
----------------------------------------------------------------------------------------------------------------

You are required to write a full program with multiple functions that can be used to calculate the
percentages taken from the original marks. The program should ask the user to enter all the original
marks in main() and then send the input to the programmer-defined functions for marks conversion.
Below are the functions that are required:
• conv50() – this function calculates and converts the Final Exam marks into 50% and return
that converted marks to the function main().
• conv30() – this function calculates and converts the Quiz marks into 30% and return that
converted marks to the function main(). 


 IOFC:
      Input :
      1) finalExam
      2) quiz
      3) lab

      Output:
      1) finalExam (converted to 50%)
      2) quiz (converted to 30%)
      3) lab
      4) totalFinalMarks


      Formula: n/a

      Condition:
      1) n/a

 IO Format :

PASSED:

Enter the Final Exam mark: 85.5
Enter the Quiz mark: 90.5
Enter the Lab mark: 17.8

Final Exam     Quiz     Lab    :     Final Marks
42.75          27.15    17.8   :     87.7

You passed the subject with a final mark of 87.7

FAILED:

Enter the Final Exam mark: 45.5
Enter the Quiz mark: 40.5
Enter the Lab mark: 12.8

Final Exam     Quiz     Lab    :     Final Marks
22.75          12.15    12.8   :     47.7

You failed the subject with a final mark of 47.7

 Variables / constants:
    1) finalExam
      2) quiz
      3) lab
      4) totalFinalMarks

 Algorithm:
 
 BEGIN main()
      SET finalExam, quiz, lab, totalFinalMarks
      GET finalExam, quiz, lab

      SET finalExam = CALL conv50(finalExam)
      SET quiz = CALL conv30(quiz)
      COMPUTE totalFinalMarks = finalExam + quiz + lab

      DISPLAY Final Exam     Quiz     Lab    :     Final Marks
      DISPLAY finalExam, quiz, lab, totalFinalMarks

      IF totalFinalMarks >= 50
            DISPLAY You passed the subject with a final mark of totalFinalMarks
      ELSE
            DISPLAY You failed the subject with a final mark of totalFinalMarks
      END IF
   END main()

   BEGIN conv50(x)
      SET x
      COMPUTE x = x * 0.5
      RETURN x
   END conv50()

   BEGIN conv30(x)
      SET x
      COMPUTE x = x * 0.3
      RETURN x
   END conv30()
 
 Test data:

 1) Enter the Final Exam mark: 85.5
    Enter the Quiz mark: 90.5
    Enter the Lab mark: 17.8

    Final Exam     Quiz     Lab    :     Final Marks
    42.75          27.15    17.8   :     87.7

    You passed the subject with a final mark of 87.7

   2) Enter the Final Exam mark: 45.5
      Enter the Quiz mark: 40.5
      Enter the Lab mark: 12.8

      Final Exam     Quiz     Lab    :     Final Marks
      22.75          12.15    12.8   :     47.7

      You failed the subject with a final mark of 47.7

 I hereby declare that this C++ program is the result of
 my own work. No part of the program has been copied or
 altered from other student(s)or by other student(s)or from
 other sources such as books, Internet, etc.

 */

#include <iostream>
#include <iomanip>
using namespace std;
float conv50(float x);
float conv30(float x);

int main()
{
    float finalExam, quiz, lab, totalFinalMarks;
    cout << "Enter the Final Exam mark: ";
    cin >> finalExam;
    cout << "Enter the Quiz mark: ";
    cin >> quiz;
    cout << "Enter the Lab mark: ";
    cin >> lab;

    finalExam = conv50(finalExam);
    quiz = conv30(quiz);
    totalFinalMarks = finalExam + quiz + lab;

    cout << endl;
    cout << "Final Exam" << setw(14) << "Quiz" << setw(19) << "Lab" << setw(20) << ": " << setw(17) << "Final Marks" << endl;
    cout << fixed << setprecision(2) << finalExam << setw(20) << quiz << setw(20) << lab << setw(19) << ": " << setw(10) << totalFinalMarks << endl;

    if (totalFinalMarks >= 50)
    {
        cout << endl;
        cout << "You passed the subject with a final mark of " << totalFinalMarks << endl;
    }
    else
    {
        cout << endl;
        cout << "You failed the subject with a final mark of " << totalFinalMarks << endl;
    }

    return 0;
}

float conv50(float x)
{
    x = x * 0.5;
    return x;
}

float conv30(float x)
{
    x = x * 0.3;
    return x;
}


//BS-OK






