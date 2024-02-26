#include <iostream>
#include <string>
#include <vector>
#include <map>

int main()
{
    std::map<std::string, std::string> NumberToSurname;
    std::map<std::string, std::vector<std::string>> SurnameToNumber;
    while (true)
    {
        std::string tmp;
        getline(std::cin, tmp);
        if (tmp.size() == 8 && tmp[2] == '-' && tmp[5] == '-')
        {
            std::cout << NumberToSurname.find(tmp)->second << std::endl;
        }
        else if (tmp.size() > 8 && tmp[2] == '-' && tmp[5] == '-' && tmp[8] == ' ' && tmp[9] >= 'A' && tmp[9] <= 'Z')
        {
            std::string tmp_first;
            for (int i = 0; i < 8; ++i)
            {
                tmp_first += tmp[i];
            }
            std::string tmp_second = "";
            for (int i = 9; i < tmp.size(); ++i)
            {
                tmp_second += tmp[i];
            }
            NumberToSurname.insert(std::pair<std::string, std::string>(tmp_first, tmp_second));
            SurnameToNumber[tmp_second].push_back(tmp_first);
        }
        else if (tmp.size() > 0)
        {
            for (int i = 0; i < SurnameToNumber.find(tmp)->second.size(); ++i)
            {
                std::cout << SurnameToNumber.find(tmp)->second[i] << std::endl;
            }
        }
    }
}