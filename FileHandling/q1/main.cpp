/*
1. Create a file to store the following data:
Record # Tool Name Quantity Cost
1001 Jig saw 21 11.00
1002 Lawn mover 3 79.50
1003 Screwdriver 18 99.99
1004 Sledge hammer 106 6.99
1005 Wrench 11 21.50
a) Then, read the data anddisplay them in the following format:
Record# Tool Name Quantity Cost (RM)
b) Also, calculate anddisplay the total cost of all tools.
*/

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    ofstream fout("tools.txt", ios::out);
    fout << "1001 Jig saw 21 11.00" << endl;
    fout << "1002 Lawn mover 3 79.50" << endl;
    fout << "1003 Screwdriver 18 99.99" << endl;
    fout << "1004 Sledge hammer 106 6.99" << endl;
    fout << "1005 Wrench 11 21.50" << endl;
    fout.close();

    ifstream fin("tools.txt", ios::in);
    if (!fin)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Record#" << setw(20) << "Tool Name" << setw(20) << "Quantity" << setw(20) << "Cost (RM)" << endl;

    int record, quantity;
    char toolName[100];
    double cost, totalCost = 0;

    while (fin >> record)
    {
        fin.getline(toolName, 100);
        fin >> quantity >> cost;
        cout << record << setw(20) << toolName << setw(20) << quantity << setw(20) << cost << endl;
        totalCost += cost;
    }

    cout << "Total cost of all tools: " << totalCost << endl;

    fin.close();
    return 0;
}
