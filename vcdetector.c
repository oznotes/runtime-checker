//
// Created by elect on 9/9/2022.
//

#include "include/vcdetector.h"

// Global constants and variables used in file-lookup queries
const LPCTSTR winSxSFolderName = TEXT("WinSXS");

// Constants used to represent the MSI product CODES for all the runtimes
const LPCTSTR _vc2008x86Code = TEXT("{FF66E9F6-83E7-3A3E-AF14-8DE9A809A6A4}");
const LPCTSTR _vc2008x64Code = TEXT("{350AA351-21FA-3270-8B7A-835434E766AD}");
const LPCTSTR _vc2008SP1x86Code = TEXT("{9A25302D-30C0-39D9-BD6F-21E6EC160475}");
const LPCTSTR _vc2008SP1x64Code = TEXT("{8220EEFE-38CD-377E-8595-13398D740ACE}");

const LPCTSTR _vc2010x86Code = TEXT("{196BB40D-1578-3D01-B289-BEFC77A11A1E}");
const LPCTSTR _vc2010x64Code = TEXT("{DA5E371C-6333-3D8A-93A4-6FD5B20BCC6E}");
const LPCTSTR _vc2010SP1x86Code = TEXT("{F0C3E5D1-1ADE-321E-8167-68EF0DE699A5}");
const LPCTSTR _vc2010SP1x64Code = TEXT("{1D8E6291-B0D5-35EC-8441-6616F567A0F7}");

// Microsoft Visual C++ 2005
const LPCTSTR _vc_2005_SP1_ATL_SEC_UPD_REDIST_X64 = TEXT("{6CE5BAE9-D3CA-4B99-891A-1DC6C118A5FC}");
const LPCTSTR _vc_2005_SP1_ATL_SEC_UPD_REDIST_IA64 = TEXT("{85025851-A784-46D8-950D-05CB3CA43A13}");

// Microsoft Visual C++ 2008
const LPCTSTR _vc_2008_REDIST_IA64 = TEXT("{2B547B43-DB50-3139-9EBE-37D419E0F5FA}");
const LPCTSTR _vc_2008_SP1_REDIST_IA64 = TEXT("{5827ECE1-AEB0-328E-B813-6FC68622C1F9}");
const LPCTSTR _vc_2008_SP1_ATL_SEC_UPD_REDIST_X86 = TEXT("{1F1C2DFC-2D24-3E06-BCB8-725134ADF989}");
const LPCTSTR _vc_2008_SP1_ATL_SEC_UPD_REDIST_X64 = TEXT("{4B6C7001-C7D6-3710-913E-5BC23FCE91E6}");
const LPCTSTR _vc_2008_SP1_ATL_SEC_UPD_REDIST_IA64 = TEXT("{977AD349-C2A8-39DD-9273-285C08987C7B}");
const LPCTSTR _vc_2008_SP1_MFC_SEC_UPD_REDIST_X86 = TEXT("{9BE518E6-ECC6-35A9-88E4-87755C07200F}");
const LPCTSTR _vc_2008_SP1_MFC_SEC_UPD_REDIST_X64 = TEXT("{5FCE6D76-F5DC-37AB-B2B8-22AB8CEDB1D4}");
const LPCTSTR _vc_2008_SP1_MFC_SEC_UPD_REDIST_IA64 = TEXT("{515643D1-4E9E-342F-A75A-D1F16448DC04}");

// Microsoft Visual C++ 2010
const LPCTSTR _vc_2010_REDIST_IA64 = TEXT("{C1A35166-4301-38E9-BA67-02823AD72A1B}");
const LPCTSTR _vc_2010_SP1_REDIST_IA64 = TEXT("{88C73C1C-2DE5-3B01-AFB8-B46EF4AB41CD}");

// Microsoft Visual C++ 2012 x86 Minimum Runtime - 11.0.61030.0 (Update 4)
const LPCTSTR _vc_2012_REDIST_MIN_UPD4_X86 = TEXT("{BD95A8CD-1D9F-35AD-981A-3E7925026EBB}");
const LPCTSTR _vc_2012_REDIST_MIN_UPD4_X64 = TEXT("{CF2BEA3C-26EA-32F8-AA9B-331F7E34BA97}");

// Microsoft Visual C++ 2012 x86 Additional Runtime - 11.0.61030.0 (Update 4)
const LPCTSTR _vc_2012_REDIST_ADD_UPD4_X86 = TEXT("{B175520C-86A2-35A7-8619-86DC379688B9}");
const LPCTSTR _vc_2012_REDIST_ADD_UPD4_X64 = TEXT("{37B8F9C7-03FB-3253-8781-2517C99D7C00}");

// Visual C++ 2013 Redistributable 12.0.21005
const LPCTSTR _vc_2013_REDIST_X86_MIN = TEXT("{13A4EE12-23EA-3371-91EE-EFB36DDFFF3E}");
const LPCTSTR _vc_2013_REDIST_X64_MIN = TEXT("{A749D8E6-B613-3BE3-8F5F-045C84EBA29B}");
const LPCTSTR _vc_2013_REDIST_X86_ADD = TEXT("{F8CFEB22-A2E7-3971-9EDA-4B11EDEFC185}");
const LPCTSTR _vc_2013_REDIST_X64_ADD = TEXT("{929FBD26-9020-399B-9A7A-751D61F0B942}");

// Visual C++ 2015 Redistributable 14.0.23026
const LPCTSTR _vc_2015_REDIST_X86_MIN = TEXT("{A2563E55-3BEC-3828-8D67-E5E8B9E8B675}");
const LPCTSTR _vc_2015_REDIST_X64_MIN = TEXT("{0D3E9E15-DE7A-300B-96F1-B4AF12B96488}");
const LPCTSTR _vc_2015_REDIST_X86_ADD = TEXT("{BE960C1C-7BAD-3DE6-8B1A-2616FE532845}");
const LPCTSTR _vc_2015_REDIST_X64_ADD = TEXT("{BC958BD2-5DAC-3862-BB1A-C1BE0790438D}");

// Visual C++ 2019 Redistributable 14.25.28508
const LPCTSTR _vc_2019_REDIST_X86_MIN = TEXT("{2BC3BD4D-FABA-4394-93C7-9AC82A263FE2}");
const LPCTSTR _vc_2019_REDIST_X64_MIN = TEXT("{EEA66967-97E2-4561-A999-5C22E3CDE428}");
const LPCTSTR _vc_2019_REDIST_X86_ADD = TEXT("{0FA68574-690B-4B00-89AA-B28946231449}");
const LPCTSTR _vc_2019_REDIST_X64_ADD = TEXT("{7D0B74C2-C3F8-4AF1-940F-CD79AB4B2DCE}");

// Constants used to represent the MSI product FILE NAMES for all the runtimes pre-VC++10
const LPCTSTR _vc2008x86FolderName = TEXT("x86_microsoft.vc90.crt_1fc8b3b9a1e18e3b_9.0.21022*");
const LPCTSTR _vc2008x64FolderName = TEXT("amd64_microsoft.vc90.crt_1fc8b3b9a1e18e3b_9.0.21022*");
const LPCTSTR _vc2008SP1x86FolderName = TEXT("x86_microsoft.vc90.crt_1fc8b3b9a1e18e3b_9.0.30729*");
const LPCTSTR _vc2008SP1x64FolderName = TEXT("amd64_microsoft.vc90.crt_1fc8b3b9a1e18e3b_9.0.30729*");

// Constants used to represent the names of VC++ runtime binaries, when checking for local folder support
const LPCTSTR _vc2008FileName1 = TEXT("msvcr90.dll");
const LPCTSTR _vc2008FileName2 = TEXT("msvcm90.dll");
const LPCTSTR _vc2008FileName3 = TEXT("msvcp90.dll");

const LPCTSTR _vc2010FileName1 = TEXT("msvcp100.dll");
const LPCTSTR _vc2010FileName2 = TEXT("msvcr100.dll");

/******************************************************************
Function Name:  CheckProductUsingMsiQueryProductState
Description:    Uses Microsoft Installer (MSI) instrumentation to check
for the availability of Microsoft products using its product codes.
Inputs:         pszProductToCheck - product code to look up
Results:        1 if the requested product is installed
0 otherwise
******************************************************************/
int CheckProductUsingMsiQueryProductState(const LPCTSTR pszProductToCheck)
{
    int bFoundRequestedProduct = 0; // false
    INSTALLSTATE ir = INSTALLSTATE_UNKNOWN;

    // Check input parameter
    if (NULL == pszProductToCheck)
        return 0;

    ir = MsiQueryProductStateA(pszProductToCheck);

    if (ir == INSTALLSTATE_DEFAULT)
        bFoundRequestedProduct = 1;
    else
        bFoundRequestedProduct = 0;

    return bFoundRequestedProduct;
}

/******************************************************************
Function Name:  GetWinSXSDirectory
Description:    Gets the path of the $WINDIR/WinSxS folder.
Inputs:         NONE
Results:        a string containing the path to the folder if found,
NULL otherwise.
******************************************************************/
LPCTSTR GetWinSXSDirectory()
{
    LPCTSTR strDirectory = NULL;

    // Load the Windows directory
    TCHAR windir[MAX_PATH];
    GetWindowsDirectory(windir, MAX_PATH);

    TCHAR buffer[MAX_PATH];
    if (PathCombine(buffer, windir, winSxSFolderName) != NULL)
    {
        // operation succeeded!
        strDirectory = buffer;
    }

    return strDirectory;
}

/******************************************************************
Function Name:  CheckProductUsingWinSxSFolder
Description:    Queries the $WINDIR/WinSxS folder for the appropriate
install path for the requested product.
Inputs:         pszProductFolderToCheck - the product name to look up.
Results:        1 if the requested product is installed
0 otherwise
******************************************************************/
int CheckProductUsingWinSxSFolder(const LPCTSTR pszProductFolderToCheck)
{
    int bFoundRequestedProduct = 0;

    LPCTSTR strWinSxSDir = GetWinSXSDirectory();

    if (strWinSxSDir != NULL)
    {
        TCHAR searchPath[MAX_PATH];
        if (PathCombine(searchPath, strWinSxSDir, pszProductFolderToCheck) != NULL)
        {
            WIN32_FIND_DATA FindFileData;
            HANDLE hFind;
            hFind = FindFirstFile(searchPath, &FindFileData);
            if (hFind != INVALID_HANDLE_VALUE)
            { // found it!
                bFoundRequestedProduct = 1;
                FindClose(hFind);
            }
        }
    }

    return bFoundRequestedProduct;
}

/******************************************************************
Function Name:  CheckProductUsingCurrentDirectory
Description:    Queries the current working directory for a given binary.
Inputs:         pszProductFolderToCheck - the product name to look up.
pBinaryArchitecture - the desired processor architecture
of the binary (x86, x64, etc..).
Results:        1 if the requested product is installed
0 otherwise
******************************************************************/
int CheckProductUsingCurrentDirectory(const LPCTSTR pszProductBinaryToCheck, enum Architecture pBinaryArchitecture)
{
    int bFoundRequestedProduct = 0;

    // Get the length of the buffer first
    TCHAR currentDirectory[MAX_PATH];
    DWORD currentDirectoryChars = GetCurrentDirectory(MAX_PATH, currentDirectory);

    // exit if couldn't get current directory
    if (currentDirectoryChars <= 0)
        return bFoundRequestedProduct;

    TCHAR searchPath[MAX_PATH];
    // exit if we couldn't combine the path to the requested binary
    if (PathCombine(searchPath, currentDirectory, pszProductBinaryToCheck) == NULL)
        return bFoundRequestedProduct;

    WIN32_FIND_DATA FindFileData;
    HANDLE hFind = FindFirstFile(searchPath, &FindFileData);

    // exit if the binary was not found
    if (hFind == INVALID_HANDLE_VALUE)
        return bFoundRequestedProduct;

    HANDLE hFile = CreateFile(searchPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
        goto cleanup;

    HANDLE hMapping = CreateFileMapping(hFile, NULL, PAGE_READONLY | SEC_IMAGE, 0, 0, pszProductBinaryToCheck);
    if (hMapping == INVALID_HANDLE_VALUE)
        goto cleanup;

    LPVOID addrHeader = MapViewOfFile(hMapping, FILE_MAP_READ, 0, 0, 0);
    if (addrHeader == NULL)
        goto cleanup; // couldn't memory map the file

    PIMAGE_NT_HEADERS peHdr = ImageNtHeader(addrHeader);
    if (peHdr == NULL)
        goto cleanup; // couldn't read the header

    // Found the binary, AND its architecture matches. Success!
    if (peHdr->FileHeader.Machine == pBinaryArchitecture)
    {
        bFoundRequestedProduct = 1;
    }

cleanup: // release all of our handles
    FindClose(hFind);
    if (hFile != INVALID_HANDLE_VALUE)
        CloseHandle(hFile);
    if (hMapping != INVALID_HANDLE_VALUE)
        CloseHandle(hMapping);
    return bFoundRequestedProduct;
}

/******************************************************************
Function Name:  IsVC2008Installed_x86
Description:    Checks if the VC++9 runtime for x86 is installed on this machine.
Inputs:         NONE
Results:        true if the VC++9 runtime for x86 is installed
0 otherwise
******************************************************************/
int IsVC2008Installed_x86()
{
    return CheckProductUsingMsiQueryProductState(_vc2008x86Code) || CheckProductUsingWinSxSFolder(_vc2008x86FolderName);
}

/******************************************************************
Function Name:  IsVC2008Installed_x64
Description:    Checks if the VC++9 runtime for x64 is installed on this machine.
Inputs:         NONE
Results:        true if the VC++9 runtime for x64 is installed
0 otherwise
******************************************************************/
int IsVC2008Installed_x64()
{
    return CheckProductUsingMsiQueryProductState(_vc2008x64Code) || CheckProductUsingWinSxSFolder(_vc2008x64FolderName);
}

/******************************************************************
Function Name:  IsVC2008SP1Installed_x86
Description:    Checks if the VC++9 runtime (SP1) for x86 is installed on this machine.
Inputs:         NONE
Results:        true if the VC++9 runtime (SP1) for x86 is installed
0 otherwise
******************************************************************/
int IsVC2008SP1Installed_x86()
{
    return CheckProductUsingMsiQueryProductState(_vc2008SP1x86Code) || CheckProductUsingWinSxSFolder(_vc2008SP1x86FolderName);
}

/******************************************************************
Function Name:  IsVC2008SP1Installed_x64
Description:    Checks if the VC++9 runtime (SP1) for x64 is installed on this machine.
Inputs:         NONE
Results:        true if the VC++9 runtime (SP1) for x64 is installed
0 otherwise
******************************************************************/
int IsVC2008SP1Installed_x64()
{
    return CheckProductUsingMsiQueryProductState(_vc2008SP1x64Code) || CheckProductUsingWinSxSFolder(_vc2008SP1x64FolderName);
}

/******************************************************************
Function Name:  IsVC2010Installed_x86
Description:    Checks if the VC++10 runtime for x86 is installed on this machine.
Inputs:         NONE
Results:        1 if the VC++10 runtime for x86 is installed
0 otherwise
******************************************************************/
int IsVC2010Installed_x86()
{
    return CheckProductUsingMsiQueryProductState(_vc2010x86Code);
}

/******************************************************************
Function Name:  IsVC2010Installed_x64
Description:    Checks if the VC++10 runtime for x64 is installed on this machine.
Inputs:         NONE
Results:        1 if the VC++10 runtime for x64 is installed
0 otherwise
******************************************************************/
int IsVC2010Installed_x64()
{
    return CheckProductUsingMsiQueryProductState(_vc2010x64Code);
}

/******************************************************************
Function Name:  IsVC2010SP1Installed_x86
Description:    Checks if the VC++10 runtime (SP1) for x86 is installed on this machine.
Inputs:         NONE
Results:        1 if the VC++10 runtime (SP1) for x86 is installed
0 otherwise
******************************************************************/
int IsVC2010SP1Installed_x86()
{
    return CheckProductUsingMsiQueryProductState(_vc2010SP1x86Code);
}

/******************************************************************
Function Name:  IsVC2010SP1Installed_x64
Description:    Checks if the VC++10 runtime (SP1) for x64 is installed on this machine.
Inputs:         NONE
Results:        1 if the VC++10 runtime (SP1) for x64 is installed
0 otherwise
******************************************************************/
int IsVC2010SP1Installed_x64()
{
    return CheckProductUsingMsiQueryProductState(_vc2010SP1x64Code);
}

/******************************************************************
Function Name:  IsVC2008AvailableLocally_x86
Description:    Checks if the VC++9 runtime for x86 is available in the current directory.
Inputs:         NONE
Results:        1 if the VC++9 runtime for x86 is available
0 otherwise
******************************************************************/
int IsVC2008AvailableLocally_x86()
{
    return CheckProductUsingCurrentDirectory(_vc2008FileName1, X86) && CheckProductUsingCurrentDirectory(_vc2008FileName2, X86) && CheckProductUsingCurrentDirectory(_vc2008FileName3, X86);
}

/******************************************************************
Function Name:  IsVC2008AvailableLocally_x64
Description:    Checks if the VC++9 runtime for x64 is available in the current directory.
Inputs:         NONE
Results:        1 if the VC++9 runtime for x64 is available
0 otherwise
******************************************************************/
int IsVC2008AvailableLocally_x64()
{
    return CheckProductUsingCurrentDirectory(_vc2008FileName1, X64) && CheckProductUsingCurrentDirectory(_vc2008FileName2, X64) && CheckProductUsingCurrentDirectory(_vc2008FileName3, X64);
}

/******************************************************************
Function Name:  IsVC2010AvailableLocally_x86
Description:    Checks if the VC++10 runtime for x86 is available in the current directory.
Inputs:         NONE
Results:        1 if the VC++9 runtime for x86 is available
0 otherwise
******************************************************************/
int IsVC2010AvailableLocally_x86()
{
    return CheckProductUsingCurrentDirectory(_vc2010FileName1, X86) && CheckProductUsingCurrentDirectory(_vc2010FileName2, X86);
}

/******************************************************************
Function Name:  IsVC2010AvailableLocally_x64
Description:    Checks if the VC++10 runtime for x64 is available in the current directory.
Inputs:         NONE
Results:        1 if the VC++10 runtime for x64 is available
0 otherwise
******************************************************************/
int IsVC2010AvailableLocally_x64()
{
    return CheckProductUsingCurrentDirectory(_vc2010FileName1, X64) && CheckProductUsingCurrentDirectory(_vc2010FileName2, X64);
}

int Is_VC2005SP1ATLSECUPDREDIST_Installed_x64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2005_SP1_ATL_SEC_UPD_REDIST_X64);
}

int Is_VC2005SP1ATLSECUPDREDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2005_SP1_ATL_SEC_UPD_REDIST_IA64);
}

int Is_VC2008REDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_REDIST_IA64);
}

int Is_VC2008SP1REDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_REDIST_IA64);
}

int Is_VC2008SP1ATLSECUPDREDIST_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_ATL_SEC_UPD_REDIST_X86);
}

int Is_VC2008SP1ATLSECUPDREDIST_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_ATL_SEC_UPD_REDIST_X64);
}

int Is_VC2008SP1ATLSECUPDREDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_ATL_SEC_UPD_REDIST_IA64);
}

int Is_VC2008SP1MFCSECUPDREDIST_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_MFC_SEC_UPD_REDIST_X86);
}

int Is_VC2008SP1MFCSECUPDREDIST_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_MFC_SEC_UPD_REDIST_X64);
}

int Is_VC2008SP1MFCSECUPDREDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2008_SP1_MFC_SEC_UPD_REDIST_IA64);
}

int Is_VC2010REDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2010_REDIST_IA64);
}

int Is_VC2010SP1REDIST_Installed_ia64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2010_SP1_REDIST_IA64);
}

int Is_VC2012REDISTMINUPD4_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2012_REDIST_MIN_UPD4_X86);
}

int Is_VC2012REDISTMINUPD4_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2012_REDIST_MIN_UPD4_X64);
}

int Is_VC2012REDISTADDUPD4_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2012_REDIST_ADD_UPD4_X86);
}

int Is_VC2012REDISTADDUPD4_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2012_REDIST_ADD_UPD4_X64);
}

int Is_VC2013REDISTMIN_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2013_REDIST_X86_MIN);
}

int Is_VC2013REDISTMIN_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2013_REDIST_X64_MIN);
}

int Is_VC2013REDISTADD_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2013_REDIST_X64_ADD);
}

int Is_VC2013REDISTADD_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2013_REDIST_X86_ADD);
}
int Is_VC2015MIN_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2015_REDIST_X86_MIN);
}

int Is_VC2015MIN_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2015_REDIST_X64_MIN);
}

int Is_VC2015ADD_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2015_REDIST_X86_ADD);
}

int Is_VC2015ADD_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2015_REDIST_X64_ADD);
}

int Is_VC2019MIN_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2019_REDIST_X86_MIN);
}

int Is_VC2019MIN_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2019_REDIST_X64_MIN);
}

int Is_VC2019ADD_Installed_X86()
{
    return CheckProductUsingMsiQueryProductState(_vc_2019_REDIST_X86_ADD);
}

int Is_VC2019ADD_Installed_X64()
{
    return CheckProductUsingMsiQueryProductState(_vc_2019_REDIST_X64_ADD);
}
