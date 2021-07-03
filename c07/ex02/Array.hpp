#ifndef ARRAY_H
#define ARRAY_H
#include <array>
template <typename T>
class Array
{
private:
	T *ptr;
	unsigned int n;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(Array const & src);
	Array & operator=(Array const & rhs);
	T & operator[](size_t idx);
	unsigned int size(void) const;

};

template <typename T>
Array<T>::Array()
{
	n = 0;
	ptr = new T[0];
	if (!ptr)
		std::cout << "memory allocation fails\n";
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->n = n;
	ptr = new T[n]();
	if (!ptr)
		std::cout << "memory allocation fails\n";
}
// Copy Constructor
template <typename T>
Array<T>::Array(Array const & src)
{
	std::cout << "Copy Constructor \n";
	*this = src;
}

// Assignation Operator
template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	std::cout << "Assignation operator \n";
	unsigned int i = 0;
	this->n = rhs.n;
	ptr = new T[n];
	if (!ptr)
		std::cout << "memory allocation fails\n";
	else
	{
		while (i < n)
		{
			ptr[i] = rhs.ptr[i];
			i++;
		}
	}
	return *this;
}

 // Overloading [] operator to access elements in array style
template <typename T>
T & Array<T>::operator[](size_t idx)
{
	if (idx >= this->n)
		throw std::exception();
	return ptr[idx];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (n);
}

template <typename T>
Array<T>::~Array()
{

}
#endif
