#include <stdio.h>
#include <stdlib.h>

/**
 *main -thi
 *@argc:argc count
 *@argv:arry
 *Return: Always
 */
int main(int argc, char **argv)
{

int num1;
int num2;
int num3;
if (argc != 3)
printf("Error\n");
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
num3 = num1 *num2;
printf("%d\n", num3);
}
return (0);
}
