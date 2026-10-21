#include <iostream>
#include <iomanip>
#include <cstring>

int main() {
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    std::cout<<"Enter first primary color (red, blue, or yellow): ";
    std::cin>>std::setw(COLOR_SIZE)>>first_color;
    
    std::cout<<"Enter second primary color (red, blue, or yellow): ";
    std::cin>>std::setw(COLOR_SIZE)>>second_color;
    
    bool first_is_red = (strcmp(first_color, "red")==0);
    bool first_is_blue = (strcmp(first_color, "blue")==0);
    bool first_is_yellow = (strcmp(first_color, "yellow")==0);
    
    bool second_is_red = (strcmp(second_color, "red")==0);
    bool second_is_blue = (strcmp(second_color, "blue")==0);
    bool second_is_yellow = (strcmp(second_color, "yellow")==0);
    
    bool valid_first = (first_is_red || first_is_blue || first_is_yellow);
    bool valid_second = (second_is_red || second_is_blue || second_is_yellow);
    
    if(!valid_first || !valid_second) {
        std::cout<<"ERROR: Enter either red, blue, or yellow.\n";
        return 1;
    }
    if(strcmp(first_color, second_color)==0) {
        std::cout<<first_color<<"\n";
    } else if((first_is_red && second_is_yellow) || (first_is_yellow && second_is_red)) {
        std::cout<<"orange\n";
    } else if((first_is_yellow && second_is_blue) || (first_is_blue && second_is_yellow)) {
        std::cout<<"green\n";
    } else if((first_is_blue && second_is_red) || (first_is_red && second_is_blue)) {
        std::cout<<"purple\n";
    }
return 0;
}