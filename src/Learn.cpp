#include "Learn.h"

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

Learn::Learn()
{
    value1 = 0;
    value2 = 1;
    string1 = "hello";

    int_vector = {1, 2, 3};

}

Learn::Learn(int num1, int num2, std::string word1){
    value1 = num1;
    value2 = num2;
    string1 = word1;
    
    int_vector[0] = 1;
    int_vector[1] = 2;
    int_vector[2] = 3;
}

int Learn::get_val1(){
    return value1;
}
int Learn::get_val2(){
    return value2;
}
std::string Learn::get_word1(){
    return string1;
}

void Learn::display_vector(){
    for(auto it = int_vector.begin(); it != int_vector.end(); ++it){
        std::cout << *it << std::endl;
    }
}
