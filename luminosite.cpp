#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    int max_brightness {120000};
    int brightness_arg {max_brightness/2};

    if(argc == 2){
        brightness_arg = std::stoi(argv[1]);
    }

    ofstream brightness_file {"/sys/class/backlight/intel_backlight/brightness"};

    int new_brightness = {brightness_arg*max_brightness/100};

    brightness_file<<new_brightness;

    return 0;
}
