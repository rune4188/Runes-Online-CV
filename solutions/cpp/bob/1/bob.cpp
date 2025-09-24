#include "bob.h"

#include <iostream>

namespace bob {

// TODO: add your solution here

    string delete_blank (string str){
        for (int i = str.size()-1; i > -1; --i){
            if (isspace(str[i])) str.erase(i, 1);;
        }
        return str;
    }
    
    bool is_question (string str){
        if (str[str.size()-1] == '?') return true;
        
        return false; 
    }

    bool is_capital (string str){
        for (int i = str.size(); i > 0; --i){
            if (islower(str[i])) return false;
        }
        
        for (int i = str.size(); i > 0; --i){
            if (isupper(str[i])) return true;
        }
        
        return false;
    }
    
    string hey (string str){
        str = delete_blank(str); 
        std::cout << str;
        
        if (str == "") return "Fine. Be that way!";
        
        if (is_question(str)){
            if (is_capital(str)) return "Calm down, I know what I'm doing!";
            return "Sure.";
        }
        
        if (is_capital(str)) return "Whoa, chill out!";
        
        return "Whatever.";
    }        
}  // namespace bob