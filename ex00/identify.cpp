/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:41:21 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/04 15:40:06 by phillymilly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	is_ascii(long num)
{
	if (num < 0 || num > 127)
		return (0);
	return (1);
}

int is_displayable(int c)
{
	if (c > 32 && c < 127)
		return (1);
	return (0);
}

int	is_char(const std::string input)
{
	if ((input[0] < '0' || input[0] > '9') && input[1] == '\0')
		return (1);
	return (0);
}

int	is_int(const std::string input)
{
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
	}
	return (1);
}

int is_flouble(const std::string input)
{
	int	i = 0;
	int comma_count = 0;
	if (input[0] == '.')
		return (0);
	while (input[i + 1] != '\0')
	{
		if (input[i] < '0' || input[i] > '9')
		{
			if (input[i] == '.')
				comma_count++;
			else
				return (0);
		}
		i++;
	}
	if (comma_count == 1)
	{
		if (input[i - 1] != '.' && input[i] == 'f')
			return (1);
		else if (input[i] >= '0' && input[i] <= '9')
			return (2);
	}
	return (0);
}

int is_pseudo(const std::string input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (1);
	else if (input == "-inf" || input == "+inf" || input == "nan")
		return (2);
	return (0);
}

literalType	identify(std::string input)
{
	int decim_type = is_flouble(input);
	int pseudo_type = is_pseudo(input);
	if (pseudo_type == 1)
		return (PSEUDOF);
	else if (pseudo_type == 2)
		return (PSEUDO);
	if (decim_type == 1)
		return (FLOAT);
	else if (decim_type == 2)
		return (DOUBLE);
	else if (is_int(input))
		return (INTEGER);
	else if (is_char(input))
		return (CHAR);
	return (INVALID);
}