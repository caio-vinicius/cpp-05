/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef NROBOTOMYREQUESTFORM_HPP
#define NROBOTOMYREQUESTFORM_HPP

#include <string>

#include "Form.hpp"

class NRobotomyRequestForm : public Form {
 public:
    NRobotomyRequestForm(void);
    ~NRobotomyRequestForm(void);
    NRobotomyRequestForm &operator=(NRobotomyRequestForm const &rhs);
    NRobotomyRequestForm(NRobotomyRequestForm const &src);

    NRobotomyRequestForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
