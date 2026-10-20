#ifndef _LEARN_H_
#define _LEARN_H_

#include <string>
#include <vector>

class Learn {
    private:
        int value1;
        int value2;
        std::string string1;
        std::vector<int> int_vector;
    
    public:
        Learn();
        Learn(int num1, int num2, std::string word1);

        int get_val1();
        int get_val2();

        std::string get_word1();

        void display_vector();
};



#endif