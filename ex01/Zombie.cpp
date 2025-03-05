#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "Unknown";
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
