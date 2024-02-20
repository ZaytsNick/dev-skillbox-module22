#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string tmp;
    std::pair<std::string, std::string> anagrams;
    while (true)
    {
        std::cin >> anagrams.first >> anagrams.second;
        bool answer = false;
        if (anagrams.first.size() ==anagrams.second.size())
        {
            for (int i = 0; i < anagrams.first.size(); ++i)
            {
                answer = false;
                for (int j = 0; j < anagrams.second.size(); ++j)
                {
                    if (anagrams.first[i] == anagrams.second[j])
                    {
                        anagrams.second[j] = '0';
                        answer = true;
                        break;
                    }
                }
                if (!answer)
                    break;
                ;
            }
            if (answer)
                std::cout << "true" << std::endl;
            else
                std::cout << "false" << std::endl;
        }
        else
            std::cout << "false" << std::endl;
    }
}