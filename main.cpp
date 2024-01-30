#include <iostream>


#define  LOG(x) std::cout << x << std::endl;

void increment(int *value) {

    (*value)++;
}

void incrementr(int &value) {

    value++;
}

int main() {



    LOG(a);


    //std::cin.get();

}
