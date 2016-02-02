#include <iostream>
#include <iomanip>

/*Joe bought 1k stocks for 45.50 , Broker got 2%
 * Joe sold 1k stocks for 56.90 , Broker got 2%
 * Output :
 * Money paid
 * commission paid
 * Amount sold for
 * commission paid
 * Profit or Loss
 * Constants - SHARE_BOUGHT , SHARE_SOLD , COMMISSION_RATE , PURCHASE_PRICE , SALE_PRICE
*/

int const SHARE_BOUGHT = 1000 , SHARE_SOLD = 1000 ;
double const COMMISSION_RATE = 0.02, PURCHASE_PRICE = 45.5, SALE_PRICE = 56.9;
int main() {
    double sale_bought = 0.00, sale_sold = 0.00, sale_profit = 0.00,
            commission_paid_buy = 0.00, commission_paid_sale = 0.00;



    sale_bought = SHARE_BOUGHT * PURCHASE_PRICE;
    commission_paid_buy = sale_bought * COMMISSION_RATE;

    std::cout << "You spent $" << sale_bought << " on stocks and paid $" << commission_paid_buy << " to your broker." << '\n';

    sale_sold = SHARE_SOLD * SALE_PRICE;
    commission_paid_sale = sale_sold * COMMISSION_RATE;

    std::cout << "You earned $" << sale_sold << " on stocks but your broker took $" << commission_paid_sale << '\n';

    sale_bought = sale_bought - commission_paid_buy;
    sale_sold = sale_sold - commission_paid_sale;
    sale_profit = sale_sold- sale_bought ;

    if (sale_profit > 1)
        std::cout << "Yor profit would be $" << sale_profit << '\n';
    else
        std::cout << "Yor Lose would be $-" << sale_profit << '\n';

    return 0;
}