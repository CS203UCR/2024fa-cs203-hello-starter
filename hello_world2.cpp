#include <fstream>
#include <iostream>
#include <stdlib.h>
int main(int argc, char *argv[])
{
     std::ofstream ofs ("hello.txt", std::ofstream::out);
     ofs << "Hello CS203! \n";
     ofs.close();
     return 0;  
}
