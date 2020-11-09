#include <algorithm>
#include <vector>
#include <iostream>

void DuplicateCounter(std::vector<int> vect){
	std::vector<int>::iterator itr;
	int vectStartSize = vect.size();
	std::sort(vect.begin(),vect.end()); 			//Вектор сортируется по возрастанию элементов
	itr=std::unique(vect.begin(),vect.begin()+vect.size()); //В последовательности отсортированных
								//элементов удаляются дубликаты
	vect.resize(std::distance(vect.begin(),itr));		//производится изменение размера вектора по
								//оставшимся членам
	std::cout<< "Вектор содержал "<< (vectStartSize - vect.size())<< " дубликатов"<<std::endl;
	std::cout<< "В векторе "<<vect.size()<<" различных элементов"<<std::endl;
	//В принципе, можно было бы сделать эту функцию возвращающей число, и возвращать vect.size().
}

int main(){
std::vector<int> newVector ={1,3,5,2,4,6,8,9,5,3,2,5,6,7,4,3,2,4,5,7,8,8,6,4,2,2,3,3,5,5,6,5,3,2};
DuplicateCounter(newVector);

}
//не уверен насчет оптимальности данного алгоритма, но есть подозрение, что в стандартных библиотеках
//методы всё же более менее оптимальные.
