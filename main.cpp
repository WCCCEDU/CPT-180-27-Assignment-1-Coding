
#include <iostream>

    using namespace std;

    int main() {
        const int SHARES_BOUGHT = 1000;
        const int SHARES_SOLD = 1000;
        const double COMMISSION_RATE = .02;
        const double PURCHASE_PRICE = 45.5;
        const double SALE_PRICE = 56.9;

        cout << "Welcome to Joe's stock exchange" << endl;

        double stock_purchase_price = SHARES_BOUGHT * PURCHASE_PRICE;
        cout << "Money spent on stocks $" << stock_purchase_price << endl;

        double purchase_commission = stock_purchase_price * COMMISSION_RATE;
        cout << "commision amount $" << purchase_commission << endl;

        double total_purchase_price = stock_purchase_price + purchase_commission;
        cout << "total cost of investment = $" << total_purchase_price << endl;

        double stock_sale_price = SHARES_SOLD * SALE_PRICE;
        cout << "total sale amount = $" << stock_sale_price << endl;

        double sale_commission = stock_sale_price * COMMISSION_RATE;
        cout << "broker commission on sale = $" << sale_commission << endl;

        double total_sale_money_recieved = stock_sale_price - sale_commission;
        cout << "total money recieved from sale = $"
        << total_sale_money_recieved << endl;

        double profit = total_sale_money_recieved - total_purchase_price;
        cout << "total profit on investment = $" << profit << endl;


        return 0;
