#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    auto can = Canvas(200,80);
    can.DrawPointCircle(13,45,5);
    can.DrawPointLine(13,45,20,35);
    can.DrawPointLine(20,35,40,35);
    can.DrawPointLine(40,35,47,45);
    can.DrawPointCircle(47,45,5);
    can.DrawPointLine(40,35,40,30);
    can.DrawPointLine(38,32,43,28);
    can.DrawPointLine(20,35,20,31);

    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::IndianRed1, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}