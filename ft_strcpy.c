/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:19:49 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/28 16:53:30 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the strncpy() and strcpy() functions copy the string src to dst (including the
 * terminating '\0' character.)
 *
 * The C library function char *strcpy(char *dest, const char *src) copies the
 * string pointed to, by src to dest. Dest is the pointer to the destination array
 * where the content is to be copied and src is the string to be copied.
 *
 * Choose to name it dest or dst
 * */

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		dest[i] != '\0';
	}
	return (dest)
}
