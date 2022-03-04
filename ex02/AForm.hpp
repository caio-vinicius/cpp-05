/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
 public:
    AForm(void);
    ~AForm(void);
    AForm &operator=(AForm const &rhs);
    AForm(AForm const &src);

    AForm(std::string name, unsigned char signedGrade, unsigned char executeGrade);
    void beSigned(Bureaucrat const &bureaucrat);
    std::string getName(void) const;
    bool getIsSigned(void) const;
    unsigned char getSignedGrade(void) const;
    unsigned char getExecuteGrade(void) const;
    virtual void execute(Bureaucrat const &executor) = 0;

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

std::ostream &operator<<(std::ostream &stream, AForm const &rhs);

#endif
