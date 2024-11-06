#include <stdio.h>

int main(int argc, char *argv[])
{
int count = 0;
int i;
(void)argv;
for (i = 1; i < argc; i++)
{
count++;
}
printf("%d\n", count);
return (0);
}
