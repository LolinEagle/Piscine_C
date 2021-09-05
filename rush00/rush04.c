#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		h++;
		w = 0;
		while (w < x)
		{
			w++;
			if ((w == 1 && h == 1) || (h == y && w == x))
				ft_putchar('A');
			else if ((h == 1 && w == x) || (w == 1 && h == y))
				ft_putchar('C');
			else if ((w == 1 || w == x) || (h == 1 || h == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
