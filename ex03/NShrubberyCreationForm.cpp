/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <fstream>
#include <iostream>

#include "NShrubberyCreationForm.hpp"
#include "Form.hpp"

NShrubberyCreationForm::NShrubberyCreationForm():
    Form("shrubbery", 145, 137) {}

NShrubberyCreationForm::~NShrubberyCreationForm() {}

NShrubberyCreationForm &NShrubberyCreationForm::operator=(NShrubberyCreationForm const &rhs) {
    (void)rhs;
    return (*this);
}

NShrubberyCreationForm::NShrubberyCreationForm(NShrubberyCreationForm const &src): Form(src) {
    *this = src;
}

NShrubberyCreationForm::NShrubberyCreationForm(std::string const _target):
    Form("shrubbery", 145, 137) {
    NShrubberyCreationForm::target = _target;
}

void NShrubberyCreationForm::execute(Bureaucrat const &executor) {
    try {
        Form::beSigned(executor);
        std::ofstream ofile((NShrubberyCreationForm::target + "_shrubbery").c_str());
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
    } catch (const Form::GradeTooLowException &e) {
        std::cerr << e.error() << std::endl;
    }
}
