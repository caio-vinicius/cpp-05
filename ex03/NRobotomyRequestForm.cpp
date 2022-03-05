/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "NRobotomyRequestForm.hpp"
#include "Form.hpp"

NRobotomyRequestForm::NRobotomyRequestForm():
    Form("robotomy", 72, 45) {}

NRobotomyRequestForm::~NRobotomyRequestForm() {}

NRobotomyRequestForm &NRobotomyRequestForm::operator=(NRobotomyRequestForm const &rhs) {
    (void)rhs;
    return (*this);
}

NRobotomyRequestForm::NRobotomyRequestForm(NRobotomyRequestForm const &src): Form(src) {
    *this = src;
}

NRobotomyRequestForm::NRobotomyRequestForm(std::string const _target):
    Form("robotomy", 72, 45) {
    NRobotomyRequestForm::target = _target;
}

void NRobotomyRequestForm::execute(Bureaucrat const &executor) {
    try {
        std::cout << "Rizzzzz... Rizzzzz..." << std::endl;
        Form::beSigned(executor);
        std::cout << \
            NRobotomyRequestForm::target << \
            " has been robotomized 50% of the time." << \
        std::endl;
    } catch (const Form::GradeTooLowException &e) {
        std::cout << \
            "robotomy of " << \
             NRobotomyRequestForm::target << \
            " failed." << \
        std::endl;
    }
    (void)executor;
}
