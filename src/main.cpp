#include <iostream>

const char *s =
#include "../VERSION"
;

std::string_view version{
#include "../VERSION"
};

int main()
{
  std::cout << "Version " << s << std::endl;
  std::cout << "VERSION " << version << std::endl;

  return 0;
}
