#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenate two strings
 *@s1:first to loop
 *@s2:second to loop
 *@n:th
 *Return: Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr = NULL;
unsigned int cnt1 = 0, cnt2 = 0, cnt3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[cnt1] != '\0')
cnt1++;
while (s2[cnt2] != '\0')
cnt2++;
if (n < cnt2)
cnt2 = n;
ptr = malloc((cnt1 + cnt2 + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (cnt3 = 0; cnt3 < cnt1; cnt3++)
ptr[cnt3] = s1[cnt3];
cnt1 = cnt3;
for (cnt3 = 0; cnt3 < cnt2; cnt3++, cnt1++)
ptr[cnt1] = s2[cnt3];
ptr[cnt1] = '\0';
return (ptr);
}




