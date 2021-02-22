#pragma warning (disable : 4100)

#include "driver.h"
#include "messages.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
	pDriverObject->DriverUnload = UnloadDriver;
	DbgPrintEx(0, 0, "DriverEntry!");
	DebugMessage("I'm in DriverEntry!!");
	return STATUS_SUCCESS;
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject)
{
	DebugMessage("Papa says Goodbye!");
	return STATUS_SUCCESS;
}

