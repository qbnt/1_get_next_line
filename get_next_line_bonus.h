/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbanet <qbanet@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:31:41 by qbanet            #+#    #+#             */
/*   Updated: 2023/03/06 11:40:49 by qbanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
