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
Bruce_cursor(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *ConOut;
    EFI_SIMPLE_TEXT_OUTPUT_MODE      SavedConsoleMode;

    ConOut = SystemTable->ConOut;
    ConOut->QueryMode (ConOut, SavedConsoleMode.Mode, &Columns, &Rows);
    ConOut->QUERY();


    return EFI_SUCCESS;
}

