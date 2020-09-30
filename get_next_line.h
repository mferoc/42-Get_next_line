/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:33:24 by mathferr          #+#    #+#             */
/*   Updated: 2020/09/30 17:49:44 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*
** void	ft_strdel(char **as);
** static char	*ft_strchr(const char *s, int c);
** int	create_new_line(char **s, char **line, int fd, int ret);
*/
char	*ft_strdup(char *s);
char	*ft_strnew(size_t size);
size_t	ft_strlen(char const *s);
int		get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
