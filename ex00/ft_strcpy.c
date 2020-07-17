/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:31:33 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/17 10:32:05 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while(src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return(dest);
}
