/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
 public:
    ShrubberyCreationForm(void);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);

    ShrubberyCreationForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
