#include <iostream>

using namespace std;

int main() {

    // Constants
    const int SHARES_BOUGHT = 1000;
    const int SHARES_SOLD = 1000;
    const double COMMISSION_RATE = .02;
    const double PURCHASE_PRICE = 45.5;
    const double SALE_PRICE = 56.9;

    // Outputs
    double purchase_total = SHARES_BOUGHT * PURCHASE_PRICE;
    cout <<"Cost of Purchase:"<< endl;
    cout << purchase_total<< " dollars"<< endl;

    double purchase_commission = COMMISSION_RATE * purchase_total;
    cout <<"Purchase Commission Paid:"<< endl;
    cout <<purchase_commission<<" dollars"<< endl;

    double sale_total = SHARES_SOLD * SALE_PRICE;
    cout <<"Sale of Stock:"<< endl;
    cout <<sale_total<< " dollars"<< endl;

    double selling_commission = COMMISSION_RATE * sale_total;
    cout <<"Sale Commission Paid:"<< endl;
    cout <<selling_commission<<" dollars"<<  endl;

    double total_commission = selling_commission + purchase_commission;
    cout <<"Total Commission Paid:"<< endl;
    cout << total_commission<< " dollars"<< endl;

    double profit = (sale_total-purchase_total) - total_commission;
    cout <<"Profit:"<< endl;
    cout <<profit << " dollars"<< endl;

    return 0;
}