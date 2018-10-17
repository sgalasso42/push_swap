/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:46:15 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 17:06:19 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# define C_NONE         "\033[0m"
# define C_RED          "\033[31m"
# define C_GREEN        "\033[32m"
# define C_CYAN         "\033[36m"

# define BUFF_SIZE 500
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

size_t					ft_strlen(const char *s);
int						ft_atoi(const char *nptr);
char					*ft_strdup(const char *s);
int						ft_isdigit(int c);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strnew(size_t size);
int						ft_strequ(char const *s1, char const *s2);
char					*ft_strsub(char const *s,
						unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
int						get_next_line(const int fd, char **line);

typedef struct			s_plist
{
	int				nb;
	struct s_plist	*next;
}						t_plist;

typedef struct			s_pile
{
	int				v;
	void			(*fc_tab[11])(struct s_pile *);
	char			*cmd_tab[11];
	t_plist			*numbers_a;
	t_plist			*numbers_b;
}						t_pile;

int						ft_nbrlen(int nb);
int						ft_parse_pile(char **argv, t_pile *pile);
void					ft_sa(t_pile *pile);
void					ft_sb(t_pile *pile);
void					ft_ss(t_pile *pile);
void					ft_pa(t_pile *pile);
void					ft_pb(t_pile *pile);
void					ft_ra(t_pile *pile);
void					ft_rb(t_pile *pile);
void					ft_rr(t_pile *pile);
void					ft_rra(t_pile *pile);
void					ft_rrb(t_pile *pile);
void					ft_rrr(t_pile *pile);
void					ft_exec_commands(t_pile *pile, char *line);

#endif
