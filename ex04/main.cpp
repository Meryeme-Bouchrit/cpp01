#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    if(s1.empty())
    {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) 
    {
        std::cout << "Error: cannot open file " << filename << std::endl;
        return 1;   
    }
    
    std::string content;
    std::string line;
    while (std::getline(infile, line))
    {
        content += line;
        if(!infile.eof())
            content += "\n";
    }
    infile.close();
    
    size_t pos = 0;
    while((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::string newFileName = filename + ".replace";
    std::ofstream outfile(newFileName.c_str());
    if (!outfile.is_open())
    {
        std::cout << "Error: cannot create file " << newFileName << std::endl;
        return 1;   
    }
    outfile << content;
    outfile.close();
    
    std::cout << "Success! Created: " << newFileName << std::endl;
    return 0;
}