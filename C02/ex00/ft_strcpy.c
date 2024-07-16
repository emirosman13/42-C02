/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:36:26 by muosman           #+#    #+#             */
/*   Updated: 2024/07/16 18:36:26 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}

	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char nereden[] = "emir";
	char nereye[] = "muhammed";
	printf("%s", ft_strcpy(nereden, nereye));



}