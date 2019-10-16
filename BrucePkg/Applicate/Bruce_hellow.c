/** @file
 
  I don't what should I type

**/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/BruceProtocol.h>

#define ID L"Bruce"
EFI_STATUS
EFIAPI
Bruce_hellow_world(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
    if (FeaturePcdGet(PcdBruceHelloworldfunction)){
        Print (L"hellow 123 321 by define %s\n",ID);
    }else if(PcdGet32(PcdBruceHelloworldPrintVaule)>=1){
        Print ((CHAR16*)PcdGetPtr(PcdHelloWorldPrintString));
        //Print (L"PK wang hen chan\n");
    }

    EFI_STATUS Status;
    EFI_Bruce_Protocol *Bruce_Protocol;
    Status = gBS-> LocateProtocol(&gBruceDxeProtocolGuid, NULL, (VOID**)&Bruce_Protocol );

    Print(L"hellow_protocol %d \n",Bruce_Protocol->Weight);

    return EFI_SUCCESS;
}

