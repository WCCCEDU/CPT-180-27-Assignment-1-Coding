#include <iostream>
#include <iomanip>

int main() {

    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;
    const double COMMISSION_RATE = .02;

    // stock purchase calculations
    double total_stock_price = SHARES_BOUGHT * PURCHASE_PRICE;
    double total_commission = total_stock_price * COMMISSION_RATE;
    double purchase_grand_total = total_stock_price + total_commission;

    // print purchase results
    std::cout << "JOE'S ACME SOFTWARE, INC. STOCK VALUES\n\n"; // just some header text
    std::cout << "BUYING\n====================================\n";
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::setw(25) << std::left << "Quantity Purchased: "  << SHARES_BOUGHT << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " << PURCHASE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Amount: " << "-" << total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << total_commission << "\n";
    std::cout << "____________________________________" << "\n";
    std::cout << std::setw(25) << "Grand Total: " << "-$" << purchase_grand_total << "\n\n\n";

    // stock sale calculations
    total_stock_price = SHARES_BOUGHT * SALE_PRICE;
    total_commission = total_stock_price * COMMISSION_RATE;
    double sale_grand_total = total_stock_price - total_commission;
    double total_profit_loss = sale_grand_total - purchase_grand_total;

    // print sale results
    std::cout << "SELLING\n====================================\n";
    std::cout << std::setw(25) << "Quantity Sold: " << SHARES_SOLD << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " <<  SALE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Value: " << "+" << total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << total_commission << "\n";
    std::cout << "____________________________________" << "\n";
    std::cout << std::setw(25) << "Grand Total: " << "+$" << sale_grand_total << "\n\n";
    std::cout << std::setw(25) <<  "TOTAL PROFIT/LOSS: " << "+$" << total_profit_loss << "\n\nEnd of Program";
    return 0;
}