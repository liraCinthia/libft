/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:27:10 by clira-ne          #+#    #+#             */
/*   Updated: 2023/10/18 16:56:02 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (8);
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("função original: %d\n", isalnum('A'));
	return (0);
}
