#include <iostream>
#include <string>
#include <map>

int main()
{

    std::string word_1("0"), word_2;
    std::map<char, int> сharsCount;
    while (word_1 != "-1")
    {
        std::cin >> word_1 >> word_2;
        if (word_1.size() == word_2.size())
        {
            for (int i = 0; i < word_1.size(); ++i)
            {
                сharsCount[word_1[i]]++;
                // сharsCount.find(word_1[i])->second++;
            }
            for (int i = 0; i < word_2.size(); ++i)
            {
                сharsCount.find(word_2[i])->second--;
                if (сharsCount.find(word_2[i])->second <= 0)
                    сharsCount.erase(word_2[i]);
            }
            if (!сharsCount.size())
                std::cout << "true" << std::endl;
            else
                std::cout << "false" << std::endl;
        }
        else
            std::cout << "false" << std::endl;
    }
}
