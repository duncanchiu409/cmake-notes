#include <iostream>
#include <part6Config.h>
#ifdef USE_ADDER
#include <adder.h>
#endif

int main(int argc, char *argv[]) {
  float a = 75.01;
  float b = 25.1;

#ifdef USE_ADDER
  std::cout << "Use Adder library" << merelyMath::add(a, b) << std::endl;
#else
  std::cout << "Not use Adder library " << a + b << std::endl;
#endif

  return 0;
}
