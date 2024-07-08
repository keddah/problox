/**************************************************************************************************************
* Cube Socket Information - Code
* 
* The code file for cube core/connector's socket information. Gives functionality to the declared functions.
*
* PROBLEMS:
*	.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "CubeSocketInfo.h"

#include "./projProblox/Pickupables/Cores/CubeCore.h"

bool UCubeSocketInfo::ObjectInSocket(const FName& socket) const 
{
	if (socketObjects.IsEmpty()) return false;

	const FString str_socket = socket.ToString().ToUpper();
	const int index = sockets.Find(FName(str_socket));

	// Check if the index is within bounds and the pointer is valid
	return socketObjects.IsValidIndex(index) && IsValid(socketObjects[index]);
}

bool UCubeSocketInfo::ObjectInSocket(int index) const
{
	if (socketObjects.IsEmpty()) return false;

	// Check if the index is within bounds and the pointer is valid
	return socketObjects.IsValidIndex(index) && IsValid(socketObjects[index]);
}

FName UCubeSocketInfo::GetOppositeSocket(const FName& origin) const
{
	const FString str_socket = origin.ToString().ToUpper();

	//front
	if(str_socket == sockets[0]) return sockets[3]; // left
	//back
	if(str_socket == sockets[1]) return sockets[2]; // right
	//right
	if(str_socket == sockets[2]) return sockets[0]; // front
	//left
	if(str_socket == sockets[3]) return sockets[1]; // back 
	//up
	if(str_socket == sockets[4]) return sockets[5]; // down
	//down
	if(str_socket == sockets[5]) return sockets[4]; // up
	return "";
}

// Just hardcode it... 
FName UCubeSocketInfo::GetOppositeSocket(int index) const
{
	// if it's the bottom slot....
	if(sockets.Num() - 1)
	{
		// Even indices are always a positive slot (forward / up / right) 
		if(index % 2 == 0) index++;
		else index--;
	
		// Prevent out of range indices...
		if(index < 0) index = sockets.Num() - 1;
		else if(index >= sockets.Num()) index = 0;
			
		return sockets[index];
	}
	// Otherwise....
	
	constexpr int step = 2;
	
	// Incrementing by 3 moves gets the correct slot after the rotation 
	if(index % 2 == 0) index = index + step;
	else index = index - step;
	
	// Prevent invalid indices.
	if(index < 0) index = 5;
	else if(index >= 6) index = 0;

	return sockets[index];
}

TArray<FName> UCubeSocketInfo::GetFreeSockets() const
{
	TArray<FName> free;

	for(int i = 0; i < socketObjects.Num(); i++)
	{
		if(IsValid(socketObjects[i])) continue;;

		// Add the name of the socket that is free
		free.Add(sockets[i]);
	}

	return free;	
}

TArray<FName> UCubeSocketInfo::GetOccupiedSockets() const
{
	if(socketObjects.IsEmpty()) return {};
	
	TArray<FName> output;
	for (int i = 0; i < socketObjects.Num(); i++)
	{
		if(!IsValid(socketObjects[i])) continue;

		output.Add(sockets[i]);
	}

	return output;
}

void UCubeSocketInfo::AddAttachment(APickupableMaster* attachment, FName socket)
{
	// Since switches don't work...
	const FString str_socket = socket.ToString().ToUpper();
	const int index = sockets.Find(FName(str_socket));

	if(!socketObjects.IsValidIndex(index))
	{
		Print("SocketInfo Adding ~ Bad index", 5)
		return;
	}
	
	socketObjects[index] = attachment;
}

void UCubeSocketInfo::RemoveAttachment(FName socket)
{
	const FString str_socket = socket.ToString().ToUpper();
	const int index = sockets.Find(FName(str_socket));
	
	if(!socketObjects.IsValidIndex(index))
	{
		Print("SocketInfo Removing ~ Bad index", 5)
		return;
	}

	socketObjects[index] = nullptr;
}

void UCubeSocketInfo::RemoveAttachment(APickupableMaster* obj)
{
	if(!IsValid(obj)) return;
	if(!socketObjects.Contains(obj))
	{
		Print("Couldnt remove... obj not found", 5)
		return;
	}

	socketObjects.Remove(obj);
}

TArray<APickupableMaster*> UCubeSocketInfo::GetAttachments() const
{
	if(socketObjects.IsEmpty()) return {};
	
	TArray<APickupableMaster*> output;
	for (const auto& obj : socketObjects)
	{
		if(!IsValid(obj)) continue;

		output.Add(obj);
	}

	return output;
}

APickupableMaster* UCubeSocketInfo::GetObjectFromSocket(const FName& name) const
{
	if (socketObjects.IsEmpty()) return 0;

	const FString socket = name.ToString().ToUpper();
	const int index = sockets.Find(FName(socket));

	// Check if the index is within bounds and the pointer is valid
	return socketObjects[index];
	
}
