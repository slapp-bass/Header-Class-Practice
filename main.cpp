#include "Learn.h"

#include <iostream>

int main(){

    Learn* test = new Learn();

    std::cout<< test->get_val1() << std::endl;
    std::cout<< test->get_val2() << std::endl;

    std::cout<< test->get_word1() << std::endl;

    test->display_vector();



    return 0;
}