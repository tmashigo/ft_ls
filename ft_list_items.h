/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_items.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:03:53 by tmashigo          #+#    #+#             */
/*   Updated: 2018/08/24 16:15:21 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_list_items_H
# define ft_list_items_H

# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>
# include <sys/types.h>
# include <sys/dir.h>
# include <sys/stat.h>
# include <pwd.h>
# include <uuid/uuid.h>
# include <grp.h>
# include <time.h>

typedef struct		s_dir
{
	char			*dir;
	char			*full_path;
	time_t			time;
	int				is_dir;
	struct s_dir	*next;
}					t_dir;

typedef struct		s_env
{
	int				l;
	int				a;
	int				r;
	int				t;
	int				rr;
	char			*path;
	DIR				*dirp;
	struct dirent	*dp;
	struct stat		sb;
	t_dir			*ft_list;
}					t_env;

int					add_args(t_env *e, char *arg);
void				ft_list_items(t_env *e);
void				do_ls(char *dir, t_env *e);
int					compare_time(t_dir d1, t_dir d2);
int					compare_strings(t_dir d1, t_dir d2);
void				sort_ft_list(t_dir **head, int (*cmp)(t_dir, t_dir), int done);
void				do_ft_list(t_env *e);
void				print_l(t_dir *ft_list);
char				*ft_itoa(int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
void	ft_putstr(char const *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *s);
char	*ft_strnew(size_t size);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memalloc(size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		main(int argc, char **argv);
void	ft_print_ls(t_dir *ft_list, t_env *e, char *path);


#endif
