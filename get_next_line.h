/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydorene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:30:59 by ydorene           #+#    #+#             */
/*   Updated: 2021/01/23 21:25:31 by ydorene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int				ret(int readed, char *ostatok);
int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *a);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(const char *s1, const char *s2, int z);
void			*ft_calloc(size_t number, size_t size);
char			*ft_strchr(const char *str, int ch);
#endif
