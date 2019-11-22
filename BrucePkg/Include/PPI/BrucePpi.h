/**
*  @Package     : BrucePkg
*  @FileName    : BrucePpi.h
*  @Date        : 
*  @Author      : 
*  @Version     : 0.1
**/
#ifndef _Bruce_PPI_H_
#define _Bruce_PPI_H_

 
#define EFI_Bruce_PPI_H_GUID \
  {0x887cdc38, 0x3f06, 0x4f80, {0x97, 0x3c, 0xb7, 0x43, 0x28, 0xc2, 0x6d, 0x36}}



typedef struct _EFI_Bruce_PPI_ EFI_Bruce_PPI;
//typedef
//EFI_STATUS
//(EFIAPI *Bruce_API_test) (
//  IN  EFI_Bruce_Protocol      *This
//);

 struct _EFI_Bruce_PPI_ {
    CHAR16                  *name[20];
    UINT8                   Age;
    UINT8                   Weight;
    UINT8                   High;
    //Bruce_API_test          BruceAPI;
};



extern EFI_GUID gBrucePpiGuid;
 
#endif // _Bruce_PPI_H_
