#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string.h>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);

    if (in.is_open()){

        string str;
        in>>str;
        in.seekg(0, std::ios::end);
        str.reserve(in.tellg());
        in.seekg(0, std::ios::beg);

        str.assign((std::istreambuf_iterator<char>(in)),
                    std::istreambuf_iterator<char>());
        cout << str<< endl;

        in.close();
    }

    return 0;
}

