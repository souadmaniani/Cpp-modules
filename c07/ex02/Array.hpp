#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
private:
	T *ptr;
	int n;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(Array const & src);
	Array & operator=(Array const & rhs);
	int size() const;

};

template <typename T>
Array<T>::Array()
{
	ptr = new T();
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	ptr = new T[n];
}

template <typename T>
Array<T>::Array(Array const & src)
{
	*this = src;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	int i = -1;
	while (++i < n)
	{
	   if (ptr[i])
		delete ptr[i];
	}
	if (ptr)
		delete ptr;
	// 
	return *this;
}

template <typename T>
int Array<T>::size() const
{
	return (n);
}

template <typename T>
Array<T>::~Array()
{
}
#endif
