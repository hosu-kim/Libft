/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isallnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:52:33 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/19 18:52:33 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
// checks if the provided integer is an alphabet or number in ascii code.
// True: 1, False: 0
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || (49 <= c && c <= 57))
	{
		return (1);
	}
	return (0);
}
