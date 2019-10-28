/* @file
    locate  gBruceDxeProtocolGuid 
*/
#include <uefi.h> 
#include <Library/UefiLib.h>
#include <Library/DebugLib.h> 
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/BruceProtocol.h>

EFI_STATUS
BruceBodyCodeEntryPoint(
                        IN  EFI_HANDLE              ImageHandle,
                        IN  EFI_SYSTEM_TABLE        *SystemTable
)
{
    EFI_STATUS      Status;
    
    EFI_Bruce_Protocol *Bruce_Protocol;
    //EFI_GUID *gBruceDxeProtocolGuid;

    Status = gBS->LocateProtocol (&gBruceDxeProtocolGuid, NULL, (VOID**)&Bruce_Protocol);

    ASSERT_EFI_ERROR (Status);
    if (EFI_ERROR (Status))
    {
        return Status;
    }
    DEBUG ((DEBUG_INFO, "%d \n",Bruce_Protocol->Weight));
    DEBUG ((DEBUG_INFO," ==>LocateProtocol %a %d: \n",__FUNCTION__, __LINE__));

    //Bruce_Protocol->Weight = 70;
    
    DEBUG ((DEBUG_INFO, "name %s \n",Bruce_Protocol->name[1]));
    DEBUG ((DEBUG_INFO, "Age %d \n",Bruce_Protocol->Age));
    DEBUG ((DEBUG_INFO, "High %d \n",Bruce_Protocol->High));
    DEBUG ((DEBUG_INFO, "Weight %d \n",Bruce_Protocol->Weight));
    //Print( L"Print %d\n",Bruce_Protocol->Age);
    return EFI_SUCCESS;
}