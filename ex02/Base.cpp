/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:49:57 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/10 17:10:21 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout	<< "Destructor of object "
				<< '"' << "default" << '"'
				<< " called." << std::endl;
}

Base	*generate(void)
{
	srand(static_cast<unsigned int>(clock()));
	int		type = rand() % 3;

	switch (type)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			std::cout << "Unexpected behavior. Range should be between 0 and 2!" << std::endl; return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "type not found" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout	<< "A" << std::endl;
	}
	catch(std::exception& e)
	{
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout	<< "B" << std::endl;
	}
	catch(std::exception& e)
	{
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout	<< "C" << std::endl;
	}
	catch(std::exception& e)
	{
	}
	
}