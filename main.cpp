#include <iostream>
#include <string>

int main () {
     //Declarations
     int SHARES_BOUGHT = 1000;
     double PURCHASE_PRICE = 45.5;
     double COMMISSION_RATE = .02;
     int SHARES_SOLD = 1000;
     double SALE_PRICE = 56.9;
     double TOTAL_PURCHASE_PRICE = 0;
     double PURCHASE_COMMISSION = 0;
     double TOTAL_SALE_PRICE = 0;
     double SALE_COMMISSION = 0;
     double PROFIT = 0;
     double EXPENSES = 0;

     //Computations
     TOTAL_PURCHASE_PRICE = PURCHASE_PRICE * SHARES_BOUGHT;
     PURCHASE_COMMISSION = TOTAL_PURCHASE_PRICE * COMMISSION_RATE;
     TOTAL_SALE_PRICE = SALE_PRICE * SHARES_SOLD;
     SALE_COMMISSION = TOTAL_SALE_PRICE * COMMISSION_RATE;
     EXPENSES = TOTAL_PURCHASE_PRICE + SALE_COMMISSION + PURCHASE_COMMISSION;
     PROFIT = TOTAL_SALE_PRICE - EXPENSES;

     //Output
     std::cout << "The amount of money Joe paid for the stock: $" << TOTAL_PURCHASE_PRICE << std::endl;
     std::cout << "The amount of commission Joe paid his broker when he bought the stock: $" << PURCHASE_COMMISSION << std::endl;
     std::cout << "The amount for which Joe sold the stock: $" << TOTAL_SALE_PRICE << std::endl;
     std::cout << "The amount of commission Joe paid his broker when he sold the stock: $" << SALE_COMMISSION << std::endl;
     std::cout << "Profit: $" << PROFIT << std::endl;
     return 0;
     }