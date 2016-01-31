#include <iostream>


int main() {
    //Variable Declaration/Initialization
    double PURCHASE_PRICE = 45.5, PURCHASE_AMOUNT, SHARES_BOUGHT = 1000, COMMISSION_RATE = 0.02, SHARES_SOLD = 1000,
            FIRST_BROKER_AMOUNT, PURCHASE_SOLD, SALE_PRICE = 56.90, SECOND_BROKER_AMOUNT, TOTAL_AMOUNT_EARNED;

    //Amount Joe Paid
    PURCHASE_AMOUNT = PURCHASE_PRICE * SHARES_BOUGHT;
    std::cout << "Joe Paid: " << PURCHASE_AMOUNT << std::endl;

    //Amount Joe Paid his broker
    FIRST_BROKER_AMOUNT = (PURCHASE_AMOUNT * COMMISSION_RATE);
    std::cout << "Amount Joe paid his broker before selling stock: " << FIRST_BROKER_AMOUNT << std::endl;

    //Amount Joe sold his shares for
    PURCHASE_SOLD = SALE_PRICE * SHARES_SOLD;
    std::cout << "Amount Joe sold: " << PURCHASE_SOLD << std::endl;

    //Amount Joe paid his broker after he sold his shares
    SECOND_BROKER_AMOUNT = PURCHASE_SOLD * COMMISSION_RATE;
    std::cout << "Amount Joe paid his broker after selling stock: " << SECOND_BROKER_AMOUNT << std::endl;

    //Amount Joe earned overall after buying and selling stock
    TOTAL_AMOUNT_EARNED = (PURCHASE_SOLD - PURCHASE_AMOUNT) - (FIRST_BROKER_AMOUNT + SECOND_BROKER_AMOUNT);
    std::cout << "Amount Joe earned: " << TOTAL_AMOUNT_EARNED << std::endl;

    return 0;

