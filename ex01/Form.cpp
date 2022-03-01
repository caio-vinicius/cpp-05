/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Form.hpp"

Form::Form():
    name("document"), isSigned(false), signedGrade(1), executeGrade(1) {}

Form::~Form() {}

Form &Form::operator=(Form const &rhs) {
    (void)rhs;
    return (*this);
}

Form::Form(Form const &src):
    name("document"), isSigned(false), signedGrade(1), executeGrade(1) {
    *this = src;
}

const char *Form::GradeTooHighException::error() const {
    return "You tried to use a very high grade: values must be between 1 and 150.";
}

const char *Form::GradeTooLowException::error() const {
    return "You tried to use a very low grade: values must be between 1 and 150.";
}

Form::Form(std::string _name, unsigned char _signedGrade, unsigned char _executeGrade):
    name(_name), isSigned(false), signedGrade(_signedGrade), executeGrade(_executeGrade) {}

std::ostream &operator<<(std::ostream &stream, Form const &rhs) {
    std::cout << std::boolalpha <<
        rhs.getName() << ", form status signed " << rhs.getIsSigned() << \
        ", signedGrade: " << (int)rhs.getSignedGrade() << \
        " and executeGrade: " << (int)rhs.getExecuteGrade();
    return stream;
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    try {
        if (bureaucrat.getGrade() <= Form::signedGrade) {
            Form::isSigned = true;
        } else {
            throw Form::GradeTooLowException();
        }
    } catch (const Form::GradeTooLowException &e) {
        std::cerr << e.error() << std::endl;
    }
}

std::string Form::getName(void) const {
    return (Form::name);
}

bool Form::getIsSigned(void) const {
    return (Form::isSigned);
}

unsigned char Form::getSignedGrade(void) const {
    return (Form::signedGrade);
}

unsigned char Form::getExecuteGrade(void) const {
    return (Form::executeGrade);
}
