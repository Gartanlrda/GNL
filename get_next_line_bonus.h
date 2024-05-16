/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:05:08 by ggoy              #+#    #+#             */
/*   Updated: 2024/05/16 12:05:11 by ggoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
# include <stdlib.h>

int		ft_strlen(char *s);
int		ft_check(char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2, int len);
char	*ft_strdup(char *s);
void	free_strs(char **s1, char **s2, char **s3);

#endif
