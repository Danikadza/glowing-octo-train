#pragma once
#ifndef GS_WINDOW_NATIVE_HANDLE_H
#define GS_WINDOW_NATIVE_HANDLE_H
#include "Window.h"

#if defined(_WIN32)
#include <Windows.h>

LRESULT CALLBACK WndProc(HWND hwnd,UINT wm,WPARAM wParam,LPARAM lParam);

struct GS_WindowNativeHandle 
{
    WNDCLASSEX wc;
    HWND hwnd;
    HINSTANCE hInstance;
};

#elif defined(__linux__)
#error "PLATFORM NOT SUPPORTED"
#else
#error "PLATFORM NOT SUPPORTED"
#endif

GS_WindowNativeHandle* GS_WindowNativeHandleCreate();
void GS_WindowNativeHandleDestroy(GS_WindowNativeHandle** p_handle);

#endif