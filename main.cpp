#include <iostream>

int main() {
     const double COMMISSION_RATE = 0.02;

    std::cout << "Enter shares bought" << std::endl;
    int shares_bought = 0;
    std::cin >> shares_bought;

    std::cout << "Enter cost"  << std::endl;
    double purchase_cost = 0;
    std::cin >> purchase_cost;
    double purchase_commission = purchase_cost * COMMISSION_RATE;

    std::cout << "Enter shares sold" << std::endl;
    int shares_sold = 0;
    std::cin >> shares_sold;

    std::cout << "Enter sale amount" << std::endl;
    double sale_price = 0;
    std::cin >> sale_price;
    double sold_commission =  sale_price * COMMISSION_RATE;

    double total_commission = purchase_commission + sold_commission;
    double total_gross = (sale_price - purchase_cost) - total_commission;

    std::cout << "Amount Payed = " << purchase_cost << ", " << "Commission for purchase = " << purchase_commission << std::endl;
    std::cout << "Sale price of stock = " << sale_price << ", " << "Commission for sale = " << sold_commission << std::endl;
    std::cout << "Amount of profit = " << total_gross << std::endl;
    return 0;
}