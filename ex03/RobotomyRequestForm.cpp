/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
    AForm("robotomy", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    (void)rhs;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src) {
    *this = src;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const _target):
    AForm("robotomy", 72, 45) {
    RobotomyRequestForm::target = _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) {
    try {
        std::cout << "Rizzzzz... Rizzzzz..." << std::endl;
        AForm::beSigned(executor);
        std::cout << \
            RobotomyRequestForm::target << \
            " has been robotomized 50% of the time." << \
        std::endl;
    } catch (const AForm::GradeTooLowException &e) {
        std::cout << \
            "robotomy of " << \
             RobotomyRequestForm::target << \
            " failed." << \
        std::endl;
    }
    (void)executor;
}
