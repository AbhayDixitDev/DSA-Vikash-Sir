/* standard template library (Stl)
template is a generalized 
it is a powerful set of c++ template classes and functions that commonly used algorithm and data structure it is a library of container classes algorithm and iterators (pointer)

c++ stl has a following three well structured components 
1)container
2)algorithm
3)iterator

container:- containers are used to manage collecters of objects of a certain kind there are three types of containers

1)sequence containers
2)container adaptors
3)associative containers


sequence containers

it can be accessed in sequenctial manner

there are following templates inside a sequence container

1)Array
2)Vector
3)List
4)Deque
5)Forward_list

Array: */

#include <iostream>
#include <Array>
using namespace std;

int main(){
	array<int,5>arr;
	array<int,5>arr1;
cout<<"enter 5 values\n";
for(int i=0;i<arr.size();i++){
	cin>>arr[i];
}

cout<<"enter 5 values\n";
for(int i=0;i<arr1.size();i++){
	cin>>arr1[i];
}
arr.swap(arr1);
cout<<"output is \n";

for(int i=0;i<arr.size();i++){
	cout<<arr[i]<<"\t";
}
cout<<endl;

for(int i=0;i<arr1.size();i++){
	cout<<arr1[i]<<"\t";
}


}

