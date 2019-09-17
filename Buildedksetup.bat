@echo on

set WORKSPACE=%CD%

set EDK_TOOLS_PATH=%WORKSPACE%\BaseTools

set EDK_TOOLS_BIN=%WORKSPACE%\BuildTools\edk2-BaseTools-Win32
set OUTPUT_DIR=%WORKSPACE%\Build
set BUILD_DIR=%WORKSPACE%\Build
set CONF_PATH=%WORKSPACE%\Conf

@set PYTHON_HOME=%WORKSPACE%\BuildTools%\Python27
@set NASM_PREFIX=%WORKSPACE%\BuildTools%\nasm\Win32\
@set NASM=%NASM_PREFIX%\nasm.exe


set CYGWIN_HOME=C:\cygwin64


@if not exist %EDK_TOOLS_BIN% mkdir %EDK_TOOLS_BIN%
@if not exist %BUILD_DIR% mkdir %BUILD_DIR%
@if not exist %CONF_PATH% mkdir %CONF_PATH%

edksetup.bat %1 %2
