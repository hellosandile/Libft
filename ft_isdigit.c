/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:37:56 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/27 17:35:51 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function tests for a decimal digit character. Even though,
 * isdigit() takes integer as an argument, character is passed to the function.
 * Internally, the character is converted to its ASCII value for the check.
 *
 * RETURN VALUES: The isdigit () and isnumber() functions returns zero if the
 * character tests false and return non-zero if the character tests true.  */

int		ft_isdigit.c(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
