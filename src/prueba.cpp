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
    int frame = 0, frame2 = 0, fix = 15, fix2 = 101, fix3 = 41, fix4 = 240, fix5 = 19, strx1 = 30, stry1 = 5, strx2 = 100, stry2 = -5;
    while (true)
    {
        while (true && frame <= 280)
        {
            auto can = Canvas(230, 80);
            //carretera
            can.DrawPointLine(30 - frame, 70, 40 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 - frame, 70, 40 + fix3 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 - frame, 70, 40 + fix3 + fix3 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 - frame, 70, 40 + fix3 + fix3 + fix3 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 + fix3 - frame, 70, 40 + fix3 + fix3 + fix3 + fix3 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 + fix3 + fix3 - frame, 70, 40 + fix3 + fix3 + fix3 + fix3 + fix3 - frame, 70, Color::Yellow1);

            can.DrawPointLine(30 + fix4 - frame, 70, 40 + fix4 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix4 - frame, 70, 40 + fix3 + fix4 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix4 - frame, 70, 40 + fix3 + fix3 + fix4 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 + fix4 - frame, 70, 40 + fix3 + fix3 + fix3 + fix4 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 + fix3 + fix4 - frame, 70, 40 + fix3 + fix3 + fix3 + fix3 + fix4 - frame, 70, Color::Yellow1);
            can.DrawPointLine(30 + fix3 + fix3 + fix3 + fix3 + fix3 + fix4 - frame, 70, 40 + fix3 + fix3 + fix3 + fix3 + fix3 + fix4 - frame, 70, Color::Yellow1);

            // Estrellas
            can.DrawPointLine(70, 13, 76, 14);
            can.DrawPointLine(72, 16, 75, 12);

            can.DrawPointLine(70 + strx1, 13 + stry1, 76 + strx1, 14 + stry1);
            can.DrawPointLine(72 + strx1, 16 + stry1, 75 + strx1, 12 + stry1);

            can.DrawPointLine(70 + strx2, 13 + stry2, 76 + strx2, 14 + stry2);
            can.DrawPointLine(72 + strx2, 16 + stry2, 75 + strx2, 12 + stry2);

            can.DrawPointLine(11, 15, 13, 13);
            can.DrawPointLine(13, 13, 14, 10);
            can.DrawPointLine(14, 10, 12, 7);
            can.DrawPointLine(13, 15, 18, 13);
            can.DrawPointLine(18, 13, 17, 9);
            can.DrawPointLine(17, 9, 12, 7);
            // Faro1
            can.DrawPointLine(230 + fix5 - frame, 59, 230 + fix5 - frame, 10, Color::Grey15);
            can.DrawPointLine(227 + fix5 - frame, 59, 227 + fix5 - frame, 10, Color::Grey15);
            can.DrawPointLine(225 + fix5 - frame, 10, 232 + fix5 - frame, 10);
            can.DrawPointLine(225 + fix5 - frame, 10, 223 + fix5 - frame, 7);
            can.DrawPointLine(232 + fix5 - frame, 10, 234 + fix5 - frame, 7);
            can.DrawPointLine(225 + fix5 - frame, 7, 234 + fix5 - frame, 7, Color::Grey11);
            can.DrawPointLine(223 + fix5 - frame, 7, 225 + fix5 - frame, 5, Color::Grey11);
            can.DrawPointLine(234 + fix5 - frame, 7, 232 + fix5 - frame, 5, Color::Grey11);
            can.DrawPointLine(225 + fix5 - frame, 5, 232 + fix5 - frame, 5, Color::Grey11);
            can.DrawPointLine(225 + fix5 - frame, 10, 215 + fix5 - frame, 28, Color::White);
            can.DrawPointLine(215 + fix5 - frame, 28, 209 + fix5 - frame, 38, Color::Black);
            can.DrawPointLine(234 + fix5 - frame, 10, 244 + fix5 - frame, 28, Color::White);
            can.DrawPointLine(244 + fix5 - frame, 28, 250 + fix5 - frame, 38, Color::Black);
            // Faro2

            can.DrawPointLine(0, 60, 250, 60, Color::Grey11);
            can.DrawPointCircle(13, 45 + fix, 5, Color::White);
            can.DrawPointLine(13, 45 + fix, 20, 35 + fix, Color::Yellow1);
            can.DrawPointLine(20, 35 + fix, 40, 35 + fix, Color::Yellow1);
            can.DrawPointLine(40, 35 + fix, 47, 45 + fix, Color::Yellow1);
            can.DrawPointCircle(47, 45 + fix, 5, Color::White);
            can.DrawPointLine(40, 35 + fix, 40, 30 + fix, Color::Yellow1);
            can.DrawPointLine(38, 32 + fix, 43, 28 + fix, Color::Grey0); // manublo
            can.DrawPointLine(20, 35 + fix, 20, 29 + fix, Color::Grey0); // Asiento
            can.DrawPointLine(13, 45 + fix, 25, 43 + fix, Color::Yellow1);
            can.DrawPointLine(25, 43 + fix, 20, 35 + fix, Color::Yellow1);
            can.DrawPointLine(25, 43 + fix, 40, 35 + fix, Color::Yellow1);
            can.DrawPointLine(20, 29 + fix, 23, 29 + fix, Color::Yellow1);
            can.DrawPointLine(20, 29 + fix, 19, 29 + fix, Color::Yellow1);
            can.DrawPointLine(21, 29 + fix, 27, 18 + fix, Color::White); // Torso
            can.DrawPointLine(21, 29 + fix, 24, 46 + fix, Color::White); // Pierna
            can.DrawPointLine(21, 29 + fix, 26, 44 + fix, Color::White); // Pierna
            can.DrawPointCircle(27, 14 + fix, 4);                        // Cabeza
            can.DrawPointLine(28, 21 + fix, 41, 28 + fix);               // Brazo
            can.DrawPointLine(28, 21 + fix, 39, 32 + fix);               // Brazo

            Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
            Element lienzo = bgcolor(Color::Black, border(vbox(canvas(&can))));
            Render(pantalla, lienzo);
            std::cout << reset_position;
            pantalla.Print();
            reset_position = pantalla.ResetPosition(true);
            this_thread::sleep_for(0.03s);
            frame++;
        }
        frame2++;
        frame = 0;
    }
    return 0;
}