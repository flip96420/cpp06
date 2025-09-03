/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:35:00 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/02 16:13:45 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::cout << av[1] << std::endl;
		ScalarConverter::convert(av[1]);
	}
	else
	{
		std::cout << "Insufficient Arguments!" << std::endl;
		return (1);
	}
	return (0);
}