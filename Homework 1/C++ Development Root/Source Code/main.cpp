#include <iostream>
#include <vector>
#include <iterator>
#include <memory>

#include "GroceryItem.hpp"

int main() {
  std::vector<std::unique_ptr<GroceryItem>> groceryItems;
  std::unique_ptr<GroceryItem>              groceryItem = std::make_unique<GroceryItem>();

  while( true )
  {
    std::cin >> *groceryItem;
    std::cout << *groceryItem << std::endl;

    groceryItems.push_back( std::move(groceryItem) );

    std::cout << "Here is an itemized list of the items in your shopping cart: " << std::endl;
    for( std::vector<std::unique_ptr<GroceryItem>>::reverse_iterator it = groceryItems.rbegin(); it != groceryItems.rend(); ++it )
    {
      std::cout << **it << std::endl;
    }
  }

  return 0;
}
