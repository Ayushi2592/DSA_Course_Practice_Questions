#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isbalanced(string s){
    stack<int>st;
    for(char c :s){
        if(c=='(' || c=='[' || c=='{'){
            st.push(c);
        }
        else{
            if(st.empty()){
                return false;
            }
            else if(c==')' && st.top() != '(' ){
                return false;
            }
            else if(c==']' && st.top() != '[' ){
                return false;
            }
            else if(c=='}' && st.top() != '{' ){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout << "Enter a string with parentheses: ";
    cin >> s;
    if (isbalanced(s)) {
        cout << "The parentheses in the string are balanced." << endl;
    } else {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}