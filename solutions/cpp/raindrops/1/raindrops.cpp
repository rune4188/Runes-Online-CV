#include <string>
#include <iostream>
using namespace std;

namespace raindrops {
string convert(int rain_size){

    string sounds = "PlingPlangPlong";
    for (float i = 3; i < 8; i += 2){
        if (rain_size / i != (int)(rain_size / i)){
            sounds.erase((sounds.size()+(i-3)*2.5-15),5);
        }
    }
    if (sounds == ""){
        return to_string(rain_size);
    }
    return sounds;
}
}  // namespace raindrops
