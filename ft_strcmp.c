/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:57:12 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/28 15:59:59 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcmp() and strncmp() functions lexicographically compare the null-terminated
 * strings s1 and s2. 
 *
 * Lexicographical order: In mathematics, the lexicographic or lexicographical order
 * (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product)
 * is a generalisaiton of the way words are alphabetically ordered based on the
 * alphabetical order of their component letters. 
 *
 * RETURN VALUES: The strcmp() and strncmp() functions return an integer greater than,
 * equal to, or less than 0, according as the string s1 is greater than, eqaul to,
 * or less than the string s2. The comparison is done using unsigned characters, so that
 * '\200' is greater than '\0'.
 * */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
