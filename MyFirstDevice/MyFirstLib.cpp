﻿#include <fbsdk/fbsdk.h>
FBLibraryDeclare(MyFirstLib)
{
    FBLibraryRegister(MyDevice);
    
    FBLibraryRegister(MyDeviceEditor);
}

FBLibraryDeclareEnd


bool FBLibrary::LibClose()
{
    return  true;
}
bool FBLibrary::LibInit()
{
    return  true;
}
bool FBLibrary::LibOpen()
{
    return  true;
}

bool FBLibrary::LibReady()
{
    return  true;
}
bool FBLibrary::LibRelease()
{
    return  true;
}



