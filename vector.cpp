#include <iostream>
#include "vector.h"

vector::vector(int initial_quantity){
	//std::cout	<< "Chamando contrutor com o valor " << initial_quantity << std::endl;
	values		= new int [initial_quantity];
	array_size	= initial_quantity;
	quantity 	= 0;
}
vector::~vector(){
	//std::cout << "Chamando destrutor " << std::endl;
	delete[] values;
}

int vector::at (int index){
	return values[index]; //para ver: tem que ver o index para não setar um valor que não existe
}
void vector::set (int index, int value){
	values[index] = value;  //para ver: tem que ver o index para não setar um valor que não existe
}
void vector::insert (int index, int value){

}
int vector::erase (int index){
	return 0;
}
int vector::size (){
	return 10;
}
bool vector::empty (){
	return quantity == 0;
} 