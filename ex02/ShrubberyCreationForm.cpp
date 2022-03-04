/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <fstream>
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
    AForm("shrubbery", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    (void)rhs;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src) {
    *this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const _target):
    AForm("shrubbery", 145, 137) {
    ShrubberyCreationForm::target = _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
    try {
        AForm::beSigned(executor);
        std::ofstream ofile((ShrubberyCreationForm::target + "_shrubbery").c_str());
        ofile << "        _-_" << std::endl;
        ofile << "    /~~   ~~\\\\" << std::endl;
        ofile << " /~~         ~~\\\\" << std::endl;
        ofile << "{               }" << std::endl;
        ofile << " \\\\  _-     -_  /" << std::endl;
        ofile << "   ~  \\\\ //  ~" << std::endl;
        ofile << "_- -   | | _- _" << std::endl;
        ofile << "  _ -  | |   -_" << std::endl;
        ofile << "      // \\\\" << std::endl;
        ofile.close();
    } catch (const AForm::GradeTooLowException &e) {
        std::cerr << e.error() << std::endl;
    }
}
