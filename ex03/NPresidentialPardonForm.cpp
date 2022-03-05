/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "NPresidentialPardonForm.hpp"
#include "Form.hpp"

NPresidentialPardonForm::NPresidentialPardonForm():
    Form("presidential", 25, 5) {}

NPresidentialPardonForm::~NPresidentialPardonForm() {}

NPresidentialPardonForm &NPresidentialPardonForm::operator=(NPresidentialPardonForm const &rhs) {
    (void)rhs;
    return (*this);
}

NPresidentialPardonForm::NPresidentialPardonForm(NPresidentialPardonForm const &src): Form(src) {
    *this = src;
}

NPresidentialPardonForm::NPresidentialPardonForm(std::string const _target):
    Form("presidential", 25, 5) {
    NPresidentialPardonForm::target = _target;
}

void NPresidentialPardonForm::execute(Bureaucrat const &executor) {
    try {
        Form::beSigned(executor);
        std::cout << \
            NPresidentialPardonForm::target << \
            " has been pardoned by Zaphod Beeblebrox." << \
        std::endl;
    } catch (const Form::GradeTooLowException &e) {
        std::cerr << e.error() << std::endl;
    }
}
