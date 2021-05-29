
#include "header.h"

#include <regex>;
int main()
{
	std::ifstream failas;

	std::ofstream output("output.txt");
    std::vector<Duomenys> duom;
    Duomenys temp;
    string sakiniai;
    if (!failas) {
        cout << "File not opened!";
        exit(1);
    }
    failas.open("failas.txt");
    static std::string const symbols = "\".';:!";
    string Regex;
    
    vector<string> www;

    while (!failas.eof()) {

        std::getline(failas, sakiniai, ' ');
        //cout << sakiniai << endl;
        if (sakiniai.find('www') != std::string::npos)
           www.push_back(sakiniai); // found
        //cout << www << endl;
        temp.zodziai.push_back(sakiniai);
    }
    for (auto& elem : temp.zodziai)
    {
        auto result = temp.countMap.insert(std::pair<std::string, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    for (auto& elem : temp.countMap)
    {   
        
        if (elem.second > 1)
        {
            output << elem.first << " :: " << elem.second << std::endl;
        }
    }
    output << "URL :" << endl;
    for (auto& elem : www)
    {
        output << elem << endl;
    }
}