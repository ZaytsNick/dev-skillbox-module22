#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> queue;
    queue.insert(std::make_pair<int, std::string>(1, "Coi"));
    queue.insert(std::make_pair<int, std::string>(2, "Pushkin"));
    queue.insert(std::make_pair<int, std::string>(3, "Cuper"));
    queue.insert(std::make_pair<int, std::string>(4, "Zaytsev"));
    queue.insert(std::make_pair<int, std::string>(5, "Kipelov"));
    std::map<int, std::string>::iterator it = queue.begin();
    std::string another;
    while (it != queue.end())
    {
        std::cin >> another;
        if (another == "Next")
        {
            std::cout << it->second;
            it++;
        }
        else
        {
            queue.insert(std::pair<int, std::string>(queue.end()->first + 1, another));
        }
        std::cout<<std::endl;
    }
}