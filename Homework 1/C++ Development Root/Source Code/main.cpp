#include <iostream>
#include <vector>
#include <iterator>

#include "GroceryItem.hpp"

int main() {
  std::vector<GroceryItem> groceryItems;

  while( true )
  {
    GroceryItem groceryItem;
    std::cin >> groceryItem;
    std::cout << groceryItem << std::endl;
    groceryItems.push_back( groceryItem );

    std::cout << "Here is an itemized list of the items in your shopping cart: " << std::endl;

    for( std::vector<GroceryItem>::reverse_iterator it = groceryItems.rbegin(); it != groceryItems.rend(); ++it )
    {
      std::cout << *it << std::endl;
    }
  }
}
