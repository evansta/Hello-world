#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('z');
	}
	else
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'z')
		{
			ft_putchar('z');
			break;
		}
		else
		{
			ft_putchar('z');
			break;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
