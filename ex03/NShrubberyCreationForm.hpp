/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef NSHRUBBERYCREATIONFORM_HPP
#define NSHRUBBERYCREATIONFORM_HPP

#include <string>

#include "Form.hpp"

class NShrubberyCreationForm : public Form {
 public:
    NShrubberyCreationForm(void);
    ~NShrubberyCreationForm(void);
    NShrubberyCreationForm &operator=(NShrubberyCreationForm const &rhs);
    NShrubberyCreationForm(NShrubberyCreationForm const &src);

    NShrubberyCreationForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
