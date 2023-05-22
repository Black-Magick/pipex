/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:52:52 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:52:52 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/pipex.h"

void	c_process(int *fd, char **argv, char **envp)
{
	int	infile_fd;

	close(fd[0]);
	infile_fd = open(argv[1], O_RDONLY, 0644);
	if (infile_fd > 0)
	{
		dup2(infile_fd, STDIN_FILENO);
		dup2(fd[1], STDOUT_FILENO);
		command_executer(argv[2], envp);
	}
	else
		perros();
	close(fd[1]);
}

void	p_process(int *fd, char **argv, char **envp)
{
	int	outfile_fd;

	outfile_fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	close(fd[1]);
	if (outfile_fd > 0)
	{
		dup2 (outfile_fd, STDOUT_FILENO);
		dup2 (fd[0], STDIN_FILENO);
		command_executer (argv[3], envp);
	}
	else
		perros();
	close(fd[0]);
}
