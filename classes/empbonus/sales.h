#include <iostream>
using namespace std;

class salesPerson 
{
    protected:
    string name;
    int id;
    string status;
    double sales;
    double bouns;

    virtual void generateBouns()=0;
    public:
    salesPerson(string n, int id, string st, double s)
    {
        name = n;
        this -> id = id;
        status = st;
        sales = s;
    }
    void display()
    {
        generateBouns();
        cout << name << ", " << id << ", " << status << ", " << sales << "\n" << "Bounus = RM " << bouns << endl;
    }
};

class fullTime:public salesPerson 
{
    public:
    fullTime(string n, int id, string st, double s):salesPerson(n, id, st, s) {}

    private:
    void generateBouns()
    {
        bouns = sales * 0.3;
    }
};

class partTime:public salesPerson 
{
    public:
    partTime(string n, int id, string st, double s):salesPerson(n, id, st, s) {}

    private:
    void generateBouns()
    {
        bouns = sales * 0.45;
    }
};

