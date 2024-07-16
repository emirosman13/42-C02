/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:36:32 by muosman           #+#    #+#             */
/*   Updated: 2024/07/16 18:36:32 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

int main()
{
	unsigned int n;
    n = 5;
    
    char nereden[] = "emir";
	char nereye[10] = "muhammed";
	ft_strncpy(nereye, nereden, n);
    printf("%s\n", nereye);

    return(0);
    
}