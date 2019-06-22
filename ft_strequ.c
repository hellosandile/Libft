/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:58:03 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/22 05:06:11 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
/*{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}


{
	int		i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}


{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
*/

{
	size_t	cnt;

	cnt = 0;
	if (s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[cnt] && s1[cnt] == s2[cnt])
		cnt++;
	if (s1[cnt] == s2[cnt])
		return (1);
	return (0);
}
