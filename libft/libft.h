/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:52:07 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:52:07 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

//bibliotecas necessárias
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

size_t		ft_strlen(const char *string);
char		*ft_strnstr(const char *s1, const char *s2, size_t len);
char		**ft_split(char const *s, char c);

#endif
