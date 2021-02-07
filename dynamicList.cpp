#include "dynamicList.h"




template<typename T>
DynamicList<T>::DynamicList(int _size){
	capasity = _size;
	size = 0;
	array = new T[capasity];
}

template<typename T>
DynamicList<T>::DynamicList(){
	DynamicList(5);
}

template<typename T>
DynamicList<T>::~DynamicList(){
	delete array;
}

template<typename T>
int DynamicList<T>::add(T element){
	if(size<capasity){
		array[size++] = element;
		return size;
	}
	return ERROR;
}

template<typename T>
void DynamicList<T>::print(char seperator){
	for (int i = 0; i < size; ++i) {
		cout << *(array+i) << seperator;
	}
	cout << endl;
}


template<typename T>
void DynamicList<T>::print(){
	print(' ');
}

/*
int createList(int size){
	int i=0;
	if(size>0){
		myList = malloc(size * sizeof(char*));
		for (i = 0; i < size; ++i) {
			myList[i] = malloc(sizeof(char));
		}
		mySize = size;
		return SUCCESS;
	}else{
		fprintf(stderr, "List cannot be created\n");
		return ERROR;
	}
}


void destroyList(){
	int i=0;
	for (; i < mySize; ++i)	{
		free(myList[i]);
	}
	free(myList);
}

void printList(){
	int i=0, j=0;
	for (; i < mySize; ++i){
		printf("\t");
		for (j = 0; j < mySize; ++j){
			printf("%c | ", myList[i][j] );
		}
		printf("\n");

		printf("\t");
		for (j = 0; j < mySize; ++j){
			printf("- | ");
		}
		printf("\n");
	}
}
*/