#include <iostream>
#include <iomanip>

int main() {

    // given constants
    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;
    const double COMMISSION_RATE = .02;

    // stock purchase calculations
    double purchase_total_stock_price = SHARES_BOUGHT * PURCHASE_PRICE;
    double purchase_total_commission = purchase_total_stock_price * COMMISSION_RATE;
    double purchase_grand_total = purchase_total_stock_price + purchase_total_commission;

    // stock sale calculations
    double sale_total_stock_price = SHARES_BOUGHT * SALE_PRICE;
    double sale_total_commission = sale_total_stock_price * COMMISSION_RATE;
    double sale_grand_total = sale_total_stock_price - sale_total_commission;
    double total_profit_loss = sale_grand_total - purchase_grand_total;

    // print purchase results
    std::cout << "JOE'S ACME SOFTWARE, INC. STOCK VALUES\n\n"; // just some header text
    std::cout << "BUYING\n====================================\n";
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::setw(25) << std::left << "Quantity Purchased: "  << SHARES_BOUGHT << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " << PURCHASE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Amount: " << "-" << purchase_total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << purchase_total_commission << "\n";
    std::cout << "____________________________________" << "\n";
    std::cout << std::setw(25) << "Grand Total: " << "-$" << purchase_grand_total << "\n\n\n";

    // print sale results
    std::cout << "SELLING\n====================================\n";
    std::cout << std::setw(25) << "Quantity Sold: " << SHARES_SOLD << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " <<  SALE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Value: " << "+" << purchase_total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << sale_total_commission << "\n";
    std::cout << "____________________________________\n";
    std::cout << std::setw(25) << "Grand Total: " << "+$" << sale_grand_total << "\n\n\n";
    std::cout << std::setw(25) <<  "TOTAL PROFIT/LOSS: " << "+$" << total_profit_loss << "\n\nEnd of Program\n";
    return 0;
}