/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:51:27 by phillymilly       #+#    #+#             */
/*   Updated: 2025/09/05 19:34:04 by phillymilly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout   << "Default constructor of object "
                << '"' << "default" << '"' 
                << " called." << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
    std::cout   << "Copy of object "
                << '"' << "default" << '"'
                << " created through copy-constructor." << std::endl;
    *this = copy;
}

Serializer  &Serializer::operator=(const Serializer &copy)
{
    std::cout   << "Copy of object "
                << '"' << "default" << '"'
                << " created through assignment-operator." << std::endl;
    (void)copy;
    return (*this);
}

Serializer::~Serializer()
{
    std::cout   << "Destructor of object "
                << '"' << "default" << '"' 
                << " called." << std::endl;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	raw;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr;
	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}