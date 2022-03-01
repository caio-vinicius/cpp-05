/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef GRADE_EXCEPTION_HPP
#define GRADE_EXCEPTION_HPP

#include <exception>

class GradeTooHighException : public std::exception {
 public:
    const char *error() const;
};

//typedef GradeTooHigh GradeTooHighException;

class GradeTooLowException : public std::exception {
 public:
    const char *error() const;
};

//typedef GradeTooLow GradeTooLowException;

#endif
