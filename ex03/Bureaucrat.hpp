/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define DEFAULT_GRADE 1
#define MIN_GRADE 1
#define MAX_GRADE 150

#include <string>
#include <exception>

#include "AForm.hpp"

class AForm;

class Bureaucrat {
 public:
    Bureaucrat(void);
    ~Bureaucrat(void);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    Bureaucrat(Bureaucrat const &src);

    Bureaucrat(std::string name, unsigned char grade);
    std::string getName(void) const;
    unsigned char getGrade(void) const;
    Bureaucrat operator++();
    Bureaucrat operator++(int);
    Bureaucrat operator--();
    Bureaucrat operator--(int);
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(AForm &form);
    void executeForm(AForm &form);

    // Exceptions
    struct GradeTooHighException : public std::exception {
        const char *error() const;
    };
    struct GradeTooLowException : public std::exception {
        const char *error() const;
    };
 private:
    std::string const name;
    unsigned char grade;
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs);

#endif
