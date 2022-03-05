/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "GradeException.hpp"

const char *GradeTooHighException::error() const {
    return "You tried to use a very high grade: values must be between 1 and 150.";
}

const char *GradeTooLowException::error() const {
    return "You tried to use a very low grade: values must be between 1 and 150.";
}
