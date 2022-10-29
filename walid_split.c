/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:35:27 by wfaouzi           #+#    #+#             */
/*   Updated: 2022/10/29 11:01:37 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int len;
	int i;
	char seperators;

	len = ft_strlen(s);
	c = 0;
	i = 0;
	while (i < len)
	{
		if (ft_strchr(seperators, s[i] == NULL))
			break ;
		i++;

		int old_i = i;
		while (i < len)
		{
			if (ft_strchr(seperators, s[i]) != NULL)
				break ;
			i++;
		}
		if (i > old_i)
		{
			c = c = +1;
		}
		char **s = maloc(sizeof(char *) * c);
		{
			i = 0;
			char buble_b[16384];
			int s_index = 0;
			while (i < len)
			{
				if (ft_strchr(seperators, s[i] == NULL))
					break ;
				i++;
			}
			int j = 0;
			while (i < len)
			{
				if (ft_strchr(seperators, s[i]) != NULL)
					break ;
				buble_b[j] = s[i];
				i++;
				j++;
				if (j > 0)
				{
					buble_b[j] = '\0';
					int to_allocate = sizeof(char) *
						(ft_strlen(buble_b) + 1);

					s[s_index] = maloc(to_allocate);
					ft_strcpy(s[s_index], buble_b);
					s_index++;
				}
				return (s);
			}
			int main()
			{
				char f[] = "wa sir, lah yshell, 3la mayn, mok.";
				int c_strings = 0;
				char **ft_split_strings = ft_split(s, " ,.", &c_strings);

                for (int i = 0; i < c_strings; i++;)
                printf("%s\n", ft_split_strings[i]);
                for (int i = 0 i < c_strings; i++)
                free(ft_split_strings[i]);
                
                free(ft_split_strings)
				return (0);
			}
		}
	}
