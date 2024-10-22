#include <unistd.h>

int main(void) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        putchar(alphabet[i]);
    }
    putchar('\n');
    return (0);
}
