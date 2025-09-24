#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int year){
    if((float)year/(year/4) == 4 && (float)year/100 != year/100){
        return true;
    }else if ((float)year/400 == year/400){
        return true;
    }else{
        return false;
    } 
}
}  // namespace leap