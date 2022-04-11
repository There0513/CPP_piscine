#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T>
class Array {
    
    private:
        int _len;
        T * _array;

    public:
        Array<T>( void ): _len(0), _array(NULL) {}  // -> creates empty array
        Array<T>( unsigned int n ): _len(n), _array(0) { // -> creates an array of n elements initialized by default
            if (n >= 0)
                this->_array = new T[n];
            else
                std::cout << n << "is negative." << std::endl;
        }
        Array<T>( Array<T> const & copy ): _len(0), _array(NULL) {    // copy constructor
            *this = copy;
        }
        Array<T> & operator=( Array<T> const & copy ) {   // assignment operator
            if (this->_len > 0)
                delete [] this->_array;
            this->_len = copy.size();
            this->_array = new T[this->_len];
            for(int i = 0; i < this->_len; i++)
                this->_array[i] = copy._array[i];
            return *this;
        }
        ~Array<T>( void ) {
            delete [] this->_array;
        }
        T & operator[]( int const i) const {
            if (i < 0 || i >= this->_len)
                throw std::overflow_error("[i] out of range.");
            return this->_array[i];
        }
        int size( void ) const {
            return this->_len;
        }
};

#endif