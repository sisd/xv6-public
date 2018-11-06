#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++) {
    for (int j = 0; j < strlen(argv[i]); j++) {
      if ((argv[i][j] <= 'Z') &&(argv[i][j] >= 'A'))
        argv[i][j] = argv[i][j] + ('a'-'A');
      else if ((argv[i][j] <= 'z') &&(argv[i][j] >= 'a'))
        argv[i][j] = argv[i][j] + ('A'-'a');
      }
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  }
  exit();
}
