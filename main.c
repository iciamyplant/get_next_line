#include <libc.h>

int		main()
{
	int		fd;
	int		ret;
	int		i;
	char	*str = NULL;

	fd = open("test_file2", O_RDONLY);
	ret = 1;
	i = 0;
	while (i < 4)
	{
		ret = get_next_line(fd, &str);
		printf("%d |%s|\n", ret, str);
		free(str);
		i++;
	}
//	system("leaks a.out");
}
