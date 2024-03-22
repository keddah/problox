// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeSocketInfo.h"

bool UCubeSocketInfo::ObjectInSocket(const FName& socket) const 
{
	if (socketObjects.IsEmpty()) return false;

	int32 index = 0; // Default to 0 if no match is found

	const FString str_socket = socket.ToString().ToUpper();
    
	if (str_socket == sockets[0]) index = 0;
	else if (str_socket == sockets[1]) index = 1;
	else if (str_socket == sockets[2]) index = 2;
	else if (str_socket == sockets[3]) index = 3;
	else if (str_socket == sockets[4]) index = 4;
	else if (str_socket == sockets[5]) index = 5;

	// Check if the index is within bounds and the pointer is valid
	return socketObjects.IsValidIndex(index) && IsValid(socketObjects[index]);
}

bool UCubeSocketInfo::ObjectInSocket(int index) const
{
	if (socketObjects.IsEmpty()) return false;

	// Check if the index is within bounds and the pointer is valid
	return socketObjects.IsValidIndex(index) && IsValid(socketObjects[index]);
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

void UCubeSocketInfo::AddAttachment(APickupableMaster* attachment, FName socket)
{
	// Since switches don't work...
	int32 index;

	const FString str_socket = socket.ToString().ToUpper();
	
	if(str_socket == sockets[0]) index = 0;
	else if(str_socket == sockets[1]) index = 1;
	else if(str_socket == sockets[2]) index = 2;
	else if(str_socket == sockets[3]) index = 3;
	else if(str_socket == sockets[4]) index = 4;
	else if(str_socket == sockets[5]) index = 5;
	else index = 0;

	if(!socketObjects.IsValidIndex(index))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, "Bad Index");
		return;
	}
	
	socketObjects[index] = attachment;
}

void UCubeSocketInfo::RemoveAttachment(FName socket)
{
	int32 index;
	const FString str_socket = socket.ToString().ToUpper();
	
	if(str_socket == sockets[0]) index = 0;
	else if(str_socket == sockets[1]) index = 1;
	else if(str_socket == sockets[2]) index = 2;
	else if(str_socket == sockets[3]) index = 3;
	else if(str_socket == sockets[4]) index = 4;
	else if(str_socket == sockets[5]) index = 5;

	if(!socketObjects.IsValidIndex(index))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, "Bad Index");
		return;
	}

	socketObjects[index] = nullptr;
}

TArray<AActor*> UCubeSocketInfo::GetAttachmentActors() const
{
	TArray<AActor*> output;
	for (const auto& obj : socketObjects)
	{
		if(!IsValid(obj)) continue;

		output.Add(obj);
	}

	return output;
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

APickupableMaster* UCubeSocketInfo::GetObjectInSocket(const FName& name) const
{
	if (socketObjects.IsEmpty()) return 0;

	int32 index = 0; // Default to 0 if no match is found

	const FString str_socket = name.ToString().ToUpper();
    
	if (str_socket == sockets[0]) index = 0;
	else if (str_socket == sockets[1]) index = 1;
	else if (str_socket == sockets[2]) index = 2;
	else if (str_socket == sockets[3]) index = 3;
	else if (str_socket == sockets[4]) index = 4;
	else if (str_socket == sockets[5]) index = 5;

	// Check if the index is within bounds and the pointer is valid
	return socketObjects[index];
	
}
