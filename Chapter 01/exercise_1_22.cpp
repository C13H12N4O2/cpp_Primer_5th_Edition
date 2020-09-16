#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item, currItem;
  int sum;

  if (std::cin >> currItem) {
    while (std::cin >> item) {
      if (item != currItem) {
        std::cout << currItem << std::endl;

        currItem = item;
      }
    }

    std::cout << currItem << std::endl;
  }

  return 0;
}
