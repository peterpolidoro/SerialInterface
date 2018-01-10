// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace serial_interface
{
namespace constants
{
CONSTANT_STRING(device_name,"serial_interface");

CONSTANT_STRING(firmware_name,"SerialInterface");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
  {
    .name_ptr=&firmware_name,
    .version_major=1,
    .version_minor=0,
    .version_patch=0,
  };

// Interrupts

// Units

// Properties
CONSTANT_STRING(serial_bauds_property_name,"serialBauds");
modular_server::SubsetMemberType serial_baud_subset[SERIAL_BAUD_SUBSET_LENGTH] =
  {
    {.l=300},
    {.l=1200},
    {.l=2400},
    {.l=4800},
    {.l=9600},
    {.l=19200},
    {.l=31250},
    {.l=38400},
    {.l=57600},
    {.l=115200},
    {.l=230400},
    {.l=250000},
    {.l=460800},
    {.l=500000},
    {.l=921600},
    {.l=1000000},
  };
const long & serial_baud_default = serial_baud_subset[4].l;

CONSTANT_STRING(serial_settings_property_name,"serialSettings");
CONSTANT_STRING(serial_setting_7e1,"7E1");
CONSTANT_STRING(serial_setting_7o1,"7O1");
CONSTANT_STRING(serial_setting_8n1,"8N1");
CONSTANT_STRING(serial_setting_8n2,"8N2");
CONSTANT_STRING(serial_setting_8e1,"8E1");
CONSTANT_STRING(serial_setting_8o1,"8O1");
modular_server::SubsetMemberType serial_setting_ptr_subset[SERIAL_SETTING_SUBSET_LENGTH] =
  {
    {.cs_ptr=&serial_setting_7e1},
    {.cs_ptr=&serial_setting_7o1},
    {.cs_ptr=&serial_setting_8n1},
    {.cs_ptr=&serial_setting_8n2},
    {.cs_ptr=&serial_setting_8e1},
    {.cs_ptr=&serial_setting_8o1},
  };
const ConstantString * const serial_setting_ptr_default = &serial_setting_8n1;

// Parameters

// Functions
CONSTANT_STRING(get_serial_stream_count_function_name,"getSerialStreamCount");

// Callbacks

// Errors
}
}