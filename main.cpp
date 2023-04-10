#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>              // balance binary Tree(red-black tree)
#include <unordered_set>    // hash table
#include <map>              // balance binary Tree(red-black tree)
#include <unordered_map>    // hash table

// HW part. 1
// print出所有實況台裡不重複的觀眾名單


// HW part. 2 plus
// 跟part 1一樣print出觀眾名單
// 但print完第一個檔案的名單才print第二個檔案的名單

// HW part. 3
// print時說這個觀眾出現在幾個台



/*
class audience
{
public:

    void show_audience_set() const
    {
        if (m_audiences.empty()) return;

        for (const auto aud : m_audiences)
        {
            std::cout << aud << std::endl;
        }
    }
    int emerge_times(const std::string& name) const
    {
        return m_emergence[name];
    }

private:
    std::set<std::string> m_audiences;
    std::map<std::string, int> m_emergence;
};
*/




int main(int argc, char* argv[])
{

    std::ifstream ifs(argv[1]);

    std::set<std::string> audiences;
    std::map<std::string, int> emergence;
    
    while(true)
    {
        std::string line;
        
        std::getline(ifs, line);

        if (ifs.fail()) break;
        else
        {
            audiences.insert(line);
        }
    }
    
    for (const auto aud : audiences)
    {
        std::cout << aud << std::endl;
    }


    

    return 0;
}