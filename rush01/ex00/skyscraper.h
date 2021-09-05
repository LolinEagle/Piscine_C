/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:22:10 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 22:33:41 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_check_line(int *tab, int pos, int i);
int		ft_check_col(int *tab, int pos, int i);
int		ft_get_valueline(int pos);
int		ft_get_valuecol(int pos);
int		ft_view_line(int *tab, int pos, int *values, int total);
int		ft_view_rline(int *tab, int pos, int *values, int total);
int		ft_view_column(int *tab, int pos, int *values, int total);
int		ft_view_rcolumn(int *tab, int pos, int *values, int total);
int		ft_viewline(int *tab, int pos, int *values, int total);
int		ft_viewcol(int *tab, int pos, int *values, int total);
int		ft_resolve(int *tab, int pos, int *values, int total);
void	ft_strtab(int *p);
int		*ft_fill(int *p, int *p2);
