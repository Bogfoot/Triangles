#include <iostream>
#include <string>

#include "lib.hpp"

auto main() -> int
{
  auto lib = library {"Adrian", 5};
	lib.ID = 15;
	std::cout << lib.ID << std::endl;

  return 0;
}
