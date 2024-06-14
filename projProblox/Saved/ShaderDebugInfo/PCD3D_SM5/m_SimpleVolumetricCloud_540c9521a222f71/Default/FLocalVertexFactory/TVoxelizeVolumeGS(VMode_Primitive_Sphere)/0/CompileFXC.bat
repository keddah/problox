@ECHO OFF
IF "%FXC%" == "" SET "FXC=C:\Program Files (x86)\Windows Kits\10\bin\x64\fxc.exe"
IF NOT EXIST "%FXC%" (
	ECHO Couldn't find Windows 10 SDK, falling back to DXSDK...
	SET "FXC=%DXSDK_DIR%\Utilities\bin\x86\fxc.exe"
	IF NOT EXIST "%FXC%" (
		ECHO Couldn't find DXSDK! Exiting...
		GOTO END
	)
)
"%FXC%" VolumetricFogVoxelization.usf /E VoxelizeGS /Zpr /Gec /O3 /T gs_5_0 /Ni /FcVolumetricFogVoxelization.d3dasm 
 pause
:END
REM
