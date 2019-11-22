/** @file
 
Module Name:

  BrucePeiTest.c

**/
#include <Library/PeiServicesLib.h>
#include <Library/PeimEntryPoint.h>
#include <Library/DebugLib.h>
#include <Uefi.h>
#include <PiPei.h>


#include <PPI/BrucePpi.h>
EFI_STATUS
EFIAPI
BrucePeimPpiLocateEntryPoint(IN	EFI_PEI_FILE_HANDLE	FileHandle,
				                  IN	CONST	EFI_PEI_SERVICES	**PeiServices
)
{
    EFI_STATUS  Status;
    EFI_Bruce_PPI *gEfiBrucePPI = NULL;
    DEBUG ((DEBUG_INFO," ==>BrucePeimPpiLocateEntryPoint  %a: \n",__FUNCTION__));
    //Print (L"hellow 123 321 by define \n");

  
//
//	Get	Template	PPI
//
Status	=	PeiServicesLocatePpi	(
											&gBrucePpiGuid,
											0,
											NULL,
											(VOID	**)&gEfiBrucePPI
											);
ASSERT_EFI_ERROR	(Status);

gEfiBrucePPI->name[2]=L"FKKK";
DEBUG ((DEBUG_INFO, "name %s \n",gEfiBrucePPI->name[2]));
    return EFI_SUCCESS;
}