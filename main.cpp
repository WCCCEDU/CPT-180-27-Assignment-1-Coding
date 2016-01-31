// This is a program that calculates stock information
// Created by NAOMI BROWN on 1/31/16.

#include <iostream>
#include <iomanip>

// Constants
const int SHARES_BOUGHT = 1000;
const int SHARES_SOLD = 1000;
const double COMMISSION_RATE = .02;
const double PURCHASE_PRICE = 45.50;
const double SALE_PRICE = 56.90;

// Variables
double totalPurchasePrice = SHARES_BOUGHT*PURCHASE_PRICE;
double totalBuyCommission = totalPurchasePrice * COMMISSION_RATE;
double totalSalePrice = SHARES_SOLD*SALE_PRICE;
double totalSaleCommission = totalSalePrice*COMMISSION_RATE;
double totalProfit = (totalSalePrice-totalSaleCommission)-(totalPurchasePrice+totalBuyCommission);

int main() {
    std::cout<< "Total amount paid for stock was $"
        <<std::setprecision(7)<<std::showpoint<< totalPurchasePrice<<std::endl;
    std::cout<< "Total amount of commission paid to broker when stock was bought was $"
        <<std::setprecision(5)<<std::showpoint<< totalBuyCommission<< std::endl;
    std::cout<<"Total amount of stock sold was $"
        <<std::setprecision(7)<<std::showpoint<< totalSalePrice<< std::endl;
    std::cout<<"Total amount of commission paid to broker when stock was sold was $"
        <<std::setprecision(6)<<std::showpoint<< totalSaleCommission<< std::endl;
    std::cout<<"Total profit made after selling stock, less brokerage commissions was $"
        <<std::setprecision(7)<<std::showpoint<< totalProfit<< std::endl;
    return 0;
}
