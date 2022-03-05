/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef Intern_HPP
#define Intern_HPP

#include <string>

#include "Form.hpp"

class Intern {
 public:
    Intern(void);
    ~Intern(void);
    Intern &operator=(Intern const &rhs);
    Intern(Intern const &src);

    Form *makeForm(std::string const name, std::string const target);
};

#endif
