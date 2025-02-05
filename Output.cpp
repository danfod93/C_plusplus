#include <iostream>
#include <fstream>
#include <vector>

// int main()
// {
//     //Create input file-stream object
//     std::ifstream file ("tacos.txt");

//     //Create vector
//     std::vector<std::string> names;

//     //Loop - Read file data and create a vector
//     std::string input;
//     while(file >> input) //return file
//     {
//         names.push_back(input);
//     }

//     //Loop through the vector to see the collected data
//     for(std::string name :names)
//     {
//         std::cout << name << std::endl;
//     }


//     return 0;
// }

int main()
{
    std::ifstream file ("tacoss.txt");

    if(file.is_open())
    {
        std::cout << "It worked!\n";
    } else
    {
        std::cout << "Did not work!";
    }

    //Getting the first char
    // char temp = file.get();

    //Getting the first line
    std::string line;
    getline(file, line);
    std::cout << line << "\n";
    return 0;
}