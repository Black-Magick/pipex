/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:51:24 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:51:27 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

/*
para a conversao p
p - um pointer tipo void tem de ser printado num formato hex
*/

/*
ver as definicoes de hexa e bases 16 no ficheiro forhexa.c
*/

/*
e necessario ter uma versao da funcao para hexadecimais nesta
flag p por cause do tipo de variaveis. neste caso do pointer, 
e preciso ter um int que seja maior e com mais valor possivel
*/

static void	hexa_forp(size_t nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar((base[nbr % 16]), len);
	else
	{
		hexa_forp((nbr / 16), len);
		hexa_forp((nbr % 16), len);
	}
}

void	ft_putp(const void *p, int *len)
{
	size_t	pointer;

	pointer = (size_t)p;
	if (pointer == 0)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	ft_putstr("0x", len);
	hexa_forp(pointer, len);
}

/*
nil e o termo correcto para descrever quando um pointer aponta
para null
*/
