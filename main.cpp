#include <iostream>
#include <iomanip>

int main() {

    // given constants
    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;
    const double COMMISSION_RATE = .02;

    // purchase calculations and print result
    std::cout << "JOE'S ACME SOFTWARE, INC. STOCK VALUES\n\n"; // just some header text
    std::cout << "BUYING\n====================================\n";
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::setw(25) << std::left << "Quantity Purchased: "  << SHARES_BOUGHT << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " << PURCHASE_PRICE << "\n";
    double purchase_total_stock_price = SHARES_BOUGHT * PURCHASE_PRICE;
    std::cout << std::setw(25) << "Total Stock Amount: " << "-" << purchase_total_stock_price << "\n";
    double purchase_total_commission = purchase_total_stock_price * COMMISSION_RATE;
    std::cout << std::setw(25) << "Broker Commission: " << "-" << purchase_total_commission << "\n";
    std::cout << "____________________________________\n";
    double purchase_grand_total = purchase_total_stock_price + purchase_total_commission;
    std::cout << std::setw(25) << "Grand Total: " << "-$" << purchase_grand_total << "\n\n\n";

    // sale calculations and print results
    std::cout << "SELLING\n====================================\n";
    std::cout << std::setw(25) << "Quantity Sold: " << SHARES_SOLD << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " <<  SALE_PRICE << "\n";
    double sale_total_stock_price = SHARES_BOUGHT * SALE_PRICE;
    std::cout << std::setw(25) << "Total Stock Value: " << "+" << sale_total_stock_price << "\n";
    double sale_total_commission = sale_total_stock_price * COMMISSION_RATE;
    std::cout << std::setw(25) << "Broker Commission: " << "-" << sale_total_commission << "\n";
    std::cout << "____________________________________\n";
    double sale_grand_total = sale_total_stock_price - sale_total_commission;
    std::cout << std::setw(25) << "Grand Total: " << "+$" << sale_grand_total << "\n\n\n";
    double total_profit_loss = sale_grand_total - purchase_grand_total;
    std::cout << std::setw(25) <<  "TOTAL PROFIT/LOSS: " << "+$" << total_profit_loss << "\n\nEnd of Program\n";
    return 0;
}