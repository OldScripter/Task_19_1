#include <iostream>
#include <fstream>

int GetWordQuantity(std::string word)
{
    char* dir = "C:\\Users\\oldsc\\CLionProjects\\Task_19_1\\input.txt";
    std::ifstream reading_stream(dir);

    int counter = 0;
    while (!reading_stream.eof())
    {
        std::string buffer;
        reading_stream >> buffer;
        if (buffer == word)
            counter++;
    }

    reading_stream.close();
    return counter;
}

int main() {
    std::string word_to_find;
    std::cout << "Please enter the word to find: ";
    std::cin >> word_to_find;

    std::cout << "Quantity of words: " << GetWordQuantity(word_to_find) << "\n";

    return 0;
}
