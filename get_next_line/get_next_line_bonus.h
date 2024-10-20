/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbcvali <vbcvali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:21:25 by vbcvali           #+#    #+#             */
/*   Updated: 2024/10/07 18:02:51 by vbcvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
int		len_to_new_line(t_list *list);
void	copy_str(t_list *list, char *str);
void	append(t_list **list, char *buf);
void	create_list(t_list **list, int fd);
void	clean_list(t_list **list);
char	*get_line(t_list *list);
t_list	*ft_lstlast(t_list *lst);
void	dealloc(t_list **list, t_list *clean_node, char *buf);
int		found_newline(t_list *list);

#endif
