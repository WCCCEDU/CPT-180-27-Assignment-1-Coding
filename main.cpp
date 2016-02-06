#include <iostream>
#include <iomanip>
int main() {

    const int SHARES_BOUGHT = 1000;
    const int SHARES_SOLD = 1000;
    const double COMMISSION_RATE =0.02;
    const double PURCHASE_PRICE = 45.50;
    const double SALE_PRICE = 56.90;

   
    double total_cost_of_stock;
    total_cost_of_stock = SHARES_BOUGHT * PURCHASE_PRICE;
    std::cout << std::fixed << std:: setprecision(2)<< "The total purchase price of stock is " << total_cost_of_stock << std::endl;

    double purchase_commission;
    purchase_commission = total_cost_of_stock * COMMISSION_RATE;
    std::cout << "The commission rate paid during purchase is " << purchase_commission << std::endl;

    double total_sale_of_stock;
    total_sale_of_stock = SHARES_SOLD * SALE_PRICE;
    std::cout << "The amount the stock was sold for " << total_sale_of_stock << std::endl;

    double sale_commission;
    sale_commission = total_sale_of_stock * COMMISSION_RATE;
    std::cout << "The commission rate paid during sale is " << sale_commission << std::endl;

    double total_profit;
    total_profit = total_sale_of_stock - total_cost_of_stock - purchase_commission - sale_commission;
    std::cout << "The total profit is " << total_profit << std::endl;

    return 0;
}