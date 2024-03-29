/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:51:36 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:51:36 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

//malloc, free, exit
# include <stdlib.h>

//open, unlink
# include <stdio.h>

//strerror
# include <string.h>
# include <errno.h>

//waitpid, wait
# include <sys/wait.h>

//write, read, close, access, pipe, dup, dup2, execve, fork
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

//open, unlink
# include <fcntl.h>

int		main(int argc, char *argv[], char *envp[]);
int		erros(void);
void	free_1(char **way, char *path);
void	perros(void);
char	*pathfinder_second(char *command, char **envp);
char	*triple(char *s1, char *s2, char *s3);
void	command_executer(char *argv, char **envp);
void	p_process(int *fd, char **argv, char **envp);
void	c_process(int *fd, char **argv, char **envp);
char	**pathfinder_first(char **envp);
void	free_2(char **without, char **paths);

#endif