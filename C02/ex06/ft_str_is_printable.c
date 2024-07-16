/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:36:52 by muosman           #+#    #+#             */
/*   Updated: 2024/07/16 18:36:52 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
			return (1);
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    printf("%d\n", ft_str_is_printable("ahmet"));

}
