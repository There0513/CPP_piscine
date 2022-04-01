#include "Conversion.hpp"

void    Conversion::print_type( int type )
{
    if (type == -1)
        std::cout << "ERROR\t";
    else if (type == 0)
        std::cout << "NOT_DEF\t";
    else if (type == 1)
        std::cout << "CHAR\t";
    else if (type == 2)
        std::cout << "INT\t";
    else if (type == 3)
        std::cout << "FLOAT\t";
    else if (type == 4)
        std::cout << "DOUBLE\t";
    std::cout << "type = "<< type << std::endl;
}

int Conversion::get_numeric_type(std::string str)
{
    int no_int = 0;
    size_t find_f = str.find('f');

    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            return -1;
        if (str[i] == 'f' && no_int == 1)
            return 3;
        if (no_int == 1 && find_f > str.length())
            return 4;
        if (str[i] == '.')  // . != int
            no_int = 1;
    }
    if (no_int == 0)
        return 2;
    if (no_int != 1)
    {
        std::cout << "\tif (not_int != 1) -> ret 4" << std::endl;
        return 4;
    }
    std::cout << "else else else" << std::endl;
    return 0;
}

int Conversion::getType( std::string const nbr ) {
     size_t i = -1;
    while (++i < nbr.length() && !isdigit(nbr[i]));
    if (i == nbr.length())
        _type = CHAR;
    else
        while (++i < nbr.length())
            if (!isdigit(nbr[i]) && nbr[i] != '.' && nbr[i] != 'f')
                _type = ERROR;
    if (_type != CHAR && _type != ERROR)
        _type = get_numeric_type(nbr);
    print_type(_type);
    if (_type == -1 || _type == 0)
        std::cout << "Error." << std::endl;
    return _type;
}

Conversion::Conversion( std::string const nbr ): _type(NOT_DEF) {
    // conv
    _type = getType(nbr);
    // if (_type > 0 && _type < 5)
        // conv[_type]();

}

Conversion::Conversion( Conversion const & copy ) {
    *this = copy;
}

Conversion & Conversion::operator=( Conversion const & copy ) {
    this->_nbr = copy._nbr;
    return *this;
}

Conversion::~Conversion( void ) {

}