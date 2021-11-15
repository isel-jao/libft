
#include "./includes/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, char const *argv[])
{
	int fd;
	if (!argv[1])
		exit(EXIT_FAILURE);
	fd = open(argv[1], O_RDONLY);
	if(fd < 0)
	{
		printf("df: %d\n", fd);
		exit(EXIT_FAILURE);
	}
	char *buf = NULL;
	while (get_next_line(fd, &buf) > 0)
	{
		printf("|%s|\n", buf);
	}
		printf("|%s|\n", buf);
	
	return 0;
}
// kjkljlk