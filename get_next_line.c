#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	buf[BUFFER_SIZE];
	int		res;

	res = read(fd, buf, BUFFER_SIZE);
	return (NULL);
}
