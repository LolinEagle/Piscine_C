/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:46:40 by agengemb          #+#    #+#             */
/*   Updated: 2021/08/08 13:19:26 by qqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define X 5
#define Y 3

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{	
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "0") == 0)
			rush00(X, Y);
		else if (ft_strcmp(argv[1], "1") == 0)
			rush01(X, Y);
		else if (ft_strcmp(argv[1], "3") == 0)
			rush03(X, Y);
		else if (ft_strcmp(argv[1], "4") == 0)
			rush04(X, Y);
		else
			rush02(X, Y);
	}	
	else
		rush02(X, Y);
	return (0);
}
