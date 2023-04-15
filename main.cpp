#include <iostream>
#include <fstream>
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


std::vector<std::string> load_file(std::string file);

int main(int argc, char* argv[])
{
    //      part 1       //
    std::vector<std::string> all_viewers;
    std::map<std::string, int> watching_now;

    // upload files 
    for (int i = 1; i < argc; ++i)
    {
        std::ifstream ifs(argv[i]);
        std::string line;
        
        while (std::getline(ifs, line))
        {
            all_viewers.push_back(line);
        }
    }

    // store all the files to one set
    std::set<std::string> unique_viewers(
        all_viewers.cbegin(), all_viewers.cend());

    std::cout << "Part 1:" << std::endl;
    for (auto viewer : unique_viewers)
    {
        std::cout << viewer << std::endl;
    }
    std::cout << std::endl << std::endl;
    
    //   part 2(plus)    //
    
    // std::cout << "Part 2:" << std::endl;



    std::cout << std::endl << std::endl;
    
    //      part 3       //

    std::map<std::string, int> now_watching;
    
    // initialize
    for (auto name : all_viewers)
    {
        now_watching[name] = 0;
    }
    
    // counting
    for (auto name : all_viewers)
    {
        now_watching[name]++;
    }
    
    // print
    std::cout << "Part 3:" << std::endl;
    for (auto [name, time] : now_watching)
    {
        std::cout << name << ": " << time << std::endl;
    }

    std::cout << std::endl;
   
    
    return 0;
}


std::vector<std::string> load_file(std::string file)
{
    std::vector<std::string> list;

    while (std::ifstream ifs{ file })
    {
        std::string line;
        ifs >> line;

        std::cout << line << std::endl;

        list.push_back(line);
    }

    return list;
}