#include <iostream>
#include <string>
#include <vector>
#include <map>

// phonebook.insert(std::pair<std::string, std::string>("12-45-78","Coi"));
// phonebook.insert(std::pair<std::string, std::string>("78-45-12","Coi"));
// phonebook.insert(std::pair<std::string, std::string>("98-65-99","Cuper"));
// phonebook.insert(std::pair<std::string, std::string>("00-70-07","Zaytsev"));
// phonebook.insert(std::pair<std::string, std::string>("12-34-56","Kipelov"));
int main()
{
    std::map<std::string, std::string> NumberToSurname;
    std::map<std::string, std::vector<std::string>> SurnameToNumber;
    while (true)
    {
        std::string tmp;
        getline(std::cin, tmp);
        if (tmp.size() > 9)
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
            if (SurnameToNumber.find(tmp_second))
            {
                SurnameToNumber[tmp_second].push_back(tmp_first);
            }
            else
            {
                NumberToSurname.insert(std::pair<std::string, std::string>(tmp_first, tmp_second));
                // auto elem{SurnameToNumber.find(tmp_second)};??????
                SurnameToNumber[tmp_second].push_back(tmp_first);
            }
            // SurnameToNumber.insert(std::pair<std::string, std::vector<std::string>>(tmp_second,SurnameToNumber[tmp_second].push_back(tmp_first)));
            // SurnameToNumber.find(tmp_second);
            // std::cout<< SurnameToNumber.find(tmp_second)->first<<std::endl<<" ";//<< SurnameToNumber.find(tmp_second)->second<<std::endl;
            // std::map<std::string, std::vector<std::string>>::iterator it = SurnameToNumber.find(tmp_second);
            // std::cout << it->second << std::endl;

            // SurnameToNumber.it.second.push_back(tmp_first);
            // SurnameToNumber.insert(std::pair<std::string, std::vector<std::string>>(tmp_second, index[tmp_second].push_back(tmp_first)));
            // std::cout << NumberToSurname.find(tmp_first) << " " << SurnameToNumber.find(tmp_second);
        }
    }
}