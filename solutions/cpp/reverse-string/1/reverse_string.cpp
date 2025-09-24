#include "reverse_string.h"
#include <string>

using std::string;

namespace reverse_string {

// TODO: add your solution here
string reverse_string(string word){
    string reversed_word;
    for (int i = word.size(); i > -1; --i){
        reversed_word.append(word, i, 1);
    }
    return reversed_word;
}
}  // namespace reverse_string
