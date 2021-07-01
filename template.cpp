#include <iostream>
/***** ------------ FUNCTION TEMPLATE ------------ ***/
// template <typename T>
/**** STANDAR TEMPLATE LIBRARY (STL)    ****/

// A template is not a function nor a class is just a model to create 
// a function or a class with the variables of a particular type
// ======> Default type
/*    template<typename T = float>    ******/

/* *************************************************************************
T const & max(T const &a, T const &b)
{
	return (a > b ? a : b);
}
int test(int x)
{
	std::cout << "test\n";
	return (x);
}
int main()
{
	std::cout << max(1, 2) <<  "\n"; // implicit instanciation
	std::cout << max<int>(1, 2) <<  "\n"; // Explicit instanciation
	std::cout << max<int>(test(1), test(2)) <<  "\n"; // Explicit instanciation
}
***************************************************************************/
/****************************************************************************/
/***** ------------ CLASS TEMPLATE ------------ ***/ 
// template <typename T = float>

// class Array {
// private:
// 	T *ptr;
// 	int size;
// public:
// 	Array(T arr[], int s);
// 	void print();
// };
// template <typename T>

// Array<T>::Array(T arr[], int s) {
// 	ptr = new T[s];
// 	size = s;
// 	for(int i = 0; i < size; i++)
// 		ptr[i] = arr[i];
// }
// template <typename T>

// void Array<T>::print()
// {
// 	for (int i = 0; i < size; i++)
// 		std::cout << ptr[i] << " ";
// 	std::cout << "\n";
// }

// int main()
// {
// 	int arr[] = {1, 5, 7, 8, 9};
// 	Array<int> a(arr, 5);
// 	a.print();
// }
/****************************************************************************/

/**** ------------ TEMPLATE SPECIALISATION ------------ ***/
// example1
// template <class T>
// void sort(T arr[], int size)
// {
// 	// code to implement Quick Sort
// }
// template <>
// void sort<char>(char arr[], int size)
// {
// 	// code to implement counting sort
// }
/*---------- An Example Program for function template specialization -------------*/
// template <typename T>
// void fun(T a)
// {
// 	std::cout << "The main template fun() : "
// 				<< a << "\n";
// }
// template <>
// void fun(int a)
// {
// 	std::cout << "Specialisation template for int fun() : "
// 				<< a << "\n";
// }
// int main()
// {
// 	fun<char>('c');
// 	fun<int> (37);
// }
/*---------- An Example Program for class template specialization -------------*/

// template <typename T>
// class Test{
// public:
// 	Test() {
// 		std::cout << "General template object \n";
// 	}
// };

// template <>
// class Test<int>{
// public:
// 	Test() {
// 		std::cout << "Specialized template object \n";
// 	}
// };
// int main()
// {
// 	Test<char> a;
// 	Test<int> b;
// }