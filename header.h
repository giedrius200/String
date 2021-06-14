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
    map<string,int>eile;
    //std::map<int, std::pair<string, int> >eile;
    std::map<std::string,int> countMap;
    //std::map<int,pair<std::string,int>> countMap;
    std::map<std::string, int> eilMap;
    int kiek;
    vector<string>eilute;
    std::map<string,int> mapeilute;
};

#endif 