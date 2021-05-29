#ifndef header_INCLUDED
#define header_INCLUDED
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <string_view>
#include <vector>

#include <algorithm>
#include <cctype>
using namespace std;

class Duomenys {
public:
    vector<string>zodziai;
    std::map<std::string, int> countMap;
    int kiek;
};

#endif 