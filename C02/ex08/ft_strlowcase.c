/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:37:00 by muosman           #+#    #+#             */
/*   Updated: 2024/07/16 18:37:00 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
int main()
{
    char input[] = "ASD";
    
    printf("%s\n", ft_strlowcase(input));
    return 0;
}
