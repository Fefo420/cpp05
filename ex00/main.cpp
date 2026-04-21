/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:20:52 by fefo              #+#    #+#             */
/*   Updated: 2026/04/21 14:41:08 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 1);
        Bureaucrat b2("Blue", 200);
        b1.decrementGrade(1);
        b1.incrementGrade(1);
        b1.incrementGrade(1);
    }
    catch (const std::exception & e)
    {
        std::cout << "Error with " << e.what() << std::endl;
    }
    return 0;
}