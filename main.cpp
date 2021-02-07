#include "dynamicList.h"
#include "dynamicList.cpp"

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

	DynamicList<int> arr(5);
	arr.add(7);
	arr.add(7);
	arr.add(7);
	arr.add(7);
	arr.add(7);

	arr.print();


	return 0;
}