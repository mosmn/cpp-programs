#include <iostream>
#include <list>
using namespace std;

// i
void display(list<string> &lst)
{
    //ii
    list<string>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    string BCS[] = {"BCS(SE)", "BCS(CS)", "BCS(SN)"};
    list<string> CCI;
    list<string> Other;

    CCI = {"BIT(IS)", "BIT(GM)"};
    cout<<"CCI Program: ";
    display(CCI);

    // cout << "\nOther Program: ";
    // display(Other);

    // cout << "\nCCI Program: ";
    // display(CCI);

    // cout << "\nOther Program: ";
    // display(Other);

    // cout << "\nCCI Program: ";
    // display(CCI);

    // cout << "\nTotal CCI Program: " << CCI.size();

    // cout << "\nThe end";

    return 0;
}