#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string tmp;
    std::map<std::string, std::string> phonebook; // ("00-00-00", "Default");//12-45-78 Zaytev
    phonebook.insert(std::pair<std::string, std::string>("12-45-78","Coi"));
    phonebook.insert(std::pair<std::string, std::string>("78-45-12","Coi"));
    phonebook.insert(std::pair<std::string, std::string>("98-65-99","Cuper"));
    phonebook.insert(std::pair<std::string, std::string>("00-70-07","Zaytsev"));
    phonebook.insert(std::pair<std::string, std::string>("12-34-56","Kipelov"));
    while (tmp != "-1")
    {
        getline(std::cin, tmp);
        if (tmp.size() > 9)
        {
            char tmp_first[8];
            for (int i = 0; i < 8; ++i)
            {
                tmp_first[i] = tmp[i];
            }
            std::string tmp_second = "";
            for (int i = 9; i < tmp.size(); ++i)
            {
                tmp_second += tmp[i];
            }
            phonebook.insert(std::pair<std::string, std::string>(tmp_first, tmp_second));
        }
        else if (tmp.size() == 8)
        {
            std::map<std::string, std::string>::iterator it = phonebook.find(tmp);
            std::cout << it->second<< std::endl;
        }
        else if (tmp.size() > 3)
        {
            for (std::map<std::string, std::string>::iterator it = phonebook.begin(); it != phonebook.end(); ++it)
            {
                if (tmp == it->second)
                    std::cout << it->first << " ";
            }
            std::cout << std::endl;
        }
    }
}