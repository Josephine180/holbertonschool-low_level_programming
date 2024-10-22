#include <unistd.h>


int main(void) {
  int i;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i < 26; i++) {
        putchar(alphabet[i]);
    }
    putchar('\n');
    return (0);
}
