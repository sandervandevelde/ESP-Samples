﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.3.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Thursday, November 7, 2019
 ***********************************************************************************************/

#ifndef URN_AZUREIOT_DEVICEMANAGEMENT_DEVICEINFORMATION_INTERFACE_H
#define URN_AZUREIOT_DEVICEMANAGEMENT_DEVICEINFORMATION_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "inc/utilities/digitaltwin_client_helper.h"
#include "inc/utilities/digitaltwin_serializer.h"
#include "parson.h"
#include "inc/esp32AzureKit_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum URN_AZUREIOT_DEVICEMANAGEMENT_DEVICEINFORMATION_READONLY_PROPERTY_TAG
{
    Urn_azureiot_DeviceManagement_DeviceInformation_MANUFACTURER_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_MODEL_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_SWVERSION_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_OSNAME_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_PROCESSORARCHITECTURE_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_PROCESSORMANUFACTURER_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_TOTALSTORAGE_PROPERTY,
    Urn_azureiot_DeviceManagement_DeviceInformation_TOTALMEMORY_PROPERTY
} URN_AZUREIOT_DEVICEMANAGEMENT_DEVICEINFORMATION_PROPERTY;

// DigitalTwin interface name from service perspective.
static const char Urn_azureiot_DeviceManagement_DeviceInformationInterfaceId[] = "urn:azureiot:DeviceManagement:DeviceInformation:1";
static const char Urn_azureiot_DeviceManagement_DeviceInformationInterfaceInstanceName[] = "urn_azureiot_DeviceManagement_DeviceInformation";

// Telemetry names for this interface.

// Property names for this interface.

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_ManufacturerProperty "manufacturer"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_ModelProperty "model"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_SwVersionProperty "swVersion"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_OsNameProperty "osName"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_ProcessorArchitectureProperty "processorArchitecture"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_ProcessorManufacturerProperty "processorManufacturer"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_TotalStorageProperty "totalStorage"

#define Urn_azureiot_DeviceManagement_DeviceInformationInterface_TotalMemoryProperty "totalMemory"

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE Urn_azureiot_DeviceManagement_DeviceInformationInterface_Create();

void Urn_azureiot_DeviceManagement_DeviceInformationInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportAll();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportManufacturer();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportModel();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportSwVersion();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportOsName();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportProcessorArchitecture();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportProcessorManufacturer();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportTotalStorage();

DIGITALTWIN_CLIENT_RESULT Urn_azureiot_DeviceManagement_DeviceInformationInterface_Property_ReportTotalMemory();

#ifdef __cplusplus
}
#endif

#endif  // URN_AZUREIOT_DEVICEMANAGEMENT_DEVICEINFORMATION_INTERFACE_H
