/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:20:59 by fefo              #+#    #+#             */
/*   Updated: 2026/04/21 11:54:10 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150)
{
    std::cout << "Bureaucrat Got created with a grade of " << grade << std::endl; 
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
    std::cout << name << "Got Created, with a grade of " << grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bye bye Mr. " << name << " :(" <<std::endl;
}