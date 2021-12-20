/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:28:17 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/16 14:38:39 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destSize;
	unsigned int	srcSize;

	destSize = ft_strlen(dest);
	srcSize = ft_strlen(src);
	if (destSize >= size)
		return (srcSize + size);
	i = 0;
	while (src[i] != '\0' && i < (size - destSize))
	{
		dest[destSize + i] = src[i];
		i++;
	}
	dest[destSize + i] = '\0';
	return (destSize + srcSize);
}
