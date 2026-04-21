/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:39:26 by fefo              #+#    #+#             */
/*   Updated: 2026/04/21 15:45:44 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned = false;
        const int gradeSign;
        const int gradeExec;
    public:
        Form(const std::string& name, int gradeSignValue, int gradeExecValue);
        ~Form();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExect() const;
        void setIsSigned();

        void beSigned(const Bureaucrat& b);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade too high";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade too low";
                }
        };
};




#endif