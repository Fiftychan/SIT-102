#include "splashkit.h"

const double DONUT_PRICE = 3;
const double MILKSHAKE_PRICE = 4;
const double ICECREAM_PRICE = 2;
const double FRIES_PRICE = 3.5;

string read_string(string prompt)
{
    write_line(prompt);
    return read_line();
}

int read_integer(string prompt)
{
    string line = read_string prompt;
    return convert_to_integer line;
}

// return_type name(param list)
void print_order_info(double total)
{
    write ("Total price : ");
    write_line (total);
}

double calculate_total_price(int no_donut, int no_milkshake, int no_icecream, int no_fries)
{
    double result;
    result = no_donut*DONUT_PRICE + no_milkshake*MILKSHAKE_PRICE + no_icecream*ICECREAM_PRICE + no_fries*FRIES_PRICE;

    return result;
}

int main()
{
    double price = calculate_total_price(5,6);
    print_order_info (price);
    return 0
}