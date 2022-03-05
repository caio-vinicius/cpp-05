/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <string>
#include <iostream>

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "NShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "NRobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "NPresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern &Intern::operator=(Intern const &rhs) {
    (void)rhs;
    return (*this);
}

Intern::Intern(Intern const &src) {
    *this = src;
}

#define FORMS_AMOUNT 3

Form *Intern::makeForm(std::string const name, std::string const target) {
    std::string forms_str[FORMS_AMOUNT] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"};
    Form *forms_objs[FORMS_AMOUNT] = {
        new NShrubberyCreationForm(target),
        new NRobotomyRequestForm(target),
        new NPresidentialPardonForm(target),
    };
    unsigned int form;

    form = FORMS_AMOUNT + 1;
    for (unsigned int i = 0; i < FORMS_AMOUNT; i++) {
        if (forms_str[i] == name)
            form = i;
    }

    for (unsigned int i = 0; i < FORMS_AMOUNT; i++) {
        if (forms_str[i] != name)
            delete forms_objs[i];
    }

    if (form == FORMS_AMOUNT + 1) {
        std::cout << "Intern cannot create this form" << std::endl;
        return NULL;
    }


    std::cout << "Intern creates " << name << std::endl;
    return (forms_objs[form]);
}
