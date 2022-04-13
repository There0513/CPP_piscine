#include "Span.hpp"

int main( void )
{
    std::cout << "\n\t\033[1;33mTab with only one number:\033[0m" << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n\t\033[1;33mSubject main:\033[0m" << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n\t\033[1;33mFill tab with random generated numbers:\033[0m" << std::endl;
    try
    {
		unsigned int len = 4;

		Span sp = Span(len);
		sp.addMoreNbrs(len);

		std::cout << "shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}