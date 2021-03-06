#include "gui/init.hpp"
#include "window.hpp"

#if defined _WIN32
#   include <windows.h>
#endif

int main(int argc, char** argv)
{
    return run_application(argc, argv, []() { return new main_window; });
}

#if defined _MSC_VER
int CALLBACK WinMain(HINSTANCE, HINSTANCE, LPSTR, int /* nCmdShow */)
{
    return main(__argc, __argv);
}
#endif
