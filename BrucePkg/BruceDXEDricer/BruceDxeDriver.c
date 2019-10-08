/*
    Bruce dxe driver entry point
*/
#include<Library/DebugLib.h>
#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS
BruceTestDxeDriverEntryPoint(IN  EFI_HANDLE              ImageHandle,
                             IN  EFI_SYSTEM_TABLE        *SystemTable
){
    EFI_STATUS  Status;

    // CurrentELDEBUG ((DEBUG_INFO," bbb %a: \n",__FUNCTION__));

    return 0;
}