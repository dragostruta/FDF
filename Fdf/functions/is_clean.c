/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdragos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:41:15 by tdragos           #+#    #+#             */
/*   Updated: 2018/02/10 13:41:20 by tdragos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		is_clean(char *s)
{
	while (*s)
	{
		if (!(*s == ' ' || (*s >= '0' && *s <= '9') || (*s == '-' &&
						(*(s + 1) >= '0' && *(s + 1) <= '9'))))
			return (0);
		s++;
	}
	return (1);
}
