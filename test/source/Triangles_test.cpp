#include "lib.hpp"

auto main() -> int
{
  auto const lib = library {};

  return lib.name == "Triangles" ? 0 : 1;
}
