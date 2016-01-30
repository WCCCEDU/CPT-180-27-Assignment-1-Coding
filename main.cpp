#include <iostream>
#include <iomanip>

// Assignment one stock pricing and profit

int main() {
    // Declare Constants
    int SHARES_BOUGHT = 1000;
    int SHARES_SOLD = 1000;
    double COMMISSION_RATE = 0.02;
    double PURCHASE_PRICE =45.50;
    double SALE_PRICE = 56.90;

    // Calculate the cost of the stock
    double purchase_cost_of_stock = SHARES_BOUGHT * PURCHASE_PRICE;
    // Calculate the selling price of the stock
    double sell_price_of_stock = SHARES_SOLD * SALE_PRICE;
    // Calculate the purchasing commission
    double purchase_commission = purchase_cost_of_stock * COMMISSION_RATE;
    // Calculate the selling commission
    double sell_commission = sell_price_of_stock * COMMISSION_RATE;
    // Calculate the profit/loss
    double profit = (sell_price_of_stock - purchase_cost_of_stock) - (sell_commission + purchase_commission);

    // Output the following
    // The amount of money Joe paid for the stock.
    // The amount of commission Joe paid his broker when he bought the stock.
    // The amount that Joe sold the stock for.
    // The amount of commission Joe paid his broker when he sold the stock.
    // Display the amount of profit that Joe made after selling his stock and
    // paying the two commissions to his broker. (If the amount of profit that
    // your program displays is a negative number, then Joe lost money on the transaction.)

    // Set local for the currency
    std::locale::global( std::locale("en_US") );
    std::cout.imbue(std::locale());
    // Set double prescision for the output
    std::cout << std::fixed << std::setprecision(2);
    // Display the output
    std::cout << "Original stock purchase price: $" << purchase_cost_of_stock << std::endl;
    std::cout << "Original stock purchase commission: $" << purchase_commission<< std::endl;
    std::cout << "Original stock sell price: $" << sell_price_of_stock << std::endl;
    std::cout << "Original stock sell commission: $" << sell_commission << std::endl;

    // If the profit is less than 0 (negative) then display with a negative sign
    if(profit > 0)
    {
        std::cout << "Profit: $" << profit << std::endl;
    }else
    {
        // Use abs() to remove negative sign so it is before the dollar sign
        std::cout << "Profit: -$" << abs(profit) << std::endl;
    }
    return 0;
}