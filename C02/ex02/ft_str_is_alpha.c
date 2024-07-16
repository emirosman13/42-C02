/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:36:36 by muosman           #+#    #+#             */
/*   Updated: 2024/07/16 18:36:36 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')||
			(str[i] >= 'a' && str[i] <= 'z'))

			i++;

		else
			return (0);
	}
	return (1);
}

int main()
{
    
    printf("%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("-_13455667"));

}
