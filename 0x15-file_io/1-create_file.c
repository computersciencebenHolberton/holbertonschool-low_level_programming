#include "holberton.h"
#include <fcntl.h>
/**
 *create_file -main
 *@filename:name
 *@text_content:file
 *Return:1 if true -1 failed
 */
int create_file(const char *filename, char *text_content)
{
int n;
size_t m;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
n = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (n == -1)
return (-1);
return (1);
}
for (m = 0; text_content[m]; m++)
;
n = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (n == -1)
return (-1);
write(n, text_content, m);
close(n);
return (1);
}
