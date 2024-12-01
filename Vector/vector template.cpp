/* vector:
 it is a dynamic array*/
 
// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// int main(){
// 	vector<int>arr1{10,20,7}; // static array vector
// 	cout<<"total length of vector="<<arr1.size()<<endl;
// 	cout<<"max"<<arr1.max_size()<<endl;
// 	
// 	for(auto a:arr1){
// 		cout<<a<<"\n";
//	 }
// }


// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// int main(){
// 	vector<int>arr1; // static array vector
// 	arr1.push_back(10);  //size 1 capacity 1
// 	arr1.push_back(20);  //size 2 capacity 2
// 	arr1.push_back(30);  //size 3 capacity 3
// 	arr1.push_back(40);  //size 4 capacity 4
// 	cout<<"total length of vector="<<arr1.size()<<endl;
// 	cout<<"total capacity of vector="<<arr1.capacity()<<endl;
// 	
// 	cout<<"max"<<arr1.max_size()<<endl;
// 	
// 	for(auto a:arr1){
// 		cout<<a<<"\n";
//	 }
// }




 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 int main(){
 	vector<int>arr1; // static array vector
    int s,t;
    cout<<"enter range "<<endl;
    cin>>s;
    
    for(int i=0;i<s;i++){
    	cin>>t;
    	arr1.push_back(t);
	}
 	cout<<"total length of vector="<<arr1.size()<<endl;
 	cout<<"total capacity of vector="<<arr1.capacity()<<endl;
 	
 	cout<<"max"<<arr1.max_size()<<endl;
 	
 	for(auto a:arr1){
 		cout<<a<<"\n";
	 }
 }