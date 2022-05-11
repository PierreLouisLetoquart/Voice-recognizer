#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

int main(){
    std::string text = "21 1081 172 6515 109 2006 51 1135 33 662 29 1233 213 5199 146 1495 66 1242 43 498 21 987 132 3138 105 3496 46 1271 28 682 6 395 52 1156 44 1131 22 482 15 320 33 2375 19 402 23 648 25 956 28 1412 137 6026 30 779 44 1304 56 1816 64 1978 169 4386 33 853 48 1173 58 1689 65 1410 68 4634 34 4625 30 1515 30 1228 33 1190 8 974 18 2011 14 519 13 274 15 290 0 32 9 380 11 403 9 281 10 363 0 0 8 269 10 303 9 239 10 288 0 0 8 306 10 336 8 267 9 183 0 0 6 462 7 456 6 362 7 400 ";
    std::string space_delimiter = " ";
    std::vector<std::string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != std::string::npos)
        words.push_back(text.substr(0, pos)), text.erase(0, pos + space_delimiter.length());

    std::string formated = "";
    int position;
    for(int i = 0; i < 13; i++)
    {
        formated += "\n{{";
        int tmp(1);
        for(int y = 0; y < 10; y++)
        {
            formated += words[position];
            position ++;
            tmp++;
            if(tmp%2!=0 && y != 9)
                formated += "},{";
            else if(y != 9)
                formated += ",";
        }
        if(i != 12)
            formated += "}},";
        else
            formated += "}}";
    }

    std::cout << formated;

    return EXIT_SUCCESS;
}
