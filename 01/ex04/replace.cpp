/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:26:28 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 16:53:38 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

t_str	replace(t_str content, t_str old_word, t_str new_word)
{
	int			pos;
	std::string	replaced_content;

	for (int i = 0; i < (int)content.size(); i++)
	{
		pos = content.find(old_word, i);
		if (pos != -1 && pos == i)
		{
			replaced_content += new_word;
			i += old_word.size() - 1;
		}
		else
			replaced_content += content[i];
	}
	return (replaced_content);
}