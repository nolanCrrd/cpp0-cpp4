/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:48:58 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 13:49:50 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[100];

	for (int i = 0; i < 50; i++)
		animals[i] = new Dog();
	for (int i = 50; i < 100; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete animals[i];

	
	Cat *an1 = new Cat();
	Cat *an2 = new Cat(*an1);
	delete an1;
	delete an2;
}
