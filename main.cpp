#include <iostream>
#include <fstream>

/*
 * Get the word quantity from file input.txt.
 */
int GetWordQuantity(std::string& word)
{
    const std::string FILE_PATH = "..\\input.txt";
    std::ifstream readingStream(FILE_PATH);
    if (readingStream.is_open())
    {
        int counter = 0;
        while (!readingStream.eof())
        {
            std::string buffer;
            readingStream >> buffer;
            if (buffer == word)
                counter++;
        }
        readingStream.close();
        return counter;
    } else {
        std::cerr << "File reading error!\n";
        return -1;
    }
}

int main() {
    std::string wordToFind;
    std::cout << "Please enter the word to find: ";
    std::cin >> wordToFind;
    std::cout << "Quantity of words: " << GetWordQuantity(wordToFind) << "\n";
    return 0;
}
