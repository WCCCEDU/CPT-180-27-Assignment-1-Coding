#include <iostream>

using namespace std;

int main() {

    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    double money_spent = double(SHARES_BOUGHT*PURCHASE_PRICE);
    std::cout << "Amount of money spent on buying stocks = " << double(money_spent) << std::endl;
    const double COMMISSION_RATE = 0.02;
    double commission_fee_buy = double(SHARES_BOUGHT*PURCHASE_PRICE*COMMISSION_RATE);
    std::cout << "Amount of money payed to the broker when buying stocks = " << double(commission_fee_buy) << std::endl;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;
    double money_earned = double(SHARES_SOLD*SALE_PRICE);
    std::cout << "Amount of money gained from selling stocks = " << double(money_earned) << std::endl;
    double commission_fee_sale = double(SHARES_SOLD*SALE_PRICE*COMMISSION_RATE);
    std::cout << "Amount of money payed to the broker when selling stocks = " << double(commission_fee_sale) << std::endl;
    std::cout << "Amount of profit made = " << double(money_earned-money_spent-commission_fee_buy-commission_fee_sale) << std::endl;

    return 0;
}