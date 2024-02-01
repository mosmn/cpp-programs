

#include <iostream>
#include <queue>

using namespace std;

struct Customer{
    string OrderID;
    int TotalAdult;
    int TotalChild;
    int Type;
    int TotalPayment;
    Customer *next;
};

void filter(Customer n, queue<Customer> *dineIn, queue<Customer> *takeAway) {
    if (n.Type == 1) {
        dineIn->push(n);
    } else {
        takeAway->push(n);
    }
}

void log(Customer **h, Customer **t, queue<Customer> dineIn, queue<Customer> takeAway) {
    while (!dineIn.empty()) {
        Customer *n = new Customer;
        n->OrderID = dineIn.front().OrderID;
        n->TotalAdult = dineIn.front().TotalAdult;
        n->TotalChild = dineIn.front().TotalChild;
        n->Type = dineIn.front().Type;
        n->TotalPayment = dineIn.front().TotalPayment;
        n->next = NULL;

        if (*h == NULL) {
            *h = n;
            *t = n;
        } else {
            (*t)->next = n;
            *t = n;
        }

        dineIn.pop();
    }

    while (!takeAway.empty()) {
        Customer *n = new Customer;
        n->OrderID = takeAway.front().OrderID;
        n->TotalAdult = takeAway.front().TotalAdult;
        n->TotalChild = takeAway.front().TotalChild;
        n->Type = takeAway.front().Type;
        n->TotalPayment = takeAway.front().TotalPayment;
        n->next = NULL;

        if (*h == NULL) {
            *h = n;
            *t = n;
        } else {
            (*t)->next = n;
            *t = n;
        }

        takeAway.pop();
    }
}

void analysis(Customer *h, int totalcustomers, int totaldineIn, int totaltakeAway) {
    Customer *temp = h;
    int dineInTotalSales = 0, takeAwayTotalSales = 0;
    float dineInPercentage, takeAwayPercentage;
    
    cout << "\nDine-in:" << endl;
    cout << "Customer List: " << endl;
    while (temp != NULL) {
        if (temp->Type == 1) {
            cout << "Order ID: " << temp->OrderID << endl;
            cout << "Total Adult: " << temp->TotalAdult << endl;
            cout << "Total Child: " << temp->TotalChild << endl;
            cout << "Total Payment: " << temp->TotalPayment << endl << endl;

            dineInTotalSales += temp->TotalPayment;
        } 
        temp = temp->next;
    }

    dineInPercentage = (float) totaldineIn / totalcustomers * 100;
    cout << "Total dine-in sales: " << dineInTotalSales << endl;
    cout << "Percentage of dine-in: " << dineInPercentage << "%" << endl;

    temp = h;
    cout << "\nTake-away:" << endl;
    cout << "Customer List: " << endl;
    while (temp != NULL) {
        if (temp->Type == 2) {
            cout << "Order ID: " << temp->OrderID << endl;
            cout << "Total Adult: " << temp->TotalAdult << endl;
            cout << "Total Child: " << temp->TotalChild << endl;
            cout << "Total Payment: " << temp->TotalPayment << endl << endl;

            takeAwayTotalSales += temp->TotalPayment;
        } 
        temp = temp->next;
    }

    takeAwayPercentage = (float) totaltakeAway / totalcustomers * 100;
    cout << "Total take-away sales: " << takeAwayTotalSales << endl;
    cout << "Percentage of take-away: " << takeAwayPercentage << "%" << endl;

}

int main() {
    queue<Customer> dineIn, takeAway;
    Customer *h = NULL, *t = NULL;
    char choice;
    int totalcustomers = 0, totaldineIn = 0, totaltakeAway = 0;

    do {
        Customer n;
        cout << "Order ID: ";
        cin >> n.OrderID;
        cout << "Total adult: ";
        cin >> n.TotalAdult;
        cout << "Total child: ";
        cin >> n.TotalChild;
        cout << "Type (1 for dine-in, 2 for take-away): ";
        cin >> n.Type;
        n.TotalPayment = n.TotalAdult * 50 + n.TotalChild * 30;
        n.next = NULL;

        filter(n, &dineIn, &takeAway);

        cout << "Add another customer? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    totalcustomers = dineIn.size() + takeAway.size();
    totaldineIn = dineIn.size();
    totaltakeAway = takeAway.size();

    log(&h, &t, dineIn, takeAway);

    analysis(h, totalcustomers, totaldineIn, totaltakeAway);

    return 0;
}
