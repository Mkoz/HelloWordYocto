#include <stdio.h>
#include "HelloWorld.h"

int main(int argc, char *argv[]) {
#ifdef MKOZYREV_COMMON_LAYER
  printf("Absolutelly usless app for common layer\n");
#elif defined(MKOZYREV_SEPARATE_LAYER)
  printf("Absolutelly usless app for separate layer\n");
#else
  printf("Tru-tu-tu: Something whent wrong\n");
#endif

return 0;
}
