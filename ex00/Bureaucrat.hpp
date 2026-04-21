/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:20:56 by fefo              #+#    #+#             */
/*   Updated: 2026/04/21 11:39:41 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        ~Bureaucrat();
        const std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);
};

#endif