#pragma once
#ifndef DLLDEMOGUIDE_H
#define DLLDEMOGUIDE_H
#endif

#define DLL_EXPORT extern "C" __declspec(dllexport) 

DLL_EXPORT int Add(int &a, int &b);