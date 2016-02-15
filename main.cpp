#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    //Variables to hold the stock purchase and selling info.

    int stocks_purchased,
            stocks_sold;
    double commission,
           total_purchase,
           total_sell,
           total_buy_commission,
           total_sell_commission,
           purchase_price,
           selling_price,
           profit;
    //Point in which user inputs variable date.

    cout << "Please input the number of stocks purchased.\n" << endl;
    cin >> (stocks_purchased);
    cout << "Please input the purchase price per stock.\n" << endl;
    cin >> (purchase_price) >> purchase_price;
    cout << "Please input the brokers commission rate.\n" << endl;
    cin >> commission;
    cout << "Please input number of stocks sold.\n" << endl;
    cin >> stocks_sold;
    cout << "Please input stock selling price per stock.\n" << endl;
    cin >> selling_price;

    //Calculations section of program.

    total_purchase = stocks_purchased * purchase_price;
    total_sell = stocks_sold * selling_price;
    total_buy_commission = total_purchase * commission;
    total_sell_commission = total_sell * commission;
    profit = ((total_sell - total_purchase) - (total_buy_commission + total_sell_commission));

    //Program output.

    cout << "The total amount paid for the stock purchase was: " << total_purchase << endl;
    cout << "The total amount paid in commission for the purchase was: " << total_buy_commission << endl;
    cout << "The total amount the stocks were sold for was: " << total_sell << endl;
    cout << "The total amount paid in commission for the sale was: "  << total_sell_commission << endl;
    cout << "The total profit made off of the stock transaction was: " << profit << endl;

}