/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
    AForm("presidential", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    (void)rhs;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src) {
    *this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const _target):
    AForm("presidential", 25, 5) {
    PresidentialPardonForm::target = _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) {
    try {
        AForm::beSigned(executor);
        std::cout << \
            PresidentialPardonForm::target << \
            " has been pardoned by Zaphod Beeblebrox." << \
        std::endl;
    } catch (const AForm::GradeTooLowException &e) {
        std::cerr << e.error() << std::endl;
    }
}
