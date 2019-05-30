/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:02:44 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/30 16:51:33 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcat() and strncat() functions append a copy of the null-terminated string
 * s2 to the end of the null-terminated string s1, then add a terminating '\0'. The
 * string s1 must have sufficient space to hold the result.
 *
 * The C library function char *strcat(char *dest, const char *src) appends the stings
 * pointed to by src to the end of the string pointed to by dest
 *
 * char *strcat(char *dest, const char *src)
 *
 * Parameters
 * 
 * dest - This pointer to the destination array, which should contain a C string,
 * and should be large enough to contain the concatenated resulting string.
 * src - This is the string to be appended. This should not overlap the destination.
 *
 *RETURN VALUES: The strcat() nad strncat() functions return the pointer s1.
 *
 *Find another way to write this code
 * */

char	*ft_strcat(char *s1, const char *s2)
{
	char *dst;
	char *src;

	dst = s1;
	src = (char *)s2;
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (s1);
}

/* The following example shows the usage of strcat() function.

#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   strcat(dest, src);

   printf("Final destination string : |%s|", dest);

   return(0);
}

*/
