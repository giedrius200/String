
#include "header.h"

#include <regex>;

#include <Windows.h>

int main()
{
	std::ifstream failas;
	std::ifstream failas2;

	std::ofstream output("output.txt");
    std::vector<Duomenys> duom;
    long int n = 100000;
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

    bool rado = false;
    SetConsoleOutputCP(CP_UTF8);
    int eile = 1;
    string eiles;
    setvbuf(stdout, nullptr, _IOFBF, 1000);
    while (!failas.eof()) {

        std::getline(failas, sakiniai, ' ');
        //cout << sakiniai << endl;
        for (auto a : { ".lt",".eu",".com" }) {
            if (sakiniai.find(a) != std::string::npos) {
                cout << sakiniai << endl;
                www.push_back(sakiniai);
            }//prideti daugiau galuniu                     
        }
        transform(sakiniai.begin(), sakiniai.end(), sakiniai.begin(), ::tolower);
       
        temp.zodziai.push_back(sakiniai);
            //temp.zodziai.push_back(sakiniai);

        // found
        //cout << www << endl;
    }
    failas.close();
    failas2.open("failas.txt");
    while (!failas2.eof()) {

        std::getline(failas2, eiles);
        //cout << sakiniai << endl;
        transform(eiles.begin(), eiles.end(), eiles.begin(), ::tolower);
        temp.eilute.push_back(eiles);
        // found
        //cout << www << endl;
    }
    for (auto& elem : temp.zodziai) {
        for (auto& elem6 : temp.eilute){
            auto it = std::find(temp.eilute.begin(), temp.eilute.end(), elem6);
            if (it != temp.eilute.end())
            {
                auto idx = std::distance(temp.eilute.begin(), it);
                eile = idx;
            }
            if (elem6.find(elem) != std::string::npos) {
                temp.eile.insert(std::pair<std::string, int>(elem, eile+1));
                //temp.eile.insert(std::make_pair(1, std::make_pair(elem, eile)));
                
                
            }
            
    }
    }
    int count = 0;
    for (auto& elem : temp.zodziai)
    {
        auto result = temp.countMap.insert(std::pair<std::string,int>(elem, 1));
        //auto result = temp.countMap.insert(make_pair(1,make_pair (elem,1)));
        if (result.second == false)
        result.first->second++;
        //it->second.first->second.second++;

    }
    count = 0;
    /*for (auto& elem : temp.countMap)
    {   
        if (elem.second > 1 && elem.first != "€" && elem.first != "–")
        {
            
            output << elem.first << " :: " << elem.second << endl;
                count++;
    
        }
    }*/
    /*for (auto& elem : temp.eile)
    {
        if (elem.second.second > 1 && elem.second.first != "€" && elem.second.first != "–")
        {
                output << elem.second.first << "::" <<elem.first<< "::::" << "Eilute: " << elem.second.second << endl;
                count++;
        }
    }*/

    for (auto it_m1 = temp.countMap.cbegin(), end_m1 = temp.countMap.cend(),
        it_m2 = temp.eile.cbegin(), end_m2 = temp.eile.cend();
        it_m1 != end_m1 || it_m2 != end_m2;)
    {
        if (it_m1 != end_m1) {
            output << it_m1->first << " :: " << it_m1->second << " | ";
            ++it_m1;
        }

        if (it_m2 != end_m2) {
            output << "Eil. " << it_m2->second << std::endl;
            ++it_m2;
        }
    }

    // Iterate over the vector and store the frequency of each element in map
    /*std::map<string, int> frequency;
    for (string i : temp.zodziai)
        ++frequency[i];
    for (const auto& e : frequency)
        if(e.second > 1)
        output <<e.first << " :: " << e.second <<"\n";*/
    output << "URL:" << endl;
    for (auto& elem : www)
    {
        output << elem << endl;
    }
}