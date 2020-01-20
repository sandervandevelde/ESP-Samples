﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.3.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Thursday, November 7, 2019
 ***********************************************************************************************/

#ifndef DIGITALTWIN_SERIALIZER
#define DIGITALTWIN_SERIALIZER

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "azure_c_shared_utility/xlogging.h"
#include "parson.h"

#include "inc/esp32AzureKit_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

bool Esp32AzureKit_SerializePitchTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeRollTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializePressureTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeAltitudeTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeMagnetXTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeMagnetYTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeMagnetZTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeTempTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeHumidTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeLightTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeMinFreeHeapTelemetry(char * payloadBuffer, int size);

bool Esp32AzureKit_SerializeEchoCommandResponse(char* response, char* payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeManufacturerProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeModelProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeSwVersionProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeOsNameProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeProcessorArchitectureProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeProcessorManufacturerProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeTotalStorageProperty(char * payloadBuffer, int size);

bool Urn_azureiot_DeviceManagement_DeviceInformation_SerializeTotalMemoryProperty(char * payloadBuffer, int size);

#ifdef __cplusplus
}
#endif

#endif // DIGITALTWIN_SERIALIZER
