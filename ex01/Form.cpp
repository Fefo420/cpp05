/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:39:19 by fefo              #+#    #+#             */
/*   Updated: 2026/04/21 15:48:59 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeSignValue, int gradeExecValue) : gradeSign(gradeSignValue), gradeExec(gradeExecValue) 
{
    std::cout << "Form " << name << " got created." << std::endl;
}

Form::~Form()
{
    std::cout << "Form destroyed..." << std::endl;
}