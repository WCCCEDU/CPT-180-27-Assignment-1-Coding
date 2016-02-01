#include <iostream>
#include <iomanip>

int main() {
    //Stock Transactions: Michael Watkins 1-31-16

    //Declarations and Initialization
    double SHARES_BOUGHT = 1000;
    double SHARES_SOLD = 1000;
    double COMMISION_RATE = 0.02;
    double PURCHASE_PRICE = 45.50;
    double SALE_PRICE = 56.90;

    //Sale Calculations
    double STOCK_BOUGHT = SHARES_BOUGHT * PURCHASE_PRICE;
    double COMMISION_BUY = COMMISION_RATE * STOCK_BOUGHT;
    double STOCK_SALE = SHARES_SOLD * SALE_PRICE;
    double COMMISION_SALE = COMMISION_RATE * STOCK_SALE;
    double PROFIT = STOCK_SALE - STOCK_BOUGHT - COMMISION_BUY - COMMISION_SALE;

    //Output Display
    std::cout << "Joe's Stock Exchange" << std::endl;
    std::cout << "Stock Purchase Price: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << STOCK_BOUGHT << std::endl;
    std::cout << "Purchase Commission: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << COMMISION_BUY << std::endl;
    std::cout << "Stock Sale Price: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << STOCK_SALE << std::endl;
    std::cout << "Sale Commission: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << COMMISION_SALE << std::endl;
    std::cout << "Total Profit: $" << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << PROFIT << std::endl;



    return 0;
}