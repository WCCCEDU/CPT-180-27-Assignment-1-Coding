#include <iostream>
#include <iomanip>

// Stock Program
// By Clayton Checkeye for CPT_180

int main() {
        // Declarations

    const int SHARES_BOUGHT = 1000;
    const int SHARES_SOLD = 1000;
    const double COMMISSION_RATE = 0.2;
    const double PURCHASE_PRICE = 45.50;
    const double SALE_PRICE = 56.90;

    //Calculations

    double amount_paid = SHARES_BOUGHT * PURCHASE_PRICE;
    double initial_commission = COMMISSION_RATE * amount_paid;
    double amount_sold = SHARES_SOLD * SALE_PRICE;
    double second_commission = amount_sold * COMMISSION_RATE;
    double profit = amount_sold - amount_paid  - initial_commission - second_commission;

    //Results

    std::cout << std::fixed << std::setprecision(2) << "Joe bought " << SHARES_BOUGHT << " shares at $"
                      << PURCHASE_PRICE << " for $" << amount_paid << std::endl;
    std::cout << "Joe paid his broker a 2% commission which amounted to $" << initial_commission << std::endl;
    std::cout << "Joe sold his " << SHARES_SOLD << " shares at $" << SALE_PRICE << " for $" << amount_sold << std::endl;
    std::cout << "Joe paid his broker a 2% commission for his sales which amounted to $" << second_commission
        << std::endl;
    std::cout << "Joe's profit for these transactions are $" << profit << std::endl;






}

