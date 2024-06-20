#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Text_Display.H>

static void _button_callback(Fl_Widget *widget, void *data)
{
    fl_message("Hey thanks for clicking me ;)");
}

int main(int argc, char **argv)
{
    Fl_Window *window = new Fl_Window(640, 480);
    window->label("HOW HAVE I NOT HEARD OF FLTK BEFORE????? IT'S AWESOMEE!!!111111 nah but fr");

    Fl_Button *button = new Fl_Button(10, 10, 200, 40, "I'm a button lol press me");
    button->callback(_button_callback);

    Fl_Text_Display *label = new Fl_Text_Display(20, 100, 400, 0, "FLTK is awesome honsetly, this GUI is literally 25 lines of code");

    window->end();
    window->show(argc, argv);
    return Fl::run();
}
