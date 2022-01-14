/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 00:45:28 by zaabou            #+#    #+#             */
/*   Updated: 2021/12/17 13:30:07 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strjoine(char *rest, char *buffer);
int		ft_2strlen(char *rest, char *buffer);
int		ft_search_new_line(char *rest);
char	*get_next_line(int fd);
char	*ft_line_(char *rest);
char	*ft_next_line(char *rest);
char	*ft_read(char *rest, char *buffer, int fd);
int		ft_end(char *rest);
#endif
