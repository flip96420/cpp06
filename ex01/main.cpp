/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:24:36 by phillymilly       #+#    #+#             */
/*   Updated: 2025/09/05 19:45:56 by phillymilly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data		data;
	uintptr_t	raw;

	data.name = "test";
	std::cout	<< data.name << std::endl;
	std::cout	<< "original address: " << &data << std::endl;
	raw = Serializer::serialize(&data);
	std::cout	<< "uniptr: " << raw << std::endl;
	Data *restored = Serializer::deserialize(raw);
	std::cout	<< "data: " << restored << std::endl;
	return (0);
}