// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeSocketInfo.h"

bool UCubeSocketInfo::ObjectInSocket(const FName& socket) const 
{
	if(socketObjects.IsEmpty()) return false;
	
	int32 index;

	const FString str_socket = socket.ToString().ToUpper();
	
	if(str_socket == sockets[1]) index = 1;
	else if(str_socket == sockets[2]) index = 2;
	else if(str_socket == sockets[3]) index = 3;
	else if(str_socket == sockets[4]) index = 4;
	else if(str_socket == sockets[5]) index = 5;
	else index = 0;

	// Returns whether or not the pointer is valid
	return !(socketObjects[index] == nullptr);
}

void UCubeSocketInfo::AddAttachment(APickupableMaster* attachment, FName socket)
{
	// Since switches don't work...
	int32 index;

	const FString str_socket = socket.ToString().ToUpper();
	
	if(str_socket == sockets[1]) index = 1;
	else if(str_socket == sockets[2]) index = 2;
	else if(str_socket == sockets[3]) index = 3;
	else if(str_socket == sockets[4]) index = 4;
	else if(str_socket == sockets[5]) index = 5;
	else index = 0;

	socketObjects[index] = attachment;
}

void UCubeSocketInfo::RemoveAttachment(FName socket)
{
	int32 index;

	const FString str_socket = socket.ToString().ToUpper();
	
	if(str_socket == sockets[1]) index = 1;
	else if(str_socket == sockets[2]) index = 2;
	else if(str_socket == sockets[3]) index = 3;
	else if(str_socket == sockets[4]) index = 4;
	else if(str_socket == sockets[5]) index = 5;
	else index = 0;

	socketObjects[index] = nullptr;
	// delete socketObjects[index];
}

TArray<AActor*> UCubeSocketInfo::GetAttachmentActors() const
{
	TArray<AActor*> output;
	for (const auto& obj : socketObjects)
	{
		if(obj == nullptr) continue;

		output.Add(obj);
	}

	return output;
}

TArray<APickupableMaster*> UCubeSocketInfo::GetAttachments() const
{
	TArray<APickupableMaster*> output;
	for (const auto& obj : socketObjects)
	{
		if(obj == nullptr) continue;

		output.Add(obj);
	}

	return output;
}
