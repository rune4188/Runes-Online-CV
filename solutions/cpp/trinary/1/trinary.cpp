#include "trinary.h"
#include <cmath>
#include <iostream>

namespace trinary {

// TODO: add your solution here

    int to_decimal (std::string tri){
        for (char&c : tri){
            if (isalpha(c)) return 0; 
        }
        
        int n = tri[tri.size()-1]-'0';
                
        for (int i = 2; i < (int)tri.size()+1; ++i){
            if (tri[tri.size()-i]-'0' > 0) n += (tri[tri.size()-i]-'0') * pow(3, i-1);   
        }
        
        return n;
    }

}  // namespace trinary
