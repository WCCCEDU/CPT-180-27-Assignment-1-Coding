#include <iostream>

// This program calculates and displays the following
// *Amount paid for stock
// *Commission % paid to broker
// *Amount sold for stock
// *Amount paid to broker ($)
// *Profit made


int main() {
    // Calculates and displays amount paid
    double SHARES_BOUGHT = 1000;
    double PURCHASE_PRICE = 45.50;
    double AMOUNT_PAID = SHARES_BOUGHT*PURCHASE_PRICE;
    std::cout << "Total amount paid for " << SHARES_BOUGHT << " stocks at $"
            << PURCHASE_PRICE << " per stock = $" << AMOUNT_PAID <<std::endl;

    // Calculates and displays commission on the purchase
    double COMMISSION_RATE = .02;
    double COMMISSION_PRICE_BOUGHT = AMOUNT_PAID*COMMISSION_RATE;
    std::cout << "Total commission paid to broker for purchase = $" << COMMISSION_PRICE_BOUGHT
        << std::endl;

    // Calculates and displays amount stocks were sold for
    double SHARES_SOLD = 1000;
    double SOLD_PRICE = 56.90;
    double SALE_PRICE = SHARES_SOLD*SOLD_PRICE;
    std::cout << "Total amount " << SHARES_SOLD << " shares sold for at $"
        << SOLD_PRICE << " per stock = $" << SALE_PRICE << std::endl;

    // Calculates and displays commission on the sale
    double COMMISSION_PRICE_SOLD = COMMISSION_RATE*SALE_PRICE;
    std::cout << "Total commission paid to broker for sale = $" << COMMISSION_PRICE_SOLD
        << std::endl;

    // Calculates and displays total profit
    double PROFIT = SALE_PRICE-(COMMISSION_PRICE_BOUGHT+COMMISSION_PRICE_SOLD+AMOUNT_PAID);
    std::cout << "Total profit after commission fees = $" << PROFIT << std::endl;
}