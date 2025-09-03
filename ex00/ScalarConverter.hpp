/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:44:27 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/02 20:02:15 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

typedef enum literalType
{
	CHAR,
	INTEGER,
	FLOAT,
	DOUBLE,
	PSEUDOF,
	PSEUDO,
	INVALID,
} literalType;

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
	public:
		static void convert(std::string input);
};

int	is_ascii(int num);
int is_displayable(int c);
literalType	identify(std::string input);

void	print_conversions(const std::string chr, const std::string in, const std::string fl, const std::string db);
void	convert_char(std::string input);
void	convert_int(std::string input);
void	convert_float(std::string input);
void	convert_double(std::string input);
void	convert_pseudo(std::string input, literalType type);

#endif