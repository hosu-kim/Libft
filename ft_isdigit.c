/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:47:25 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/19 18:47:25 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
// checks if the provided integer is a number in ascii code.
// True: 1, False: 0
{
	if (49 <= c && c <= 57)
		return (1);
	retrun (0);
}
