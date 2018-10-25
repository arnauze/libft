/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoperation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:41:30 by amagnan           #+#    #+#             */
/*   Updated: 2018/10/19 17:41:31 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_is_operation(char c)
{
	if (c == '-' || c == '+' || c == '*'
		|| c == '/' || c == '%')
		return (1);
	return (0);
}
