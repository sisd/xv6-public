#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i, j;
  int k = 0;
  for(i = 0; i < 100000; i++)
  for (j = 0; j < 100000; j++) {
    k += j;
  }
  printf(1, "%d\n", k);
  exit();
}
