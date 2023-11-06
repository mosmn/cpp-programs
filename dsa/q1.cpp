/*Subject code : CSEB3213 Data Structure & Algorithms 
  Section      : 01B 
  Student name : Mohamed ahmed mohamed osman
  Student ID no: SW01082449
  Question no  : 3 */
  
//Question 3(1)
#include<iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

//Question 3(2)
struct student{
 string sname;
 string id;
 float carrymark;
 float finalexam;
 float totalmark;
 string grade;
};

int menu() {
	int choice;
	cout << "\n::GRADING PROGRAM MENU::\n";
	cout << "1. Add student record\n";
	cout << "2. Display student record\n";
	cout << "3. Delete student record\n";
	cout << "4. Update student record\n";
	cout << "5. Exit program\n";
	cout << "Enter choice: ";
	cin >> choice;
	return choice;
}

void newRecord (student *data) {
    cout << "Enter name:" << endl;
    cin.ignore();
    getline(cin, data->sname);
    cout << "Enter id:" << endl;
    cin >> data->id;
    cout << "Enter carrymark:" << endl;
    cin >> data->carrymark;
    cout << "Enter final:" << endl;
    cin >> data->finalexam;
    
    data->totalmark = data->carrymark + data->finalexam;
    
    if(data->carrymark >= 12 && data->finalexam >= 8 && data->totalmark >= 40)
        data->grade = "Pass";
    else
        data->grade = "Fail";
}

void displayRecord (list<student> rec) {
    int c;
    cout << "Select option 1 or 2: " << endl;
    cin >> c; // added semicolon here

    if (c == 1) {
        string id;
        cout << "enter id: ";
        cin >> id;

        list<student>::iterator i = rec.begin();
        for(; i != rec.end(); i++)
            if (i->id == id)
                cout << i->sname << " " << i->id << " " << i->totalmark << " " << i->grade << endl;
        
    } else {
        list<student>::iterator i = rec.begin();
        for(; i != rec.end(); i++)
            cout << i->sname << " " << i->id << " " << i->totalmark << " " << i->grade << endl;
    }

}

void deleteRecord(/* suitable variable*/) {

//Question 4(1)

}

void updateRecord(/* suitable variable*/) {

//Question 4(2)

}

int main() {
	list<student>Record;
	student data;
	int choice; 

	do {
		choice = menu();
		switch (choice) {
		  case 1: //call function newRecord () and push the data to list. 
		    newRecord(&data);
		    Record.push_back(data);
          case 2: //call function displayRecord ()
            displayRecord(Record);
		  case 3: //call function deleteRecord()
		  case 4: //call function updateRecord()
		}
	} while (choice != 5);
}

