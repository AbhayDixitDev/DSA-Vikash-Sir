// if we pass  integer number it will run int between int and float and doouble
// but if we call function with decimal values it will casuse ambiguity and if we call write double it will not cause ambiguity because doubke have priority 


#include <iostream>



using namespace std ;


int maxs(int  a,int b){
	if(a>b){
	return a;
	}
	else{
		return b;
	}
}

float maxs(float  a,float b){
	if(a>b){
	return a+1;
	}
	else{
		return b+1;
	}
}
double maxs(double  a,double b){
	if(a>b){
	return a+2;
	}
	else{
		return b+2;
	}
}

int main(){
	cout<<maxs(3,4);  // if we  call maxs fuction with 3,4 it will case ambiguity becase int and float has same priority and memroy size  but if we call it without flaot function it
	//will not cause any error and it will run int funtion beacuse int accept intiger number but double accepts decimal
	cout<<maxs(3.5,4.9);
	 // if we  call maxs fuction with 3.5,4.9 it will cause ambiguity becase int and float has same priority and memroy size  but if we call it without flaot function it
	//will not cause any error and it will run int funtion beacuse int accept intiger number but double accepts decimal
}