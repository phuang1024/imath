//
//  IMath
//  Interactive mathematical computing.
//  Copyright Patrick Huang 2021
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include <iostream>
#include "utils.hpp"
#include "frontend.hpp"


void print_info() {
    std::cout << "IMath " << VERSION << "\n";
    std::cout << "Built " << __DATE__ << ", " << __TIME__ << "\n";
    std::cout << std::flush;
}


int main() {
    std::cerr << IMath::Frontend::Color::UNDERLINE;
    std::cerr << IMath::Frontend::Color::GREEN_LIGHT;
    print_info();
    std::cerr << IMath::Frontend::Color::RESET;
}
