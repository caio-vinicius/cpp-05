/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"
#include "GradeException.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    (void)rhs;
    return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
}

static void bureaucratGradeException(unsigned char grade) {
    try {
        if (grade < MIN_GRADE)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > MAX_GRADE)
            throw Bureaucrat::GradeTooLowException();
    } catch (const Bureaucrat::GradeTooHighException &e) {
        throw e.error();
    } catch (const Bureaucrat::GradeTooLowException &e) {
        throw e.error();
    }
}

Bureaucrat::Bureaucrat(std::string name, unsigned char grade): name(name) {
    try {
        bureaucratGradeException(grade);
        Bureaucrat::grade = grade;
    } catch (const char *error) {
        std::cerr << error << std::endl;
        Bureaucrat::grade = DEFAULT_GRADE;
    }
}

std::string Bureaucrat::getName(void) const {
    return (Bureaucrat::name);
}

unsigned char Bureaucrat::getGrade(void) const {
    return ((int)Bureaucrat::grade);
}

const char *Bureaucrat::GradeTooHighException::error() const {
    return "You tried to use a very high grade: values must be between 1 and 150.";
}

const char *Bureaucrat::GradeTooLowException::error() const {
    return "You tried to use a very low grade: values must be between 1 and 150.";
}

void Bureaucrat::incrementGrade(void) {
    unsigned char _grade;

    _grade = Bureaucrat::grade;
    try {
        bureaucratGradeException(--_grade);
        Bureaucrat::grade = _grade;
    } catch (const char *error) {
        std::cerr << error << std::endl;
    }
}

void Bureaucrat::decrementGrade(void) {
    unsigned char _grade;

    _grade = Bureaucrat::grade;
    try {
        bureaucratGradeException(++_grade);
        Bureaucrat::grade = _grade;
    } catch (const char *error) {
        std::cerr << error << std::endl;
    }
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs) {
    std::cout << rhs.getName() << ", bureaucrat grade " << (int)rhs.getGrade();
    return stream;
}

void Bureaucrat::signForm(Form &form) {
    if (Bureaucrat::grade <= form.getSignedGrade()) {
        std::cout << \
            Bureaucrat::name << " signed " << form.getName() << \
        std::endl;
        form.beSigned(*this);
    } else {
        std::cout << \
            Bureaucrat::name << " couldn't sign " << form.getName() << \
            " because don't have enough grade" << \
        std::endl;
    }
}
