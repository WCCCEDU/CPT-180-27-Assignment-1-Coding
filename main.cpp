#include <iostream>

int main() {
    std::cout << "Enter shares bought." << std::endl;
    int shares_bought = 0;
    std::cin >> shares_bought;
    std::cout << "Enter cost."  <<std::endl;
    double purchase_cost = 0.0;
    std::cin >> purchase_cost;
    double COMMISSION_RATE = .02;
    double purchase_commission = 0;
    double ttl_commission;
    purchase_commission = purchase_cost * COMMISSION_RATE;
    ttl_commission = purchase_commission;
    std::cout << "Enter shares sold." << std::endl;
    int shares_sold = 0;
    std::cin >> shares_sold;
    std::cout << "Enter sale amount." << std::endl;
    double sale_price = 0;
    std::cin >> sale_price;
    double sold_commission = 0;
    sold_commission =  sale_price * COMMISSION_RATE;
    ttl_commission = ttl_commission + sold_commission;
    double total_gross = 0;
    total_gross = (sale_price - purchase_cost)-ttl_commission;
    std::cout << "Amount Payed = " << purchase_cost << ". " << "Commission for purchase = " << purchase_commission << "." << std::endl;
    std::cout << "Sale price of stock = " << sale_price << ". " << "Commission for sale = " << sold_commission << "." << std::endl;
    std::cout << "Amount of profit = " << total_gross << "." << std::endl;
    return 0;
}