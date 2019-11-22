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

EFI_Bruce_PPI *gEfiBrucePPI;

static EFI_PEI_PPI_DESCRIPTOR  mBrucePpiDescriptor = {
    (EFI_PEI_PPI_DESCRIPTOR_PPI	|	EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST),
    &gBrucePpiGuid,
    &gEfiBrucePPI
};


EFI_STATUS
EFIAPI
BrucePeimPpiInstallEntryPoint(IN       EFI_PEI_FILE_HANDLE  FileHandle,
				            	IN	CONST	EFI_PEI_SERVICES	**PeiServices
)
{
    EFI_STATUS  Status;
	
    DEBUG ((DEBUG_INFO," ==>BrucePeimPpiInstallEntryPoint  %a: \n",__FUNCTION__));
	
	//
    // Allocate heap storage for the journal
    //
    //Status = (*PeiServices)->AllocatePool(
	//								PeiServices,
	//								sizeof(mBrucePpiDescriptor),
	//								(VOID **) &mBrucePpiDescriptor
	//								);

	//gEfiBrucePPI->name[2] = L"FKKK";
    //gEfiBrucePPI->Age = 28;
    //gEfiBrucePPI->Weight = 60;
    //gEfiBrucePPI->High = 180;
	
	//Status = (*PeiServices)->InstallPpi(PeiServices,&gEfiBrucePPI);
	Status	=	PeiServicesInstallPpi(&mBrucePpiDescriptor);
	if(EFI_ERROR(Status)){
		DEBUG ((DEBUG_INFO," ==>gBrucePpiGuid Install faill  %d: \n",__LINE__));
		return Status;
	}
	
  /*
  EFI_STATUS
PeimEntryPoint	(
		IN	EFI_FFS_FILE_HEADER		*FfsHeader,
		IN	EFI_PEI_SERVICES					**PeiServices
		)
{
		EFI_STATUS		Status;
		//
		//	Publish	Template	PPI.
		//
		Status	=	PeiServicesInstallPpi	(&gPpiListTemplatePpi);
		return	Status;
}
  */

    return EFI_SUCCESS;
}