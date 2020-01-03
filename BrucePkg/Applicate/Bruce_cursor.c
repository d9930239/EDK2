/** @file
 
  I don't what should I type

**/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/Debuglib.h>

#define ID L"Bruce"

UINTN
ScanKeyPress(
              UINTN           Columns;
              UINTN           Rows;
)
{
    EFI_STATUS      Status = EFI_SUCCESS;
    EFI_INPUT_KEY   Key = {0};


    while (TRUE) {
        Print (L"Type the Columns number \n");
        Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &Key);
        ASSERT_EFI_ERROR (Status);
        
        if ((Key.ScanCode >=48)|| (Key.ScanCode <=57)) 
        {
          Columns = Key.ScanCode;
        }else
        {
            Print (L"Lin a Ma la pls type again\n");
        }
        Print (L"Type the Rows number \n");
        Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &Key);
        ASSERT_EFI_ERROR (Status);
        
        if ((Key.ScanCode >=48)|| (Key.ScanCode <=57)) 
        {
          Rows = Key.ScanCode;
          if((Columns != 0 )&& (Rows !=0)){
            break;
          }else{
            Print (L"Someting wrong\n");
          }
        }else
        {
            Print (L"Lin a Ma la pls type again\n");
        }    
    }

    return(Columns,Rows) ;
}

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
    ConOut->EnableCursor(ConOut, TRUE);
    ConOut->QueryMode (ConOut, SavedConsoleMode.Mode, &Columns, &Rows);
    Print (L"QueryMode Columns = %d, Rows= %d\n",Columns,Rows);
    
    ScanKeyPress(Columns,Rows);


    //ConOut->SetCursorPosition (ConOut, Column, Row);
    //Print (L"SetCursorPosition = %d\n",Columns);
    //ConOut->OutputString (ConOut, ID);
    //Print (L"OutputString = %d\n",Columns);

    return EFI_SUCCESS;
}

