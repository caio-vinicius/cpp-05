/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "AForm.hpp"

AForm::AForm():
    name("document"), isSigned(false), signedGrade(1), executeGrade(1) {}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &rhs) {
    (void)rhs;
    return (*this);
}

AForm::AForm(AForm const &src):
    name("document"), isSigned(false), signedGrade(1), executeGrade(1) {
    *this = src;
}

const char *AForm::GradeTooHighException::error() const {
    return "You tried to use a very high grade: values must be between 1 and 150.";
}

const char *AForm::GradeTooLowException::error() const {
    return "You tried to use a very low grade: values must be between 1 and 150.";
}

AForm::AForm(std::string _name, unsigned char _signedGrade, unsigned char _executeGrade):
    name(_name), isSigned(false), signedGrade(_signedGrade), executeGrade(_executeGrade) {}

std::ostream &operator<<(std::ostream &stream, AForm const &rhs) {
    std::cout << std::boolalpha <<
        rhs.getName() << ", form status signed " << rhs.getIsSigned() << \
        ", signedGrade: " << (int)rhs.getSignedGrade() << \
        " and executeGrade: " << (int)rhs.getExecuteGrade();
    return stream;
}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= AForm::signedGrade) {
        AForm::isSigned = true;
    } else {
        throw AForm::GradeTooLowException();
    }
}

std::string AForm::getName(void) const {
    return (AForm::name);
}

bool AForm::getIsSigned(void) const {
    return (AForm::isSigned);
}

unsigned char AForm::getSignedGrade(void) const {
    return (AForm::signedGrade);
}

unsigned char AForm::getExecuteGrade(void) const {
    return (AForm::executeGrade);
}
