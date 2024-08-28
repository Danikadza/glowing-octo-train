#include <GS_ENGINE/EventManager.h>
#include <GS_ENGINE/Window.h>
#include <stdio.h>

int main()
{
    GS_EventManagerCreate();
    GS_Window *window = GS_WindowCreate("GS_ENGINE", 800, 600);

    while (!GS_WindowShouldClose(window))
    {
        GS_WindowPollEvents(window);
    }
    printf("%d\n", GS_WindowGetTime(window));
    GS_WindowDestroy(&window);
    GS_EventManagerDestroy();
}
