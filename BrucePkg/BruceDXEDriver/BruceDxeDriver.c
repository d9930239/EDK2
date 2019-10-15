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
    /*
    Status = BrucePrviacyDxe();
    ASSERT_EFI_ERROR (Status);
    if (EFI_ERROR (Status))
    {
        return Status;
    }

    Status = BruceBodyCode();
    ASSERT_EFI_ERROR (Status);
    if (EFI_ERROR (Status))
    {
        return Status;
    }
    */

    return EFI_SUCCESS;
}