/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
    PresidentialPardonForm(void);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    PresidentialPardonForm(PresidentialPardonForm const &src);

    PresidentialPardonForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
