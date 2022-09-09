#include "include/vcdetector.h"

int main()
{

    printf("VC2005 x64 ATL SEC UPD is installed ? %d\n", Is_VC2005SP1ATLSECUPDREDIST_Installed_x64());
    printf("VC2005 IA64 ATL SEC UPD is installed ? %d\n", Is_VC2005SP1ATLSECUPDREDIST_Installed_ia64());
    printf("VC2008 x86 is installed ? %d\n", IsVC2008Installed_x86());
    printf("VC2008 x86 SP1 is installed ? %d\n", IsVC2008SP1Installed_x86());
    printf("VC2008 x64 is installed ? %d\n", IsVC2008Installed_x64());
    printf("VC2008 x64 SP1 is installed ? %d\n", IsVC2008SP1Installed_x64());
    printf("VC2008 X86 is in Current Directory ? %d\n", IsVC2008AvailableLocally_x86());
    printf("VC2008 x64 is in Current Directory ? %d\n", IsVC2008AvailableLocally_x64());
    printf("VC2008 IA64 is installed ? %d\n", Is_VC2008REDIST_Installed_ia64());
    printf("VC2008 IA64 SP1 is installed ? %d\n", Is_VC2008SP1REDIST_Installed_ia64());
    printf("VC2008 x86 SP1 ATL SEC UPD is installed ? %d\n", Is_VC2008SP1ATLSECUPDREDIST_Installed_X86());
    printf("VC2008 x64 SP1 ATL SEC UPD is installed ? %d\n", Is_VC2008SP1ATLSECUPDREDIST_Installed_X64());
    printf("VC2008 IA64 SP1 ATL SEC UPD is installed ? %d\n", Is_VC2008SP1ATLSECUPDREDIST_Installed_ia64());
    printf("VC2008 x86 SP1 MFC SEC UPD is installed ? %d\n", Is_VC2008SP1MFCSECUPDREDIST_Installed_X86());
    printf("VC2008 x64 SP1 MFC SEC UPD is installed ? %d\n", Is_VC2008SP1MFCSECUPDREDIST_Installed_X64());
    printf("VC2008 IA64 SP1 MFC SEC UPD is installed ? %d\n", Is_VC2008SP1MFCSECUPDREDIST_Installed_ia64());
    printf("VC2010 x86 is installed ? %d\n", IsVC2010Installed_x86());
    printf("VC2010 x86 SP1 is installed ? %d\n", IsVC2010SP1Installed_x86());
    printf("VC2010 x64 is installed ? %d\n", IsVC2010Installed_x64());
    printf("VC2010 x64 SP1 is installed ? %d\n", IsVC2010SP1Installed_x64());
    printf("VC2010 X86 is in Current Directory ? %d\n", IsVC2010AvailableLocally_x86());
    printf("VC2010 x64 is in Current Directory ? %d\n", IsVC2010AvailableLocally_x64());
    printf("VC2010 IA64 is installed ? %d\n", Is_VC2010REDIST_Installed_ia64());
    printf("VC2010 IA64 SP1 is installed ? %d\n", Is_VC2010SP1REDIST_Installed_ia64());
    printf("VC2012 X86 MIN UPD4 is installed ? %d\n", Is_VC2012REDISTMINUPD4_Installed_X86());
    printf("VC2012 X64 MIN UPD4 is installed ? %d\n", Is_VC2012REDISTMINUPD4_Installed_X64());
    printf("VC2012 X86 ADD UPD4 is installed ? %d\n", Is_VC2012REDISTADDUPD4_Installed_X86());
    printf("VC2012 X64 ADD UPD4 is installed ? %d\n", Is_VC2012REDISTADDUPD4_Installed_X64());
    printf("VC2013 X86 MIN is installed ? %d\n", Is_VC2013REDISTMIN_Installed_X86());
    printf("VC2013 X64 MIN is installed ? %d\n", Is_VC2013REDISTMIN_Installed_X64());
    printf("VC2013 X86 ADD is installed ? %d\n", Is_VC2013REDISTADD_Installed_X86());
    printf("VC2013 X64 ADD is installed ? %d\n", Is_VC2013REDISTADD_Installed_X64());
    printf("VC2015 X86 MIN is installed ? %d\n", Is_VC2015MIN_Installed_X86());
    printf("VC2015 X64 MIN is installed ? %d\n", Is_VC2015MIN_Installed_X64());
    printf("VC2015 X86 ADD is installed ? %d\n", Is_VC2015ADD_Installed_X86());
    printf("VC2015 X64 ADD is installed ? %d\n", Is_VC2015ADD_Installed_X64());
    printf("VC2019 X86 MIN is installed ? %d\n", Is_VC2019MIN_Installed_X86());
    printf("VC2019 X64 MIN is installed ? %d\n", Is_VC2019MIN_Installed_X64());
    printf("VC2019 X86 ADD is installed ? %d\n", Is_VC2019ADD_Installed_X86());
    printf("VC2019 X64 ADD is installed ? %d\n", Is_VC2019ADD_Installed_X64());

    getchar();

    return 0;
}
