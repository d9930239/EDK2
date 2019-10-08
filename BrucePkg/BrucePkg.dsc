## @file
# 
#  I don't what should I type
#
##
[Defines]
		PLATFORM_NAME			=	Bruce
		PLATFORM_GUID			=	c1429df2-739c-4ca8-9a31-b7c021affc83
		PLATFORM_VERSION		=	0.1
		DSC_SPECIFICATION		=	0x00010005
		OUTPUT_DIRECTORY		=	Build/Bruce$(ARCH)
		SUPPORTED_ARCHITECTURES	=	IA32|IPF|X64
		BUILD_TARGETS			=	DEBUG|RELEASE
		SKUID_IDENTIFIER		=	DEFAULT

[SkuIds]	
0|DEFAULT	#The	entry:	0|DEFAULT	is	reserved	and	required.

[LibraryClasses]
  #
  # Entry point
  #
  UefiApplicationEntryPoint|MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  #
  # Basic
  #
  BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
  BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
  #
  # UEFI & PI
  #
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  #
  # Generic Modules
  #
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  #
  # Misc
  #
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  
[LibraryClasses.common.UEFI_APPLICATION]
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf

[PcdsFixedAtBuild]
gBrucePkgTokenSpaceGuid.PcdHelloWorldPrintString|L"DSC PCD Print Hello World!\n"|VOID*

[Components]
#	All	libraries,	drivers	and	applications	are	added	here	to	be	compiled
#
#	Module	INF	file	path	are	specified	from	package	directory.
#	BrucePkg/Library/NameOneLib/NameOneLib.inf
BrucePkg/Applicate/Bruce_hellow.inf
#BrucePkg/BruceDXEDricer/BruceDxeDriver.inf
