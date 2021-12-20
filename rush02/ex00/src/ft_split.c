/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:21:50 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:08:24 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strstr(char c, char *to_find)
{
	int	n;

	n = 0;
	if (to_find[0] == '\0')
		return (0);
	while (to_find[n])
	{
		if (c == to_find[n])
			return (1);
		n++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	counter;
	int	i;

	i = 0;
	counter = 1;
	while (str[i])
	{
		if (ft_strstr(str[i], charset) != 0)
			counter++;
		while (str[i] && ft_strstr(str[i], charset) != 0)
			i++;
		i++;
	}
	return (counter);
}

int	ft_len_word(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (str[i])
	{
		if (ft_strstr(str[i], charset) != 0)
			return (j);
		i++;
		j++;
	}
	return (j);
}

char	*ft_input_word(char *str, char *charset, int i)
{
	char	*word;
	int		k;

	k = 0;
	word = malloc(sizeof(char) * (ft_len_word(str, charset, i) + 1));
	if (!word)
		return (NULL);
	while (str[i] && ft_strstr(str[i], charset) == 0)
		word[k++] = str[i++];
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab_word;
	int		i;
	int		c;

	i = 0;
	tab_word = malloc(sizeof(char *) * ft_count_word(str, charset) + 1);
	if (!tab_word)
		return (NULL);
	c = 0;
	while (str[i])
	{
		while (str[i] && ft_strstr(str[i], charset) == 1)
			i++;
		if (str[i])
			tab_word[c] = ft_input_word(str, charset, i);
		else
			tab_word[c] = 0;
		while (str[i] && ft_strstr(str[i], charset) == 0)
			i++;
		c++;
	}
	tab_word[c] = 0;
	return (tab_word);
}
