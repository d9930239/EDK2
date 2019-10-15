/**
*  @Package     : BrucePkg
*  @FileName    : BruceProtocol.h
*  @Date        : 
*  @Author      : 
*  @Version     : 0.1
**/
#ifndef _Bruce_Protocol_H_
#define _Bruce_Protocol_H_

 
#define EFI_Bruce_Protocol_H_GUID \
  {0x91e70715, 0x4958, 0x4f9d, {0x92, 0x72, 0x21, 0x72, 0x98, 0x1c, 0x69, 0xf4}}


typedef
EFI_STATUS
(EFIAPI *Bruce_API_test) (
  IN  EFI_Bruce_Protocol      *This
);

typedef struct _EFI_Bruce_Protocol_ {
    Char8                  *name[1];
    UINT8                   Age;
    UINT8                   Weight;
    UINT8                   High;
    Bruce_API_test          BruceAPI;
}EFI_Bruce_Protocol




extern EFI_GUID gBruceDxeProtocolGuid;
 
#endif // _Bruce_Protocol_H_
