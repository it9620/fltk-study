#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

using namespace std;

enum {
    spacing = 5,
    button_width = 200,
    button_heigh = 40,
    font_size = 20
};

static const char* msg[] = {
    "Say hello", "Say goodbye", "Quit"
};

static void say_callback(Fl_Widget*, void* user)
{
    cout << string(static_cast<const char*>(user)) << endl;
}

static void exit_callback(Fl_Widget* widget, void*)
{
    Fl_Widget* parent_element = nullptr;
    do {
        parent_element = widget->parent();
        if (parent_element) {
            widget = parent_element;
        }
    } while (parent_element);

    widget->hide();
}



int main(int argc, char **argv)
{
    int window_width = button_width + spacing * 2;
    int window_height = button_heigh * 3 + spacing * 4;
    Fl_Window* window = new Fl_Window(window_width, window_height, "Buttons demo");

    Fl_Button* buttons[3];

    int i = 0;
    int y = spacing;
    for (i = 0; i < 3; ++i) {
        buttons[i] = new Fl_Button(spacing, y, button_width, button_heigh, msg[i]);
        buttons[i]->labelsize(font_size);
        y += button_heigh + spacing;
    }
    window->end();

    buttons[0]->callback(say_callback, (void*)"Hello, World!");
    buttons[1]->callback(say_callback, (void*)"Goodbay, World!");
    buttons[2]->callback(exit_callback, 0);

    window->show();

    return Fl::run();  
    /*for (int i = 0; i < sizeof(buttons); ++i) {
        delete buttons[i];
        buttons[i] = nullptr;
    }*/
} 