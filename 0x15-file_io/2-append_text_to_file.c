#include "holberton.h"
/**
 *append_text_to_file -file
 *@filename:append
 *@text_content:add
 *Return:1 true -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int m;
size_t n;
if (filename == NULL)
return (-1);
m = open(filename, O_RDWR | O_APPEND);
if (m == -1)
return (-1);
if (text_content == NULL)
{
return (1);
}
for (n = 0; text_content[n]; n++)
;
write(m, text_content, n);
close(m);
return (1);
}
