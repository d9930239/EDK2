/*
    Bruce dxe driver entry point
*/
#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/DebugLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
BruceTestDxeDriverEntryPoint(IN  EFI_HANDLE              ImageHandle,
                             IN  EFI_SYSTEM_TABLE        *SystemTable
){
    //EFI_STATUS  Status;

    DEBUG ((DEBUG_INFO," ==> BruceTestDxeDriverEntryPoint %a: \n",__FUNCTION__));

    return EFI_SUCCESS;
}