#include <iostream>

int main() {

    //Variable Declaration/Initialization
    const double PURCHASE_PRICE= 45.50;
    const int SHARES_BOUGHT= 1000;
    const double COMMISSION_RATE = 0.02;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;

    //Amount Joe Paid for shares
    double purchase_amount = PURCHASE_PRICE * SHARES_BOUGHT;
    std::cout << "Joe Paid for his shares: $" << purchase_amount << std::endl;

    //Amount Joe sold his shares for
    double sold_amount = SALE_PRICE * SHARES_SOLD;
    std::cout << "Amount Joe sold his shares: $" << sold_amount << std::endl;


    //Amount Joe Paid his broker after he bought shares
    double first_broker_amount = (purchase_amount * COMMISSION_RATE);
    std::cout << "Amount Joe paid his broker before selling stock: $" << first_broker_amount << std::endl;


    //Amount Joe paid his broker after he sold his shares
    double second_broker_amount = sold_amount * COMMISSION_RATE;
    std::cout << "Amount Joe paid his broker after selling stock: $ " << second_broker_amount << std::endl;


    //Amount Joe earned overall after paying his broker
    double total_amount_earned = (sold_amount - purchase_amount) - (first_broker_amount + second_broker_amount);
    std::cout << "Amount Joe overall earned: $" << total_amount_earned << std::endl;

    return 0;
}

