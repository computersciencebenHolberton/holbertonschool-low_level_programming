#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 *read_textfile -read
 *@filename:file
 *@letters:max characters
 *Return:count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *data;
int n;
ssize_t m;
if (!filename)
return (0);
data = malloc(letters);
if (!data)
return (0);
n = open(filename, O_RDONLY);
if (n < 0)
{m = 0;
goto free;
}
m = read(n, data, letters);
close(n);
if (m < 0)
{m = 0;
goto free;
}
if (write(STDOUT_FILENO, data, n) != m)
{
m = 0;
goto free;
}
free:
free(data);
return (m);
}
