/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:13:37 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/08 18:41:17 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base	*ptr = generate();
	std::cout	<< "pointer identify: " << std::ends;
	identify(ptr);
	std::cout	<< "reference identify: " << std::ends;
	identify(*ptr);
	delete (ptr);
	return (0);
}