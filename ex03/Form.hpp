/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 public:
    Form(void);
    ~Form(void);
    Form &operator=(Form const &rhs);
    Form(Form const &src);

    Form(std::string name, unsigned char signedGrade, unsigned char executeGrade);
    void beSigned(Bureaucrat const &bureaucrat);
    std::string getName(void) const;
    bool getIsSigned(void) const;
    unsigned char getSignedGrade(void) const;
    unsigned char getExecuteGrade(void) const;

    // Exceptions
    struct GradeTooHighException : public std::exception {
        const char *error() const;
    };
    struct GradeTooLowException : public std::exception {
        const char *error() const;
    };
 private:
    std::string const name;
    bool isSigned;
    unsigned char const signedGrade;
    unsigned char const executeGrade;
 protected:
    std::string target;
};

std::ostream &operator<<(std::ostream &stream, Form const &rhs);

#endif
