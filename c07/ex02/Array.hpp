#ifndef ARRAY_H
#define ARRAY_H

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
	T & operator[](T idx);
	unsigned int Array<T>::size(void) const;

};

template <typename T>
Array<T>::Array()
{
	ptr = new T();
	if (!ptr)
		std::cout << "memory allocation fails\n";
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	ptr = new T[n]();
	if (!ptr)
		std::cout << "memory allocation fails\n";
	n = n;
}

template <typename T>
Array<T>::Array(Array const & src)
{
	*this = src;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	unsigned int i = 0;
	if (ptr)
		delete [] ptr;
	ptr = new T[n]();
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
	n = rhs.n;
	return *this;
}

template <typename T>
T & Array<T>::operator[](T idx)
{
	if (idx < 0 || idx >= n)
		throw std::exception;
	return ptr[idx];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (n);
}

template <typename T>
Array<T>::~Array()
{
}
#endif
