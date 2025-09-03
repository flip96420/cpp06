/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:43:52 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/02 20:17:17 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string to_string_c98(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

std::string to_string_c98(float value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

std::string to_string_c98(double value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

void	print_conversions(const std::string chr, const std::string in, const std::string fl, const std::string db)
{
	std::cout	<< "char: "		<<	chr	<< std::endl
				<< "int: "		<<	in	<< std::endl
				<< "float: "	<<	fl	<< std::endl
				<< "double: "	<<	db	<< std::endl;
}

void	convert_char(std::string input)
{
	int		in	= input[0];
	float	fl	= static_cast<float>(in);
	double	db	= static_cast<double>(in);

	print_conversions(input, to_string_c98(in), to_string_c98(fl) + "f", to_string_c98(db));
}

std::string	to_char(int in)
{
	std::string	ch;
	if (is_ascii(in))
	{
		if (is_displayable(in))
		{
			ch = static_cast<char>(in);
			return (ch);
		}
		else
			return ("Non displayable");
	}
	return ("Impossible");
}

void	convert_int(std::string input)
{
	int			in = std::atoi(input.c_str());
	float		fl = static_cast<float>(in);
	double		db = static_cast<double>(in);

	print_conversions(to_char(in), to_string_c98(in), to_string_c98(fl) + "f", to_string_c98(db));
}

void	convert_float(std::string input)
{
	float		fl = std::stof(input);
	int			in = static_cast<int>(fl);
	double		db = static_cast<double>(fl);
	
	print_conversions(to_char(in), to_string_c98(in), to_string_c98(fl) + "f", to_string_c98(db));
}

void	convert_double(std::string input)
{
	double		db = std::stod(input);
	int			in = static_cast<int>(db);
	float		fl = static_cast<float>(db);
	
	print_conversions(to_char(in), to_string_c98(in), to_string_c98(fl) + "f", to_string_c98(db));
}

void	convert_pseudo(std::string input, literalType type)
{
	if (type == PSEUDOF)
		print_conversions("impossible", "impossible", input, input.substr(0, input.size() - 1));
	else if (type == PSEUDO)
		print_conversions("impossible", "impossible", input.append("f"), input);
}