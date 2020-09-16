#include <iostream>
#include <string>

struct Sales_data {
  std::string ISBN;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data data;
  double total;
  
  std::cin >> data.ISBN >> data.units_sold >> revenue;
  total = data.units_sold * revenue;
  
  std::cout << data.ISBN << " " << data.units_sold << " "
            << total << std::endl;
  
  return 0;
}
