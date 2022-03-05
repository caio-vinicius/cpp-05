/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int intern(void) {
    {
        Intern intern;
        Form *form;

        form = intern.makeForm("very important document", "signature line");
        if (form)
            delete form;
    }
    {
        Intern intern;
        Form *form;

        form = intern.makeForm("robotomy request", "signature line");
        if (form)
            delete form;
    }
    return (0);
}

int fancyform(void) {
    {
        std::cout << "--- 1 test" << std::endl;
        Bureaucrat bureaucrat("caio", 150);
        ShrubberyCreationForm shrubbery("plant");

        shrubbery.execute(bureaucrat);
    }
    {
        std::cout << "--- 2 test" << std::endl;
        Bureaucrat bureaucrat("caio", 140);
        ShrubberyCreationForm shrubbery("toll");

        shrubbery.execute(bureaucrat);
    }
    {
        std::cout << "--- 3 test" << std::endl;
        Bureaucrat bureaucrat("caio", 140);
        RobotomyRequestForm robotomy("dwigt");

        robotomy.execute(bureaucrat);
    }
    {
        std::cout << "--- 4 test" << std::endl;
        Bureaucrat bureaucrat("caio", 71);
        RobotomyRequestForm robotomy("dwigt");

        robotomy.execute(bureaucrat);
    }
    {
        std::cout << "--- 5 test" << std::endl;
        Bureaucrat bureaucrat("caio", 71);
        PresidentialPardonForm presidential("novak");

        presidential.execute(bureaucrat);
    }
    {
        std::cout << "--- 6 test" << std::endl;
        Bureaucrat bureaucrat("caio", 25);
        PresidentialPardonForm presidential("novak");

        presidential.execute(bureaucrat);
    }
    {
        std::cout << "--- 7 test" << std::endl;
        Bureaucrat bureaucrat("caio", 25);
        ShrubberyCreationForm shrubbery("toll");
        RobotomyRequestForm robotomy("dwigt");
        PresidentialPardonForm presidential("novak");

        std::cout << "---> 7 test: shrubbery" << std::endl;
        bureaucrat.executeForm(shrubbery);
        std::cout << "---> 7 test: robotomy" << std::endl;
        bureaucrat.executeForm(robotomy);
        std::cout << "---> 7 test: presidential" << std::endl;
        bureaucrat.executeForm(presidential);
    }
    return (0);
}

int form(void) {
//    {
//        std::cout << "--- 1 test" << std::endl;
//        Form form;
//        Bureaucrat bureaucrat("caio", 2);
//
//        std::cout << bureaucrat << std::endl;
//        std::cout << form << std::endl;
//        form.beSigned(bureaucrat);
//        std::cout << form << std::endl;
//    }
//    {
//        std::cout << "--- 2 test" << std::endl;
//        Form form("classic document", 5, 1);
//        Bureaucrat bureaucrat("caio", 2);
//
//        std::cout << form << std::endl;
//        form.beSigned(bureaucrat);
//        std::cout << form << std::endl;
//    }
//    {
//        std::cout << "--- 3 test" << std::endl;
//        Form form("classic document", 5, 1);
//        Bureaucrat bureaucrat("caio", 2);
//
//        std::cout << form << std::endl;
//        bureaucrat.signForm(form);
//        std::cout << form << std::endl;
//    }
//    {
//        std::cout << "--- 4 test" << std::endl;
//        Form form("classic document", 1, 1);
//        Bureaucrat bureaucrat("caio", 2);
//
//        std::cout << form << std::endl;
//        bureaucrat.signForm(form);
//        std::cout << form << std::endl;
//    }
    return (0);
}

int bureaucrat(void) {
    {
        std::cout << "--- 1 test" << std::endl;
        Bureaucrat bureaucrat("caio", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat++;
        std::cout << bureaucrat << std::endl;
        ++bureaucrat;
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 2 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat--;
        std::cout << bureaucrat << std::endl;
        --bureaucrat;
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 3 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat++;
        std::cout << bureaucrat << std::endl;
        ++bureaucrat;
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 4 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat--;
        std::cout << bureaucrat << std::endl;
        --bureaucrat;
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 5 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 151);
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 6 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 0);
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 7 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 8 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 9 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 10 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    return (0);
}

int main(void) {
    intern();
    //fancyform();
    //form();
    //bureaucrat();
    return (0);
}
