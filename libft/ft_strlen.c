/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:51:52 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:51:55 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	a;

	a = 0;
	while (string[a] != '\0')
		a++;
	return (a);
}

//int main()
//{
//    char *string;
//    int size;
//    int test_size;
//
//    //test 1
//    string = "ola";
//    size = strlen(string);
//    test_size = ft_strlen(string);
//    printf("First test:\n");
//    printf("Original function: %d\nMy function: %d\n\n", size, test_size);
//
//    //test 2
//    string = "";
//    size = strlen(string);
//    test_size = ft_strlen(string);
//    printf("Second test:\n");
//    printf("Original function: %d\nMy function: %d\n\n", size, test_size);
//
//    //test 3
//    string = "01234";
//    size = strlen(string);
//    test_size = ft_strlen(string);
//    printf("Third test:\n");
//    printf("Original function: %d\nMy function: %d\n", size, test_size);
//}
