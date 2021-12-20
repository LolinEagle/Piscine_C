/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:06:06 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:26:09 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

/*
 *  atoi.c
 */

unsigned int	ft_atoi(char *str);

/*
 *  ft_minisplit.c
 */

char			**ft_minisplit(char **line);

/*
 *  ft_split.c
 */

char			**ft_split(char *str, char *charset);

/*
 *  ft_split_number.c
 */

char			*ft_formatted_number(char *s);

/*
 *  ft_util.c
 */

int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_lentab(char **tab);

/*
 *  parser.c
 */

char			**ft_parsing(char *namefile);

/*
 *  print_number.c
 */

int				ft_find_dico(char *nb, char **dico);
void			ft_print_number(char **dico, char **number_cut);

/*
 *  atoa.c
 */

char			*ft_atoa(char *str);

/*
 *  put_3_number.c
 */

int				ft_written(char *a, char **dico);

/*
 *  itoa.c
 */

char			*ft_itoa(int nbr);

#endif
