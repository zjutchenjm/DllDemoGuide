#pragma once
#ifndef DLL_EXPORT
#define DLL_EXPORT extern "C" __declspec(dllexport) 
#endif

DLL_EXPORT int Add(int &a, int &b);