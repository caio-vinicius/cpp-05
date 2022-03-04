/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
 public:
    RobotomyRequestForm(void);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    RobotomyRequestForm(RobotomyRequestForm const &src);

    RobotomyRequestForm(std::string const _target);
    void execute(Bureaucrat const &executor);
};

#endif
