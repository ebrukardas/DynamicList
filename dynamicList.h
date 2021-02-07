#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#define SUCCESS		 0
#define ERROR 		-1

#include <iostream>
using namespace std;

template<typename T>
class DynamicList{

	public:
		DynamicList();
		DynamicList(int _size);
		//DynamicList(int _size, T[] arr);
		//DynamicList(int _size); // isAutoResize
		int add(T element);

		~DynamicList();

		void print(char seperator);

		void print();

	private:
		int size;
		int capasity;
		T* array;

};



#endif //DYNAMIC_ARRAY_H