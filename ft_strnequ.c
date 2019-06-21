/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:08:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/21 14:23:56 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (n--) // decrements the value of n after the expression is evaluated
	{
		if (s1 == NULL || s2 == NULL)
			return (0);
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	}
	return (0);
}

