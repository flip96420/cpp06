/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:48:47 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/04 16:15:11 by phillymilly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout	<< "Default constructor of object "
				<< '"' << "Default" << '"'
				<< " called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	std::cout	<< "Copy of object "
				<< '"' << "Default" << '"'
				<< "created through copy-constructor." << std::endl;
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	std::cout	<< "Copy of object "
				<< '"' << "Default" << '"'
				<< " created through an assignement-operator overload." << std::endl;
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout	<< "Destructor of object "
				<< '"' << "Default" << '"'
				<< " called." << std::endl;
}

void	ScalarConverter::convert(std::string input)
{
	literalType type = identify(input);
	switch(type)
	{
		case CHAR:
		{
			convert_char(input);
			break;
		}
		case INTEGER:
		{
			convert_int(input);
			break;
		}
		case FLOAT:
		{
			convert_float(input);
			break;
		}
		case DOUBLE:
		{
			convert_double(input);
			break;
		}
		case PSEUDOF:
		{
			convert_pseudo(input, type);
			break;
		}
		case PSEUDO:
		{
			convert_pseudo(input, type);
			break;
		}
		case INVALID:
		{
			print_conversions("Impossible", "Impossible", "Impossible", "Impossible");
			break;
		}
	}
}


