/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:04:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/04 13:55:51 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i	= 0;
   str =(char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
   if (str == NULL)
	   return (NULL);
   while (s1[i])
   {
	   str[i] = s1[i];
	   i++;
   }
   str[1] = '\0';
   return (str);
}
   return 0;
}
