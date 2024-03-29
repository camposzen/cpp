#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(
    double _price, double _amount, std::string _timestamp, std::string _product, OrderBookType _orderType) : price(_price), amount(_amount), timetamp(_timestamp), product(_product), orderType(_orderType){};

OrderBookType OrderBookEntry::toOrderbookType(std::string s)
{
    if (s == "ask")
    {
        return OrderBookType::ask;
    }
    else if (s == "bid")
    {
        return OrderBookType::bid;
    }
    else
    {
        return OrderBookType::unknown;
    }
}