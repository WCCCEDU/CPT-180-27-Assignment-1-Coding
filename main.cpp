#include <iostream>

using namespace std;

int main() {
    //Constants for Joe's Purchasing of the stocks.
    double joes_buying_price = 45.50;
    int joe_shares_bought = 1000;
    double stockbroker_commission = .02;

    //First round of Math
    double joe_paid = joes_buying_price * joe_shares_bought;
    double commission_paid_buying = joe_paid * stockbroker_commission;

    //Constants for Joe's Selling of Stocks
    double joes_selling_price = 56.90;
    int joes_shares_sold = 1000;

    //Second Round of Math
    double joe_sold_for = joes_selling_price * joes_shares_sold;
    double commission_paid_selling = joe_sold_for * stockbroker_commission;

    //Tidying up / Final round of math
    double total_commission = commission_paid_buying + commission_paid_selling;
    double joes_profit = joe_sold_for - joe_paid - total_commission;

    //Output
    cout << "Amount Joe paid for Stock: $" << joe_sold_for << endl;
    cout << "Amount Joe paid in commission when he bought his stock: $" << commission_paid_buying << endl;
    cout << "Joe sold his stock for: $" << joe_sold_for << endl;
    cout << "Amount Joe paid in commission when he sold his stock: $" << commission_paid_selling << endl;
    cout << "When all was said and done, Joe's profit was $" << joes_profit << endl;
    return 0;
}