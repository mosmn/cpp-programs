/*
Write a program that will first ask users the number of students' info to be inserted into the program. Then ask for students names and IDs before writing in an appending structure into an external file name Student Info.txt. Figure 4 shows the example of program input and output. Figure 5 shows the stored data in Student Info.txt.
Number of students?: 3
Insert name 1: Johan Insert ID 1: SW123456
Insert name 2: Rachel Insert ID 2: CS654312
Insert name 3: Raj
Insert ID 3: SN345098
Press any key to continue..
Figure 4
Johan, SW123456 Rachel, CS654312 Raj, SN345098
Figure 5
[7 marks]
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int num, i;
    string name, id;
    cout << "Number of students?: ";
    cin >> num;
    
    for (i=0; i<num; i++) {
        cout << "Insert name " << i+1 << ": ";
        cin >> name;
        cout << "Insert ID " << i+1 << ": ";
        cin >> id;
        ofstream info("Student Info.txt", ios::app);
        info << name << ", " << id << endl;
        info.close();
    }
    
    return 0;
}