/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef NPRESIDENTIALPARDONFORM_HPP
#define NPRESIDENTIALPARDONFORM_HPP

#include <string>

#include "Form.hpp"

class NPresidentialPardonForm : public Form {
 public:
    NPresidentialPardonForm(void);
    ~NPresidentialPardonForm(void);
    NPresidentialPardonForm &operator=(NPresidentialPardonForm const &rhs);
    NPresidentialPardonForm(NPresidentialPardonForm const &src);

    NPresidentialPardonForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
