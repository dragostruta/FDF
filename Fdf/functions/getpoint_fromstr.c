/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getpoint_fromstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:41:08 by tdragos           #+#    #+#             */
/*   Updated: 2018/02/10 13:41:09 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_3d	getpoint_fromstr(char *s, t_lc *ij)
{
	t_3d	point;
	char	**array;

	array = ft_split_whitespaces(s, ' ');
	point.z = getnbr(array[ij->col]);
	point.x = ij->lin;
	point.y = ij->col;
	return (point);
}
