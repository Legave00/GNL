/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:29:46 by ydorene           #+#    #+#             */
/*   Updated: 2021/01/23 21:51:08 by ydorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*a;

	i = 0;
	while (str[i])
		i++;
	a = (char*)malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

size_t	ft_strlen(const char *a)
{
	size_t	i;

	if (!a)
		return (0);
	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2, int z)
{
	size_t		i;
	size_t		b;
	char		*a;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	b = ft_strlen(s1);
	i = 0;
	if ((a = malloc((b + z) * sizeof(char) + 1)) == NULL)
		return (NULL);
	while (i < (b + z))
	{
		if (*s1)
			a[i] = *s1++;
		else
			a[i] = *s2++;
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strchr(const char *str, int ch)
{
	char *a;

	a = (char *)str;
	while (*a != '\0')
	{
		if (*a == ch)
			return (a);
		a++;
	}
	if (ch == '\0')
		return (a);
	return (0);
}

int		ret(int readed, char *ostatok)
{
	if (readed < 0)
	{
		free(ostatok);
		return (-1);
	}
	free(ostatok);
	ostatok = NULL;
	return (0);
}
