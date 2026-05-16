#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i = 1;
    while(getline(cin,s)){
        stringstream ss(s);
        string word;
        cout << "Line" << i <<": ";
        while(ss >> word){
            if(word == ")" || word == "(" || word == "{" || word == "}" || word == "[" || word == "]" || word == ";"){
                cout << "Puntuations, ";
            }
            else if(word == "int" || word == "main" || word == "cout" || word == "return" || word == "using" || word == "namespace" || word == "#include" || word == "iostream" || word == "cin" || word == "float" || word == "double" || word == "char" || word == "string" || word == "void"){
                cout << "Keyword, ";
            }
            else if((word[0] >= 'a' && word[0] <= 'z') || (word[0] >= 'A' && word[0] <= 'Z') || word[0] == '_'){
                bool valid = true;
                for(int i = 1; i<word.length(); i++){
                    if(!(word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= '0' && word[i] <= '9')){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    cout << "Identifier, ";
                }

            }
            else if(word == ">" || word == "<" || word == "=" || word == "+" || word == "-" || word == "*" || word == "/" || word == "%" || word == "<<" || word == ">>" || word == "<=" || word == ">="){
                cout << "Operator, ";
            }
            else{
                cout << "Constant, ";
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}
