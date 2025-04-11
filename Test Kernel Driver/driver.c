#include "driver.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING RegistryPath) {
	
	DbgPrintEx(0, 0, "[KOMPROMIZZ KERNEL] Driver load succes");

	pDriverObject->DriverUnload = DriverUnload;

	return STATUS_SUCCESS;
}

NTSTATUS DriverUnload(PDRIVER_OBJECT pDriverObject) {

	DbgPrintEx(0, 0, "[KOMPROMIZZ KERNEL] Driver unload succes");

	return STATUS_SUCCESS;
}
