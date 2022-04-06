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

int     Conversion::get_numeric_type(std::string str)
{
    int no_int = 0;
    size_t find_f = str.find('f');
    size_t i = 0;

    if (str[0] == '-')
        i = 1;
    while (i < str.length())
    {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
            return -1;
        if (str[i] == 'f' && no_int == 1)
            return 3;
        if (no_int == 1 && find_f > str.length())
            return 4;
        if (str[i] == '.')  // . != int
            no_int = 1;
        i++;
    }
    if (no_int == 0)
        return 2;
    if (no_int != 1)
        return 4;
    if (no_int == 1)
        return 4;
    return 0;
}

int     Conversion::getType( std::string const nbr ) {
     size_t i = -1;
    while (++i < nbr.length() && !isdigit(nbr[i]) && nbr[i] != '.');
    if (i == nbr.length())
    {
        _type = CHAR;
        if (i != 1)
        {
            std::cout << "Do not use string - Please use char, int, float or double." << std::endl;
            return _type = -1;
        }
    }
    else
        while (++i < nbr.length())
            if (!isdigit(nbr[i]) && nbr[i] != '.' && nbr[i] != 'f')
                _type = ERROR;
    if (_type != CHAR && _type != ERROR)
        _type = get_numeric_type(nbr);
    // print_type(_type);
    if (_type == -1 || _type == 0)
        std::cout << "Error." << std::endl;
    return _type;
}

void    print_with_limits( std::string limit ) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (limit == "inf" || limit == "inff" || limit == "+inf" || limit == "+inff") {
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (limit == "-inf" || limit == "-inff" || limit == "-inf" || limit == "-inff") {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (limit == "nan" || limit == "nanf") {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else
        std::cout << "error - please try again." << std::endl;
}

void    out_of_range( void )
{
    std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: out of range" << std::endl;
    std::cout << "float: out of range" << std::endl;
    std::cout << "double: out of range" << std::endl;
}

void    CharToConv( std::string const str, std::string limit ) {
    char    charVal = str[0];

    if (limit != "no_limit") {
        print_with_limits(limit);
        return ;
    }
    if (std::isprint(charVal))
        std::cout << "char: '" << charVal << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(charVal) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(charVal) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(charVal) << std::endl;
}

void    IntToConv( std::string const str, std::string limit ) {
    int len = 0;
	double value = atof(str.c_str());

    if (value > 2147483647 || value < -2147483648)
        len = 1;
    int intVal = atoi(str.c_str());

    if (limit != "no_limit") {
        print_with_limits(limit);
        return ;
    }
    if (intVal >= 32 && intVal < 127)
        std::cout << "char: '" << static_cast<char>(intVal) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (len && str != "-2147483648")
    {
        std::cout << "int: out of range" << std::endl;
        std::cout << "float: out of range" << std::endl;
        std::cout << "double: out of range" << std::endl;
        return ;
    }
    else
        std::cout << "int: " << intVal << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(intVal) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(intVal) << std::endl;
}

void    FloatToConv( std::string const str, std::string limit ) {
	char	*end = NULL;
    float   floatVal = std::strtof(str.c_str(), &end);
	double value = atof(str.c_str());

    if (value > 2147483647 || value < -2147483648)
        return out_of_range();
    if (limit != "no_limit") {
        print_with_limits(limit);
        return ;
    }
    if (std::isprint(floatVal))
        std::cout << "char: '" << static_cast<char>(floatVal) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(floatVal) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << floatVal << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(floatVal) << std::endl;
}

void    DoubleToConv( std::string const str, std::string limit ) {
    char	*end;

	double doubleVal = std::strtod(str.c_str(), &end);
    if (doubleVal > 2147483647 || doubleVal < -2147483648)
        return out_of_range();
    if (limit != "no_limit") {
        print_with_limits(limit);
        return ;
    }
    if (std::isprint(doubleVal))
        std::cout << "char: '" << static_cast<char>(doubleVal) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(doubleVal) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(doubleVal) << "f" << std::endl;
    std::cout << "double: " << doubleVal << std::endl;
}

Conversion::Conversion( std::string const nbr ): _type(NOT_DEF), _limit("no_limit") {
    void    (*(convPtrs[]))( std::string str, std::string limit ) = {&CharToConv, &IntToConv, &FloatToConv, &DoubleToConv};
    _type = getType(nbr);
	const std::string	limit[8] = {"inf", "inff", "+inf", "+inff", "-inf", "-inff", "nan", "nanf"};
    for (int i = 0; i < 8; i++) {
        if (nbr == limit[i])
            _limit = limit[i];
    }
    if (_type > 0 && _type < 5)
        (*(convPtrs[_type - 1]))(nbr, this->_limit);
}

Conversion::Conversion( Conversion const & copy ) {
    *this = copy;
}

Conversion & Conversion::operator=( Conversion const & copy ) {
    (void) copy;
    return *this;
}

Conversion::~Conversion( void ) {
}