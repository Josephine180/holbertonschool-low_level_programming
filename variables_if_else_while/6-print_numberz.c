#include <unistd.h>
#include <stdio.h>

/**
* main - main
*
* Return: success
*/

int main(void) {
  int x;
  for (int x = 0; x < 10; x++) {
        putchar(x + '0');
    }
    putchar('\n');
    return 0;
}
