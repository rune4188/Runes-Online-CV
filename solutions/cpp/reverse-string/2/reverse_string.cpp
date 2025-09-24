#include "reverse_string.h"
#include <string>

using std::string;

namespace reverse_string {

// TODO: add your solution here
string reverse_string(string word){
    for (int i = word.size(); i > -1; --i){
        word.append(word, i, 1);
    }
    return word.substr(word.size()/2,word.size()/2);
}
}  // namespace reverse_string
