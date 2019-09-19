/** @file
 
  I don't what should I type

**/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>

#define ID L"Bruce"
EFI_STATUS
EFIAPI
Bruce_hellow_world(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{

    Print (L"hellow 123 321 %s\n",ID);
    return EFI_SUCCESS;
}

