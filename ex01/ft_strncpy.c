/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:32:35 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/17 10:33:03 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while(count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return(dest);
}
