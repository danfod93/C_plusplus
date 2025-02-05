#include <iostream>
#include <fstream>
#include <vector>

int main()
{

    //User defined filename input
    std::string filename;
    std::cin >> filename;

    std::ofstream file (filename, std::ios_base::app);

    //Check if file was oppened successfully;
    if(file.is_open())
    {
        std::cout << "success n00b\n";
    }

    //initialise & declare vector
    std::vector<std::string> names;
    names.push_back("Daniel");
    names.push_back("Kri");
    names.push_back("Richie");

    //Loop through the vector and write its elements into the file
    for(std::string name : names)
    {
        file << name << std::endl;
    }
    
    file.close();
    return 0;
}