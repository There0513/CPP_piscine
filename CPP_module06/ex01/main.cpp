#include "header.hpp"

// reinterpret_cast< new_type > (expression)

// It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

// It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main( void )
{
    Data    original;

    original.name = "Anna";
    original.age = 28;

    uintptr_t   seri = serialize(&original);
    Data *deseri = deserialize(seri);

    std::cout << "Name (original): "<< original.name << std::endl;
    std::cout << "Name (after): "<< deseri->name << std::endl;

    std::cout << "Age (original): "<< original.age << std::endl;
    std::cout << "Age (after): "<< deseri->age << std::endl;


    std::cout << "addr Name (original): "<< &original.name << std::endl;
    std::cout << "addr Name (after): "<< &deseri->name << std::endl;
    return 0;
}