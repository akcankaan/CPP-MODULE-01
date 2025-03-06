#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2) {}

FileReplacer::~FileReplacer() {}

bool FileReplacer::replace() {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return false;
    }

    std::string newFilename = filename + ".replace";
    std::ofstream outputFile(newFilename);
    if (!outputFile) {
        std::cerr << "Error: Cannot create file " << newFilename << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return true;
}