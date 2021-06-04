# String
Input
```
Vilnius – vienas didžiausių finansinių centrų Baltijos šalyse ir pagrindinis Lietuvos ekonominės plėtros variklis, pasižymintis aukščiausiu BVP tenkančiu vienam gyventojui ir sparčiausiais augimo tempais. Vilniaus potencialą didžia dalimi lemia sostinės statusas, atstovaujamosios ir vykdomosios valdžios institucijų bei užsienio investicijų koncentracija, veikiančios didžiosios bendrovės ir pagrindinės finansinės institucijos.

2020 m. pradžioje miesto savivaldybėje veikė 36 834 ūkio subjektai. Veikiančių įmonių darbuotojai 357,993

2019 m. Vilniaus Savivaldybės biudžeto pajamos sudarė 660,3 mln. EUR o išlaidos 661,3 mln. EUR

2019 m. Vilniaus mieste pastatyti 4792 gyvenamieji namai. Iš jų 1998 1-2 butų gyvenamieji namai ir 2794 trijų arba daugiau butų gyvenamieji namai. Atlikti statybos darbai, to meto kainomis vertinami, 915 mln. EUR

2018 m. Vilniaus apskrityje vienam gyventojui teko – 23 400 € bendrojo vidaus produkto (BVP). Šis rodiklis daugiau nei du kartus viršijo Alytaus, Marijampolės, Tauragės, Telšių ir Utenos apskričių rodiklius. Sukurto BVP dalis, palyginti su 2017 m., augo 1,1%.

Sostinės regione buvo sukurta 18,9 mlrd. EUR, arba 41,8 proc., viso šalies BVP. Sostinės regione sukurtas BVP vienam gyventojui 1,8 karto viršijo Vidurio ir vakarų Lietuvos regiono lygį.[2]

2018 m. Tiesioginės užsienio investicijos, tenkančios vienam gyventojui, laikotarpio pabaigoje buvo 20 586 € ir viso sudarė 11,4 mlrd. EUR

Vilniuje pagaminama 16 proc. visos Lietuvos pramonės produkcijos. Veikia 2 šiluminės jėgainės, kiti strateginiai šalies objektai.

Vilniaus turizmo sektorius sparčiai auga ir ženkliai papildo miesto biudžetą.
```
Output
```
BVP :: 3
Lietuvos :: 3
Vilniaus :: 4
arba :: 2
butų :: 2
buvo :: 2
daugiau :: 2
gyvenamieji :: 3
gyventojui :: 3
ir :: 9
m. :: 5
miesto :: 2
mln. :: 3
mlrd. :: 2
namai. :: 2
regione :: 2
sudarė :: 2
užsienio :: 2
vienam :: 4
viršijo :: 2
viso :: 2
šalies :: 2
– :: 2
€ :: 2
URL :
www.vu.lt
https://www.vu.lt/

```
Asociatyvus konteineriai
```
vector<string>zodziai;
    std::map<std::string, int> countMap;
    int kiek;
for (auto& elem : temp.zodziai)
    {
        auto result = temp.countMap.insert(std::pair<std::string, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    for (auto& elem : temp.countMap)
    {   
        if (elem.second > 1 && elem.first != "€" && elem.first != "–")
        {
            output << elem.first << " :: " << elem.second << std::endl;
        }
    }
```
