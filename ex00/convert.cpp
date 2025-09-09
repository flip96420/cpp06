/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:43:52 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/04 16:24:34 by phillymilly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string toString(const int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

std::string toString(const float value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << value;
    return oss.str();
}

std::string toString(const double value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << value;
    return oss.str();
}

void	print_conversions(const std::string chr, const std::string in, const std::string fl, const std::string db)
{
	std::cout	<< "char: "		<<	chr	<< std::endl
				<< "int: "		<<	in	<< std::endl
				<< "float: "	<<	fl	<< std::endl
				<< "double: "	<<	db	<< std::endl;
}

std::string	to_char(long in)
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
	return ("impossible");
}

std::string to_int(long num)
{
	int	in;
	if (num > -std::numeric_limits<int>::max() && num < std::numeric_limits<int>::max())
	{
		in = static_cast<int>(num);
		return (toString(in));
	}
	return ("impossible");
}

std::string to_float(double num)
{
	float	fl;
	if (num > -std::numeric_limits<float>::max() && num < std::numeric_limits<float>::max())
	{
		fl = static_cast<float>(num);
		return (toString(fl) + "f");
	}
	return ("impossible");
}

std::string to_double(double num)
{
	double	db;
	if (num > -std::numeric_limits<double>::max() && num < std::numeric_limits<double>::max())
	{
		db = static_cast<double>(num);
		return (toString(db));
	}
	return ("impossible");
}

void	convert_char(std::string input)
{
	int		in	= input[0];
	float	fl	= static_cast<float>(in);
	double	db	= static_cast<double>(in);

	print_conversions(to_char(in), to_int(in), to_float(fl), to_double(db));
}

void	convert_int(std::string input)
{
	long		in = atol(input.c_str());
	if (in > -std::numeric_limits<int>::max() && in < std::numeric_limits<int>::max())
	{
		float		fl = static_cast<float>(in);
		double		db = static_cast<double>(in);
		print_conversions(to_char(in), to_int(in), to_float(fl), to_double(db));
	}
	else
		print_conversions("impossible", "impossible", "impossible", "impossible");
}

void	convert_float(std::string input)
{
	char		*ptr;
	float		fl = strtof(input.c_str(), &ptr);
	std::cout	<< "FLOAT OVERFLOW: " << fl << std::endl;
	if (fl > -std::numeric_limits<float>::max() && fl < std::numeric_limits<float>::max())
	{
		long		in = static_cast<long>(fl);
		double		db = static_cast<double>(fl);
		print_conversions(to_char(in), to_int(in), to_float(fl), to_double(db));
	}
	else
		print_conversions("impossible", "impossible", "impossible", "impossible");
}

void	convert_double(std::string input)
{
	char		*ptr;
	double		db = strtod(input.c_str(), &ptr);
	if (db > -std::numeric_limits<double>::max() && db < std::numeric_limits<double>::max())
	{
		long		in = static_cast<long>(db);
		float		fl = static_cast<float>(db);
		print_conversions(to_char(in), to_int(in), to_float(fl), to_double(db));
	}
	else
		print_conversions("impossible", "impossible", "impossible", "impossible");
}

void	convert_pseudo(std::string input, literalType type)
{
	if (type == PSEUDOF)
		print_conversions("impossible", "impossible", input, input.substr(0, input.size() - 1));
	else if (type == PSEUDO)
		print_conversions("impossible", "impossible", input.append("f"), input);
}