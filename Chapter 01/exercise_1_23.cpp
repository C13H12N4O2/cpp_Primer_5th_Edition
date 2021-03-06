#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item, currItem;
  int cnt = 1;

  if (std::cin >> currItem) {
    while (std::cin >> item) {
      if (item.isbn() == currItem.isbn())
        cnt++;
      else {
        std::cout << currItem.isbn() << " occurs " << cnt
          << " times" << std::endl;
    currItem = item;
    cnt = 1;
      }
    }

    std::cout << currItem.isbn() << " occurs " << cnt
              << " times" << std::endl;
  }

  return 0;
}
