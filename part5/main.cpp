#include <cstdlib>
#include <iostream>
#include <part5Config.h>
#ifdef USE_ADDER
#include <adder.h>
#endif

int main(int argc, char *argv[]) {
  float a = 75.1;
  float b = 25.01;

#ifdef USE_ADDER
  std::cout << "With USE_ADDER, Result: " << mearlyMath::add(a, b) << std::endl;
#else
  std::cout << "Wihtout USE_ADDER, Result: " << a + b << std::endl;
#endif

  return EXIT_SUCCESS;
}
