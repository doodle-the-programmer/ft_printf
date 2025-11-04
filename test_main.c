/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatrici <gpatrici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:22:05 by gpatrici          #+#    #+#             */
/*   Updated: 2025/11/04 19:31:12 by gpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(void)
{
#include <stdio.h>

	printf("\n%d characters used for %%s.\n",
		ft_printf("1:%s\n2:%s\n3:%s\n4:%s\n", "wsp", "is it joever\0",
			"trump will murder all mexicans", NULL));
	return (0);
}