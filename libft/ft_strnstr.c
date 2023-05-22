/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:51:59 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:52:02 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <string.h>
//#include <stdio.h>

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[h] != '\0')
	{
		n = 0;
		while (s1[h + n] == s2[n] && (h + n) < len)
		{
			if (s1[h + n] == '\0' && s2[n] == '\0')
				return ((char *)&s1[h]);
			n++;
		}
		if (s2[n] == '\0')
			return ((char *)s1 + h);
		h++;
	}
	return (0);
}

//int main()
//{
//    char str[] = "";
//    char str2[] = "dia";
//    char *test;
//
//    test = ft_strnstr(str, str2, 8);
//    printf("veri noice. result: %s\n", test);
//}