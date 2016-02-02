#include <iostream>

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

int SHARE_BOUGHT = 1000 , SHARE_SOLD = 1000 ;
double COMMISSION_RATE = 0.02, PURCHASE_PRICE = 45.5, SALE_PRICE = 56.9;
int main() {
    double sale_bought , sale_sold , sale_profit , commssion_paid_buy , commssion_paid_sale;
    char new_line = '\n';

    sale_bought = SHARE_BOUGHT * PURCHASE_PRICE;
    commssion_paid_buy = sale_bought * COMMISSION_RATE;

    std::cout <<"You spent "<<sale_bought<<" on stocks and paid "<<commssion_paid_buy<<" to your broker."<<new_line;

    sale_sold = SHARE_SOLD * SALE_PRICE;
    commssion_paid_sale = sale_sold * COMMISSION_RATE;

    std::cout <<"You earned "<<sale_sold<<" on stocks but your broker took "<<commssion_paid_sale<<new_line;

    sale_profit = sale_sold- sale_bought ;

    std::cout <<"Yor profit would be "<<sale_profit<<new_line;
    return 0;
}