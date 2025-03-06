#include "FileReplacer.hpp"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    FileReplacer replacer(av[1], av[2], av[3]);

    if (!replacer.replace()) {
        return 1;
    }

    std::cout << "Replacerment successfull! Output: " << av[1] << ".replace" << std::endl;
    return 0;
}