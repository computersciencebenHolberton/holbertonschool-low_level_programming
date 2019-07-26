#include <stdio.h>
#include <stdlib.h>
/**
 *main -main
 *@argc:argc
 *@argv:argv
 *Return:0
 */
int main(int argc, char **argv)
{
int n;
int num1;

if (argc != 2)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
if (num1 < 0)
{
printf("Error\n");
return (2);
}
for (n = 0; n < num1; n++)
{
if (n)
printf(" ");
printf("%02x", ((unsigned char *)main)[n]);
}
printf("\n");
return (0);
}
