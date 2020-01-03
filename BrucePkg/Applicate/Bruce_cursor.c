/** @file
 
  I don't what should I type

**/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>

#define ID L"Bruce"
/*
VOID
WaitAnyKeyPress()
{
    EFI_STATUS      Status = EFI_SUCCESS;
    UINTN           Index = 0;
    EFI_INPUT_KEY   Key = {0};

    while (TRUE) {
        gBS->WaitForEvent(1, &gST->ConIn->WaitForKey, &Index);
        Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &Key);
        if ((Key.UnicodeChar != 0) || (Key.ScanCode != 0)) 
            break;
    }
    return ;
}
*/
EFI_STATUS
EFIAPI
Bruce_cursor(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *ConOut;
    EFI_SIMPLE_TEXT_OUTPUT_MODE      SavedConsoleMode;

    UINTN                            Columns;
    UINTN                            Rows;

    ConOut = SystemTable->ConOut;
    ConOut->QueryMode (ConOut, SavedConsoleMode.Mode, &Columns, &Rows);
    Print (L"QueryMode Columns = %d, Rows= %d\n",Columns,Rows);


    //ConOut->SetCursorPosition (ConOut, Column, Row);
    //Print (L"SetCursorPosition = %d\n",Columns);
    //ConOut->OutputString (ConOut, ID);
    //Print (L"OutputString = %d\n",Columns);

    return EFI_SUCCESS;
}

