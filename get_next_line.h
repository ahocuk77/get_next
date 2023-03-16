/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:21:45 by ahocuk            #+#    #+#             */
/*   Updated: 2023/03/16 23:56:20 by ahocuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char			*get_next_line(int fd);
char			*ft_strdup(char *str);
char			*ft_strjoin(const char *s1, const char *s2);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
char			*gnl_strchr(const char *str, int argument);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			pt_free(char **ptr);
int				read_line(int fd, char **buffer, char **backup, char **line);
char			*ft_down_line(char **backup, char **line);
#endif