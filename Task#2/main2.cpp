#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> queue;
    std::string another("0");
    while (another != "-1")
    {
        std::cin >> another;
        if (another == "Next")
        {
            std::cout << "-";
            std::map<std::string, int>::iterator it = queue.begin();
            std::cout << it->first;
            it->second--;
            if (it->second <= 0)
                queue.erase(it);
            std::cout << std::endl;
        }
        else
        { // queue.end()->first + 1
            // queue.insert(std::pair<std::string, int>(another,second++));
            // SurnameToNumber[tmp_second].push_back(tmp_first);
            queue[another];
            queue.find(another)->second++;
        }
    }
}