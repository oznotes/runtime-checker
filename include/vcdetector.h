//
// Created by elect on 9/9/2022.
//

#ifndef UNTITLED_VCDETECTOR_H
#define UNTITLED_VCDETECTOR_H
#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <Msi.h>
#include "Shlwapi.h"
#include "Dbghelp.h"

// Architecture enum - used when inspecting VC++ binaries in a local folder
enum Architecture {
    X86 = IMAGE_FILE_MACHINE_I386,
    X64 = IMAGE_FILE_MACHINE_AMD64,
    Itanium = IMAGE_FILE_MACHINE_IA64
};

int CheckProductUsingMsiQueryProductState(const LPCTSTR);
LPCTSTR GetWinSXSDirectory();
int CheckProductUsingWinSxSFolder(const LPCTSTR);
int CheckProductUsingCurrentDirectory(const LPCTSTR , enum Architecture);

//VC++9
int IsVC2008Installed_x86();
int IsVC2008SP1Installed_x86();

int IsVC2008Installed_x64();
int IsVC2008SP1Installed_x64();

//Check to see if VC++9 binaries are available in current directory
int IsVC2008AvailableLocally_x86();
int IsVC2008AvailableLocally_x64();

//VC++10
int IsVC2010Installed_x86();
int IsVC2010SP1Installed_x86();

int IsVC2010Installed_x64();
int IsVC2010SP1Installed_x64();

//Check to see if VC++10 binaries are available in current directory
int IsVC2010AvailableLocally_x86();
int IsVC2010AvailableLocally_x64();


int Is_VC2005SP1ATLSECUPDREDIST_Installed_x64();
int Is_VC2005SP1ATLSECUPDREDIST_Installed_ia64();
int Is_VC2008REDIST_Installed_ia64();
int Is_VC2008SP1REDIST_Installed_ia64();
int Is_VC2008SP1ATLSECUPDREDIST_Installed_X86();
int Is_VC2008SP1ATLSECUPDREDIST_Installed_X64();
int Is_VC2008SP1ATLSECUPDREDIST_Installed_ia64();
int Is_VC2008SP1MFCSECUPDREDIST_Installed_X86();
int Is_VC2008SP1MFCSECUPDREDIST_Installed_X64();
int Is_VC2008SP1MFCSECUPDREDIST_Installed_ia64();
int Is_VC2010REDIST_Installed_ia64();
int Is_VC2010SP1REDIST_Installed_ia64();
int Is_VC2012REDISTMINUPD4_Installed_X86();
int Is_VC2012REDISTMINUPD4_Installed_X64();
int Is_VC2012REDISTADDUPD4_Installed_X86();
int Is_VC2012REDISTADDUPD4_Installed_X64();

int Is_VC2013REDISTMIN_Installed_X86();
int Is_VC2013REDISTMIN_Installed_X64();
int Is_VC2013REDISTADD_Installed_X64();
int Is_VC2013REDISTADD_Installed_X86();

int Is_VC2015MIN_Installed_X86();
int Is_VC2015MIN_Installed_X64();
int Is_VC2015ADD_Installed_X86();
int Is_VC2015ADD_Installed_X64();


int Is_VC2019MIN_Installed_X86();
int Is_VC2019MIN_Installed_X64();
int Is_VC2019ADD_Installed_X86();
int Is_VC2019ADD_Installed_X64();
#endif //UNTITLED_VCDETECTOR_H
