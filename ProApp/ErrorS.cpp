#include "ErrorS.h"

#include <windows.h>

using namespace ProApp;

int APIENTRY _tWinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR    lpCmdLine,
    int       nCmdShow)
{
    System::Threading::Thread::CurrentThread->ApartmentState = System::Threading::ApartmentState::STA;
    Application::Run(gcnew ErrorS());
    return 0;
}