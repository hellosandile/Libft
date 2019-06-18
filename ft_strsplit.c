/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:50:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/18 15:24:16 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countword(char const *s, char c)
{
	unsigned int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (counter);
}


/*This function (the commented one) is a variation of the ft_strdup function we
 * have previously made. According to the man the ft_strdup function allocates
 * sufficient memory for a copy of the given string, does the cop, and returns
 * a pointer to it. The ft_strndup copies at most n (our size_t parameter)
 * characters from the given string, always NULL terminating the copied string*/

static char		*ft_strndup(const char *s, size_t n)
{
	/*//How I originally did ft_strdup. Now make own edits
	char	*str;
	size_t	i;

	i = 0;
	str =((char *)malloc(sizeof(char) * (ft_strlen(s) (n + 1))));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
*/
	/*We start by creating a string variable that we will be allocating memory
	 * to and that we will be returning as the result of this function. We
	 * allocate the memory for this string by using this function's parameter
	 * of n. We get this parameter from our ft_strsplit function. It is the
	 * length of one of the words that we are splitting into a table. We add 1
	 * to this in the malloc function to ensure sapce for a terminating '\0'. We
	 * then check to see if the memory allocation failed. If it did we will return
	 * NULL. If the allocation succeeded then we want to place our word into our
	 * fresh string str. We do this by using our previously made ft_strncpy function.
	 * We give ft_strncpy our memory allocated 'fresh' string, the parameter string s
	 * (which is taken from ft)strsplit but has been put in the ft_strndup function
	 * at the index in the word we want to place into str will start from) and the
	 * size_t parameter n. We then make sure to add a terminating character to the
	 * end of our fresh string and then return it.*/
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strcpy(str, s, n);
	str[n] = '\0';
	return (str);
}


/*With the two previous functions made we are now ready to begin our
 * real function, ft_strsplit */

char		**ft_strsplit(char const *s, char c)
{
	/*We start by creaing three counter variales. We will use these three
	 * variables to pinpoint index potions inside our parameter string s. We
	 * also create a char variable **tab. this variable is for our table that
	 * will hold our split strings. We set the variables i and k to 0 and we'll
	 * then allocate memory for our table. This is where we use our ft_countword
	 * function above, to figure out how much space we need to allocate for our
	 * table. If the allocation fails we return a NULL.*/
	int	i;
	int j;
	int k;
	char	**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	/*Notes*/
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
