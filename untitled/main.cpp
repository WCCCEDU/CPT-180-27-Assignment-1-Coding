#include <iostream>
#include <iomanip>

int main() {
    //Stock Transactions: Michael Watkins 2-1-16

    //Declarations and Initialization for constants
    const double SHARES_BOUGHT = 1000;
    const double SHARES_SOLD = 1000;
    const double COMMISSION_RATE = 0.02;
    const double PURCHASE_PRICE = 45.50;
    const double SALE_PRICE = 56.90;

    //Output display
    std::cout << "Joe's Stock Exchange" << std::endl;

    //Reworked so declarations and initializations are closer to output
    //Cleaned up lines of code
    double stock_purchase_price = SHARES_BOUGHT * PURCHASE_PRICE;
    std::cout << "Stock Purchase Price: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << stock_purchase_price<< std::endl;

    double commission_buy = COMMISSION_RATE * stock_purchase_price;
    std::cout << "Purchase Commission: $" << commission_buy << std::endl;

    double stock_sale_price = SHARES_SOLD * SALE_PRICE;
    std::cout << "Stock Sale Price: $" << stock_sale_price << std::endl;

    double commission_sale = COMMISSION_RATE * stock_sale_price;
    std::cout << "Sale Commission: $" << commission_sale << std::endl;

    double profit = stock_sale_price - stock_purchase_price - commission_buy - commission_sale;
    std::cout << "Total Profit: $" << profit << std::endl;



    return 0;
}