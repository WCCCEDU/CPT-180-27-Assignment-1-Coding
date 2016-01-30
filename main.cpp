#include <iostream>
#include <iomanip>

int main() {

    std::cout << "JOE'S ACME SOFTWARE, INC. STOCK VALUES\n\n"; // just some header text

    //stock purchase calculations
    const int SHARES_BOUGHT = 1000;
    const double PURCHASE_PRICE = 45.50;
    double total_stock_price = SHARES_BOUGHT * PURCHASE_PRICE; // price of all stock
    const double COMMISSION_RATE = .02;
    double total_commission = total_stock_price * COMMISSION_RATE; // total commission broker will be paid
    double purchase_grand_total = total_stock_price + total_commission; //total cost after commission is factored in

    //print buying results
    std::cout << "BUYING\n" << "====================================\n";
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::setw(25) << std::left << "Quantity Purchased: " << SHARES_BOUGHT << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " << PURCHASE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Amount: " << "-" << total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << total_commission << "\n";
    std::cout << "____________________________________" << "\n";
    std::cout << std::setw(25) << "Grand Total: " << "-$" << purchase_grand_total << "\n\n\n";

    //selling calculations
    std::cout << "SELLING\n" << "====================================\n";
    const int SHARES_SOLD = 1000;
    const double SALE_PRICE = 56.90;
    total_stock_price = SHARES_BOUGHT * SALE_PRICE; // price of all stock
    total_commission = total_stock_price * COMMISSION_RATE; // total commission broker will be paid
    double sale_grand_total = total_stock_price - total_commission; // total received after commission is factored in
    double total_profit_loss = sale_grand_total - purchase_grand_total; //total profit or loss from transaction

    //print selling results
    std::cout << std::setw(25) << "Quantity Sold: " << SHARES_SOLD << "\n";
    std::cout << std::setw(25) << "Price Per Stock: " <<  SALE_PRICE << "\n";
    std::cout << std::setw(25) << "Total Stock Value: " << "+" << total_stock_price << "\n";
    std::cout << std::setw(25) << "Broker Commission: " << "-" << total_commission << "\n";
    std::cout << "____________________________________" << "\n";
    std::cout << std::setw(25) << "Grand Total: " << "+$" << sale_grand_total << "\n\n";
    std::cout << std::setw(25) <<  "TOTAL PROFIT/LOSS: " << "+$" << total_profit_loss << "\n\nEnd of Program";
    return 0;
}