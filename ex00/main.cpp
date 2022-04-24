/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "Bureaucrat.hpp"

int bureaucrat(void) {
    {
        std::cout << "--- 1 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 151);
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 2 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 0);
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 3 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 4 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 5 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    {
        std::cout << "--- 6 TEST" << std::endl;
        Bureaucrat bureaucrat("caio", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    return (0);
}

int main(void) {
    bureaucrat();
    return (0);
}
