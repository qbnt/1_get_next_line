/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbanet <qbanet@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:26:59 by quentinba         #+#    #+#             */
/*   Updated: 2023/03/01 13:39:48 by qbanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *str, size_t i);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_check(char *str, int c);
size_t	ft_strlen(char *s);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif
