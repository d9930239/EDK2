/** @file
 
Module Name:

  BrucePeiTest.c

**/
#include <Library/PeiServicesLib.h>
#include <Library/PeimEntryPoint.h>
#include <Library/DebugLib.h>
#include <Uefi.h>
#include <PiPei.h>

EFI_STATUS
EFIAPI
BrucePeimSampleInitialize(IN	EFI_PEI_FILE_HANDLE	FileHandle,
				                  IN	CONST	EFI_PEI_SERVICES	**PeiServices
)
{
    //EFI_STATUS  Status;

    DEBUG ((DEBUG_INFO," ==> BrucePeimSampleInitialize %a: \n",__FUNCTION__));
    //Print (L"hellow 123 321 by define \n");

    return EFI_SUCCESS;
}