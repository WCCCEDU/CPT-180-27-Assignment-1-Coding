#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Declare and initilize variable
    int shares_bought = 1000;
    int shares_sold = 1000;
    double purchase_price = 45.50;
    double commission_rate = 0.02;
    double selling_price = 56.90;


    // Main math function
    double purchase_commission = (shares_bought * purchase_price * commission_rate);
    double selling_commission = (shares_sold * selling_price * commission_rate);
    double total_purchase = ((shares_bought * purchase_price) + purchase_commission);
    double total_selling = ((shares_bought * selling_price) - selling_commission);
    double profit_loss = (total_selling - total_purchase);

    // Output display code

    cout << setprecision(2) << fixed;
    cout << "Joe bought " << shares_bought << " " << "shares of stock" << " ";
    cout << "at a price of " << "$" << purchase_price << endl;
    cout << "The Commission to his broker for his purchase was: " << "$" << purchase_commission << endl;
    cout << "Joe then sold " << shares_sold << " " << "shares of stock" << " ";
    cout << "at a price of" << " " << "$" << selling_price << endl;
    cout << "The Commission to his broker for his sale was: " << "$" << selling_commission << endl;
    cout << "Joe's total Profit was " << "$" << profit_loss << endl;
    cout << "Not bad for a days work";

    return 0;
}