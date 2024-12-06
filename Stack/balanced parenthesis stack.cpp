#include <iostream>
using namespace std;

#include <stack>

bool bal(string &s,int n){
	stack <char> st;
	for(int i=0;i<n;++i){
		if(s[i]=='{' || s[i]=='(' || s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]=='}'){
			if(!st.empty() && st.top() == '{'){
				st.pop();
			}
			else{
				return false;
				break;
			}
		}
		else if(s[i]==')'){
			if(!st.empty() && st.top() == '('){
				st.pop();
			}
			else{
				return false;
				break;
			}
		}
		else if(s[i]==']'){
			if(!st.empty() && st.top() == '['){
				st.pop();
			}
			else{
				return false;
				break;
			}
		}
	}
	if(st.empty()){
				return true;
			}
	else{
				return false;
	}

//for(int i=0;i<n;i++){
//            if(s[i]=='{' || s[i]=='(' || s[i] || '['){
//              st.push(s[i]);
//            }
//            else if(!st.empty() && s[i]=='}'){
//            	if(st.top()=='{'){
//                    st.pop();
//                }
//                else{
//                    return false;
//                    break;
//                }
//            }
//            else if(!st.empty() && s[i]==')'){
//                if(st.top()=='('){
//                    st.pop();
//                }
//                else{
//                    return false;
//                    break;
//                }
//             }
//            else if(!st.empty() && s[i]==']'){
//                if(st.top()=='['){
//                    st.pop();
//                }
//                else{
//                    return false;
//                    break;
//                }
//            }
//        }
//
//        if(st.empty()){
//            return true;
//        }
//        else{
//            return false;
//        }
        
}

int main(){
	string s="[]";
	bool check=bal(s,s.length());
	if(check){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}