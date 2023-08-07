#include <iostream>
#include "hello_world.h"

namespace hello_world{
    string hello = "Hello world";
}

using namespace hello_world;

int main(){
    std::cout << hello_world::hello << std::endl;
    return 0;
}