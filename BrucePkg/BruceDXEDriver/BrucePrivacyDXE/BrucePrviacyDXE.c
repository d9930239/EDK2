/* @file
    install gBruceDxeProtocolGuid 
*/
#include <uefi.h> 
#include <Library/UefiLib.h>
#include <Library/DebugLib.h> 
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Protocol/BruceProtocol.h>

EFI_STATUS
BrucePrviacyDXEEntryPoint(
                        IN  EFI_HANDLE              ImageHandle,
                        IN  EFI_SYSTEM_TABLE        *SystemTable
)
{
    //EFI_HANDLE      Handle;
    EFI_STATUS      Status;
    DEBUG ((DEBUG_INFO," ==>Current function %a: \n",__FUNCTION__));

    EFI_Bruce_Protocol *Bruce_Protocol;
    
    Bruce_Protocol = AllocatePool(sizeof(EFI_Bruce_Protocol));
    if (Bruce_Protocol == NULL){
        DEBUG ((DEBUG_INFO," ==>EFI_OUT_OF_RESOURCES %a %d: \n",__FUNCTION__, __LINE__));
        return EFI_OUT_OF_RESOURCES;
    }

    Bruce_Protocol->name[1] = L"LIN_A_MA";
    Bruce_Protocol->Age = 10;
    Bruce_Protocol->Weight = 50;
    Bruce_Protocol->High = 50;

    //Handle = NULL;
    Status = gBS->InstallProtocolInterface (&ImageHandle,
                                           &gBruceDxeProtocolGuid,
                                           EFI_NATIVE_INTERFACE,
                                           Bruce_Protocol);

    ASSERT_EFI_ERROR (Status);
    if (EFI_ERROR (Status))
    {
        return Status;
    }
    DEBUG ((DEBUG_INFO, "%d \n",Bruce_Protocol->Weight));
    return EFI_SUCCESS;
}