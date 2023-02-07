#include <iostream>

int main() {
    std::cout
        <<
        "hi\n"
        ;

    constexpr int num=100;
    for(int i=0;i<num;++i){
        std::cout<<i<<std::endl;
    }
}
