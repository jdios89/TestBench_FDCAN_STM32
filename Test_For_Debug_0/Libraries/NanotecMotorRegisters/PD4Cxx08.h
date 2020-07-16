#ifndef PD4CXX08_h
#define PD4CXX08_h

#define DeviceType 0x1000
#define DeviceType_ObjectType 0x7
typedef uint32_t DeviceType_DataType;
#define DeviceType_AccessType ro
#define DeviceType_DefaultValue 0x00040192
#define DeviceType_PDOMapping 0
#define DeviceType_ObjFlags 1
#define ErrorRegister 0x1001
#define ErrorRegister_ObjectType 0x7
typedef uint8_t ErrorRegister_DataType;
#define ErrorRegister_AccessType ro
#define ErrorRegister_DefaultValue 0x00
#define ErrorRegister_PDOMapping 1
#define ErrorRegister_ObjFlags 1
#define IdentityObject 0x1018
#define IdentityObject_ObjectType 0x9
#define IdentityObject_SubNumber 0x05
#define IdentityObject_0 0 // Highest sub-index supported
#define IdentityObject_0_ObjectType 0x7
typedef uint8_t IdentityObject_0_DataType;
#define IdentityObject_0_AccessType ro
#define IdentityObject_0_DefaultValue 0x04
#define IdentityObject_0_PDOMapping 0
#define IdentityObject_0_ObjFlags 1
#define IdentityObject_1 1 // Vendor-ID
#define IdentityObject_1_ObjectType 0x7
typedef uint32_t IdentityObject_1_DataType;
#define IdentityObject_1_AccessType ro
#define IdentityObject_1_DefaultValue 0x0000026C
#define IdentityObject_1_PDOMapping 0
#define IdentityObject_1_ObjFlags 1
#define IdentityObject_2 2 // Product code
#define IdentityObject_2_ObjectType 0x7
typedef uint32_t IdentityObject_2_DataType;
#define IdentityObject_2_AccessType ro
#define IdentityObject_2_DefaultValue 0x00000005
#define IdentityObject_2_PDOMapping 0
#define IdentityObject_2_ObjFlags 1
#define IdentityObject_3 3 // Revision number
#define IdentityObject_3_ObjectType 0x7
typedef uint32_t IdentityObject_3_DataType;
#define IdentityObject_3_AccessType ro
#define IdentityObject_3_DefaultValue 0x06720000
#define IdentityObject_3_PDOMapping 0
#define IdentityObject_3_ObjFlags 1
#define IdentityObject_4 4 // Serial number
#define IdentityObject_4_ObjectType 0x7
typedef uint32_t IdentityObject_4_DataType;
#define IdentityObject_4_AccessType ro
#define IdentityObject_4_PDOMapping 0
#define IdentityObject_4_ObjFlags 1
#define Pre_definederrorfield 0x1003
#define Pre_definederrorfield_ObjectType 0x8
#define Pre_definederrorfield_SubNumber 0x09
#define Pre_definederrorfield_0 0 // number of errors
#define Pre_definederrorfield_0_ObjectType 0x7
typedef uint8_t Pre_definederrorfield_0_DataType;
#define Pre_definederrorfield_0_AccessType rw
#define Pre_definederrorfield_0_DefaultValue 0x00
#define Pre_definederrorfield_0_PDOMapping 0
#define Pre_definederrorfield_0_ObjFlags 1
#define Pre_definederrorfield_1 1 // standard error field
#define Pre_definederrorfield_1_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_1_DataType;
#define Pre_definederrorfield_1_AccessType ro
#define Pre_definederrorfield_1_PDOMapping 0
#define Pre_definederrorfield_1_ObjFlags 1
#define Pre_definederrorfield_2 2 // standard error field
#define Pre_definederrorfield_2_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_2_DataType;
#define Pre_definederrorfield_2_AccessType ro
#define Pre_definederrorfield_2_PDOMapping 0
#define Pre_definederrorfield_2_ObjFlags 1
#define Pre_definederrorfield_3 3 // standard error field
#define Pre_definederrorfield_3_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_3_DataType;
#define Pre_definederrorfield_3_AccessType ro
#define Pre_definederrorfield_3_PDOMapping 0
#define Pre_definederrorfield_3_ObjFlags 1
#define Pre_definederrorfield_4 4 // standard error field
#define Pre_definederrorfield_4_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_4_DataType;
#define Pre_definederrorfield_4_AccessType ro
#define Pre_definederrorfield_4_PDOMapping 0
#define Pre_definederrorfield_4_ObjFlags 1
#define Pre_definederrorfield_5 5 // standard error field
#define Pre_definederrorfield_5_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_5_DataType;
#define Pre_definederrorfield_5_AccessType ro
#define Pre_definederrorfield_5_PDOMapping 0
#define Pre_definederrorfield_5_ObjFlags 1
#define Pre_definederrorfield_6 6 // standard error field
#define Pre_definederrorfield_6_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_6_DataType;
#define Pre_definederrorfield_6_AccessType ro
#define Pre_definederrorfield_6_PDOMapping 0
#define Pre_definederrorfield_6_ObjFlags 1
#define Pre_definederrorfield_7 7 // standard error field
#define Pre_definederrorfield_7_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_7_DataType;
#define Pre_definederrorfield_7_AccessType ro
#define Pre_definederrorfield_7_PDOMapping 0
#define Pre_definederrorfield_7_ObjFlags 1
#define Pre_definederrorfield_8 8 // standard error field
#define Pre_definederrorfield_8_ObjectType 0x7
typedef uint32_t Pre_definederrorfield_8_DataType;
#define Pre_definederrorfield_8_AccessType ro
#define Pre_definederrorfield_8_PDOMapping 0
#define Pre_definederrorfield_8_ObjFlags 1
#define COB_IDSync 0x1005
#define COB_IDSync_ObjectType 0x7
typedef uint32_t COB_IDSync_DataType;
#define COB_IDSync_AccessType rw
#define COB_IDSync_DefaultValue 0x00000080
#define COB_IDSync_PDOMapping 0
#define SynchronousWindowLength 0x1007
#define SynchronousWindowLength_ObjectType 0x7
typedef uint32_t SynchronousWindowLength_DataType;
#define SynchronousWindowLength_AccessType rw
#define SynchronousWindowLength_DefaultValue 0x00000000
#define SynchronousWindowLength_PDOMapping 0
#define ManufacturerDeviceName 0x1008
#define ManufacturerDeviceName_ObjectType 0x7
typedef char ManufacturerDeviceName_DataType;
#define ManufacturerDeviceName_AccessType const
#define ManufacturerDeviceName_DefaultValue PD4-C6018L4204-E-08
#define ManufacturerDeviceName_PDOMapping 0
#define ManufacturerDeviceName_ObjFlags 1
#define ManufacturerHardwareVersion 0x1009
#define ManufacturerHardwareVersion_ObjectType 0x7
typedef char ManufacturerHardwareVersion_DataType;
#define ManufacturerHardwareVersion_AccessType const
#define ManufacturerHardwareVersion_PDOMapping 0
#define ManufacturerHardwareVersion_ObjFlags 1
#define ManufacturerSoftwareVersion 0x100A
#define ManufacturerSoftwareVersion_ObjectType 0x7
typedef char ManufacturerSoftwareVersion_DataType;
#define ManufacturerSoftwareVersion_AccessType const
#define ManufacturerSoftwareVersion_DefaultValue FIR-v1650-B527540
#define ManufacturerSoftwareVersion_PDOMapping 0
#define ManufacturerSoftwareVersion_ObjFlags 1
#define GuardTime 0x100C
#define GuardTime_ObjectType 0x7
typedef uint16_t GuardTime_DataType;
#define GuardTime_AccessType rw
#define GuardTime_DefaultValue 0x0000
#define GuardTime_PDOMapping 0
#define LiveTimeFactor 0x100D
#define LiveTimeFactor_ObjectType 0x7
typedef uint8_t LiveTimeFactor_DataType;
#define LiveTimeFactor_AccessType rw
#define LiveTimeFactor_DefaultValue 0x00
#define LiveTimeFactor_PDOMapping 0
#define Storeparameters 0x1010
#define Storeparameters_ObjectType 0x8
#define Storeparameters_SubNumber 0x07
#define Storeparameters_0 0 // Highest sub-index supported
#define Storeparameters_0_ObjectType 0x7
typedef uint8_t Storeparameters_0_DataType;
#define Storeparameters_0_AccessType ro
#define Storeparameters_0_DefaultValue 0x06
#define Storeparameters_0_PDOMapping 0
#define Storeparameters_0_ObjFlags 1
#define Storeparameters_1 1 // Save all parameters to non-volatile memory
#define Storeparameters_1_ObjectType 0x7
typedef uint32_t Storeparameters_1_DataType;
#define Storeparameters_1_AccessType rw
#define Storeparameters_1_DefaultValue 0x00000001
#define Storeparameters_1_PDOMapping 0
#define Storeparameters_1_ObjFlags 1
#define Storeparameters_2 2 // Save communication parameters to non-volatile memory
#define Storeparameters_2_ObjectType 0x7
typedef uint32_t Storeparameters_2_DataType;
#define Storeparameters_2_AccessType rw
#define Storeparameters_2_DefaultValue 0x00000001
#define Storeparameters_2_PDOMapping 0
#define Storeparameters_2_ObjFlags 1
#define Storeparameters_3 3 // Save application parameters to non-volatile memory
#define Storeparameters_3_ObjectType 0x7
typedef uint32_t Storeparameters_3_DataType;
#define Storeparameters_3_AccessType rw
#define Storeparameters_3_DefaultValue 0x00000001
#define Storeparameters_3_PDOMapping 0
#define Storeparameters_3_ObjFlags 1
#define Storeparameters_4 4 // Save customer parameters to non-volatile memory
#define Storeparameters_4_ObjectType 0x7
typedef uint32_t Storeparameters_4_DataType;
#define Storeparameters_4_AccessType rw
#define Storeparameters_4_DefaultValue 0x00000001
#define Storeparameters_4_PDOMapping 0
#define Storeparameters_4_ObjFlags 1
#define Storeparameters_5 5 // Save drive parameters to non-volatile memory
#define Storeparameters_5_ObjectType 0x7
typedef uint32_t Storeparameters_5_DataType;
#define Storeparameters_5_AccessType rw
#define Storeparameters_5_DefaultValue 0x00000001
#define Storeparameters_5_PDOMapping 0
#define Storeparameters_5_ObjFlags 1
#define Storeparameters_6 6 // Save tuning parameters to non-volatile memory
#define Storeparameters_6_ObjectType 0x7
typedef uint32_t Storeparameters_6_DataType;
#define Storeparameters_6_AccessType rw
#define Storeparameters_6_DefaultValue 0x00000001
#define Storeparameters_6_PDOMapping 0
#define Storeparameters_6_ObjFlags 1
#define Restoredefaultparameters 0x1011
#define Restoredefaultparameters_ObjectType 0x8
#define Restoredefaultparameters_SubNumber 0x07
#define Restoredefaultparameters_0 0 // Highest sub-index supported
#define Restoredefaultparameters_0_ObjectType 0x7
typedef uint8_t Restoredefaultparameters_0_DataType;
#define Restoredefaultparameters_0_AccessType ro
#define Restoredefaultparameters_0_DefaultValue 0x06
#define Restoredefaultparameters_0_PDOMapping 0
#define Restoredefaultparameters_0_ObjFlags 1
#define Restoredefaultparameters_1 1 // Restore all default parameters
#define Restoredefaultparameters_1_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_1_DataType;
#define Restoredefaultparameters_1_AccessType rw
#define Restoredefaultparameters_1_DefaultValue 0x00000001
#define Restoredefaultparameters_1_PDOMapping 0
#define Restoredefaultparameters_1_ObjFlags 1
#define Restoredefaultparameters_2 2 // Restore communication default parameters
#define Restoredefaultparameters_2_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_2_DataType;
#define Restoredefaultparameters_2_AccessType rw
#define Restoredefaultparameters_2_DefaultValue 0x00000001
#define Restoredefaultparameters_2_PDOMapping 0
#define Restoredefaultparameters_2_ObjFlags 1
#define Restoredefaultparameters_3 3 // Restore application default parameters
#define Restoredefaultparameters_3_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_3_DataType;
#define Restoredefaultparameters_3_AccessType rw
#define Restoredefaultparameters_3_DefaultValue 0x00000001
#define Restoredefaultparameters_3_PDOMapping 0
#define Restoredefaultparameters_3_ObjFlags 1
#define Restoredefaultparameters_4 4 // Restore customer default parameters
#define Restoredefaultparameters_4_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_4_DataType;
#define Restoredefaultparameters_4_AccessType rw
#define Restoredefaultparameters_4_DefaultValue 0x00000001
#define Restoredefaultparameters_4_PDOMapping 0
#define Restoredefaultparameters_4_ObjFlags 1
#define Restoredefaultparameters_5 5 // Restore drive default parameters
#define Restoredefaultparameters_5_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_5_DataType;
#define Restoredefaultparameters_5_AccessType rw
#define Restoredefaultparameters_5_DefaultValue 0x00000001
#define Restoredefaultparameters_5_PDOMapping 0
#define Restoredefaultparameters_5_ObjFlags 1
#define Restoredefaultparameters_6 6 // Restore tuning default parameters
#define Restoredefaultparameters_6_ObjectType 0x7
typedef uint32_t Restoredefaultparameters_6_DataType;
#define Restoredefaultparameters_6_AccessType rw
#define Restoredefaultparameters_6_DefaultValue 0x00000000
#define Restoredefaultparameters_6_PDOMapping 0
#define Restoredefaultparameters_6_ObjFlags 1
#define COB_IDEMCY 0x1014
#define COB_IDEMCY_ObjectType 0x7
typedef uint32_t COB_IDEMCY_DataType;
#define COB_IDEMCY_AccessType rw
#define COB_IDEMCY_DefaultValue $NODEID+0x80
#define COB_IDEMCY_PDOMapping 0
#define Producerheartbeattime 0x1017
#define Producerheartbeattime_ObjectType 0x7
typedef uint16_t Producerheartbeattime_DataType;
#define Producerheartbeattime_AccessType rw
#define Producerheartbeattime_DefaultValue 0x0000
#define Producerheartbeattime_PDOMapping 0
#define VerifyConfiguration 0x1020
#define VerifyConfiguration_ObjectType 0x8
#define VerifyConfiguration_SubNumber 0x03
#define VerifyConfiguration_0 0 // Highest sub-index supported
#define VerifyConfiguration_0_ObjectType 0x7
typedef uint8_t VerifyConfiguration_0_DataType;
#define VerifyConfiguration_0_AccessType ro
#define VerifyConfiguration_0_DefaultValue 0x02
#define VerifyConfiguration_0_PDOMapping 0
#define VerifyConfiguration_1 1 // Configuration date
#define VerifyConfiguration_1_ObjectType 0x7
typedef uint32_t VerifyConfiguration_1_DataType;
#define VerifyConfiguration_1_AccessType rw
#define VerifyConfiguration_1_DefaultValue 0x00000000
#define VerifyConfiguration_1_PDOMapping 0
#define VerifyConfiguration_2 2 // Configuration time
#define VerifyConfiguration_2_ObjectType 0x7
typedef uint32_t VerifyConfiguration_2_DataType;
#define VerifyConfiguration_2_AccessType rw
#define VerifyConfiguration_2_DefaultValue 0x00000000
#define VerifyConfiguration_2_PDOMapping 0
#define Errorbehavior 0x1029
#define Errorbehavior_ObjectType 0x8
#define Errorbehavior_SubNumber 0x03
#define Errorbehavior_0 0 // Highest sub-index supported
#define Errorbehavior_0_ObjectType 0x7
typedef uint8_t Errorbehavior_0_DataType;
#define Errorbehavior_0_AccessType ro
#define Errorbehavior_0_DefaultValue 0x02
#define Errorbehavior_0_PDOMapping 0
#define Errorbehavior_1 1 // Communication error
#define Errorbehavior_1_ObjectType 0x7
typedef uint8_t Errorbehavior_1_DataType;
#define Errorbehavior_1_AccessType rw
#define Errorbehavior_1_DefaultValue 0x00
#define Errorbehavior_1_PDOMapping 0
#define Errorbehavior_2 2 // Internal device error
#define Errorbehavior_2_ObjectType 0x7
typedef uint8_t Errorbehavior_2_DataType;
#define Errorbehavior_2_AccessType rw
#define Errorbehavior_2_DefaultValue 0x01
#define Errorbehavior_2_PDOMapping 0
#define ReceivePDO1CommunicationParameter 0x1400
#define ReceivePDO1CommunicationParameter_ObjectType 0x9
#define ReceivePDO1CommunicationParameter_SubNumber 0x03
#define ReceivePDO1CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO1CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO1CommunicationParameter_0_DataType;
#define ReceivePDO1CommunicationParameter_0_AccessType ro
#define ReceivePDO1CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO1CommunicationParameter_0_PDOMapping 0
#define ReceivePDO1CommunicationParameter_1 1 // COB-ID
#define ReceivePDO1CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO1CommunicationParameter_1_DataType;
#define ReceivePDO1CommunicationParameter_1_AccessType rw
#define ReceivePDO1CommunicationParameter_1_DefaultValue $NODEID+0x200
#define ReceivePDO1CommunicationParameter_1_PDOMapping 0
#define ReceivePDO1CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO1CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO1CommunicationParameter_2_DataType;
#define ReceivePDO1CommunicationParameter_2_AccessType rw
#define ReceivePDO1CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO1CommunicationParameter_2_PDOMapping 0
#define ReceivePDO2CommunicationParameter 0x1401
#define ReceivePDO2CommunicationParameter_ObjectType 0x9
#define ReceivePDO2CommunicationParameter_SubNumber 0x03
#define ReceivePDO2CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO2CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO2CommunicationParameter_0_DataType;
#define ReceivePDO2CommunicationParameter_0_AccessType ro
#define ReceivePDO2CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO2CommunicationParameter_0_PDOMapping 0
#define ReceivePDO2CommunicationParameter_1 1 // COB-ID
#define ReceivePDO2CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO2CommunicationParameter_1_DataType;
#define ReceivePDO2CommunicationParameter_1_AccessType rw
#define ReceivePDO2CommunicationParameter_1_DefaultValue $NODEID+0x300
#define ReceivePDO2CommunicationParameter_1_PDOMapping 0
#define ReceivePDO2CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO2CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO2CommunicationParameter_2_DataType;
#define ReceivePDO2CommunicationParameter_2_AccessType rw
#define ReceivePDO2CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO2CommunicationParameter_2_PDOMapping 0
#define ReceivePDO3CommunicationParameter 0x1402
#define ReceivePDO3CommunicationParameter_ObjectType 0x9
#define ReceivePDO3CommunicationParameter_SubNumber 0x03
#define ReceivePDO3CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO3CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO3CommunicationParameter_0_DataType;
#define ReceivePDO3CommunicationParameter_0_AccessType ro
#define ReceivePDO3CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO3CommunicationParameter_0_PDOMapping 0
#define ReceivePDO3CommunicationParameter_1 1 // COB-ID
#define ReceivePDO3CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO3CommunicationParameter_1_DataType;
#define ReceivePDO3CommunicationParameter_1_AccessType rw
#define ReceivePDO3CommunicationParameter_1_DefaultValue $NODEID+0x400
#define ReceivePDO3CommunicationParameter_1_PDOMapping 0
#define ReceivePDO3CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO3CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO3CommunicationParameter_2_DataType;
#define ReceivePDO3CommunicationParameter_2_AccessType rw
#define ReceivePDO3CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO3CommunicationParameter_2_PDOMapping 0
#define ReceivePDO4CommunicationParameter 0x1403
#define ReceivePDO4CommunicationParameter_ObjectType 0x9
#define ReceivePDO4CommunicationParameter_SubNumber 0x03
#define ReceivePDO4CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO4CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO4CommunicationParameter_0_DataType;
#define ReceivePDO4CommunicationParameter_0_AccessType ro
#define ReceivePDO4CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO4CommunicationParameter_0_PDOMapping 0
#define ReceivePDO4CommunicationParameter_1 1 // COB-ID
#define ReceivePDO4CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO4CommunicationParameter_1_DataType;
#define ReceivePDO4CommunicationParameter_1_AccessType rw
#define ReceivePDO4CommunicationParameter_1_DefaultValue $NODEID+0x500
#define ReceivePDO4CommunicationParameter_1_PDOMapping 0
#define ReceivePDO4CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO4CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO4CommunicationParameter_2_DataType;
#define ReceivePDO4CommunicationParameter_2_AccessType rw
#define ReceivePDO4CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO4CommunicationParameter_2_PDOMapping 0
#define ReceivePDO5CommunicationParameter 0x1404
#define ReceivePDO5CommunicationParameter_ObjectType 0x9
#define ReceivePDO5CommunicationParameter_SubNumber 0x03
#define ReceivePDO5CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO5CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO5CommunicationParameter_0_DataType;
#define ReceivePDO5CommunicationParameter_0_AccessType ro
#define ReceivePDO5CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO5CommunicationParameter_0_PDOMapping 0
#define ReceivePDO5CommunicationParameter_1 1 // COB-ID
#define ReceivePDO5CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO5CommunicationParameter_1_DataType;
#define ReceivePDO5CommunicationParameter_1_AccessType rw
#define ReceivePDO5CommunicationParameter_1_DefaultValue 0x80000000
#define ReceivePDO5CommunicationParameter_1_PDOMapping 0
#define ReceivePDO5CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO5CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO5CommunicationParameter_2_DataType;
#define ReceivePDO5CommunicationParameter_2_AccessType rw
#define ReceivePDO5CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO5CommunicationParameter_2_PDOMapping 0
#define ReceivePDO6CommunicationParameter 0x1405
#define ReceivePDO6CommunicationParameter_ObjectType 0x9
#define ReceivePDO6CommunicationParameter_SubNumber 0x03
#define ReceivePDO6CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO6CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO6CommunicationParameter_0_DataType;
#define ReceivePDO6CommunicationParameter_0_AccessType ro
#define ReceivePDO6CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO6CommunicationParameter_0_PDOMapping 0
#define ReceivePDO6CommunicationParameter_1 1 // COB-ID
#define ReceivePDO6CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO6CommunicationParameter_1_DataType;
#define ReceivePDO6CommunicationParameter_1_AccessType rw
#define ReceivePDO6CommunicationParameter_1_DefaultValue 0x80000000
#define ReceivePDO6CommunicationParameter_1_PDOMapping 0
#define ReceivePDO6CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO6CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO6CommunicationParameter_2_DataType;
#define ReceivePDO6CommunicationParameter_2_AccessType rw
#define ReceivePDO6CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO6CommunicationParameter_2_PDOMapping 0
#define ReceivePDO7CommunicationParameter 0x1406
#define ReceivePDO7CommunicationParameter_ObjectType 0x9
#define ReceivePDO7CommunicationParameter_SubNumber 0x03
#define ReceivePDO7CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO7CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO7CommunicationParameter_0_DataType;
#define ReceivePDO7CommunicationParameter_0_AccessType ro
#define ReceivePDO7CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO7CommunicationParameter_0_PDOMapping 0
#define ReceivePDO7CommunicationParameter_1 1 // COB-ID
#define ReceivePDO7CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO7CommunicationParameter_1_DataType;
#define ReceivePDO7CommunicationParameter_1_AccessType rw
#define ReceivePDO7CommunicationParameter_1_DefaultValue 0x80000000
#define ReceivePDO7CommunicationParameter_1_PDOMapping 0
#define ReceivePDO7CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO7CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO7CommunicationParameter_2_DataType;
#define ReceivePDO7CommunicationParameter_2_AccessType rw
#define ReceivePDO7CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO7CommunicationParameter_2_PDOMapping 0
#define ReceivePDO8CommunicationParameter 0x1407
#define ReceivePDO8CommunicationParameter_ObjectType 0x9
#define ReceivePDO8CommunicationParameter_SubNumber 0x03
#define ReceivePDO8CommunicationParameter_0 0 // Highest sub-index supported
#define ReceivePDO8CommunicationParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO8CommunicationParameter_0_DataType;
#define ReceivePDO8CommunicationParameter_0_AccessType ro
#define ReceivePDO8CommunicationParameter_0_DefaultValue 0x02
#define ReceivePDO8CommunicationParameter_0_PDOMapping 0
#define ReceivePDO8CommunicationParameter_1 1 // COB-ID
#define ReceivePDO8CommunicationParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO8CommunicationParameter_1_DataType;
#define ReceivePDO8CommunicationParameter_1_AccessType rw
#define ReceivePDO8CommunicationParameter_1_DefaultValue 0x80000000
#define ReceivePDO8CommunicationParameter_1_PDOMapping 0
#define ReceivePDO8CommunicationParameter_2 2 // Transmission Type
#define ReceivePDO8CommunicationParameter_2_ObjectType 0x7
typedef uint8_t ReceivePDO8CommunicationParameter_2_DataType;
#define ReceivePDO8CommunicationParameter_2_AccessType rw
#define ReceivePDO8CommunicationParameter_2_DefaultValue 0xFF
#define ReceivePDO8CommunicationParameter_2_PDOMapping 0
#define ReceivePDO1MappingParameter 0x1600
#define ReceivePDO1MappingParameter_ObjectType 0x9
#define ReceivePDO1MappingParameter_SubNumber 0x09
#define ReceivePDO1MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO1MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO1MappingParameter_0_DataType;
#define ReceivePDO1MappingParameter_0_AccessType rw
#define ReceivePDO1MappingParameter_0_DefaultValue 0x03
#define ReceivePDO1MappingParameter_0_PDOMapping 0
#define ReceivePDO1MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO1MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_1_DataType;
#define ReceivePDO1MappingParameter_1_AccessType rw
#define ReceivePDO1MappingParameter_1_DefaultValue 0x60400010
#define ReceivePDO1MappingParameter_1_PDOMapping 0
#define ReceivePDO1MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO1MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_2_DataType;
#define ReceivePDO1MappingParameter_2_AccessType rw
#define ReceivePDO1MappingParameter_2_DefaultValue 0x60600008
#define ReceivePDO1MappingParameter_2_PDOMapping 0
#define ReceivePDO1MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO1MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_3_DataType;
#define ReceivePDO1MappingParameter_3_AccessType rw
#define ReceivePDO1MappingParameter_3_DefaultValue 0x32020020
#define ReceivePDO1MappingParameter_3_PDOMapping 0
#define ReceivePDO1MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO1MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_4_DataType;
#define ReceivePDO1MappingParameter_4_AccessType rw
#define ReceivePDO1MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO1MappingParameter_4_PDOMapping 0
#define ReceivePDO1MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO1MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_5_DataType;
#define ReceivePDO1MappingParameter_5_AccessType rw
#define ReceivePDO1MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO1MappingParameter_5_PDOMapping 0
#define ReceivePDO1MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO1MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_6_DataType;
#define ReceivePDO1MappingParameter_6_AccessType rw
#define ReceivePDO1MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO1MappingParameter_6_PDOMapping 0
#define ReceivePDO1MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO1MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_7_DataType;
#define ReceivePDO1MappingParameter_7_AccessType rw
#define ReceivePDO1MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO1MappingParameter_7_PDOMapping 0
#define ReceivePDO1MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO1MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO1MappingParameter_8_DataType;
#define ReceivePDO1MappingParameter_8_AccessType rw
#define ReceivePDO1MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO1MappingParameter_8_PDOMapping 0
#define ReceivePDO2MappingParameter 0x1601
#define ReceivePDO2MappingParameter_ObjectType 0x9
#define ReceivePDO2MappingParameter_SubNumber 0x09
#define ReceivePDO2MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO2MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO2MappingParameter_0_DataType;
#define ReceivePDO2MappingParameter_0_AccessType rw
#define ReceivePDO2MappingParameter_0_DefaultValue 0x02
#define ReceivePDO2MappingParameter_0_PDOMapping 0
#define ReceivePDO2MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO2MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_1_DataType;
#define ReceivePDO2MappingParameter_1_AccessType rw
#define ReceivePDO2MappingParameter_1_DefaultValue 0x607A0020
#define ReceivePDO2MappingParameter_1_PDOMapping 0
#define ReceivePDO2MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO2MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_2_DataType;
#define ReceivePDO2MappingParameter_2_AccessType rw
#define ReceivePDO2MappingParameter_2_DefaultValue 0x60810020
#define ReceivePDO2MappingParameter_2_PDOMapping 0
#define ReceivePDO2MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO2MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_3_DataType;
#define ReceivePDO2MappingParameter_3_AccessType rw
#define ReceivePDO2MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_3_PDOMapping 0
#define ReceivePDO2MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO2MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_4_DataType;
#define ReceivePDO2MappingParameter_4_AccessType rw
#define ReceivePDO2MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_4_PDOMapping 0
#define ReceivePDO2MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO2MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_5_DataType;
#define ReceivePDO2MappingParameter_5_AccessType rw
#define ReceivePDO2MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_5_PDOMapping 0
#define ReceivePDO2MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO2MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_6_DataType;
#define ReceivePDO2MappingParameter_6_AccessType rw
#define ReceivePDO2MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_6_PDOMapping 0
#define ReceivePDO2MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO2MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_7_DataType;
#define ReceivePDO2MappingParameter_7_AccessType rw
#define ReceivePDO2MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_7_PDOMapping 0
#define ReceivePDO2MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO2MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO2MappingParameter_8_DataType;
#define ReceivePDO2MappingParameter_8_AccessType rw
#define ReceivePDO2MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO2MappingParameter_8_PDOMapping 0
#define ReceivePDO3MappingParameter 0x1602
#define ReceivePDO3MappingParameter_ObjectType 0x9
#define ReceivePDO3MappingParameter_SubNumber 0x09
#define ReceivePDO3MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO3MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO3MappingParameter_0_DataType;
#define ReceivePDO3MappingParameter_0_AccessType rw
#define ReceivePDO3MappingParameter_0_DefaultValue 0x01
#define ReceivePDO3MappingParameter_0_PDOMapping 0
#define ReceivePDO3MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO3MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_1_DataType;
#define ReceivePDO3MappingParameter_1_AccessType rw
#define ReceivePDO3MappingParameter_1_DefaultValue 0x60420010
#define ReceivePDO3MappingParameter_1_PDOMapping 0
#define ReceivePDO3MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO3MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_2_DataType;
#define ReceivePDO3MappingParameter_2_AccessType rw
#define ReceivePDO3MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_2_PDOMapping 0
#define ReceivePDO3MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO3MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_3_DataType;
#define ReceivePDO3MappingParameter_3_AccessType rw
#define ReceivePDO3MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_3_PDOMapping 0
#define ReceivePDO3MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO3MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_4_DataType;
#define ReceivePDO3MappingParameter_4_AccessType rw
#define ReceivePDO3MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_4_PDOMapping 0
#define ReceivePDO3MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO3MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_5_DataType;
#define ReceivePDO3MappingParameter_5_AccessType rw
#define ReceivePDO3MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_5_PDOMapping 0
#define ReceivePDO3MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO3MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_6_DataType;
#define ReceivePDO3MappingParameter_6_AccessType rw
#define ReceivePDO3MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_6_PDOMapping 0
#define ReceivePDO3MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO3MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_7_DataType;
#define ReceivePDO3MappingParameter_7_AccessType rw
#define ReceivePDO3MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_7_PDOMapping 0
#define ReceivePDO3MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO3MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO3MappingParameter_8_DataType;
#define ReceivePDO3MappingParameter_8_AccessType rw
#define ReceivePDO3MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO3MappingParameter_8_PDOMapping 0
#define ReceivePDO4MappingParameter 0x1603
#define ReceivePDO4MappingParameter_ObjectType 0x9
#define ReceivePDO4MappingParameter_SubNumber 0x09
#define ReceivePDO4MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO4MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO4MappingParameter_0_DataType;
#define ReceivePDO4MappingParameter_0_AccessType rw
#define ReceivePDO4MappingParameter_0_DefaultValue 0x01
#define ReceivePDO4MappingParameter_0_PDOMapping 0
#define ReceivePDO4MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO4MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_1_DataType;
#define ReceivePDO4MappingParameter_1_AccessType rw
#define ReceivePDO4MappingParameter_1_DefaultValue 0x60FE0120
#define ReceivePDO4MappingParameter_1_PDOMapping 0
#define ReceivePDO4MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO4MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_2_DataType;
#define ReceivePDO4MappingParameter_2_AccessType rw
#define ReceivePDO4MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_2_PDOMapping 0
#define ReceivePDO4MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO4MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_3_DataType;
#define ReceivePDO4MappingParameter_3_AccessType rw
#define ReceivePDO4MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_3_PDOMapping 0
#define ReceivePDO4MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO4MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_4_DataType;
#define ReceivePDO4MappingParameter_4_AccessType rw
#define ReceivePDO4MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_4_PDOMapping 0
#define ReceivePDO4MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO4MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_5_DataType;
#define ReceivePDO4MappingParameter_5_AccessType rw
#define ReceivePDO4MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_5_PDOMapping 0
#define ReceivePDO4MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO4MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_6_DataType;
#define ReceivePDO4MappingParameter_6_AccessType rw
#define ReceivePDO4MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_6_PDOMapping 0
#define ReceivePDO4MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO4MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_7_DataType;
#define ReceivePDO4MappingParameter_7_AccessType rw
#define ReceivePDO4MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_7_PDOMapping 0
#define ReceivePDO4MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO4MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO4MappingParameter_8_DataType;
#define ReceivePDO4MappingParameter_8_AccessType rw
#define ReceivePDO4MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO4MappingParameter_8_PDOMapping 0
#define ReceivePDO5MappingParameter 0x1604
#define ReceivePDO5MappingParameter_ObjectType 0x9
#define ReceivePDO5MappingParameter_SubNumber 0x09
#define ReceivePDO5MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO5MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO5MappingParameter_0_DataType;
#define ReceivePDO5MappingParameter_0_AccessType rw
#define ReceivePDO5MappingParameter_0_DefaultValue 0x00
#define ReceivePDO5MappingParameter_0_PDOMapping 0
#define ReceivePDO5MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO5MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_1_DataType;
#define ReceivePDO5MappingParameter_1_AccessType rw
#define ReceivePDO5MappingParameter_1_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_1_PDOMapping 0
#define ReceivePDO5MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO5MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_2_DataType;
#define ReceivePDO5MappingParameter_2_AccessType rw
#define ReceivePDO5MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_2_PDOMapping 0
#define ReceivePDO5MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO5MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_3_DataType;
#define ReceivePDO5MappingParameter_3_AccessType rw
#define ReceivePDO5MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_3_PDOMapping 0
#define ReceivePDO5MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO5MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_4_DataType;
#define ReceivePDO5MappingParameter_4_AccessType rw
#define ReceivePDO5MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_4_PDOMapping 0
#define ReceivePDO5MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO5MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_5_DataType;
#define ReceivePDO5MappingParameter_5_AccessType rw
#define ReceivePDO5MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_5_PDOMapping 0
#define ReceivePDO5MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO5MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_6_DataType;
#define ReceivePDO5MappingParameter_6_AccessType rw
#define ReceivePDO5MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_6_PDOMapping 0
#define ReceivePDO5MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO5MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_7_DataType;
#define ReceivePDO5MappingParameter_7_AccessType rw
#define ReceivePDO5MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_7_PDOMapping 0
#define ReceivePDO5MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO5MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO5MappingParameter_8_DataType;
#define ReceivePDO5MappingParameter_8_AccessType rw
#define ReceivePDO5MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO5MappingParameter_8_PDOMapping 0
#define ReceivePDO6MappingParameter 0x1605
#define ReceivePDO6MappingParameter_ObjectType 0x9
#define ReceivePDO6MappingParameter_SubNumber 0x09
#define ReceivePDO6MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO6MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO6MappingParameter_0_DataType;
#define ReceivePDO6MappingParameter_0_AccessType rw
#define ReceivePDO6MappingParameter_0_DefaultValue 0x00
#define ReceivePDO6MappingParameter_0_PDOMapping 0
#define ReceivePDO6MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO6MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_1_DataType;
#define ReceivePDO6MappingParameter_1_AccessType rw
#define ReceivePDO6MappingParameter_1_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_1_PDOMapping 0
#define ReceivePDO6MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO6MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_2_DataType;
#define ReceivePDO6MappingParameter_2_AccessType rw
#define ReceivePDO6MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_2_PDOMapping 0
#define ReceivePDO6MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO6MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_3_DataType;
#define ReceivePDO6MappingParameter_3_AccessType rw
#define ReceivePDO6MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_3_PDOMapping 0
#define ReceivePDO6MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO6MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_4_DataType;
#define ReceivePDO6MappingParameter_4_AccessType rw
#define ReceivePDO6MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_4_PDOMapping 0
#define ReceivePDO6MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO6MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_5_DataType;
#define ReceivePDO6MappingParameter_5_AccessType rw
#define ReceivePDO6MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_5_PDOMapping 0
#define ReceivePDO6MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO6MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_6_DataType;
#define ReceivePDO6MappingParameter_6_AccessType rw
#define ReceivePDO6MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_6_PDOMapping 0
#define ReceivePDO6MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO6MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_7_DataType;
#define ReceivePDO6MappingParameter_7_AccessType rw
#define ReceivePDO6MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_7_PDOMapping 0
#define ReceivePDO6MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO6MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO6MappingParameter_8_DataType;
#define ReceivePDO6MappingParameter_8_AccessType rw
#define ReceivePDO6MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO6MappingParameter_8_PDOMapping 0
#define ReceivePDO7MappingParameter 0x1606
#define ReceivePDO7MappingParameter_ObjectType 0x9
#define ReceivePDO7MappingParameter_SubNumber 0x09
#define ReceivePDO7MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO7MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO7MappingParameter_0_DataType;
#define ReceivePDO7MappingParameter_0_AccessType rw
#define ReceivePDO7MappingParameter_0_DefaultValue 0x00
#define ReceivePDO7MappingParameter_0_PDOMapping 0
#define ReceivePDO7MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO7MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_1_DataType;
#define ReceivePDO7MappingParameter_1_AccessType rw
#define ReceivePDO7MappingParameter_1_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_1_PDOMapping 0
#define ReceivePDO7MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO7MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_2_DataType;
#define ReceivePDO7MappingParameter_2_AccessType rw
#define ReceivePDO7MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_2_PDOMapping 0
#define ReceivePDO7MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO7MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_3_DataType;
#define ReceivePDO7MappingParameter_3_AccessType rw
#define ReceivePDO7MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_3_PDOMapping 0
#define ReceivePDO7MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO7MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_4_DataType;
#define ReceivePDO7MappingParameter_4_AccessType rw
#define ReceivePDO7MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_4_PDOMapping 0
#define ReceivePDO7MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO7MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_5_DataType;
#define ReceivePDO7MappingParameter_5_AccessType rw
#define ReceivePDO7MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_5_PDOMapping 0
#define ReceivePDO7MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO7MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_6_DataType;
#define ReceivePDO7MappingParameter_6_AccessType rw
#define ReceivePDO7MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_6_PDOMapping 0
#define ReceivePDO7MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO7MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_7_DataType;
#define ReceivePDO7MappingParameter_7_AccessType rw
#define ReceivePDO7MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_7_PDOMapping 0
#define ReceivePDO7MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO7MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO7MappingParameter_8_DataType;
#define ReceivePDO7MappingParameter_8_AccessType rw
#define ReceivePDO7MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO7MappingParameter_8_PDOMapping 0
#define ReceivePDO8MappingParameter 0x1607
#define ReceivePDO8MappingParameter_ObjectType 0x9
#define ReceivePDO8MappingParameter_SubNumber 0x09
#define ReceivePDO8MappingParameter_0 0 // Highest sub-index supported
#define ReceivePDO8MappingParameter_0_ObjectType 0x7
typedef uint8_t ReceivePDO8MappingParameter_0_DataType;
#define ReceivePDO8MappingParameter_0_AccessType rw
#define ReceivePDO8MappingParameter_0_DefaultValue 0x00
#define ReceivePDO8MappingParameter_0_PDOMapping 0
#define ReceivePDO8MappingParameter_1 1 // 1st object to be mapped
#define ReceivePDO8MappingParameter_1_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_1_DataType;
#define ReceivePDO8MappingParameter_1_AccessType rw
#define ReceivePDO8MappingParameter_1_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_1_PDOMapping 0
#define ReceivePDO8MappingParameter_2 2 // 2nd object to be mapped
#define ReceivePDO8MappingParameter_2_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_2_DataType;
#define ReceivePDO8MappingParameter_2_AccessType rw
#define ReceivePDO8MappingParameter_2_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_2_PDOMapping 0
#define ReceivePDO8MappingParameter_3 3 // 3rd object to be mapped
#define ReceivePDO8MappingParameter_3_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_3_DataType;
#define ReceivePDO8MappingParameter_3_AccessType rw
#define ReceivePDO8MappingParameter_3_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_3_PDOMapping 0
#define ReceivePDO8MappingParameter_4 4 // 4th object to be mapped
#define ReceivePDO8MappingParameter_4_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_4_DataType;
#define ReceivePDO8MappingParameter_4_AccessType rw
#define ReceivePDO8MappingParameter_4_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_4_PDOMapping 0
#define ReceivePDO8MappingParameter_5 5 // 5th object to be mapped
#define ReceivePDO8MappingParameter_5_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_5_DataType;
#define ReceivePDO8MappingParameter_5_AccessType rw
#define ReceivePDO8MappingParameter_5_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_5_PDOMapping 0
#define ReceivePDO8MappingParameter_6 6 // 6th object to be mapped
#define ReceivePDO8MappingParameter_6_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_6_DataType;
#define ReceivePDO8MappingParameter_6_AccessType rw
#define ReceivePDO8MappingParameter_6_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_6_PDOMapping 0
#define ReceivePDO8MappingParameter_7 7 // 7th object to be mapped
#define ReceivePDO8MappingParameter_7_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_7_DataType;
#define ReceivePDO8MappingParameter_7_AccessType rw
#define ReceivePDO8MappingParameter_7_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_7_PDOMapping 0
#define ReceivePDO8MappingParameter_8 8 // 8th object to be mapped
#define ReceivePDO8MappingParameter_8_ObjectType 0x7
typedef uint32_t ReceivePDO8MappingParameter_8_DataType;
#define ReceivePDO8MappingParameter_8_AccessType rw
#define ReceivePDO8MappingParameter_8_DefaultValue 0x00000000
#define ReceivePDO8MappingParameter_8_PDOMapping 0
#define TransmitPDO1CommunicationParameter 0x1800
#define TransmitPDO1CommunicationParameter_ObjectType 0x9
#define TransmitPDO1CommunicationParameter_SubNumber 0x06
#define TransmitPDO1CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO1CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO1CommunicationParameter_0_DataType;
#define TransmitPDO1CommunicationParameter_0_AccessType ro
#define TransmitPDO1CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO1CommunicationParameter_0_PDOMapping 0
#define TransmitPDO1CommunicationParameter_1 1 // COB-ID
#define TransmitPDO1CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO1CommunicationParameter_1_DataType;
#define TransmitPDO1CommunicationParameter_1_AccessType rw
#define TransmitPDO1CommunicationParameter_1_DefaultValue $NODEID+0x180
#define TransmitPDO1CommunicationParameter_1_PDOMapping 0
#define TransmitPDO1CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO1CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO1CommunicationParameter_2_DataType;
#define TransmitPDO1CommunicationParameter_2_AccessType rw
#define TransmitPDO1CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO1CommunicationParameter_2_PDOMapping 0
#define TransmitPDO1CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO1CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO1CommunicationParameter_3_DataType;
#define TransmitPDO1CommunicationParameter_3_AccessType rw
#define TransmitPDO1CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO1CommunicationParameter_3_PDOMapping 0
#define TransmitPDO1CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO1CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO1CommunicationParameter_4_DataType;
#define TransmitPDO1CommunicationParameter_4_AccessType rw
#define TransmitPDO1CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO1CommunicationParameter_4_PDOMapping 0
#define TransmitPDO1CommunicationParameter_5 5 // Event Timer
#define TransmitPDO1CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO1CommunicationParameter_5_DataType;
#define TransmitPDO1CommunicationParameter_5_AccessType rw
#define TransmitPDO1CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO1CommunicationParameter_5_PDOMapping 0
#define TransmitPDO2CommunicationParameter 0x1801
#define TransmitPDO2CommunicationParameter_ObjectType 0x9
#define TransmitPDO2CommunicationParameter_SubNumber 0x06
#define TransmitPDO2CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO2CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO2CommunicationParameter_0_DataType;
#define TransmitPDO2CommunicationParameter_0_AccessType ro
#define TransmitPDO2CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO2CommunicationParameter_0_PDOMapping 0
#define TransmitPDO2CommunicationParameter_1 1 // COB-ID
#define TransmitPDO2CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO2CommunicationParameter_1_DataType;
#define TransmitPDO2CommunicationParameter_1_AccessType rw
#define TransmitPDO2CommunicationParameter_1_DefaultValue $NODEID+0x280
#define TransmitPDO2CommunicationParameter_1_PDOMapping 0
#define TransmitPDO2CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO2CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO2CommunicationParameter_2_DataType;
#define TransmitPDO2CommunicationParameter_2_AccessType rw
#define TransmitPDO2CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO2CommunicationParameter_2_PDOMapping 0
#define TransmitPDO2CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO2CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO2CommunicationParameter_3_DataType;
#define TransmitPDO2CommunicationParameter_3_AccessType rw
#define TransmitPDO2CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO2CommunicationParameter_3_PDOMapping 0
#define TransmitPDO2CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO2CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO2CommunicationParameter_4_DataType;
#define TransmitPDO2CommunicationParameter_4_AccessType rw
#define TransmitPDO2CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO2CommunicationParameter_4_PDOMapping 0
#define TransmitPDO2CommunicationParameter_5 5 // Event Timer
#define TransmitPDO2CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO2CommunicationParameter_5_DataType;
#define TransmitPDO2CommunicationParameter_5_AccessType rw
#define TransmitPDO2CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO2CommunicationParameter_5_PDOMapping 0
#define TransmitPDO3CommunicationParameter 0x1802
#define TransmitPDO3CommunicationParameter_ObjectType 0x9
#define TransmitPDO3CommunicationParameter_SubNumber 0x06
#define TransmitPDO3CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO3CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO3CommunicationParameter_0_DataType;
#define TransmitPDO3CommunicationParameter_0_AccessType ro
#define TransmitPDO3CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO3CommunicationParameter_0_PDOMapping 0
#define TransmitPDO3CommunicationParameter_1 1 // COB-ID
#define TransmitPDO3CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO3CommunicationParameter_1_DataType;
#define TransmitPDO3CommunicationParameter_1_AccessType rw
#define TransmitPDO3CommunicationParameter_1_DefaultValue $NODEID+0x380
#define TransmitPDO3CommunicationParameter_1_PDOMapping 0
#define TransmitPDO3CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO3CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO3CommunicationParameter_2_DataType;
#define TransmitPDO3CommunicationParameter_2_AccessType rw
#define TransmitPDO3CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO3CommunicationParameter_2_PDOMapping 0
#define TransmitPDO3CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO3CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO3CommunicationParameter_3_DataType;
#define TransmitPDO3CommunicationParameter_3_AccessType rw
#define TransmitPDO3CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO3CommunicationParameter_3_PDOMapping 0
#define TransmitPDO3CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO3CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO3CommunicationParameter_4_DataType;
#define TransmitPDO3CommunicationParameter_4_AccessType rw
#define TransmitPDO3CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO3CommunicationParameter_4_PDOMapping 0
#define TransmitPDO3CommunicationParameter_5 5 // Event Timer
#define TransmitPDO3CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO3CommunicationParameter_5_DataType;
#define TransmitPDO3CommunicationParameter_5_AccessType rw
#define TransmitPDO3CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO3CommunicationParameter_5_PDOMapping 0
#define TransmitPDO4CommunicationParameter 0x1803
#define TransmitPDO4CommunicationParameter_ObjectType 0x9
#define TransmitPDO4CommunicationParameter_SubNumber 0x06
#define TransmitPDO4CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO4CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO4CommunicationParameter_0_DataType;
#define TransmitPDO4CommunicationParameter_0_AccessType ro
#define TransmitPDO4CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO4CommunicationParameter_0_PDOMapping 0
#define TransmitPDO4CommunicationParameter_1 1 // COB-ID
#define TransmitPDO4CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO4CommunicationParameter_1_DataType;
#define TransmitPDO4CommunicationParameter_1_AccessType rw
#define TransmitPDO4CommunicationParameter_1_DefaultValue $NODEID+0x480
#define TransmitPDO4CommunicationParameter_1_PDOMapping 0
#define TransmitPDO4CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO4CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO4CommunicationParameter_2_DataType;
#define TransmitPDO4CommunicationParameter_2_AccessType rw
#define TransmitPDO4CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO4CommunicationParameter_2_PDOMapping 0
#define TransmitPDO4CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO4CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO4CommunicationParameter_3_DataType;
#define TransmitPDO4CommunicationParameter_3_AccessType rw
#define TransmitPDO4CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO4CommunicationParameter_3_PDOMapping 0
#define TransmitPDO4CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO4CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO4CommunicationParameter_4_DataType;
#define TransmitPDO4CommunicationParameter_4_AccessType rw
#define TransmitPDO4CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO4CommunicationParameter_4_PDOMapping 0
#define TransmitPDO4CommunicationParameter_5 5 // Event Timer
#define TransmitPDO4CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO4CommunicationParameter_5_DataType;
#define TransmitPDO4CommunicationParameter_5_AccessType rw
#define TransmitPDO4CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO4CommunicationParameter_5_PDOMapping 0
#define TransmitPDO5CommunicationParameter 0x1804
#define TransmitPDO5CommunicationParameter_ObjectType 0x9
#define TransmitPDO5CommunicationParameter_SubNumber 0x06
#define TransmitPDO5CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO5CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO5CommunicationParameter_0_DataType;
#define TransmitPDO5CommunicationParameter_0_AccessType ro
#define TransmitPDO5CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO5CommunicationParameter_0_PDOMapping 0
#define TransmitPDO5CommunicationParameter_1 1 // COB-ID
#define TransmitPDO5CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO5CommunicationParameter_1_DataType;
#define TransmitPDO5CommunicationParameter_1_AccessType rw
#define TransmitPDO5CommunicationParameter_1_DefaultValue 0xC0000000
#define TransmitPDO5CommunicationParameter_1_PDOMapping 0
#define TransmitPDO5CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO5CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO5CommunicationParameter_2_DataType;
#define TransmitPDO5CommunicationParameter_2_AccessType rw
#define TransmitPDO5CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO5CommunicationParameter_2_PDOMapping 0
#define TransmitPDO5CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO5CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO5CommunicationParameter_3_DataType;
#define TransmitPDO5CommunicationParameter_3_AccessType rw
#define TransmitPDO5CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO5CommunicationParameter_3_PDOMapping 0
#define TransmitPDO5CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO5CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO5CommunicationParameter_4_DataType;
#define TransmitPDO5CommunicationParameter_4_AccessType rw
#define TransmitPDO5CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO5CommunicationParameter_4_PDOMapping 0
#define TransmitPDO5CommunicationParameter_5 5 // Event Timer
#define TransmitPDO5CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO5CommunicationParameter_5_DataType;
#define TransmitPDO5CommunicationParameter_5_AccessType rw
#define TransmitPDO5CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO5CommunicationParameter_5_PDOMapping 0
#define TransmitPDO6CommunicationParameter 0x1805
#define TransmitPDO6CommunicationParameter_ObjectType 0x9
#define TransmitPDO6CommunicationParameter_SubNumber 0x06
#define TransmitPDO6CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO6CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO6CommunicationParameter_0_DataType;
#define TransmitPDO6CommunicationParameter_0_AccessType ro
#define TransmitPDO6CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO6CommunicationParameter_0_PDOMapping 0
#define TransmitPDO6CommunicationParameter_1 1 // COB-ID
#define TransmitPDO6CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO6CommunicationParameter_1_DataType;
#define TransmitPDO6CommunicationParameter_1_AccessType rw
#define TransmitPDO6CommunicationParameter_1_DefaultValue 0xC0000000
#define TransmitPDO6CommunicationParameter_1_PDOMapping 0
#define TransmitPDO6CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO6CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO6CommunicationParameter_2_DataType;
#define TransmitPDO6CommunicationParameter_2_AccessType rw
#define TransmitPDO6CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO6CommunicationParameter_2_PDOMapping 0
#define TransmitPDO6CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO6CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO6CommunicationParameter_3_DataType;
#define TransmitPDO6CommunicationParameter_3_AccessType rw
#define TransmitPDO6CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO6CommunicationParameter_3_PDOMapping 0
#define TransmitPDO6CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO6CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO6CommunicationParameter_4_DataType;
#define TransmitPDO6CommunicationParameter_4_AccessType rw
#define TransmitPDO6CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO6CommunicationParameter_4_PDOMapping 0
#define TransmitPDO6CommunicationParameter_5 5 // Event Timer
#define TransmitPDO6CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO6CommunicationParameter_5_DataType;
#define TransmitPDO6CommunicationParameter_5_AccessType rw
#define TransmitPDO6CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO6CommunicationParameter_5_PDOMapping 0
#define TransmitPDO7CommunicationParameter 0x1806
#define TransmitPDO7CommunicationParameter_ObjectType 0x9
#define TransmitPDO7CommunicationParameter_SubNumber 0x06
#define TransmitPDO7CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO7CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO7CommunicationParameter_0_DataType;
#define TransmitPDO7CommunicationParameter_0_AccessType ro
#define TransmitPDO7CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO7CommunicationParameter_0_PDOMapping 0
#define TransmitPDO7CommunicationParameter_1 1 // COB-ID
#define TransmitPDO7CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO7CommunicationParameter_1_DataType;
#define TransmitPDO7CommunicationParameter_1_AccessType rw
#define TransmitPDO7CommunicationParameter_1_DefaultValue 0xC0000000
#define TransmitPDO7CommunicationParameter_1_PDOMapping 0
#define TransmitPDO7CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO7CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO7CommunicationParameter_2_DataType;
#define TransmitPDO7CommunicationParameter_2_AccessType rw
#define TransmitPDO7CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO7CommunicationParameter_2_PDOMapping 0
#define TransmitPDO7CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO7CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO7CommunicationParameter_3_DataType;
#define TransmitPDO7CommunicationParameter_3_AccessType rw
#define TransmitPDO7CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO7CommunicationParameter_3_PDOMapping 0
#define TransmitPDO7CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO7CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO7CommunicationParameter_4_DataType;
#define TransmitPDO7CommunicationParameter_4_AccessType rw
#define TransmitPDO7CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO7CommunicationParameter_4_PDOMapping 0
#define TransmitPDO7CommunicationParameter_5 5 // Event Timer
#define TransmitPDO7CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO7CommunicationParameter_5_DataType;
#define TransmitPDO7CommunicationParameter_5_AccessType rw
#define TransmitPDO7CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO7CommunicationParameter_5_PDOMapping 0
#define TransmitPDO8CommunicationParameter 0x1807
#define TransmitPDO8CommunicationParameter_ObjectType 0x9
#define TransmitPDO8CommunicationParameter_SubNumber 0x06
#define TransmitPDO8CommunicationParameter_0 0 // Highest sub-index supported
#define TransmitPDO8CommunicationParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO8CommunicationParameter_0_DataType;
#define TransmitPDO8CommunicationParameter_0_AccessType ro
#define TransmitPDO8CommunicationParameter_0_DefaultValue 0x05
#define TransmitPDO8CommunicationParameter_0_PDOMapping 0
#define TransmitPDO8CommunicationParameter_1 1 // COB-ID
#define TransmitPDO8CommunicationParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO8CommunicationParameter_1_DataType;
#define TransmitPDO8CommunicationParameter_1_AccessType rw
#define TransmitPDO8CommunicationParameter_1_DefaultValue 0xC0000000
#define TransmitPDO8CommunicationParameter_1_PDOMapping 0
#define TransmitPDO8CommunicationParameter_2 2 // Transmission Type
#define TransmitPDO8CommunicationParameter_2_ObjectType 0x7
typedef uint8_t TransmitPDO8CommunicationParameter_2_DataType;
#define TransmitPDO8CommunicationParameter_2_AccessType rw
#define TransmitPDO8CommunicationParameter_2_DefaultValue 0xFF
#define TransmitPDO8CommunicationParameter_2_PDOMapping 0
#define TransmitPDO8CommunicationParameter_3 3 // Inhibit Time
#define TransmitPDO8CommunicationParameter_3_ObjectType 0x7
typedef uint16_t TransmitPDO8CommunicationParameter_3_DataType;
#define TransmitPDO8CommunicationParameter_3_AccessType rw
#define TransmitPDO8CommunicationParameter_3_DefaultValue 0x0064
#define TransmitPDO8CommunicationParameter_3_PDOMapping 0
#define TransmitPDO8CommunicationParameter_4 4 // Compatibility Entry
#define TransmitPDO8CommunicationParameter_4_ObjectType 0x7
typedef uint8_t TransmitPDO8CommunicationParameter_4_DataType;
#define TransmitPDO8CommunicationParameter_4_AccessType rw
#define TransmitPDO8CommunicationParameter_4_DefaultValue 0x00
#define TransmitPDO8CommunicationParameter_4_PDOMapping 0
#define TransmitPDO8CommunicationParameter_5 5 // Event Timer
#define TransmitPDO8CommunicationParameter_5_ObjectType 0x7
typedef uint16_t TransmitPDO8CommunicationParameter_5_DataType;
#define TransmitPDO8CommunicationParameter_5_AccessType rw
#define TransmitPDO8CommunicationParameter_5_DefaultValue 0x0000
#define TransmitPDO8CommunicationParameter_5_PDOMapping 0
#define TransmitPDO1MappingParameter 0x1A00
#define TransmitPDO1MappingParameter_ObjectType 0x9
#define TransmitPDO1MappingParameter_SubNumber 0x09
#define TransmitPDO1MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO1MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO1MappingParameter_0_DataType;
#define TransmitPDO1MappingParameter_0_AccessType rw
#define TransmitPDO1MappingParameter_0_DefaultValue 0x02
#define TransmitPDO1MappingParameter_0_PDOMapping 0
#define TransmitPDO1MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO1MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_1_DataType;
#define TransmitPDO1MappingParameter_1_AccessType rw
#define TransmitPDO1MappingParameter_1_DefaultValue 0x60410010
#define TransmitPDO1MappingParameter_1_PDOMapping 0
#define TransmitPDO1MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO1MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_2_DataType;
#define TransmitPDO1MappingParameter_2_AccessType rw
#define TransmitPDO1MappingParameter_2_DefaultValue 0x60610008
#define TransmitPDO1MappingParameter_2_PDOMapping 0
#define TransmitPDO1MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO1MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_3_DataType;
#define TransmitPDO1MappingParameter_3_AccessType rw
#define TransmitPDO1MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_3_PDOMapping 0
#define TransmitPDO1MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO1MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_4_DataType;
#define TransmitPDO1MappingParameter_4_AccessType rw
#define TransmitPDO1MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_4_PDOMapping 0
#define TransmitPDO1MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO1MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_5_DataType;
#define TransmitPDO1MappingParameter_5_AccessType rw
#define TransmitPDO1MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_5_PDOMapping 0
#define TransmitPDO1MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO1MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_6_DataType;
#define TransmitPDO1MappingParameter_6_AccessType rw
#define TransmitPDO1MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_6_PDOMapping 0
#define TransmitPDO1MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO1MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_7_DataType;
#define TransmitPDO1MappingParameter_7_AccessType rw
#define TransmitPDO1MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_7_PDOMapping 0
#define TransmitPDO1MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO1MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO1MappingParameter_8_DataType;
#define TransmitPDO1MappingParameter_8_AccessType rw
#define TransmitPDO1MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO1MappingParameter_8_PDOMapping 0
#define TransmitPDO2MappingParameter 0x1A01
#define TransmitPDO2MappingParameter_ObjectType 0x9
#define TransmitPDO2MappingParameter_SubNumber 0x09
#define TransmitPDO2MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO2MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO2MappingParameter_0_DataType;
#define TransmitPDO2MappingParameter_0_AccessType rw
#define TransmitPDO2MappingParameter_0_DefaultValue 0x01
#define TransmitPDO2MappingParameter_0_PDOMapping 0
#define TransmitPDO2MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO2MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_1_DataType;
#define TransmitPDO2MappingParameter_1_AccessType rw
#define TransmitPDO2MappingParameter_1_DefaultValue 0x60640020
#define TransmitPDO2MappingParameter_1_PDOMapping 0
#define TransmitPDO2MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO2MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_2_DataType;
#define TransmitPDO2MappingParameter_2_AccessType rw
#define TransmitPDO2MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_2_PDOMapping 0
#define TransmitPDO2MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO2MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_3_DataType;
#define TransmitPDO2MappingParameter_3_AccessType rw
#define TransmitPDO2MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_3_PDOMapping 0
#define TransmitPDO2MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO2MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_4_DataType;
#define TransmitPDO2MappingParameter_4_AccessType rw
#define TransmitPDO2MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_4_PDOMapping 0
#define TransmitPDO2MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO2MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_5_DataType;
#define TransmitPDO2MappingParameter_5_AccessType rw
#define TransmitPDO2MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_5_PDOMapping 0
#define TransmitPDO2MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO2MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_6_DataType;
#define TransmitPDO2MappingParameter_6_AccessType rw
#define TransmitPDO2MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_6_PDOMapping 0
#define TransmitPDO2MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO2MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_7_DataType;
#define TransmitPDO2MappingParameter_7_AccessType rw
#define TransmitPDO2MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_7_PDOMapping 0
#define TransmitPDO2MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO2MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO2MappingParameter_8_DataType;
#define TransmitPDO2MappingParameter_8_AccessType rw
#define TransmitPDO2MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO2MappingParameter_8_PDOMapping 0
#define TransmitPDO3MappingParameter 0x1A02
#define TransmitPDO3MappingParameter_ObjectType 0x9
#define TransmitPDO3MappingParameter_SubNumber 0x09
#define TransmitPDO3MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO3MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO3MappingParameter_0_DataType;
#define TransmitPDO3MappingParameter_0_AccessType rw
#define TransmitPDO3MappingParameter_0_DefaultValue 0x01
#define TransmitPDO3MappingParameter_0_PDOMapping 0
#define TransmitPDO3MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO3MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_1_DataType;
#define TransmitPDO3MappingParameter_1_AccessType rw
#define TransmitPDO3MappingParameter_1_DefaultValue 0x60440010
#define TransmitPDO3MappingParameter_1_PDOMapping 0
#define TransmitPDO3MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO3MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_2_DataType;
#define TransmitPDO3MappingParameter_2_AccessType rw
#define TransmitPDO3MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_2_PDOMapping 0
#define TransmitPDO3MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO3MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_3_DataType;
#define TransmitPDO3MappingParameter_3_AccessType rw
#define TransmitPDO3MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_3_PDOMapping 0
#define TransmitPDO3MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO3MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_4_DataType;
#define TransmitPDO3MappingParameter_4_AccessType rw
#define TransmitPDO3MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_4_PDOMapping 0
#define TransmitPDO3MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO3MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_5_DataType;
#define TransmitPDO3MappingParameter_5_AccessType rw
#define TransmitPDO3MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_5_PDOMapping 0
#define TransmitPDO3MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO3MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_6_DataType;
#define TransmitPDO3MappingParameter_6_AccessType rw
#define TransmitPDO3MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_6_PDOMapping 0
#define TransmitPDO3MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO3MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_7_DataType;
#define TransmitPDO3MappingParameter_7_AccessType rw
#define TransmitPDO3MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_7_PDOMapping 0
#define TransmitPDO3MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO3MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO3MappingParameter_8_DataType;
#define TransmitPDO3MappingParameter_8_AccessType rw
#define TransmitPDO3MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO3MappingParameter_8_PDOMapping 0
#define TransmitPDO4MappingParameter 0x1A03
#define TransmitPDO4MappingParameter_ObjectType 0x9
#define TransmitPDO4MappingParameter_SubNumber 0x09
#define TransmitPDO4MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO4MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO4MappingParameter_0_DataType;
#define TransmitPDO4MappingParameter_0_AccessType rw
#define TransmitPDO4MappingParameter_0_DefaultValue 0x01
#define TransmitPDO4MappingParameter_0_PDOMapping 0
#define TransmitPDO4MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO4MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_1_DataType;
#define TransmitPDO4MappingParameter_1_AccessType rw
#define TransmitPDO4MappingParameter_1_DefaultValue 0x60FD0020
#define TransmitPDO4MappingParameter_1_PDOMapping 0
#define TransmitPDO4MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO4MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_2_DataType;
#define TransmitPDO4MappingParameter_2_AccessType rw
#define TransmitPDO4MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_2_PDOMapping 0
#define TransmitPDO4MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO4MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_3_DataType;
#define TransmitPDO4MappingParameter_3_AccessType rw
#define TransmitPDO4MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_3_PDOMapping 0
#define TransmitPDO4MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO4MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_4_DataType;
#define TransmitPDO4MappingParameter_4_AccessType rw
#define TransmitPDO4MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_4_PDOMapping 0
#define TransmitPDO4MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO4MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_5_DataType;
#define TransmitPDO4MappingParameter_5_AccessType rw
#define TransmitPDO4MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_5_PDOMapping 0
#define TransmitPDO4MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO4MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_6_DataType;
#define TransmitPDO4MappingParameter_6_AccessType rw
#define TransmitPDO4MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_6_PDOMapping 0
#define TransmitPDO4MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO4MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_7_DataType;
#define TransmitPDO4MappingParameter_7_AccessType rw
#define TransmitPDO4MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_7_PDOMapping 0
#define TransmitPDO4MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO4MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO4MappingParameter_8_DataType;
#define TransmitPDO4MappingParameter_8_AccessType rw
#define TransmitPDO4MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO4MappingParameter_8_PDOMapping 0
#define TransmitPDO5MappingParameter 0x1A04
#define TransmitPDO5MappingParameter_ObjectType 0x9
#define TransmitPDO5MappingParameter_SubNumber 0x09
#define TransmitPDO5MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO5MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO5MappingParameter_0_DataType;
#define TransmitPDO5MappingParameter_0_AccessType rw
#define TransmitPDO5MappingParameter_0_DefaultValue 0x00
#define TransmitPDO5MappingParameter_0_PDOMapping 0
#define TransmitPDO5MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO5MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_1_DataType;
#define TransmitPDO5MappingParameter_1_AccessType rw
#define TransmitPDO5MappingParameter_1_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_1_PDOMapping 0
#define TransmitPDO5MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO5MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_2_DataType;
#define TransmitPDO5MappingParameter_2_AccessType rw
#define TransmitPDO5MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_2_PDOMapping 0
#define TransmitPDO5MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO5MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_3_DataType;
#define TransmitPDO5MappingParameter_3_AccessType rw
#define TransmitPDO5MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_3_PDOMapping 0
#define TransmitPDO5MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO5MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_4_DataType;
#define TransmitPDO5MappingParameter_4_AccessType rw
#define TransmitPDO5MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_4_PDOMapping 0
#define TransmitPDO5MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO5MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_5_DataType;
#define TransmitPDO5MappingParameter_5_AccessType rw
#define TransmitPDO5MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_5_PDOMapping 0
#define TransmitPDO5MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO5MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_6_DataType;
#define TransmitPDO5MappingParameter_6_AccessType rw
#define TransmitPDO5MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_6_PDOMapping 0
#define TransmitPDO5MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO5MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_7_DataType;
#define TransmitPDO5MappingParameter_7_AccessType rw
#define TransmitPDO5MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_7_PDOMapping 0
#define TransmitPDO5MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO5MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO5MappingParameter_8_DataType;
#define TransmitPDO5MappingParameter_8_AccessType rw
#define TransmitPDO5MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO5MappingParameter_8_PDOMapping 0
#define TransmitPDO6MappingParameter 0x1A05
#define TransmitPDO6MappingParameter_ObjectType 0x9
#define TransmitPDO6MappingParameter_SubNumber 0x09
#define TransmitPDO6MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO6MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO6MappingParameter_0_DataType;
#define TransmitPDO6MappingParameter_0_AccessType rw
#define TransmitPDO6MappingParameter_0_DefaultValue 0x00
#define TransmitPDO6MappingParameter_0_PDOMapping 0
#define TransmitPDO6MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO6MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_1_DataType;
#define TransmitPDO6MappingParameter_1_AccessType rw
#define TransmitPDO6MappingParameter_1_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_1_PDOMapping 0
#define TransmitPDO6MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO6MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_2_DataType;
#define TransmitPDO6MappingParameter_2_AccessType rw
#define TransmitPDO6MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_2_PDOMapping 0
#define TransmitPDO6MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO6MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_3_DataType;
#define TransmitPDO6MappingParameter_3_AccessType rw
#define TransmitPDO6MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_3_PDOMapping 0
#define TransmitPDO6MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO6MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_4_DataType;
#define TransmitPDO6MappingParameter_4_AccessType rw
#define TransmitPDO6MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_4_PDOMapping 0
#define TransmitPDO6MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO6MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_5_DataType;
#define TransmitPDO6MappingParameter_5_AccessType rw
#define TransmitPDO6MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_5_PDOMapping 0
#define TransmitPDO6MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO6MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_6_DataType;
#define TransmitPDO6MappingParameter_6_AccessType rw
#define TransmitPDO6MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_6_PDOMapping 0
#define TransmitPDO6MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO6MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_7_DataType;
#define TransmitPDO6MappingParameter_7_AccessType rw
#define TransmitPDO6MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_7_PDOMapping 0
#define TransmitPDO6MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO6MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO6MappingParameter_8_DataType;
#define TransmitPDO6MappingParameter_8_AccessType rw
#define TransmitPDO6MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO6MappingParameter_8_PDOMapping 0
#define TransmitPDO7MappingParameter 0x1A06
#define TransmitPDO7MappingParameter_ObjectType 0x9
#define TransmitPDO7MappingParameter_SubNumber 0x09
#define TransmitPDO7MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO7MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO7MappingParameter_0_DataType;
#define TransmitPDO7MappingParameter_0_AccessType rw
#define TransmitPDO7MappingParameter_0_DefaultValue 0x00
#define TransmitPDO7MappingParameter_0_PDOMapping 0
#define TransmitPDO7MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO7MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_1_DataType;
#define TransmitPDO7MappingParameter_1_AccessType rw
#define TransmitPDO7MappingParameter_1_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_1_PDOMapping 0
#define TransmitPDO7MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO7MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_2_DataType;
#define TransmitPDO7MappingParameter_2_AccessType rw
#define TransmitPDO7MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_2_PDOMapping 0
#define TransmitPDO7MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO7MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_3_DataType;
#define TransmitPDO7MappingParameter_3_AccessType rw
#define TransmitPDO7MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_3_PDOMapping 0
#define TransmitPDO7MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO7MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_4_DataType;
#define TransmitPDO7MappingParameter_4_AccessType rw
#define TransmitPDO7MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_4_PDOMapping 0
#define TransmitPDO7MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO7MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_5_DataType;
#define TransmitPDO7MappingParameter_5_AccessType rw
#define TransmitPDO7MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_5_PDOMapping 0
#define TransmitPDO7MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO7MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_6_DataType;
#define TransmitPDO7MappingParameter_6_AccessType rw
#define TransmitPDO7MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_6_PDOMapping 0
#define TransmitPDO7MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO7MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_7_DataType;
#define TransmitPDO7MappingParameter_7_AccessType rw
#define TransmitPDO7MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_7_PDOMapping 0
#define TransmitPDO7MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO7MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO7MappingParameter_8_DataType;
#define TransmitPDO7MappingParameter_8_AccessType rw
#define TransmitPDO7MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO7MappingParameter_8_PDOMapping 0
#define TransmitPDO8MappingParameter 0x1A07
#define TransmitPDO8MappingParameter_ObjectType 0x9
#define TransmitPDO8MappingParameter_SubNumber 0x09
#define TransmitPDO8MappingParameter_0 0 // Highest sub-index supported
#define TransmitPDO8MappingParameter_0_ObjectType 0x7
typedef uint8_t TransmitPDO8MappingParameter_0_DataType;
#define TransmitPDO8MappingParameter_0_AccessType rw
#define TransmitPDO8MappingParameter_0_DefaultValue 0x00
#define TransmitPDO8MappingParameter_0_PDOMapping 0
#define TransmitPDO8MappingParameter_1 1 // 1st object to be mapped
#define TransmitPDO8MappingParameter_1_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_1_DataType;
#define TransmitPDO8MappingParameter_1_AccessType rw
#define TransmitPDO8MappingParameter_1_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_1_PDOMapping 0
#define TransmitPDO8MappingParameter_2 2 // 2nd object to be mapped
#define TransmitPDO8MappingParameter_2_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_2_DataType;
#define TransmitPDO8MappingParameter_2_AccessType rw
#define TransmitPDO8MappingParameter_2_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_2_PDOMapping 0
#define TransmitPDO8MappingParameter_3 3 // 3rd object to be mapped
#define TransmitPDO8MappingParameter_3_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_3_DataType;
#define TransmitPDO8MappingParameter_3_AccessType rw
#define TransmitPDO8MappingParameter_3_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_3_PDOMapping 0
#define TransmitPDO8MappingParameter_4 4 // 4th object to be mapped
#define TransmitPDO8MappingParameter_4_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_4_DataType;
#define TransmitPDO8MappingParameter_4_AccessType rw
#define TransmitPDO8MappingParameter_4_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_4_PDOMapping 0
#define TransmitPDO8MappingParameter_5 5 // 5th object to be mapped
#define TransmitPDO8MappingParameter_5_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_5_DataType;
#define TransmitPDO8MappingParameter_5_AccessType rw
#define TransmitPDO8MappingParameter_5_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_5_PDOMapping 0
#define TransmitPDO8MappingParameter_6 6 // 6th object to be mapped
#define TransmitPDO8MappingParameter_6_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_6_DataType;
#define TransmitPDO8MappingParameter_6_AccessType rw
#define TransmitPDO8MappingParameter_6_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_6_PDOMapping 0
#define TransmitPDO8MappingParameter_7 7 // 7th object to be mapped
#define TransmitPDO8MappingParameter_7_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_7_DataType;
#define TransmitPDO8MappingParameter_7_AccessType rw
#define TransmitPDO8MappingParameter_7_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_7_PDOMapping 0
#define TransmitPDO8MappingParameter_8 8 // 8th object to be mapped
#define TransmitPDO8MappingParameter_8_ObjectType 0x7
typedef uint32_t TransmitPDO8MappingParameter_8_DataType;
#define TransmitPDO8MappingParameter_8_AccessType rw
#define TransmitPDO8MappingParameter_8_DefaultValue 0x00000000
#define TransmitPDO8MappingParameter_8_PDOMapping 0
#define Programdata 0x1F50
#define Programdata_ObjectType 0x8
#define Programdata_SubNumber 0x04
#define Programdata_0 0 // Highest sub-index supported
#define Programdata_0_ObjectType 0x7
typedef uint8_t Programdata_0_DataType;
#define Programdata_0_AccessType ro
#define Programdata_0_DefaultValue 0x03
#define Programdata_0_PDOMapping 0
#define Programdata_0_ObjFlags 1
#define Programdata_1 1 // Program data bootloader/firmware
#define Programdata_1_ObjectType 0x7
typedef uint8_t Programdata_1_DataType;
#define Programdata_1_AccessType rw
#define Programdata_1_PDOMapping 0
#define Programdata_1_ObjFlags 1
#define Programdata_2 2 // Program data NanoJ
#define Programdata_2_ObjectType 0x7
typedef uint8_t Programdata_2_DataType;
#define Programdata_2_AccessType rw
#define Programdata_2_PDOMapping 0
#define Programdata_2_ObjFlags 1
#define Programdata_3 3 // Program data DataFlash
#define Programdata_3_ObjectType 0x7
typedef uint8_t Programdata_3_DataType;
#define Programdata_3_AccessType rw
#define Programdata_3_PDOMapping 0
#define Programdata_3_ObjFlags 1
#define Programcontrol 0x1F51
#define Programcontrol_ObjectType 0x8
#define Programcontrol_SubNumber 0x04
#define Programcontrol_0 0 // Highest sub-index supported
#define Programcontrol_0_ObjectType 0x7
typedef uint8_t Programcontrol_0_DataType;
#define Programcontrol_0_AccessType ro
#define Programcontrol_0_DefaultValue 0x03
#define Programcontrol_0_PDOMapping 0
#define Programcontrol_0_ObjFlags 1
#define Programcontrol_1 1 // Program control bootloader/firmware
#define Programcontrol_1_ObjectType 0x7
typedef uint8_t Programcontrol_1_DataType;
#define Programcontrol_1_AccessType rw
#define Programcontrol_1_DefaultValue 0x00
#define Programcontrol_1_PDOMapping 0
#define Programcontrol_1_ObjFlags 1
#define Programcontrol_2 2 // Program control NanoJ
#define Programcontrol_2_ObjectType 0x7
typedef uint8_t Programcontrol_2_DataType;
#define Programcontrol_2_AccessType rw
#define Programcontrol_2_DefaultValue 0x00
#define Programcontrol_2_PDOMapping 0
#define Programcontrol_2_ObjFlags 1
#define Programcontrol_3 3 // Program control DataFlash
#define Programcontrol_3_ObjectType 0x7
typedef uint8_t Programcontrol_3_DataType;
#define Programcontrol_3_AccessType rw
#define Programcontrol_3_DefaultValue 0x00
#define Programcontrol_3_PDOMapping 0
#define Programcontrol_3_ObjFlags 1
#define Programstatus 0x1F57
#define Programstatus_ObjectType 0x8
#define Programstatus_SubNumber 0x04
#define Programstatus_0 0 // Highest sub-index supported
#define Programstatus_0_ObjectType 0x7
typedef uint8_t Programstatus_0_DataType;
#define Programstatus_0_AccessType ro
#define Programstatus_0_DefaultValue 0x03
#define Programstatus_0_PDOMapping 0
#define Programstatus_0_ObjFlags 1
#define Programstatus_1 1 // Program status bootloader/firmware
#define Programstatus_1_ObjectType 0x7
typedef uint32_t Programstatus_1_DataType;
#define Programstatus_1_AccessType ro
#define Programstatus_1_DefaultValue 0x00000000
#define Programstatus_1_PDOMapping 0
#define Programstatus_1_ObjFlags 1
#define Programstatus_2 2 // Program status NanoJ
#define Programstatus_2_ObjectType 0x7
typedef uint32_t Programstatus_2_DataType;
#define Programstatus_2_AccessType ro
#define Programstatus_2_DefaultValue 0x00000000
#define Programstatus_2_PDOMapping 0
#define Programstatus_2_ObjFlags 1
#define Programstatus_3 3 // Program status DataFlash
#define Programstatus_3_ObjectType 0x7
typedef uint32_t Programstatus_3_DataType;
#define Programstatus_3_AccessType ro
#define Programstatus_3_DefaultValue 0x00000000
#define Programstatus_3_PDOMapping 0
#define Programstatus_3_ObjFlags 1
#define Errorcode 0x603F
#define Errorcode_ObjectType 0x7
typedef uint16_t Errorcode_DataType;
#define Errorcode_AccessType ro
#define Errorcode_PDOMapping 1
#define Errorcode_ObjFlags 1
#define Controlword 0x6040
#define Controlword_ObjectType 0x7
typedef uint16_t Controlword_DataType;
#define Controlword_AccessType rww
#define Controlword_DefaultValue 0x0000
#define Controlword_PDOMapping 1
#define Statusword 0x6041
#define Statusword_ObjectType 0x7
typedef uint16_t Statusword_DataType;
#define Statusword_AccessType ro
#define Statusword_PDOMapping 1
#define Statusword_ObjFlags 1
#define vltargetvelocity 0x6042
#define vltargetvelocity_ObjectType 0x7
typedef int16_t vltargetvelocity_DataType;
#define vltargetvelocity_AccessType rww
#define vltargetvelocity_DefaultValue 200
#define vltargetvelocity_PDOMapping 1
#define vlvelocitydemand 0x6043
#define vlvelocitydemand_ObjectType 0x7
typedef int16_t vlvelocitydemand_DataType;
#define vlvelocitydemand_AccessType ro
#define vlvelocitydemand_DefaultValue 0x0000
#define vlvelocitydemand_PDOMapping 1
#define vlvelocitydemand_ObjFlags 1
#define vlvelocityactualvalue 0x6044
#define vlvelocityactualvalue_ObjectType 0x7
typedef int16_t vlvelocityactualvalue_DataType;
#define vlvelocityactualvalue_AccessType ro
#define vlvelocityactualvalue_DefaultValue 0x0000
#define vlvelocityactualvalue_PDOMapping 1
#define vlvelocityactualvalue_ObjFlags 1
#define vlvelocityminmaxamount 0x6046
#define vlvelocityminmaxamount_ObjectType 0x8
#define vlvelocityminmaxamount_SubNumber 0x03
#define vlvelocityminmaxamount_0 0 // Highest sub-index supported
#define vlvelocityminmaxamount_0_ObjectType 0x7
typedef uint8_t vlvelocityminmaxamount_0_DataType;
#define vlvelocityminmaxamount_0_AccessType const
#define vlvelocityminmaxamount_0_DefaultValue 2
#define vlvelocityminmaxamount_0_PDOMapping 0
#define vlvelocityminmaxamount_1 1 // MinAmount
#define vlvelocityminmaxamount_1_ObjectType 0x7
typedef uint32_t vlvelocityminmaxamount_1_DataType;
#define vlvelocityminmaxamount_1_AccessType rww
#define vlvelocityminmaxamount_1_DefaultValue 0
#define vlvelocityminmaxamount_1_PDOMapping 1
#define vlvelocityminmaxamount_2 2 // MaxAmount
#define vlvelocityminmaxamount_2_ObjectType 0x7
typedef uint32_t vlvelocityminmaxamount_2_DataType;
#define vlvelocityminmaxamount_2_AccessType rww
#define vlvelocityminmaxamount_2_DefaultValue 20000
#define vlvelocityminmaxamount_2_PDOMapping 1
#define vlvelocityacceleration 0x6048
#define vlvelocityacceleration_ObjectType 0x9
#define vlvelocityacceleration_SubNumber 0x03
#define vlvelocityacceleration_0 0 // Highest sub-index supported
#define vlvelocityacceleration_0_ObjectType 0x7
typedef uint8_t vlvelocityacceleration_0_DataType;
#define vlvelocityacceleration_0_AccessType const
#define vlvelocityacceleration_0_DefaultValue 2
#define vlvelocityacceleration_0_PDOMapping 0
#define vlvelocityacceleration_1 1 // DeltaSpeed
#define vlvelocityacceleration_1_ObjectType 0x7
typedef uint32_t vlvelocityacceleration_1_DataType;
#define vlvelocityacceleration_1_AccessType rww
#define vlvelocityacceleration_1_DefaultValue 500
#define vlvelocityacceleration_1_PDOMapping 1
#define vlvelocityacceleration_2 2 // DeltaTime
#define vlvelocityacceleration_2_ObjectType 0x7
typedef uint16_t vlvelocityacceleration_2_DataType;
#define vlvelocityacceleration_2_AccessType rww
#define vlvelocityacceleration_2_DefaultValue 1
#define vlvelocityacceleration_2_PDOMapping 1
#define vlvelocitydeceleration 0x6049
#define vlvelocitydeceleration_ObjectType 0x9
#define vlvelocitydeceleration_SubNumber 0x03
#define vlvelocitydeceleration_0 0 // Highest sub-index supported
#define vlvelocitydeceleration_0_ObjectType 0x7
typedef uint8_t vlvelocitydeceleration_0_DataType;
#define vlvelocitydeceleration_0_AccessType const
#define vlvelocitydeceleration_0_DefaultValue 2
#define vlvelocitydeceleration_0_PDOMapping 0
#define vlvelocitydeceleration_1 1 // DeltaSpeed
#define vlvelocitydeceleration_1_ObjectType 0x7
typedef uint32_t vlvelocitydeceleration_1_DataType;
#define vlvelocitydeceleration_1_AccessType rww
#define vlvelocitydeceleration_1_DefaultValue 500
#define vlvelocitydeceleration_1_PDOMapping 1
#define vlvelocitydeceleration_2 2 // DeltaTime
#define vlvelocitydeceleration_2_ObjectType 0x7
typedef uint16_t vlvelocitydeceleration_2_DataType;
#define vlvelocitydeceleration_2_AccessType rww
#define vlvelocitydeceleration_2_DefaultValue 1
#define vlvelocitydeceleration_2_PDOMapping 1
#define vlvelocityquickstop 0x604A
#define vlvelocityquickstop_ObjectType 0x9
#define vlvelocityquickstop_SubNumber 0x03
#define vlvelocityquickstop_0 0 // Highest sub-index supported
#define vlvelocityquickstop_0_ObjectType 0x7
typedef uint8_t vlvelocityquickstop_0_DataType;
#define vlvelocityquickstop_0_AccessType const
#define vlvelocityquickstop_0_DefaultValue 2
#define vlvelocityquickstop_0_PDOMapping 0
#define vlvelocityquickstop_1 1 // DeltaSpeed
#define vlvelocityquickstop_1_ObjectType 0x7
typedef uint32_t vlvelocityquickstop_1_DataType;
#define vlvelocityquickstop_1_AccessType rww
#define vlvelocityquickstop_1_DefaultValue 5000
#define vlvelocityquickstop_1_PDOMapping 1
#define vlvelocityquickstop_2 2 // DeltaTime
#define vlvelocityquickstop_2_ObjectType 0x7
typedef uint16_t vlvelocityquickstop_2_DataType;
#define vlvelocityquickstop_2_AccessType rww
#define vlvelocityquickstop_2_DefaultValue 1
#define vlvelocityquickstop_2_PDOMapping 1
#define vldimensionfactor 0x604C
#define vldimensionfactor_ObjectType 0x8
#define vldimensionfactor_SubNumber 0x03
#define vldimensionfactor_0 0 // Highest sub-index supported
#define vldimensionfactor_0_ObjectType 0x7
typedef uint8_t vldimensionfactor_0_DataType;
#define vldimensionfactor_0_AccessType const
#define vldimensionfactor_0_DefaultValue 2
#define vldimensionfactor_0_PDOMapping 0
#define vldimensionfactor_1 1 // vl dimension factor numerator
#define vldimensionfactor_1_ObjectType 0x7
typedef int32_t vldimensionfactor_1_DataType;
#define vldimensionfactor_1_AccessType rww
#define vldimensionfactor_1_DefaultValue 1
#define vldimensionfactor_1_PDOMapping 1
#define vldimensionfactor_2 2 // vl dimension factor denominator
#define vldimensionfactor_2_ObjectType 0x7
typedef int32_t vldimensionfactor_2_DataType;
#define vldimensionfactor_2_AccessType rww
#define vldimensionfactor_2_DefaultValue 1
#define vldimensionfactor_2_PDOMapping 1
#define Quickstopoptioncode 0x605A
#define Quickstopoptioncode_ObjectType 0x7
typedef int16_t Quickstopoptioncode_DataType;
#define Quickstopoptioncode_AccessType rw
#define Quickstopoptioncode_DefaultValue 1
#define Quickstopoptioncode_PDOMapping 0
#define Shutdownoptioncode 0x605B
#define Shutdownoptioncode_ObjectType 0x7
typedef int16_t Shutdownoptioncode_DataType;
#define Shutdownoptioncode_AccessType rw
#define Shutdownoptioncode_DefaultValue 1
#define Shutdownoptioncode_PDOMapping 0
#define Disableoptioncode 0x605C
#define Disableoptioncode_ObjectType 0x7
typedef int16_t Disableoptioncode_DataType;
#define Disableoptioncode_AccessType rw
#define Disableoptioncode_DefaultValue 1
#define Disableoptioncode_PDOMapping 0
#define Haltoptioncode 0x605D
#define Haltoptioncode_ObjectType 0x7
typedef int16_t Haltoptioncode_DataType;
#define Haltoptioncode_AccessType rw
#define Haltoptioncode_DefaultValue 1
#define Haltoptioncode_PDOMapping 0
#define Faultoptioncode 0x605E
#define Faultoptioncode_ObjectType 0x7
typedef int16_t Faultoptioncode_DataType;
#define Faultoptioncode_AccessType rw
#define Faultoptioncode_DefaultValue 2
#define Faultoptioncode_PDOMapping 0
#define Modesofoperation 0x6060
#define Modesofoperation_ObjectType 0x7
typedef int8_t Modesofoperation_DataType;
#define Modesofoperation_AccessType rww
#define Modesofoperation_DefaultValue 0x00
#define Modesofoperation_PDOMapping 1
#define Modesofoperationdisplay 0x6061
#define Modesofoperationdisplay_ObjectType 0x7
typedef int8_t Modesofoperationdisplay_DataType;
#define Modesofoperationdisplay_AccessType ro
#define Modesofoperationdisplay_DefaultValue 0x00
#define Modesofoperationdisplay_PDOMapping 1
#define Modesofoperationdisplay_ObjFlags 1
#define Positiondemandvalue 0x6062
#define Positiondemandvalue_ObjectType 0x7
typedef int32_t Positiondemandvalue_DataType;
#define Positiondemandvalue_AccessType ro
#define Positiondemandvalue_DefaultValue 0x00000000
#define Positiondemandvalue_PDOMapping 1
#define Positiondemandvalue_ObjFlags 1
#define Positionactualinternalvalue 0x6063
#define Positionactualinternalvalue_ObjectType 0x7
typedef int32_t Positionactualinternalvalue_DataType;
#define Positionactualinternalvalue_AccessType ro
#define Positionactualinternalvalue_PDOMapping 1
#define Positionactualinternalvalue_ObjFlags 1
#define Positionactualvalue 0x6064
#define Positionactualvalue_ObjectType 0x7
typedef int32_t Positionactualvalue_DataType;
#define Positionactualvalue_AccessType ro
#define Positionactualvalue_PDOMapping 1
#define Positionactualvalue_ObjFlags 1
#define Followingerrorwindow 0x6065
#define Followingerrorwindow_ObjectType 0x7
typedef uint32_t Followingerrorwindow_DataType;
#define Followingerrorwindow_AccessType rww
#define Followingerrorwindow_DefaultValue 256
#define Followingerrorwindow_PDOMapping 1
#define Followingerrortimeout 0x6066
#define Followingerrortimeout_ObjectType 0x7
typedef uint16_t Followingerrortimeout_DataType;
#define Followingerrortimeout_AccessType rww
#define Followingerrortimeout_DefaultValue 100
#define Followingerrortimeout_PDOMapping 1
#define Positionwindow 0x6067
#define Positionwindow_ObjectType 0x7
typedef uint32_t Positionwindow_DataType;
#define Positionwindow_AccessType rww
#define Positionwindow_DefaultValue 10
#define Positionwindow_PDOMapping 1
#define Positionwindowtime 0x6068
#define Positionwindowtime_ObjectType 0x7
typedef uint16_t Positionwindowtime_DataType;
#define Positionwindowtime_AccessType rww
#define Positionwindowtime_DefaultValue 100
#define Positionwindowtime_PDOMapping 1
#define Velocitydemandvalue 0x606B
#define Velocitydemandvalue_ObjectType 0x7
typedef int32_t Velocitydemandvalue_DataType;
#define Velocitydemandvalue_AccessType ro
#define Velocitydemandvalue_DefaultValue 0x00000000
#define Velocitydemandvalue_PDOMapping 1
#define Velocitydemandvalue_ObjFlags 1
#define Velocityactualvalue 0x606C
#define Velocityactualvalue_ObjectType 0x7
typedef int32_t Velocityactualvalue_DataType;
#define Velocityactualvalue_AccessType ro
#define Velocityactualvalue_DefaultValue 0x00000000
#define Velocityactualvalue_PDOMapping 1
#define Velocityactualvalue_ObjFlags 1
#define Velocitywindow 0x606D
#define Velocitywindow_ObjectType 0x7
typedef uint16_t Velocitywindow_DataType;
#define Velocitywindow_AccessType rww
#define Velocitywindow_DefaultValue 30
#define Velocitywindow_PDOMapping 1
#define Velocitywindowtime 0x606E
#define Velocitywindowtime_ObjectType 0x7
typedef uint16_t Velocitywindowtime_DataType;
#define Velocitywindowtime_AccessType rww
#define Velocitywindowtime_DefaultValue 0x0000
#define Velocitywindowtime_PDOMapping 1
#define Targettorque 0x6071
#define Targettorque_ObjectType 0x7
typedef int16_t Targettorque_DataType;
#define Targettorque_AccessType rww
#define Targettorque_DefaultValue 0x0000
#define Targettorque_PDOMapping 1
#define Maxtorque 0x6072
#define Maxtorque_ObjectType 0x7
typedef uint16_t Maxtorque_DataType;
#define Maxtorque_AccessType rww
#define Maxtorque_DefaultValue 0x0000
#define Maxtorque_PDOMapping 1
#define Torquedemand 0x6074
#define Torquedemand_ObjectType 0x7
typedef int16_t Torquedemand_DataType;
#define Torquedemand_AccessType ro
#define Torquedemand_DefaultValue 0x0000
#define Torquedemand_PDOMapping 1
#define Torquedemand_ObjFlags 1
#define Torqueactualvalue 0x6077
#define Torqueactualvalue_ObjectType 0x7
typedef int16_t Torqueactualvalue_DataType;
#define Torqueactualvalue_AccessType ro
#define Torqueactualvalue_DefaultValue 0x0000
#define Torqueactualvalue_PDOMapping 1
#define Torqueactualvalue_ObjFlags 1
#define TargetPosition 0x607A
#define TargetPosition_ObjectType 0x7
typedef int32_t TargetPosition_DataType;
#define TargetPosition_AccessType rww
#define TargetPosition_DefaultValue 4000
#define TargetPosition_PDOMapping 1
#define Positionrangelimit 0x607B
#define Positionrangelimit_ObjectType 0x8
#define Positionrangelimit_SubNumber 0x03
#define Positionrangelimit_0 0 // Highest sub-index supported
#define Positionrangelimit_0_ObjectType 0x7
typedef uint8_t Positionrangelimit_0_DataType;
#define Positionrangelimit_0_AccessType const
#define Positionrangelimit_0_DefaultValue 0x02
#define Positionrangelimit_0_PDOMapping 0
#define Positionrangelimit_1 1 // Min position range limit
#define Positionrangelimit_1_ObjectType 0x7
typedef int32_t Positionrangelimit_1_DataType;
#define Positionrangelimit_1_AccessType rww
#define Positionrangelimit_1_DefaultValue 0x00000000
#define Positionrangelimit_1_PDOMapping 1
#define Positionrangelimit_2 2 // Max position range limit
#define Positionrangelimit_2_ObjectType 0x7
typedef int32_t Positionrangelimit_2_DataType;
#define Positionrangelimit_2_AccessType rww
#define Positionrangelimit_2_DefaultValue 0x00000000
#define Positionrangelimit_2_PDOMapping 1
#define Homeoffset 0x607C
#define Homeoffset_ObjectType 0x7
typedef int32_t Homeoffset_DataType;
#define Homeoffset_AccessType rww
#define Homeoffset_DefaultValue 0x00000000
#define Homeoffset_PDOMapping 1
#define Softwarepositionlimit 0x607D
#define Softwarepositionlimit_ObjectType 0x8
#define Softwarepositionlimit_SubNumber 0x03
#define Softwarepositionlimit_0 0 // Highest sub-index supported
#define Softwarepositionlimit_0_ObjectType 0x7
typedef uint8_t Softwarepositionlimit_0_DataType;
#define Softwarepositionlimit_0_AccessType const
#define Softwarepositionlimit_0_DefaultValue 0x02
#define Softwarepositionlimit_0_PDOMapping 0
#define Softwarepositionlimit_1 1 // Min position limit
#define Softwarepositionlimit_1_ObjectType 0x7
typedef int32_t Softwarepositionlimit_1_DataType;
#define Softwarepositionlimit_1_AccessType rww
#define Softwarepositionlimit_1_DefaultValue 0x00000000
#define Softwarepositionlimit_1_PDOMapping 1
#define Softwarepositionlimit_2 2 // Max position limit
#define Softwarepositionlimit_2_ObjectType 0x7
typedef int32_t Softwarepositionlimit_2_DataType;
#define Softwarepositionlimit_2_AccessType rww
#define Softwarepositionlimit_2_DefaultValue 0x00000000
#define Softwarepositionlimit_2_PDOMapping 1
#define Polarity 0x607E
#define Polarity_ObjectType 0x7
typedef uint8_t Polarity_DataType;
#define Polarity_AccessType rw
#define Polarity_DefaultValue 0x00
#define Polarity_PDOMapping 0
#define Profilevelocity 0x6081
#define Profilevelocity_ObjectType 0x7
typedef uint32_t Profilevelocity_DataType;
#define Profilevelocity_AccessType rww
#define Profilevelocity_DefaultValue 500
#define Profilevelocity_PDOMapping 1
#define Endvelocity 0x6082
#define Endvelocity_ObjectType 0x7
typedef uint32_t Endvelocity_DataType;
#define Endvelocity_AccessType rww
#define Endvelocity_DefaultValue 0
#define Endvelocity_PDOMapping 1
#define Profileacceleration 0x6083
#define Profileacceleration_ObjectType 0x7
typedef uint32_t Profileacceleration_DataType;
#define Profileacceleration_AccessType rww
#define Profileacceleration_DefaultValue 500
#define Profileacceleration_PDOMapping 1
#define Profiledeceleration 0x6084
#define Profiledeceleration_ObjectType 0x7
typedef uint32_t Profiledeceleration_DataType;
#define Profiledeceleration_AccessType rww
#define Profiledeceleration_DefaultValue 500
#define Profiledeceleration_PDOMapping 1
#define Quickstopdeceleration 0x6085
#define Quickstopdeceleration_ObjectType 0x7
typedef uint32_t Quickstopdeceleration_DataType;
#define Quickstopdeceleration_AccessType rww
#define Quickstopdeceleration_DefaultValue 5000
#define Quickstopdeceleration_PDOMapping 1
#define Motionprofiletype 0x6086
#define Motionprofiletype_ObjectType 0x7
typedef int16_t Motionprofiletype_DataType;
#define Motionprofiletype_AccessType rww
#define Motionprofiletype_DefaultValue 0x0000
#define Motionprofiletype_PDOMapping 1
#define Torqueslope 0x6087
#define Torqueslope_ObjectType 0x7
typedef uint32_t Torqueslope_DataType;
#define Torqueslope_AccessType rww
#define Torqueslope_DefaultValue 0x00000000
#define Torqueslope_PDOMapping 1
#define Positionencoderresolution 0x608F
#define Positionencoderresolution_ObjectType 0x8
#define Positionencoderresolution_SubNumber 0x03
#define Positionencoderresolution_0 0 // Highest sub-index supported
#define Positionencoderresolution_0_ObjectType 0x7
typedef uint8_t Positionencoderresolution_0_DataType;
#define Positionencoderresolution_0_AccessType const
#define Positionencoderresolution_0_DefaultValue 2
#define Positionencoderresolution_0_PDOMapping 0
#define Positionencoderresolution_1 1 // Encoder increments
#define Positionencoderresolution_1_ObjectType 0x7
typedef uint32_t Positionencoderresolution_1_DataType;
#define Positionencoderresolution_1_AccessType rw
#define Positionencoderresolution_1_DefaultValue 2000
#define Positionencoderresolution_1_PDOMapping 0
#define Positionencoderresolution_2 2 // Motor revolutions
#define Positionencoderresolution_2_ObjectType 0x7
typedef uint32_t Positionencoderresolution_2_DataType;
#define Positionencoderresolution_2_AccessType rw
#define Positionencoderresolution_2_DefaultValue 1
#define Positionencoderresolution_2_PDOMapping 0
#define Gearratio 0x6091
#define Gearratio_ObjectType 0x8
#define Gearratio_SubNumber 0x03
#define Gearratio_0 0 // Highest sub-index supported
#define Gearratio_0_ObjectType 0x7
typedef uint8_t Gearratio_0_DataType;
#define Gearratio_0_AccessType const
#define Gearratio_0_DefaultValue 2
#define Gearratio_0_PDOMapping 0
#define Gearratio_1 1 // Motor revolutions
#define Gearratio_1_ObjectType 0x7
typedef uint32_t Gearratio_1_DataType;
#define Gearratio_1_AccessType rw
#define Gearratio_1_DefaultValue 1
#define Gearratio_1_PDOMapping 0
#define Gearratio_2 2 // Shaft revolutions
#define Gearratio_2_ObjectType 0x7
typedef uint32_t Gearratio_2_DataType;
#define Gearratio_2_AccessType rw
#define Gearratio_2_DefaultValue 1
#define Gearratio_2_PDOMapping 0
#define Feedconstant 0x6092
#define Feedconstant_ObjectType 0x8
#define Feedconstant_SubNumber 0x03
#define Feedconstant_0 0 // Highest sub-index supported
#define Feedconstant_0_ObjectType 0x7
typedef uint8_t Feedconstant_0_DataType;
#define Feedconstant_0_AccessType const
#define Feedconstant_0_DefaultValue 2
#define Feedconstant_0_PDOMapping 0
#define Feedconstant_1 1 // Feed
#define Feedconstant_1_ObjectType 0x7
typedef uint32_t Feedconstant_1_DataType;
#define Feedconstant_1_AccessType rww
#define Feedconstant_1_DefaultValue 1
#define Feedconstant_1_PDOMapping 1
#define Feedconstant_2 2 // Shaft revolutions
#define Feedconstant_2_ObjectType 0x7
typedef uint32_t Feedconstant_2_DataType;
#define Feedconstant_2_AccessType rww
#define Feedconstant_2_DefaultValue 1
#define Feedconstant_2_PDOMapping 1
#define Homingmethod 0x6098
#define Homingmethod_ObjectType 0x7
typedef int8_t Homingmethod_DataType;
#define Homingmethod_AccessType rww
#define Homingmethod_DefaultValue 35
#define Homingmethod_PDOMapping 1
#define Homingspeed 0x6099
#define Homingspeed_ObjectType 0x8
#define Homingspeed_SubNumber 0x03
#define Homingspeed_0 0 // Highest sub-index supported
#define Homingspeed_0_ObjectType 0x7
typedef uint8_t Homingspeed_0_DataType;
#define Homingspeed_0_AccessType const
#define Homingspeed_0_DefaultValue 2
#define Homingspeed_0_PDOMapping 0
#define Homingspeed_1 1 // Speed during search for switch
#define Homingspeed_1_ObjectType 0x7
typedef uint32_t Homingspeed_1_DataType;
#define Homingspeed_1_AccessType rww
#define Homingspeed_1_DefaultValue 50
#define Homingspeed_1_PDOMapping 1
#define Homingspeed_2 2 // Speed during search for zero
#define Homingspeed_2_ObjectType 0x7
typedef uint32_t Homingspeed_2_DataType;
#define Homingspeed_2_AccessType rww
#define Homingspeed_2_DefaultValue 10
#define Homingspeed_2_PDOMapping 1
#define Homingacceleration 0x609A
#define Homingacceleration_ObjectType 0x7
typedef uint32_t Homingacceleration_DataType;
#define Homingacceleration_AccessType rww
#define Homingacceleration_DefaultValue 500
#define Homingacceleration_PDOMapping 1
#define ProfileJerk 0x60A4
#define ProfileJerk_ObjectType 0x8
#define ProfileJerk_SubNumber 0x05
#define ProfileJerk_0 0 // Highest sub-index supported
#define ProfileJerk_0_ObjectType 0x7
typedef uint8_t ProfileJerk_0_DataType;
#define ProfileJerk_0_AccessType const
#define ProfileJerk_0_DefaultValue 4
#define ProfileJerk_0_PDOMapping 0
#define ProfileJerk_1 1 // Begin Acceleration Jerk
#define ProfileJerk_1_ObjectType 0x7
typedef uint32_t ProfileJerk_1_DataType;
#define ProfileJerk_1_AccessType rw
#define ProfileJerk_1_DefaultValue 1000
#define ProfileJerk_1_PDOMapping 0
#define ProfileJerk_2 2 // Begin Deceleration Jerk
#define ProfileJerk_2_ObjectType 0x7
typedef uint32_t ProfileJerk_2_DataType;
#define ProfileJerk_2_AccessType rw
#define ProfileJerk_2_DefaultValue 1000
#define ProfileJerk_2_PDOMapping 0
#define ProfileJerk_3 3 // End Acceleration Jerk
#define ProfileJerk_3_ObjectType 0x7
typedef uint32_t ProfileJerk_3_DataType;
#define ProfileJerk_3_AccessType rw
#define ProfileJerk_3_DefaultValue 1000
#define ProfileJerk_3_PDOMapping 0
#define ProfileJerk_4 4 // End Deceleration Jerk
#define ProfileJerk_4_ObjectType 0x7
typedef uint32_t ProfileJerk_4_DataType;
#define ProfileJerk_4_AccessType rw
#define ProfileJerk_4_DefaultValue 1000
#define ProfileJerk_4_PDOMapping 0
#define Interpolationdatarecord 0x60C1
#define Interpolationdatarecord_ObjectType 0x8
#define Interpolationdatarecord_SubNumber 0x02
#define Interpolationdatarecord_0 0 // Highest sub-index supported
#define Interpolationdatarecord_0_ObjectType 0x7
typedef uint8_t Interpolationdatarecord_0_DataType;
#define Interpolationdatarecord_0_AccessType const
#define Interpolationdatarecord_0_DefaultValue 1
#define Interpolationdatarecord_0_PDOMapping 0
#define Interpolationdatarecord_1 1 // 1st set-point
#define Interpolationdatarecord_1_ObjectType 0x7
typedef int32_t Interpolationdatarecord_1_DataType;
#define Interpolationdatarecord_1_AccessType rww
#define Interpolationdatarecord_1_DefaultValue 0
#define Interpolationdatarecord_1_PDOMapping 1
#define Interpolationtimeperiod 0x60C2
#define Interpolationtimeperiod_ObjectType 0x9
#define Interpolationtimeperiod_SubNumber 0x03
#define Interpolationtimeperiod_0 0 // Highest sub-index supported
#define Interpolationtimeperiod_0_ObjectType 0x7
typedef uint8_t Interpolationtimeperiod_0_DataType;
#define Interpolationtimeperiod_0_AccessType const
#define Interpolationtimeperiod_0_DefaultValue 2
#define Interpolationtimeperiod_0_PDOMapping 0
#define Interpolationtimeperiod_1 1 // Interpolation time period value
#define Interpolationtimeperiod_1_ObjectType 0x7
typedef uint8_t Interpolationtimeperiod_1_DataType;
#define Interpolationtimeperiod_1_AccessType rw
#define Interpolationtimeperiod_1_DefaultValue 1
#define Interpolationtimeperiod_1_PDOMapping 0
#define Interpolationtimeperiod_2 2 // Interpolation time index
#define Interpolationtimeperiod_2_ObjectType 0x7
typedef int8_t Interpolationtimeperiod_2_DataType;
#define Interpolationtimeperiod_2_AccessType rw
#define Interpolationtimeperiod_2_DefaultValue -3
#define Interpolationtimeperiod_2_PDOMapping 0
#define Interpolationdataconfiguration 0x60C4
#define Interpolationdataconfiguration_ObjectType 0x9
#define Interpolationdataconfiguration_SubNumber 0x07
#define Interpolationdataconfiguration_0 0 // Highest sub-index supported
#define Interpolationdataconfiguration_0_ObjectType 0x7
typedef uint8_t Interpolationdataconfiguration_0_DataType;
#define Interpolationdataconfiguration_0_AccessType const
#define Interpolationdataconfiguration_0_DefaultValue 6
#define Interpolationdataconfiguration_0_PDOMapping 0
#define Interpolationdataconfiguration_1 1 // MaximumBufferSize
#define Interpolationdataconfiguration_1_ObjectType 0x7
typedef uint32_t Interpolationdataconfiguration_1_DataType;
#define Interpolationdataconfiguration_1_AccessType ro
#define Interpolationdataconfiguration_1_DefaultValue 1
#define Interpolationdataconfiguration_1_PDOMapping 0
#define Interpolationdataconfiguration_2 2 // ActualBufferSize
#define Interpolationdataconfiguration_2_ObjectType 0x7
typedef uint32_t Interpolationdataconfiguration_2_DataType;
#define Interpolationdataconfiguration_2_AccessType rw
#define Interpolationdataconfiguration_2_DefaultValue 1
#define Interpolationdataconfiguration_2_PDOMapping 0
#define Interpolationdataconfiguration_3 3 // BufferOrganization
#define Interpolationdataconfiguration_3_ObjectType 0x7
typedef uint8_t Interpolationdataconfiguration_3_DataType;
#define Interpolationdataconfiguration_3_AccessType rw
#define Interpolationdataconfiguration_3_DefaultValue 0
#define Interpolationdataconfiguration_3_PDOMapping 0
#define Interpolationdataconfiguration_4 4 // BufferPosition
#define Interpolationdataconfiguration_4_ObjectType 0x7
typedef uint16_t Interpolationdataconfiguration_4_DataType;
#define Interpolationdataconfiguration_4_AccessType rw
#define Interpolationdataconfiguration_4_DefaultValue 1
#define Interpolationdataconfiguration_4_PDOMapping 0
#define Interpolationdataconfiguration_5 5 // SizeOfDataRecord
#define Interpolationdataconfiguration_5_ObjectType 0x7
typedef uint8_t Interpolationdataconfiguration_5_DataType;
#define Interpolationdataconfiguration_5_AccessType wo
#define Interpolationdataconfiguration_5_DefaultValue 4
#define Interpolationdataconfiguration_5_PDOMapping 0
#define Interpolationdataconfiguration_6 6 // BufferClear
#define Interpolationdataconfiguration_6_ObjectType 0x7
typedef uint8_t Interpolationdataconfiguration_6_DataType;
#define Interpolationdataconfiguration_6_AccessType wo
#define Interpolationdataconfiguration_6_DefaultValue 0
#define Interpolationdataconfiguration_6_PDOMapping 0
#define Maxacceleration 0x60C5
#define Maxacceleration_ObjectType 0x7
typedef uint32_t Maxacceleration_DataType;
#define Maxacceleration_AccessType rww
#define Maxacceleration_DefaultValue 5000
#define Maxacceleration_PDOMapping 1
#define Maxdeceleration 0x60C6
#define Maxdeceleration_ObjectType 0x7
typedef uint32_t Maxdeceleration_DataType;
#define Maxdeceleration_AccessType rww
#define Maxdeceleration_DefaultValue 5000
#define Maxdeceleration_PDOMapping 1
#define Positioningoptioncode 0x60F2
#define Positioningoptioncode_ObjectType 0x7
typedef uint16_t Positioningoptioncode_DataType;
#define Positioningoptioncode_AccessType rww
#define Positioningoptioncode_DefaultValue 1
#define Positioningoptioncode_PDOMapping 1
#define Followingerroractualvalue 0x60F4
#define Followingerroractualvalue_ObjectType 0x7
typedef int32_t Followingerroractualvalue_DataType;
#define Followingerroractualvalue_AccessType ro
#define Followingerroractualvalue_DefaultValue 0x00000000
#define Followingerroractualvalue_PDOMapping 1
#define Followingerroractualvalue_ObjFlags 1
#define DigitalInputs 0x60FD
#define DigitalInputs_ObjectType 0x7
typedef uint32_t DigitalInputs_DataType;
#define DigitalInputs_AccessType ro
#define DigitalInputs_DefaultValue 0x00000000
#define DigitalInputs_PDOMapping 1
#define DigitalInputs_ObjFlags 1
#define DigitalOutputs 0x60FE
#define DigitalOutputs_ObjectType 0x8
#define DigitalOutputs_SubNumber 0x02
#define DigitalOutputs_0 0 // Highest sub-index supported
#define DigitalOutputs_0_ObjectType 0x7
typedef uint8_t DigitalOutputs_0_DataType;
#define DigitalOutputs_0_AccessType const
#define DigitalOutputs_0_DefaultValue 0x01
#define DigitalOutputs_0_PDOMapping 0
#define DigitalOutputs_1 1 // Digital Outputs #1
#define DigitalOutputs_1_ObjectType 0x7
typedef uint32_t DigitalOutputs_1_DataType;
#define DigitalOutputs_1_AccessType rww
#define DigitalOutputs_1_DefaultValue 0x00000001
#define DigitalOutputs_1_PDOMapping 1
#define Targetvelocity 0x60FF
#define Targetvelocity_ObjectType 0x7
typedef int32_t Targetvelocity_DataType;
#define Targetvelocity_AccessType rww
#define Targetvelocity_DefaultValue 0x00000000
#define Targetvelocity_PDOMapping 1
#define Supporteddrivemodes 0x6502
#define Supporteddrivemodes_ObjectType 0x7
typedef uint32_t Supporteddrivemodes_DataType;
#define Supporteddrivemodes_AccessType ro
#define Supporteddrivemodes_DefaultValue 0x000003EF
#define Supporteddrivemodes_PDOMapping 1
#define Supporteddrivemodes_ObjFlags 1
#define httpdrivecatalogueaddress 0x6505
#define httpdrivecatalogueaddress_ObjectType 0x7
typedef char httpdrivecatalogueaddress_DataType;
#define httpdrivecatalogueaddress_AccessType const
#define httpdrivecatalogueaddress_DefaultValue http://www.nanotec.de
#define httpdrivecatalogueaddress_PDOMapping 0
#define httpdrivecatalogueaddress_ObjFlags 1
#define CANopenBaudrate 0x2005
#define CANopenBaudrate_ObjectType 0x7
typedef uint8_t CANopenBaudrate_DataType;
#define CANopenBaudrate_AccessType rw
#define CANopenBaudrate_DefaultValue 136
#define CANopenBaudrate_PDOMapping 0
#define CANopenWheelConfig 0x2006
#define CANopenWheelConfig_ObjectType 0x8
#define CANopenWheelConfig_SubNumber 0x03
#define CANopenWheelConfig_0 0 // Highest sub-index supported
#define CANopenWheelConfig_0_ObjectType 0x7
typedef uint8_t CANopenWheelConfig_0_DataType;
#define CANopenWheelConfig_0_AccessType ro
#define CANopenWheelConfig_0_DefaultValue 0x02
#define CANopenWheelConfig_0_PDOMapping 0
#define CANopenWheelConfig_1 1 // Wheel Mode
#define CANopenWheelConfig_1_ObjectType 0x7
typedef uint8_t CANopenWheelConfig_1_DataType;
#define CANopenWheelConfig_1_AccessType rw
#define CANopenWheelConfig_1_DefaultValue 0x00
#define CANopenWheelConfig_1_PDOMapping 0
#define CANopenWheelConfig_2 2 // NodeID Offset
#define CANopenWheelConfig_2_ObjectType 0x7
typedef uint8_t CANopenWheelConfig_2_DataType;
#define CANopenWheelConfig_2_AccessType rw
#define CANopenWheelConfig_2_DefaultValue 0x00
#define CANopenWheelConfig_2_PDOMapping 0
#define CANopenConfig 0x2007
#define CANopenConfig_ObjectType 0x8
#define CANopenConfig_SubNumber 0x02
#define CANopenConfig_0 0 // Highest sub-index supported
#define CANopenConfig_0_ObjectType 0x7
typedef uint8_t CANopenConfig_0_DataType;
#define CANopenConfig_0_AccessType const
#define CANopenConfig_0_DefaultValue 0x01
#define CANopenConfig_0_PDOMapping 0
#define CANopenConfig_1 1 // BL Config
#define CANopenConfig_1_ObjectType 0x7
typedef uint32_t CANopenConfig_1_DataType;
#define CANopenConfig_1_AccessType rw
#define CANopenConfig_1_DefaultValue 0x00000000
#define CANopenConfig_1_PDOMapping 0
#define CANopenNodeID 0x2009
#define CANopenNodeID_ObjectType 0x7
typedef uint8_t CANopenNodeID_DataType;
#define CANopenNodeID_AccessType rw
#define CANopenNodeID_DefaultValue 0x7F
#define CANopenNodeID_PDOMapping 0
#define Polepaircount 0x2030
#define Polepaircount_ObjectType 0x7
typedef uint32_t Polepaircount_DataType;
#define Polepaircount_AccessType rw
#define Polepaircount_DefaultValue 50
#define Polepaircount_PDOMapping 0
#define Maximumcurrent 0x2031
#define Maximumcurrent_ObjectType 0x7
typedef uint32_t Maximumcurrent_DataType;
#define Maximumcurrent_AccessType rw
#define Maximumcurrent_DefaultValue 2100
#define Maximumcurrent_PDOMapping 0
#define MaximumSpeed 0x2032
#define MaximumSpeed_ObjectType 0x7
typedef uint32_t MaximumSpeed_DataType;
#define MaximumSpeed_AccessType rw
#define MaximumSpeed_DefaultValue 200000
#define MaximumSpeed_PDOMapping 0
#define PlungerBlock 0x2033
#define PlungerBlock_ObjectType 0x7
typedef int32_t PlungerBlock_DataType;
#define PlungerBlock_AccessType rw
#define PlungerBlock_DefaultValue 0x00000000
#define PlungerBlock_PDOMapping 0
#define Uppervoltagewarninglevel 0x2034
#define Uppervoltagewarninglevel_ObjectType 0x7
typedef uint32_t Uppervoltagewarninglevel_DataType;
#define Uppervoltagewarninglevel_AccessType rw
#define Uppervoltagewarninglevel_DefaultValue 51500
#define Uppervoltagewarninglevel_PDOMapping 0
#define Lowervoltagewarninglevel 0x2035
#define Lowervoltagewarninglevel_ObjectType 0x7
typedef uint32_t Lowervoltagewarninglevel_DataType;
#define Lowervoltagewarninglevel_AccessType rw
#define Lowervoltagewarninglevel_DefaultValue 10000
#define Lowervoltagewarninglevel_PDOMapping 0
#define Openloopcurrentreductionidletime 0x2036
#define Openloopcurrentreductionidletime_ObjectType 0x7
typedef uint32_t Openloopcurrentreductionidletime_DataType;
#define Openloopcurrentreductionidletime_AccessType rw
#define Openloopcurrentreductionidletime_DefaultValue 1000
#define Openloopcurrentreductionidletime_PDOMapping 0
#define Openloopcurrentreductionvalue_factor 0x2037
#define Openloopcurrentreductionvalue_factor_ObjectType 0x7
typedef int32_t Openloopcurrentreductionvalue_factor_DataType;
#define Openloopcurrentreductionvalue_factor_AccessType rw
#define Openloopcurrentreductionvalue_factor_DefaultValue -50
#define Openloopcurrentreductionvalue_factor_PDOMapping 0
#define MotorCurrents 0x2039
#define MotorCurrents_ObjectType 0x8
#define MotorCurrents_SubNumber 0x05
#define MotorCurrents_0 0 // Highest sub-index supported
#define MotorCurrents_0_ObjectType 0x7
typedef uint8_t MotorCurrents_0_DataType;
#define MotorCurrents_0_AccessType ro
#define MotorCurrents_0_DefaultValue 0x04
#define MotorCurrents_0_PDOMapping 0
#define MotorCurrents_0_ObjFlags 1
#define MotorCurrents_1 1 // I_d
#define MotorCurrents_1_ObjectType 0x7
typedef int32_t MotorCurrents_1_DataType;
#define MotorCurrents_1_AccessType ro
#define MotorCurrents_1_PDOMapping 1
#define MotorCurrents_1_ObjFlags 1
#define MotorCurrents_2 2 // I_q
#define MotorCurrents_2_ObjectType 0x7
typedef int32_t MotorCurrents_2_DataType;
#define MotorCurrents_2_AccessType ro
#define MotorCurrents_2_PDOMapping 1
#define MotorCurrents_2_ObjFlags 1
#define MotorCurrents_3 3 // I_a
#define MotorCurrents_3_ObjectType 0x7
typedef int32_t MotorCurrents_3_DataType;
#define MotorCurrents_3_AccessType ro
#define MotorCurrents_3_PDOMapping 1
#define MotorCurrents_3_ObjFlags 1
#define MotorCurrents_4 4 // I_b
#define MotorCurrents_4_ObjectType 0x7
typedef int32_t MotorCurrents_4_DataType;
#define MotorCurrents_4_AccessType ro
#define MotorCurrents_4_PDOMapping 1
#define MotorCurrents_4_ObjFlags 1
#define Homingonblockconfiguration 0x203A
#define Homingonblockconfiguration_ObjectType 0x8
#define Homingonblockconfiguration_SubNumber 0x03
#define Homingonblockconfiguration_0 0 // Highest sub-index supported
#define Homingonblockconfiguration_0_ObjectType 0x7
typedef uint8_t Homingonblockconfiguration_0_DataType;
#define Homingonblockconfiguration_0_AccessType ro
#define Homingonblockconfiguration_0_DefaultValue 2
#define Homingonblockconfiguration_0_PDOMapping 0
#define Homingonblockconfiguration_1 1 // Minimum current for block detection
#define Homingonblockconfiguration_1_ObjectType 0x7
typedef int32_t Homingonblockconfiguration_1_DataType;
#define Homingonblockconfiguration_1_AccessType rw
#define Homingonblockconfiguration_1_DefaultValue 1260
#define Homingonblockconfiguration_1_PDOMapping 0
#define Homingonblockconfiguration_2 2 // Block detection time
#define Homingonblockconfiguration_2_ObjectType 0x7
typedef int32_t Homingonblockconfiguration_2_DataType;
#define Homingonblockconfiguration_2_AccessType rw
#define Homingonblockconfiguration_2_DefaultValue 200
#define Homingonblockconfiguration_2_PDOMapping 0
#define I2tParameters 0x203B
#define I2tParameters_ObjectType 0x8
#define I2tParameters_SubNumber 0x08
#define I2tParameters_0 0 // Highest sub-index supported
#define I2tParameters_0_ObjectType 0x7
typedef uint8_t I2tParameters_0_DataType;
#define I2tParameters_0_AccessType ro
#define I2tParameters_0_DefaultValue 7
#define I2tParameters_0_PDOMapping 0
#define I2tParameters_1 1 // Nominal Current
#define I2tParameters_1_ObjectType 0x7
typedef uint32_t I2tParameters_1_DataType;
#define I2tParameters_1_AccessType rw
#define I2tParameters_1_DefaultValue 0
#define I2tParameters_1_PDOMapping 0
#define I2tParameters_2 2 // Maximum duration of peak current
#define I2tParameters_2_ObjectType 0x7
typedef uint32_t I2tParameters_2_DataType;
#define I2tParameters_2_AccessType rw
#define I2tParameters_2_DefaultValue 0
#define I2tParameters_2_PDOMapping 0
#define I2tParameters_3 3 // Threshold
#define I2tParameters_3_ObjectType 0x7
typedef uint32_t I2tParameters_3_DataType;
#define I2tParameters_3_AccessType rw
#define I2tParameters_3_DefaultValue 0
#define I2tParameters_3_PDOMapping 0
#define I2tParameters_4 4 // CalcValue
#define I2tParameters_4_ObjectType 0x7
typedef uint32_t I2tParameters_4_DataType;
#define I2tParameters_4_AccessType rw
#define I2tParameters_4_DefaultValue 0
#define I2tParameters_4_PDOMapping 0
#define I2tParameters_5 5 // LimitedCurrent
#define I2tParameters_5_ObjectType 0x7
typedef uint32_t I2tParameters_5_DataType;
#define I2tParameters_5_AccessType rw
#define I2tParameters_5_PDOMapping 0
#define I2tParameters_6 6 // Status
#define I2tParameters_6_ObjectType 0x7
typedef uint32_t I2tParameters_6_DataType;
#define I2tParameters_6_AccessType rw
#define I2tParameters_6_DefaultValue 0
#define I2tParameters_6_PDOMapping 0
#define I2tParameters_7 7 // ActualResistance
#define I2tParameters_7_ObjectType 0x7
typedef uint32_t I2tParameters_7_DataType;
#define I2tParameters_7_AccessType rw
#define I2tParameters_7_PDOMapping 0
#define Torquewindow 0x203D
#define Torquewindow_ObjectType 0x7
typedef uint16_t Torquewindow_DataType;
#define Torquewindow_AccessType rww
#define Torquewindow_DefaultValue 0x0000
#define Torquewindow_PDOMapping 1
#define Torquewindowtime 0x203E
#define Torquewindowtime_ObjectType 0x7
typedef uint16_t Torquewindowtime_DataType;
#define Torquewindowtime_AccessType rww
#define Torquewindowtime_DefaultValue 0x0000
#define Torquewindowtime_PDOMapping 1
#define EncoderAlignment 0x2050
#define EncoderAlignment_ObjectType 0x7
typedef int32_t EncoderAlignment_DataType;
#define EncoderAlignment_AccessType rw
#define EncoderAlignment_PDOMapping 0
#define EncoderOptimization 0x2051
#define EncoderOptimization_ObjectType 0x8
#define EncoderOptimization_SubNumber 0x04
#define EncoderOptimization_0 0 // Highest sub-index supported
#define EncoderOptimization_0_ObjectType 0x7
typedef uint8_t EncoderOptimization_0_DataType;
#define EncoderOptimization_0_AccessType ro
#define EncoderOptimization_0_DefaultValue 3
#define EncoderOptimization_0_PDOMapping 0
#define EncoderOptimization_1 1 // Parameter 1
#define EncoderOptimization_1_ObjectType 0x7
typedef int32_t EncoderOptimization_1_DataType;
#define EncoderOptimization_1_AccessType rw
#define EncoderOptimization_1_DefaultValue 0
#define EncoderOptimization_1_PDOMapping 0
#define EncoderOptimization_2 2 // Parameter 2
#define EncoderOptimization_2_ObjectType 0x7
typedef int32_t EncoderOptimization_2_DataType;
#define EncoderOptimization_2_AccessType rw
#define EncoderOptimization_2_DefaultValue 0
#define EncoderOptimization_2_PDOMapping 0
#define EncoderOptimization_3 3 // Parameter 3
#define EncoderOptimization_3_ObjectType 0x7
typedef int32_t EncoderOptimization_3_DataType;
#define EncoderOptimization_3_AccessType rw
#define EncoderOptimization_3_DefaultValue 0
#define EncoderOptimization_3_PDOMapping 0
#define EncoderResolution 0x2052
#define EncoderResolution_ObjectType 0x7
typedef int32_t EncoderResolution_DataType;
#define EncoderResolution_AccessType rw
#define EncoderResolution_DefaultValue 4096
#define EncoderResolution_PDOMapping 0
#define Limitswitchtoleranceband 0x2056
#define Limitswitchtoleranceband_ObjectType 0x7
typedef uint32_t Limitswitchtoleranceband_DataType;
#define Limitswitchtoleranceband_AccessType rwr
#define Limitswitchtoleranceband_DefaultValue 500
#define Limitswitchtoleranceband_PDOMapping 1
#define ClockDirectionMultiplier 0x2057
#define ClockDirectionMultiplier_ObjectType 0x7
typedef int32_t ClockDirectionMultiplier_DataType;
#define ClockDirectionMultiplier_AccessType rw
#define ClockDirectionMultiplier_DefaultValue 128
#define ClockDirectionMultiplier_PDOMapping 0
#define ClockDirectionDivider 0x2058
#define ClockDirectionDivider_ObjectType 0x7
typedef int32_t ClockDirectionDivider_DataType;
#define ClockDirectionDivider_AccessType rw
#define ClockDirectionDivider_DefaultValue 1
#define ClockDirectionDivider_PDOMapping 0
#define EncoderConfiguration 0x2059
#define EncoderConfiguration_ObjectType 0x7
typedef uint32_t EncoderConfiguration_DataType;
#define EncoderConfiguration_AccessType rw
#define EncoderConfiguration_DefaultValue 0x00000000
#define EncoderConfiguration_PDOMapping 0
#define EncoderBootValue 0x205A
#define EncoderBootValue_ObjectType 0x7
typedef uint32_t EncoderBootValue_DataType;
#define EncoderBootValue_AccessType ro
#define EncoderBootValue_PDOMapping 0
#define EncoderBootValue_ObjFlags 1
#define ClockDirectionorClockwise_CounterClockwiseMode 0x205B
#define ClockDirectionorClockwise_CounterClockwiseMode_ObjectType 0x7
typedef uint32_t ClockDirectionorClockwise_CounterClockwiseMode_DataType;
#define ClockDirectionorClockwise_CounterClockwiseMode_AccessType rw
#define ClockDirectionorClockwise_CounterClockwiseMode_DefaultValue 0x00000000
#define ClockDirectionorClockwise_CounterClockwiseMode_PDOMapping 0
#define Compensatepolepaircount 0x2060
#define Compensatepolepaircount_ObjectType 0x7
typedef uint32_t Compensatepolepaircount_DataType;
#define Compensatepolepaircount_AccessType rw
#define Compensatepolepaircount_DefaultValue 1
#define Compensatepolepaircount_PDOMapping 0
#define Velocitynumerator 0x2061
#define Velocitynumerator_ObjectType 0x7
typedef uint32_t Velocitynumerator_DataType;
#define Velocitynumerator_AccessType rw
#define Velocitynumerator_DefaultValue 1
#define Velocitynumerator_PDOMapping 0
#define Velocitydenominator 0x2062
#define Velocitydenominator_ObjectType 0x7
typedef uint32_t Velocitydenominator_DataType;
#define Velocitydenominator_AccessType rw
#define Velocitydenominator_DefaultValue 60
#define Velocitydenominator_PDOMapping 0
#define Accelerationnumerator 0x2063
#define Accelerationnumerator_ObjectType 0x7
typedef uint32_t Accelerationnumerator_DataType;
#define Accelerationnumerator_AccessType rw
#define Accelerationnumerator_DefaultValue 1
#define Accelerationnumerator_PDOMapping 0
#define Accelerationdenominator 0x2064
#define Accelerationdenominator_ObjectType 0x7
typedef uint32_t Accelerationdenominator_DataType;
#define Accelerationdenominator_AccessType rw
#define Accelerationdenominator_DefaultValue 60
#define Accelerationdenominator_PDOMapping 0
#define Jerknumerator 0x2065
#define Jerknumerator_ObjectType 0x7
typedef uint32_t Jerknumerator_DataType;
#define Jerknumerator_AccessType rw
#define Jerknumerator_DefaultValue 1
#define Jerknumerator_PDOMapping 0
#define Jerkdenominator 0x2066
#define Jerkdenominator_ObjectType 0x7
typedef uint32_t Jerkdenominator_DataType;
#define Jerkdenominator_AccessType rw
#define Jerkdenominator_DefaultValue 60
#define Jerkdenominator_PDOMapping 0
#define BootupDelay 0x2084
#define BootupDelay_ObjectType 0x7
typedef uint32_t BootupDelay_DataType;
#define BootupDelay_AccessType rw
#define BootupDelay_DefaultValue 0
#define BootupDelay_PDOMapping 0
#define FieldbusModuleAvailability 0x2101
#define FieldbusModuleAvailability_ObjectType 0x7
typedef uint32_t FieldbusModuleAvailability_DataType;
#define FieldbusModuleAvailability_AccessType ro
#define FieldbusModuleAvailability_DefaultValue 0x00000008
#define FieldbusModuleAvailability_PDOMapping 0
#define FieldbusModuleAvailability_ObjFlags 1
#define FieldbusModuleControl 0x2102
#define FieldbusModuleControl_ObjectType 0x7
typedef uint32_t FieldbusModuleControl_DataType;
#define FieldbusModuleControl_AccessType rw
#define FieldbusModuleControl_DefaultValue 0x00000008
#define FieldbusModuleControl_PDOMapping 0
#define FieldbusModuleStatus 0x2103
#define FieldbusModuleStatus_ObjectType 0x8
#define FieldbusModuleStatus_SubNumber 0x03
#define FieldbusModuleStatus_0 0 // Highest sub-index supported
#define FieldbusModuleStatus_0_ObjectType 0x7
typedef uint8_t FieldbusModuleStatus_0_DataType;
#define FieldbusModuleStatus_0_AccessType ro
#define FieldbusModuleStatus_0_DefaultValue 0x02
#define FieldbusModuleStatus_0_PDOMapping 0
#define FieldbusModuleStatus_0_ObjFlags 1
#define FieldbusModuleStatus_1 1 // Fieldbus Module Disable Mask
#define FieldbusModuleStatus_1_ObjectType 0x7
typedef uint32_t FieldbusModuleStatus_1_DataType;
#define FieldbusModuleStatus_1_AccessType ro
#define FieldbusModuleStatus_1_DefaultValue 0x00000000
#define FieldbusModuleStatus_1_PDOMapping 0
#define FieldbusModuleStatus_1_ObjFlags 1
#define FieldbusModuleStatus_2 2 // Fieldbus Module Enabled
#define FieldbusModuleStatus_2_ObjectType 0x7
typedef uint32_t FieldbusModuleStatus_2_DataType;
#define FieldbusModuleStatus_2_AccessType ro
#define FieldbusModuleStatus_2_PDOMapping 0
#define FieldbusModuleStatus_2_ObjFlags 1
#define NanoJControl 0x2300
#define NanoJControl_ObjectType 0x7
typedef uint32_t NanoJControl_DataType;
#define NanoJControl_AccessType rww
#define NanoJControl_DefaultValue 0x00000000
#define NanoJControl_PDOMapping 1
#define NanoJStatus 0x2301
#define NanoJStatus_ObjectType 0x7
typedef uint32_t NanoJStatus_DataType;
#define NanoJStatus_AccessType ro
#define NanoJStatus_DefaultValue 0x00000000
#define NanoJStatus_PDOMapping 1
#define NanoJStatus_ObjFlags 1
#define NanoJErrorCode 0x2302
#define NanoJErrorCode_ObjectType 0x7
typedef uint32_t NanoJErrorCode_DataType;
#define NanoJErrorCode_AccessType ro
#define NanoJErrorCode_DefaultValue 0x00000000
#define NanoJErrorCode_PDOMapping 1
#define NanoJErrorCode_ObjFlags 1
#define UptimeSeconds 0x230F
#define UptimeSeconds_ObjectType 0x7
typedef uint32_t UptimeSeconds_DataType;
#define UptimeSeconds_AccessType ro
#define UptimeSeconds_PDOMapping 1
#define UptimeSeconds_ObjFlags 1
#define NanoJinputdataselection 0x2310
#define NanoJinputdataselection_ObjectType 0x8
#define NanoJinputdataselection_SubNumber 0x11
#define NanoJinputdataselection_0 0 // Highest sub-index supported
#define NanoJinputdataselection_0_ObjectType 0x7
typedef uint8_t NanoJinputdataselection_0_DataType;
#define NanoJinputdataselection_0_AccessType ro
#define NanoJinputdataselection_0_DefaultValue 0x10
#define NanoJinputdataselection_0_PDOMapping 0
#define NanoJinputdataselection_0_ObjFlags 1
#define NanoJinputdataselection_1 1 // Mapping #1
#define NanoJinputdataselection_1_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_1_DataType;
#define NanoJinputdataselection_1_AccessType ro
#define NanoJinputdataselection_1_DefaultValue 0x00000000
#define NanoJinputdataselection_1_PDOMapping 0
#define NanoJinputdataselection_1_ObjFlags 1
#define NanoJinputdataselection_2 2 // Mapping #2
#define NanoJinputdataselection_2_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_2_DataType;
#define NanoJinputdataselection_2_AccessType ro
#define NanoJinputdataselection_2_DefaultValue 0x00000000
#define NanoJinputdataselection_2_PDOMapping 0
#define NanoJinputdataselection_2_ObjFlags 1
#define NanoJinputdataselection_3 3 // Mapping #3
#define NanoJinputdataselection_3_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_3_DataType;
#define NanoJinputdataselection_3_AccessType ro
#define NanoJinputdataselection_3_DefaultValue 0x00000000
#define NanoJinputdataselection_3_PDOMapping 0
#define NanoJinputdataselection_3_ObjFlags 1
#define NanoJinputdataselection_4 4 // Mapping #4
#define NanoJinputdataselection_4_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_4_DataType;
#define NanoJinputdataselection_4_AccessType ro
#define NanoJinputdataselection_4_DefaultValue 0x00000000
#define NanoJinputdataselection_4_PDOMapping 0
#define NanoJinputdataselection_4_ObjFlags 1
#define NanoJinputdataselection_5 5 // Mapping #5
#define NanoJinputdataselection_5_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_5_DataType;
#define NanoJinputdataselection_5_AccessType ro
#define NanoJinputdataselection_5_DefaultValue 0x00000000
#define NanoJinputdataselection_5_PDOMapping 0
#define NanoJinputdataselection_5_ObjFlags 1
#define NanoJinputdataselection_6 6 // Mapping #6
#define NanoJinputdataselection_6_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_6_DataType;
#define NanoJinputdataselection_6_AccessType ro
#define NanoJinputdataselection_6_DefaultValue 0x00000000
#define NanoJinputdataselection_6_PDOMapping 0
#define NanoJinputdataselection_6_ObjFlags 1
#define NanoJinputdataselection_7 7 // Mapping #7
#define NanoJinputdataselection_7_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_7_DataType;
#define NanoJinputdataselection_7_AccessType ro
#define NanoJinputdataselection_7_DefaultValue 0x00000000
#define NanoJinputdataselection_7_PDOMapping 0
#define NanoJinputdataselection_7_ObjFlags 1
#define NanoJinputdataselection_8 8 // Mapping #8
#define NanoJinputdataselection_8_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_8_DataType;
#define NanoJinputdataselection_8_AccessType ro
#define NanoJinputdataselection_8_DefaultValue 0x00000000
#define NanoJinputdataselection_8_PDOMapping 0
#define NanoJinputdataselection_8_ObjFlags 1
#define NanoJinputdataselection_9 9 // Mapping #9
#define NanoJinputdataselection_9_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_9_DataType;
#define NanoJinputdataselection_9_AccessType ro
#define NanoJinputdataselection_9_DefaultValue 0x00000000
#define NanoJinputdataselection_9_PDOMapping 0
#define NanoJinputdataselection_9_ObjFlags 1
#define NanoJinputdataselection_A A // Mapping #10
#define NanoJinputdataselection_A_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_A_DataType;
#define NanoJinputdataselection_A_AccessType ro
#define NanoJinputdataselection_A_DefaultValue 0x00000000
#define NanoJinputdataselection_A_PDOMapping 0
#define NanoJinputdataselection_A_ObjFlags 1
#define NanoJinputdataselection_B B // Mapping #11
#define NanoJinputdataselection_B_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_B_DataType;
#define NanoJinputdataselection_B_AccessType ro
#define NanoJinputdataselection_B_DefaultValue 0x00000000
#define NanoJinputdataselection_B_PDOMapping 0
#define NanoJinputdataselection_B_ObjFlags 1
#define NanoJinputdataselection_C C // Mapping #12
#define NanoJinputdataselection_C_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_C_DataType;
#define NanoJinputdataselection_C_AccessType ro
#define NanoJinputdataselection_C_DefaultValue 0x00000000
#define NanoJinputdataselection_C_PDOMapping 0
#define NanoJinputdataselection_C_ObjFlags 1
#define NanoJinputdataselection_D D // Mapping #13
#define NanoJinputdataselection_D_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_D_DataType;
#define NanoJinputdataselection_D_AccessType ro
#define NanoJinputdataselection_D_DefaultValue 0x00000000
#define NanoJinputdataselection_D_PDOMapping 0
#define NanoJinputdataselection_D_ObjFlags 1
#define NanoJinputdataselection_E E // Mapping #14
#define NanoJinputdataselection_E_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_E_DataType;
#define NanoJinputdataselection_E_AccessType ro
#define NanoJinputdataselection_E_DefaultValue 0x00000000
#define NanoJinputdataselection_E_PDOMapping 0
#define NanoJinputdataselection_E_ObjFlags 1
#define NanoJinputdataselection_F F // Mapping #15
#define NanoJinputdataselection_F_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_F_DataType;
#define NanoJinputdataselection_F_AccessType ro
#define NanoJinputdataselection_F_DefaultValue 0x00000000
#define NanoJinputdataselection_F_PDOMapping 0
#define NanoJinputdataselection_F_ObjFlags 1
#define NanoJinputdataselection_10 10 // Mapping #16
#define NanoJinputdataselection_10_ObjectType 0x7
typedef uint32_t NanoJinputdataselection_10_DataType;
#define NanoJinputdataselection_10_AccessType ro
#define NanoJinputdataselection_10_DefaultValue 0x00000000
#define NanoJinputdataselection_10_PDOMapping 0
#define NanoJinputdataselection_10_ObjFlags 1
#define NanoJoutputdataselection 0x2320
#define NanoJoutputdataselection_ObjectType 0x8
#define NanoJoutputdataselection_SubNumber 0x11
#define NanoJoutputdataselection_0 0 // Highest sub-index supported
#define NanoJoutputdataselection_0_ObjectType 0x7
typedef uint8_t NanoJoutputdataselection_0_DataType;
#define NanoJoutputdataselection_0_AccessType ro
#define NanoJoutputdataselection_0_DefaultValue 0x10
#define NanoJoutputdataselection_0_PDOMapping 0
#define NanoJoutputdataselection_0_ObjFlags 1
#define NanoJoutputdataselection_1 1 // Mapping #1
#define NanoJoutputdataselection_1_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_1_DataType;
#define NanoJoutputdataselection_1_AccessType ro
#define NanoJoutputdataselection_1_DefaultValue 0x00000000
#define NanoJoutputdataselection_1_PDOMapping 0
#define NanoJoutputdataselection_1_ObjFlags 1
#define NanoJoutputdataselection_2 2 // Mapping #2
#define NanoJoutputdataselection_2_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_2_DataType;
#define NanoJoutputdataselection_2_AccessType ro
#define NanoJoutputdataselection_2_DefaultValue 0x00000000
#define NanoJoutputdataselection_2_PDOMapping 0
#define NanoJoutputdataselection_2_ObjFlags 1
#define NanoJoutputdataselection_3 3 // Mapping #3
#define NanoJoutputdataselection_3_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_3_DataType;
#define NanoJoutputdataselection_3_AccessType ro
#define NanoJoutputdataselection_3_DefaultValue 0x00000000
#define NanoJoutputdataselection_3_PDOMapping 0
#define NanoJoutputdataselection_3_ObjFlags 1
#define NanoJoutputdataselection_4 4 // Mapping #4
#define NanoJoutputdataselection_4_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_4_DataType;
#define NanoJoutputdataselection_4_AccessType ro
#define NanoJoutputdataselection_4_DefaultValue 0x00000000
#define NanoJoutputdataselection_4_PDOMapping 0
#define NanoJoutputdataselection_4_ObjFlags 1
#define NanoJoutputdataselection_5 5 // Mapping #5
#define NanoJoutputdataselection_5_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_5_DataType;
#define NanoJoutputdataselection_5_AccessType ro
#define NanoJoutputdataselection_5_DefaultValue 0x00000000
#define NanoJoutputdataselection_5_PDOMapping 0
#define NanoJoutputdataselection_5_ObjFlags 1
#define NanoJoutputdataselection_6 6 // Mapping #6
#define NanoJoutputdataselection_6_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_6_DataType;
#define NanoJoutputdataselection_6_AccessType ro
#define NanoJoutputdataselection_6_DefaultValue 0x00000000
#define NanoJoutputdataselection_6_PDOMapping 0
#define NanoJoutputdataselection_6_ObjFlags 1
#define NanoJoutputdataselection_7 7 // Mapping #7
#define NanoJoutputdataselection_7_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_7_DataType;
#define NanoJoutputdataselection_7_AccessType ro
#define NanoJoutputdataselection_7_DefaultValue 0x00000000
#define NanoJoutputdataselection_7_PDOMapping 0
#define NanoJoutputdataselection_7_ObjFlags 1
#define NanoJoutputdataselection_8 8 // Mapping #8
#define NanoJoutputdataselection_8_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_8_DataType;
#define NanoJoutputdataselection_8_AccessType ro
#define NanoJoutputdataselection_8_DefaultValue 0x00000000
#define NanoJoutputdataselection_8_PDOMapping 0
#define NanoJoutputdataselection_8_ObjFlags 1
#define NanoJoutputdataselection_9 9 // Mapping #9
#define NanoJoutputdataselection_9_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_9_DataType;
#define NanoJoutputdataselection_9_AccessType ro
#define NanoJoutputdataselection_9_DefaultValue 0x00000000
#define NanoJoutputdataselection_9_PDOMapping 0
#define NanoJoutputdataselection_9_ObjFlags 1
#define NanoJoutputdataselection_A A // Mapping #10
#define NanoJoutputdataselection_A_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_A_DataType;
#define NanoJoutputdataselection_A_AccessType ro
#define NanoJoutputdataselection_A_DefaultValue 0x00000000
#define NanoJoutputdataselection_A_PDOMapping 0
#define NanoJoutputdataselection_A_ObjFlags 1
#define NanoJoutputdataselection_B B // Mapping #11
#define NanoJoutputdataselection_B_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_B_DataType;
#define NanoJoutputdataselection_B_AccessType ro
#define NanoJoutputdataselection_B_DefaultValue 0x00000000
#define NanoJoutputdataselection_B_PDOMapping 0
#define NanoJoutputdataselection_B_ObjFlags 1
#define NanoJoutputdataselection_C C // Mapping #12
#define NanoJoutputdataselection_C_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_C_DataType;
#define NanoJoutputdataselection_C_AccessType ro
#define NanoJoutputdataselection_C_DefaultValue 0x00000000
#define NanoJoutputdataselection_C_PDOMapping 0
#define NanoJoutputdataselection_C_ObjFlags 1
#define NanoJoutputdataselection_D D // Mapping #13
#define NanoJoutputdataselection_D_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_D_DataType;
#define NanoJoutputdataselection_D_AccessType ro
#define NanoJoutputdataselection_D_DefaultValue 0x00000000
#define NanoJoutputdataselection_D_PDOMapping 0
#define NanoJoutputdataselection_D_ObjFlags 1
#define NanoJoutputdataselection_E E // Mapping #14
#define NanoJoutputdataselection_E_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_E_DataType;
#define NanoJoutputdataselection_E_AccessType ro
#define NanoJoutputdataselection_E_DefaultValue 0x00000000
#define NanoJoutputdataselection_E_PDOMapping 0
#define NanoJoutputdataselection_E_ObjFlags 1
#define NanoJoutputdataselection_F F // Mapping #15
#define NanoJoutputdataselection_F_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_F_DataType;
#define NanoJoutputdataselection_F_AccessType ro
#define NanoJoutputdataselection_F_DefaultValue 0x00000000
#define NanoJoutputdataselection_F_PDOMapping 0
#define NanoJoutputdataselection_F_ObjFlags 1
#define NanoJoutputdataselection_10 10 // Mapping #16
#define NanoJoutputdataselection_10_ObjectType 0x7
typedef uint32_t NanoJoutputdataselection_10_DataType;
#define NanoJoutputdataselection_10_AccessType ro
#define NanoJoutputdataselection_10_DefaultValue 0x00000000
#define NanoJoutputdataselection_10_PDOMapping 0
#define NanoJoutputdataselection_10_ObjFlags 1
#define NanoJin_outputdataselection 0x2330
#define NanoJin_outputdataselection_ObjectType 0x8
#define NanoJin_outputdataselection_SubNumber 0x11
#define NanoJin_outputdataselection_0 0 // Highest sub-index supported
#define NanoJin_outputdataselection_0_ObjectType 0x7
typedef uint8_t NanoJin_outputdataselection_0_DataType;
#define NanoJin_outputdataselection_0_AccessType ro
#define NanoJin_outputdataselection_0_DefaultValue 0x10
#define NanoJin_outputdataselection_0_PDOMapping 0
#define NanoJin_outputdataselection_0_ObjFlags 1
#define NanoJin_outputdataselection_1 1 // Mapping #1
#define NanoJin_outputdataselection_1_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_1_DataType;
#define NanoJin_outputdataselection_1_AccessType ro
#define NanoJin_outputdataselection_1_DefaultValue 0x00000000
#define NanoJin_outputdataselection_1_PDOMapping 0
#define NanoJin_outputdataselection_1_ObjFlags 1
#define NanoJin_outputdataselection_2 2 // Mapping #2
#define NanoJin_outputdataselection_2_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_2_DataType;
#define NanoJin_outputdataselection_2_AccessType ro
#define NanoJin_outputdataselection_2_DefaultValue 0x00000000
#define NanoJin_outputdataselection_2_PDOMapping 0
#define NanoJin_outputdataselection_2_ObjFlags 1
#define NanoJin_outputdataselection_3 3 // Mapping #3
#define NanoJin_outputdataselection_3_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_3_DataType;
#define NanoJin_outputdataselection_3_AccessType ro
#define NanoJin_outputdataselection_3_DefaultValue 0x00000000
#define NanoJin_outputdataselection_3_PDOMapping 0
#define NanoJin_outputdataselection_3_ObjFlags 1
#define NanoJin_outputdataselection_4 4 // Mapping #4
#define NanoJin_outputdataselection_4_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_4_DataType;
#define NanoJin_outputdataselection_4_AccessType ro
#define NanoJin_outputdataselection_4_DefaultValue 0x00000000
#define NanoJin_outputdataselection_4_PDOMapping 0
#define NanoJin_outputdataselection_4_ObjFlags 1
#define NanoJin_outputdataselection_5 5 // Mapping #5
#define NanoJin_outputdataselection_5_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_5_DataType;
#define NanoJin_outputdataselection_5_AccessType ro
#define NanoJin_outputdataselection_5_DefaultValue 0x00000000
#define NanoJin_outputdataselection_5_PDOMapping 0
#define NanoJin_outputdataselection_5_ObjFlags 1
#define NanoJin_outputdataselection_6 6 // Mapping #6
#define NanoJin_outputdataselection_6_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_6_DataType;
#define NanoJin_outputdataselection_6_AccessType ro
#define NanoJin_outputdataselection_6_DefaultValue 0x00000000
#define NanoJin_outputdataselection_6_PDOMapping 0
#define NanoJin_outputdataselection_6_ObjFlags 1
#define NanoJin_outputdataselection_7 7 // Mapping #7
#define NanoJin_outputdataselection_7_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_7_DataType;
#define NanoJin_outputdataselection_7_AccessType ro
#define NanoJin_outputdataselection_7_DefaultValue 0x00000000
#define NanoJin_outputdataselection_7_PDOMapping 0
#define NanoJin_outputdataselection_7_ObjFlags 1
#define NanoJin_outputdataselection_8 8 // Mapping #8
#define NanoJin_outputdataselection_8_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_8_DataType;
#define NanoJin_outputdataselection_8_AccessType ro
#define NanoJin_outputdataselection_8_DefaultValue 0x00000000
#define NanoJin_outputdataselection_8_PDOMapping 0
#define NanoJin_outputdataselection_8_ObjFlags 1
#define NanoJin_outputdataselection_9 9 // Mapping #9
#define NanoJin_outputdataselection_9_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_9_DataType;
#define NanoJin_outputdataselection_9_AccessType ro
#define NanoJin_outputdataselection_9_DefaultValue 0x00000000
#define NanoJin_outputdataselection_9_PDOMapping 0
#define NanoJin_outputdataselection_9_ObjFlags 1
#define NanoJin_outputdataselection_A A // Mapping #10
#define NanoJin_outputdataselection_A_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_A_DataType;
#define NanoJin_outputdataselection_A_AccessType ro
#define NanoJin_outputdataselection_A_DefaultValue 0x00000000
#define NanoJin_outputdataselection_A_PDOMapping 0
#define NanoJin_outputdataselection_A_ObjFlags 1
#define NanoJin_outputdataselection_B B // Mapping #11
#define NanoJin_outputdataselection_B_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_B_DataType;
#define NanoJin_outputdataselection_B_AccessType ro
#define NanoJin_outputdataselection_B_DefaultValue 0x00000000
#define NanoJin_outputdataselection_B_PDOMapping 0
#define NanoJin_outputdataselection_B_ObjFlags 1
#define NanoJin_outputdataselection_C C // Mapping #12
#define NanoJin_outputdataselection_C_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_C_DataType;
#define NanoJin_outputdataselection_C_AccessType ro
#define NanoJin_outputdataselection_C_DefaultValue 0x00000000
#define NanoJin_outputdataselection_C_PDOMapping 0
#define NanoJin_outputdataselection_C_ObjFlags 1
#define NanoJin_outputdataselection_D D // Mapping #13
#define NanoJin_outputdataselection_D_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_D_DataType;
#define NanoJin_outputdataselection_D_AccessType ro
#define NanoJin_outputdataselection_D_DefaultValue 0x00000000
#define NanoJin_outputdataselection_D_PDOMapping 0
#define NanoJin_outputdataselection_D_ObjFlags 1
#define NanoJin_outputdataselection_E E // Mapping #14
#define NanoJin_outputdataselection_E_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_E_DataType;
#define NanoJin_outputdataselection_E_AccessType ro
#define NanoJin_outputdataselection_E_DefaultValue 0x00000000
#define NanoJin_outputdataselection_E_PDOMapping 0
#define NanoJin_outputdataselection_E_ObjFlags 1
#define NanoJin_outputdataselection_F F // Mapping #15
#define NanoJin_outputdataselection_F_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_F_DataType;
#define NanoJin_outputdataselection_F_AccessType ro
#define NanoJin_outputdataselection_F_DefaultValue 0x00000000
#define NanoJin_outputdataselection_F_PDOMapping 0
#define NanoJin_outputdataselection_F_ObjFlags 1
#define NanoJin_outputdataselection_10 10 // Mapping #16
#define NanoJin_outputdataselection_10_ObjectType 0x7
typedef uint32_t NanoJin_outputdataselection_10_DataType;
#define NanoJin_outputdataselection_10_AccessType ro
#define NanoJin_outputdataselection_10_DefaultValue 0x00000000
#define NanoJin_outputdataselection_10_PDOMapping 0
#define NanoJin_outputdataselection_10_ObjFlags 1
#define NanoJInputs 0x2400
#define NanoJInputs_ObjectType 0x8
#define NanoJInputs_SubNumber 0x21
#define NanoJInputs_0 0 // Highest sub-index supported
#define NanoJInputs_0_ObjectType 0x7
typedef uint8_t NanoJInputs_0_DataType;
#define NanoJInputs_0_AccessType ro
#define NanoJInputs_0_DefaultValue 0x20
#define NanoJInputs_0_PDOMapping 0
#define NanoJInputs_0_ObjFlags 1
#define NanoJInputs_1 1 // NanoJ Input #1
#define NanoJInputs_1_ObjectType 0x7
typedef int32_t NanoJInputs_1_DataType;
#define NanoJInputs_1_AccessType rww
#define NanoJInputs_1_DefaultValue 0x00000000
#define NanoJInputs_1_PDOMapping 1
#define NanoJInputs_1_ObjFlags 1
#define NanoJInputs_2 2 // NanoJ Input #2
#define NanoJInputs_2_ObjectType 0x7
typedef int32_t NanoJInputs_2_DataType;
#define NanoJInputs_2_AccessType rww
#define NanoJInputs_2_DefaultValue 0x00000000
#define NanoJInputs_2_PDOMapping 1
#define NanoJInputs_2_ObjFlags 1
#define NanoJInputs_3 3 // NanoJ Input #3
#define NanoJInputs_3_ObjectType 0x7
typedef int32_t NanoJInputs_3_DataType;
#define NanoJInputs_3_AccessType rww
#define NanoJInputs_3_DefaultValue 0x00000000
#define NanoJInputs_3_PDOMapping 1
#define NanoJInputs_3_ObjFlags 1
#define NanoJInputs_4 4 // NanoJ Input #4
#define NanoJInputs_4_ObjectType 0x7
typedef int32_t NanoJInputs_4_DataType;
#define NanoJInputs_4_AccessType rww
#define NanoJInputs_4_DefaultValue 0x00000000
#define NanoJInputs_4_PDOMapping 1
#define NanoJInputs_4_ObjFlags 1
#define NanoJInputs_5 5 // NanoJ Input #5
#define NanoJInputs_5_ObjectType 0x7
typedef int32_t NanoJInputs_5_DataType;
#define NanoJInputs_5_AccessType rww
#define NanoJInputs_5_DefaultValue 0x00000000
#define NanoJInputs_5_PDOMapping 1
#define NanoJInputs_5_ObjFlags 1
#define NanoJInputs_6 6 // NanoJ Input #6
#define NanoJInputs_6_ObjectType 0x7
typedef int32_t NanoJInputs_6_DataType;
#define NanoJInputs_6_AccessType rww
#define NanoJInputs_6_DefaultValue 0x00000000
#define NanoJInputs_6_PDOMapping 1
#define NanoJInputs_6_ObjFlags 1
#define NanoJInputs_7 7 // NanoJ Input #7
#define NanoJInputs_7_ObjectType 0x7
typedef int32_t NanoJInputs_7_DataType;
#define NanoJInputs_7_AccessType rww
#define NanoJInputs_7_DefaultValue 0x00000000
#define NanoJInputs_7_PDOMapping 1
#define NanoJInputs_7_ObjFlags 1
#define NanoJInputs_8 8 // NanoJ Input #8
#define NanoJInputs_8_ObjectType 0x7
typedef int32_t NanoJInputs_8_DataType;
#define NanoJInputs_8_AccessType rww
#define NanoJInputs_8_DefaultValue 0x00000000
#define NanoJInputs_8_PDOMapping 1
#define NanoJInputs_8_ObjFlags 1
#define NanoJInputs_9 9 // NanoJ Input #9
#define NanoJInputs_9_ObjectType 0x7
typedef int32_t NanoJInputs_9_DataType;
#define NanoJInputs_9_AccessType rww
#define NanoJInputs_9_DefaultValue 0x00000000
#define NanoJInputs_9_PDOMapping 1
#define NanoJInputs_9_ObjFlags 1
#define NanoJInputs_A A // NanoJ Input #10
#define NanoJInputs_A_ObjectType 0x7
typedef int32_t NanoJInputs_A_DataType;
#define NanoJInputs_A_AccessType rww
#define NanoJInputs_A_DefaultValue 0x00000000
#define NanoJInputs_A_PDOMapping 1
#define NanoJInputs_A_ObjFlags 1
#define NanoJInputs_B B // NanoJ Input #11
#define NanoJInputs_B_ObjectType 0x7
typedef int32_t NanoJInputs_B_DataType;
#define NanoJInputs_B_AccessType rww
#define NanoJInputs_B_DefaultValue 0x00000000
#define NanoJInputs_B_PDOMapping 1
#define NanoJInputs_B_ObjFlags 1
#define NanoJInputs_C C // NanoJ Input #12
#define NanoJInputs_C_ObjectType 0x7
typedef int32_t NanoJInputs_C_DataType;
#define NanoJInputs_C_AccessType rww
#define NanoJInputs_C_DefaultValue 0x00000000
#define NanoJInputs_C_PDOMapping 1
#define NanoJInputs_C_ObjFlags 1
#define NanoJInputs_D D // NanoJ Input #13
#define NanoJInputs_D_ObjectType 0x7
typedef int32_t NanoJInputs_D_DataType;
#define NanoJInputs_D_AccessType rww
#define NanoJInputs_D_DefaultValue 0x00000000
#define NanoJInputs_D_PDOMapping 1
#define NanoJInputs_D_ObjFlags 1
#define NanoJInputs_E E // NanoJ Input #14
#define NanoJInputs_E_ObjectType 0x7
typedef int32_t NanoJInputs_E_DataType;
#define NanoJInputs_E_AccessType rww
#define NanoJInputs_E_DefaultValue 0x00000000
#define NanoJInputs_E_PDOMapping 1
#define NanoJInputs_E_ObjFlags 1
#define NanoJInputs_F F // NanoJ Input #15
#define NanoJInputs_F_ObjectType 0x7
typedef int32_t NanoJInputs_F_DataType;
#define NanoJInputs_F_AccessType rww
#define NanoJInputs_F_DefaultValue 0x00000000
#define NanoJInputs_F_PDOMapping 1
#define NanoJInputs_F_ObjFlags 1
#define NanoJInputs_10 10 // NanoJ Input #16
#define NanoJInputs_10_ObjectType 0x7
typedef int32_t NanoJInputs_10_DataType;
#define NanoJInputs_10_AccessType rww
#define NanoJInputs_10_DefaultValue 0x00000000
#define NanoJInputs_10_PDOMapping 1
#define NanoJInputs_10_ObjFlags 1
#define NanoJInputs_11 11 // NanoJ Input #17
#define NanoJInputs_11_ObjectType 0x7
typedef int32_t NanoJInputs_11_DataType;
#define NanoJInputs_11_AccessType rww
#define NanoJInputs_11_DefaultValue 0x00000000
#define NanoJInputs_11_PDOMapping 1
#define NanoJInputs_11_ObjFlags 1
#define NanoJInputs_12 12 // NanoJ Input #18
#define NanoJInputs_12_ObjectType 0x7
typedef int32_t NanoJInputs_12_DataType;
#define NanoJInputs_12_AccessType rww
#define NanoJInputs_12_DefaultValue 0x00000000
#define NanoJInputs_12_PDOMapping 1
#define NanoJInputs_12_ObjFlags 1
#define NanoJInputs_13 13 // NanoJ Input #19
#define NanoJInputs_13_ObjectType 0x7
typedef int32_t NanoJInputs_13_DataType;
#define NanoJInputs_13_AccessType rww
#define NanoJInputs_13_DefaultValue 0x00000000
#define NanoJInputs_13_PDOMapping 1
#define NanoJInputs_13_ObjFlags 1
#define NanoJInputs_14 14 // NanoJ Input #20
#define NanoJInputs_14_ObjectType 0x7
typedef int32_t NanoJInputs_14_DataType;
#define NanoJInputs_14_AccessType rww
#define NanoJInputs_14_DefaultValue 0x00000000
#define NanoJInputs_14_PDOMapping 1
#define NanoJInputs_14_ObjFlags 1
#define NanoJInputs_15 15 // NanoJ Input #21
#define NanoJInputs_15_ObjectType 0x7
typedef int32_t NanoJInputs_15_DataType;
#define NanoJInputs_15_AccessType rww
#define NanoJInputs_15_DefaultValue 0x00000000
#define NanoJInputs_15_PDOMapping 1
#define NanoJInputs_15_ObjFlags 1
#define NanoJInputs_16 16 // NanoJ Input #22
#define NanoJInputs_16_ObjectType 0x7
typedef int32_t NanoJInputs_16_DataType;
#define NanoJInputs_16_AccessType rww
#define NanoJInputs_16_DefaultValue 0x00000000
#define NanoJInputs_16_PDOMapping 1
#define NanoJInputs_16_ObjFlags 1
#define NanoJInputs_17 17 // NanoJ Input #23
#define NanoJInputs_17_ObjectType 0x7
typedef int32_t NanoJInputs_17_DataType;
#define NanoJInputs_17_AccessType rww
#define NanoJInputs_17_DefaultValue 0x00000000
#define NanoJInputs_17_PDOMapping 1
#define NanoJInputs_17_ObjFlags 1
#define NanoJInputs_18 18 // NanoJ Input #24
#define NanoJInputs_18_ObjectType 0x7
typedef int32_t NanoJInputs_18_DataType;
#define NanoJInputs_18_AccessType rww
#define NanoJInputs_18_DefaultValue 0x00000000
#define NanoJInputs_18_PDOMapping 1
#define NanoJInputs_18_ObjFlags 1
#define NanoJInputs_19 19 // NanoJ Input #25
#define NanoJInputs_19_ObjectType 0x7
typedef int32_t NanoJInputs_19_DataType;
#define NanoJInputs_19_AccessType rww
#define NanoJInputs_19_DefaultValue 0x00000000
#define NanoJInputs_19_PDOMapping 1
#define NanoJInputs_19_ObjFlags 1
#define NanoJInputs_1A 1A // NanoJ Input #26
#define NanoJInputs_1A_ObjectType 0x7
typedef int32_t NanoJInputs_1A_DataType;
#define NanoJInputs_1A_AccessType rww
#define NanoJInputs_1A_DefaultValue 0x00000000
#define NanoJInputs_1A_PDOMapping 1
#define NanoJInputs_1A_ObjFlags 1
#define NanoJInputs_1B 1B // NanoJ Input #27
#define NanoJInputs_1B_ObjectType 0x7
typedef int32_t NanoJInputs_1B_DataType;
#define NanoJInputs_1B_AccessType rww
#define NanoJInputs_1B_DefaultValue 0x00000000
#define NanoJInputs_1B_PDOMapping 1
#define NanoJInputs_1B_ObjFlags 1
#define NanoJInputs_1C 1C // NanoJ Input #28
#define NanoJInputs_1C_ObjectType 0x7
typedef int32_t NanoJInputs_1C_DataType;
#define NanoJInputs_1C_AccessType rww
#define NanoJInputs_1C_DefaultValue 0x00000000
#define NanoJInputs_1C_PDOMapping 1
#define NanoJInputs_1C_ObjFlags 1
#define NanoJInputs_1D 1D // NanoJ Input #29
#define NanoJInputs_1D_ObjectType 0x7
typedef int32_t NanoJInputs_1D_DataType;
#define NanoJInputs_1D_AccessType rww
#define NanoJInputs_1D_DefaultValue 0x00000000
#define NanoJInputs_1D_PDOMapping 1
#define NanoJInputs_1D_ObjFlags 1
#define NanoJInputs_1E 1E // NanoJ Input #30
#define NanoJInputs_1E_ObjectType 0x7
typedef int32_t NanoJInputs_1E_DataType;
#define NanoJInputs_1E_AccessType rww
#define NanoJInputs_1E_DefaultValue 0x00000000
#define NanoJInputs_1E_PDOMapping 1
#define NanoJInputs_1E_ObjFlags 1
#define NanoJInputs_1F 1F // NanoJ Input #31
#define NanoJInputs_1F_ObjectType 0x7
typedef int32_t NanoJInputs_1F_DataType;
#define NanoJInputs_1F_AccessType rww
#define NanoJInputs_1F_DefaultValue 0x00000000
#define NanoJInputs_1F_PDOMapping 1
#define NanoJInputs_1F_ObjFlags 1
#define NanoJInputs_20 20 // NanoJ Input #32
#define NanoJInputs_20_ObjectType 0x7
typedef int32_t NanoJInputs_20_DataType;
#define NanoJInputs_20_AccessType rww
#define NanoJInputs_20_DefaultValue 0x00000000
#define NanoJInputs_20_PDOMapping 1
#define NanoJInputs_20_ObjFlags 1
#define NanoJInitParameters 0x2410
#define NanoJInitParameters_ObjectType 0x8
#define NanoJInitParameters_SubNumber 0x21
#define NanoJInitParameters_0 0 // Highest sub-index supported
#define NanoJInitParameters_0_ObjectType 0x7
typedef uint8_t NanoJInitParameters_0_DataType;
#define NanoJInitParameters_0_AccessType ro
#define NanoJInitParameters_0_DefaultValue 0x20
#define NanoJInitParameters_0_PDOMapping 0
#define NanoJInitParameters_1 1 // NanoJ Init Parameter #1
#define NanoJInitParameters_1_ObjectType 0x7
typedef int32_t NanoJInitParameters_1_DataType;
#define NanoJInitParameters_1_AccessType rww
#define NanoJInitParameters_1_DefaultValue 0x00000000
#define NanoJInitParameters_1_PDOMapping 1
#define NanoJInitParameters_2 2 // NanoJ Init Parameter #2
#define NanoJInitParameters_2_ObjectType 0x7
typedef int32_t NanoJInitParameters_2_DataType;
#define NanoJInitParameters_2_AccessType rww
#define NanoJInitParameters_2_DefaultValue 0x00000000
#define NanoJInitParameters_2_PDOMapping 1
#define NanoJInitParameters_3 3 // NanoJ Init Parameter #3
#define NanoJInitParameters_3_ObjectType 0x7
typedef int32_t NanoJInitParameters_3_DataType;
#define NanoJInitParameters_3_AccessType rww
#define NanoJInitParameters_3_DefaultValue 0x00000000
#define NanoJInitParameters_3_PDOMapping 1
#define NanoJInitParameters_4 4 // NanoJ Init Parameter #4
#define NanoJInitParameters_4_ObjectType 0x7
typedef int32_t NanoJInitParameters_4_DataType;
#define NanoJInitParameters_4_AccessType rww
#define NanoJInitParameters_4_DefaultValue 0x00000000
#define NanoJInitParameters_4_PDOMapping 1
#define NanoJInitParameters_5 5 // NanoJ Init Parameter #5
#define NanoJInitParameters_5_ObjectType 0x7
typedef int32_t NanoJInitParameters_5_DataType;
#define NanoJInitParameters_5_AccessType rww
#define NanoJInitParameters_5_DefaultValue 0x00000000
#define NanoJInitParameters_5_PDOMapping 1
#define NanoJInitParameters_6 6 // NanoJ Init Parameter #6
#define NanoJInitParameters_6_ObjectType 0x7
typedef int32_t NanoJInitParameters_6_DataType;
#define NanoJInitParameters_6_AccessType rww
#define NanoJInitParameters_6_DefaultValue 0x00000000
#define NanoJInitParameters_6_PDOMapping 1
#define NanoJInitParameters_7 7 // NanoJ Init Parameter #7
#define NanoJInitParameters_7_ObjectType 0x7
typedef int32_t NanoJInitParameters_7_DataType;
#define NanoJInitParameters_7_AccessType rww
#define NanoJInitParameters_7_DefaultValue 0x00000000
#define NanoJInitParameters_7_PDOMapping 1
#define NanoJInitParameters_8 8 // NanoJ Init Parameter #8
#define NanoJInitParameters_8_ObjectType 0x7
typedef int32_t NanoJInitParameters_8_DataType;
#define NanoJInitParameters_8_AccessType rww
#define NanoJInitParameters_8_DefaultValue 0x00000000
#define NanoJInitParameters_8_PDOMapping 1
#define NanoJInitParameters_9 9 // NanoJ Init Parameter #9
#define NanoJInitParameters_9_ObjectType 0x7
typedef int32_t NanoJInitParameters_9_DataType;
#define NanoJInitParameters_9_AccessType rww
#define NanoJInitParameters_9_DefaultValue 0x00000000
#define NanoJInitParameters_9_PDOMapping 1
#define NanoJInitParameters_A A // NanoJ Init Parameter #10
#define NanoJInitParameters_A_ObjectType 0x7
typedef int32_t NanoJInitParameters_A_DataType;
#define NanoJInitParameters_A_AccessType rww
#define NanoJInitParameters_A_DefaultValue 0x00000000
#define NanoJInitParameters_A_PDOMapping 1
#define NanoJInitParameters_B B // NanoJ Init Parameter #11
#define NanoJInitParameters_B_ObjectType 0x7
typedef int32_t NanoJInitParameters_B_DataType;
#define NanoJInitParameters_B_AccessType rww
#define NanoJInitParameters_B_DefaultValue 0x00000000
#define NanoJInitParameters_B_PDOMapping 1
#define NanoJInitParameters_C C // NanoJ Init Parameter #12
#define NanoJInitParameters_C_ObjectType 0x7
typedef int32_t NanoJInitParameters_C_DataType;
#define NanoJInitParameters_C_AccessType rww
#define NanoJInitParameters_C_DefaultValue 0x00000000
#define NanoJInitParameters_C_PDOMapping 1
#define NanoJInitParameters_D D // NanoJ Init Parameter #13
#define NanoJInitParameters_D_ObjectType 0x7
typedef int32_t NanoJInitParameters_D_DataType;
#define NanoJInitParameters_D_AccessType rww
#define NanoJInitParameters_D_DefaultValue 0x00000000
#define NanoJInitParameters_D_PDOMapping 1
#define NanoJInitParameters_E E // NanoJ Init Parameter #14
#define NanoJInitParameters_E_ObjectType 0x7
typedef int32_t NanoJInitParameters_E_DataType;
#define NanoJInitParameters_E_AccessType rww
#define NanoJInitParameters_E_DefaultValue 0x00000000
#define NanoJInitParameters_E_PDOMapping 1
#define NanoJInitParameters_F F // NanoJ Init Parameter #15
#define NanoJInitParameters_F_ObjectType 0x7
typedef int32_t NanoJInitParameters_F_DataType;
#define NanoJInitParameters_F_AccessType rww
#define NanoJInitParameters_F_DefaultValue 0x00000000
#define NanoJInitParameters_F_PDOMapping 1
#define NanoJInitParameters_10 10 // NanoJ Init Parameter #16
#define NanoJInitParameters_10_ObjectType 0x7
typedef int32_t NanoJInitParameters_10_DataType;
#define NanoJInitParameters_10_AccessType rww
#define NanoJInitParameters_10_DefaultValue 0x00000000
#define NanoJInitParameters_10_PDOMapping 1
#define NanoJInitParameters_11 11 // NanoJ Init Parameter #17
#define NanoJInitParameters_11_ObjectType 0x7
typedef int32_t NanoJInitParameters_11_DataType;
#define NanoJInitParameters_11_AccessType rww
#define NanoJInitParameters_11_DefaultValue 0x00000000
#define NanoJInitParameters_11_PDOMapping 1
#define NanoJInitParameters_12 12 // NanoJ Init Parameter #18
#define NanoJInitParameters_12_ObjectType 0x7
typedef int32_t NanoJInitParameters_12_DataType;
#define NanoJInitParameters_12_AccessType rww
#define NanoJInitParameters_12_DefaultValue 0x00000000
#define NanoJInitParameters_12_PDOMapping 1
#define NanoJInitParameters_13 13 // NanoJ Init Parameter #19
#define NanoJInitParameters_13_ObjectType 0x7
typedef int32_t NanoJInitParameters_13_DataType;
#define NanoJInitParameters_13_AccessType rww
#define NanoJInitParameters_13_DefaultValue 0x00000000
#define NanoJInitParameters_13_PDOMapping 1
#define NanoJInitParameters_14 14 // NanoJ Init Parameter #20
#define NanoJInitParameters_14_ObjectType 0x7
typedef int32_t NanoJInitParameters_14_DataType;
#define NanoJInitParameters_14_AccessType rww
#define NanoJInitParameters_14_DefaultValue 0x00000000
#define NanoJInitParameters_14_PDOMapping 1
#define NanoJInitParameters_15 15 // NanoJ Init Parameter #21
#define NanoJInitParameters_15_ObjectType 0x7
typedef int32_t NanoJInitParameters_15_DataType;
#define NanoJInitParameters_15_AccessType rww
#define NanoJInitParameters_15_DefaultValue 0x00000000
#define NanoJInitParameters_15_PDOMapping 1
#define NanoJInitParameters_16 16 // NanoJ Init Parameter #22
#define NanoJInitParameters_16_ObjectType 0x7
typedef int32_t NanoJInitParameters_16_DataType;
#define NanoJInitParameters_16_AccessType rww
#define NanoJInitParameters_16_DefaultValue 0x00000000
#define NanoJInitParameters_16_PDOMapping 1
#define NanoJInitParameters_17 17 // NanoJ Init Parameter #23
#define NanoJInitParameters_17_ObjectType 0x7
typedef int32_t NanoJInitParameters_17_DataType;
#define NanoJInitParameters_17_AccessType rww
#define NanoJInitParameters_17_DefaultValue 0x00000000
#define NanoJInitParameters_17_PDOMapping 1
#define NanoJInitParameters_18 18 // NanoJ Init Parameter #24
#define NanoJInitParameters_18_ObjectType 0x7
typedef int32_t NanoJInitParameters_18_DataType;
#define NanoJInitParameters_18_AccessType rww
#define NanoJInitParameters_18_DefaultValue 0x00000000
#define NanoJInitParameters_18_PDOMapping 1
#define NanoJInitParameters_19 19 // NanoJ Init Parameter #25
#define NanoJInitParameters_19_ObjectType 0x7
typedef int32_t NanoJInitParameters_19_DataType;
#define NanoJInitParameters_19_AccessType rww
#define NanoJInitParameters_19_DefaultValue 0x00000000
#define NanoJInitParameters_19_PDOMapping 1
#define NanoJInitParameters_1A 1A // NanoJ Init Parameter #26
#define NanoJInitParameters_1A_ObjectType 0x7
typedef int32_t NanoJInitParameters_1A_DataType;
#define NanoJInitParameters_1A_AccessType rww
#define NanoJInitParameters_1A_DefaultValue 0x00000000
#define NanoJInitParameters_1A_PDOMapping 1
#define NanoJInitParameters_1B 1B // NanoJ Init Parameter #27
#define NanoJInitParameters_1B_ObjectType 0x7
typedef int32_t NanoJInitParameters_1B_DataType;
#define NanoJInitParameters_1B_AccessType rww
#define NanoJInitParameters_1B_DefaultValue 0x00000000
#define NanoJInitParameters_1B_PDOMapping 1
#define NanoJInitParameters_1C 1C // NanoJ Init Parameter #28
#define NanoJInitParameters_1C_ObjectType 0x7
typedef int32_t NanoJInitParameters_1C_DataType;
#define NanoJInitParameters_1C_AccessType rww
#define NanoJInitParameters_1C_DefaultValue 0x00000000
#define NanoJInitParameters_1C_PDOMapping 1
#define NanoJInitParameters_1D 1D // NanoJ Init Parameter #29
#define NanoJInitParameters_1D_ObjectType 0x7
typedef int32_t NanoJInitParameters_1D_DataType;
#define NanoJInitParameters_1D_AccessType rww
#define NanoJInitParameters_1D_DefaultValue 0x00000000
#define NanoJInitParameters_1D_PDOMapping 1
#define NanoJInitParameters_1E 1E // NanoJ Init Parameter #30
#define NanoJInitParameters_1E_ObjectType 0x7
typedef int32_t NanoJInitParameters_1E_DataType;
#define NanoJInitParameters_1E_AccessType rww
#define NanoJInitParameters_1E_DefaultValue 0x00000000
#define NanoJInitParameters_1E_PDOMapping 1
#define NanoJInitParameters_1F 1F // NanoJ Init Parameter #31
#define NanoJInitParameters_1F_ObjectType 0x7
typedef int32_t NanoJInitParameters_1F_DataType;
#define NanoJInitParameters_1F_AccessType rww
#define NanoJInitParameters_1F_DefaultValue 0x00000000
#define NanoJInitParameters_1F_PDOMapping 1
#define NanoJInitParameters_20 20 // NanoJ Init Parameter #32
#define NanoJInitParameters_20_ObjectType 0x7
typedef int32_t NanoJInitParameters_20_DataType;
#define NanoJInitParameters_20_AccessType rww
#define NanoJInitParameters_20_DefaultValue 0x00000000
#define NanoJInitParameters_20_PDOMapping 1
#define NanoJOutputs 0x2500
#define NanoJOutputs_ObjectType 0x8
#define NanoJOutputs_SubNumber 0x21
#define NanoJOutputs_0 0 // Highest sub-index supported
#define NanoJOutputs_0_ObjectType 0x7
typedef uint8_t NanoJOutputs_0_DataType;
#define NanoJOutputs_0_AccessType ro
#define NanoJOutputs_0_DefaultValue 0x20
#define NanoJOutputs_0_PDOMapping 0
#define NanoJOutputs_0_ObjFlags 1
#define NanoJOutputs_1 1 // NanoJ Output #1
#define NanoJOutputs_1_ObjectType 0x7
typedef int32_t NanoJOutputs_1_DataType;
#define NanoJOutputs_1_AccessType rwr
#define NanoJOutputs_1_DefaultValue 0x00000000
#define NanoJOutputs_1_PDOMapping 1
#define NanoJOutputs_1_ObjFlags 1
#define NanoJOutputs_2 2 // NanoJ Output #2
#define NanoJOutputs_2_ObjectType 0x7
typedef int32_t NanoJOutputs_2_DataType;
#define NanoJOutputs_2_AccessType rwr
#define NanoJOutputs_2_DefaultValue 0x00000000
#define NanoJOutputs_2_PDOMapping 1
#define NanoJOutputs_2_ObjFlags 1
#define NanoJOutputs_3 3 // NanoJ Output #3
#define NanoJOutputs_3_ObjectType 0x7
typedef int32_t NanoJOutputs_3_DataType;
#define NanoJOutputs_3_AccessType rwr
#define NanoJOutputs_3_DefaultValue 0x00000000
#define NanoJOutputs_3_PDOMapping 1
#define NanoJOutputs_3_ObjFlags 1
#define NanoJOutputs_4 4 // NanoJ Output #4
#define NanoJOutputs_4_ObjectType 0x7
typedef int32_t NanoJOutputs_4_DataType;
#define NanoJOutputs_4_AccessType rwr
#define NanoJOutputs_4_DefaultValue 0x00000000
#define NanoJOutputs_4_PDOMapping 1
#define NanoJOutputs_4_ObjFlags 1
#define NanoJOutputs_5 5 // NanoJ Output #5
#define NanoJOutputs_5_ObjectType 0x7
typedef int32_t NanoJOutputs_5_DataType;
#define NanoJOutputs_5_AccessType rwr
#define NanoJOutputs_5_DefaultValue 0x00000000
#define NanoJOutputs_5_PDOMapping 1
#define NanoJOutputs_5_ObjFlags 1
#define NanoJOutputs_6 6 // NanoJ Output #6
#define NanoJOutputs_6_ObjectType 0x7
typedef int32_t NanoJOutputs_6_DataType;
#define NanoJOutputs_6_AccessType rwr
#define NanoJOutputs_6_DefaultValue 0x00000000
#define NanoJOutputs_6_PDOMapping 1
#define NanoJOutputs_6_ObjFlags 1
#define NanoJOutputs_7 7 // NanoJ Output #7
#define NanoJOutputs_7_ObjectType 0x7
typedef int32_t NanoJOutputs_7_DataType;
#define NanoJOutputs_7_AccessType rwr
#define NanoJOutputs_7_DefaultValue 0x00000000
#define NanoJOutputs_7_PDOMapping 1
#define NanoJOutputs_7_ObjFlags 1
#define NanoJOutputs_8 8 // NanoJ Output #8
#define NanoJOutputs_8_ObjectType 0x7
typedef int32_t NanoJOutputs_8_DataType;
#define NanoJOutputs_8_AccessType rwr
#define NanoJOutputs_8_DefaultValue 0x00000000
#define NanoJOutputs_8_PDOMapping 1
#define NanoJOutputs_8_ObjFlags 1
#define NanoJOutputs_9 9 // NanoJ Output #9
#define NanoJOutputs_9_ObjectType 0x7
typedef int32_t NanoJOutputs_9_DataType;
#define NanoJOutputs_9_AccessType rwr
#define NanoJOutputs_9_DefaultValue 0x00000000
#define NanoJOutputs_9_PDOMapping 1
#define NanoJOutputs_9_ObjFlags 1
#define NanoJOutputs_A A // NanoJ Output #10
#define NanoJOutputs_A_ObjectType 0x7
typedef int32_t NanoJOutputs_A_DataType;
#define NanoJOutputs_A_AccessType rwr
#define NanoJOutputs_A_DefaultValue 0x00000000
#define NanoJOutputs_A_PDOMapping 1
#define NanoJOutputs_A_ObjFlags 1
#define NanoJOutputs_B B // NanoJ Output #11
#define NanoJOutputs_B_ObjectType 0x7
typedef int32_t NanoJOutputs_B_DataType;
#define NanoJOutputs_B_AccessType rwr
#define NanoJOutputs_B_DefaultValue 0x00000000
#define NanoJOutputs_B_PDOMapping 1
#define NanoJOutputs_B_ObjFlags 1
#define NanoJOutputs_C C // NanoJ Output #12
#define NanoJOutputs_C_ObjectType 0x7
typedef int32_t NanoJOutputs_C_DataType;
#define NanoJOutputs_C_AccessType rwr
#define NanoJOutputs_C_DefaultValue 0x00000000
#define NanoJOutputs_C_PDOMapping 1
#define NanoJOutputs_C_ObjFlags 1
#define NanoJOutputs_D D // NanoJ Output #13
#define NanoJOutputs_D_ObjectType 0x7
typedef int32_t NanoJOutputs_D_DataType;
#define NanoJOutputs_D_AccessType rwr
#define NanoJOutputs_D_DefaultValue 0x00000000
#define NanoJOutputs_D_PDOMapping 1
#define NanoJOutputs_D_ObjFlags 1
#define NanoJOutputs_E E // NanoJ Output #14
#define NanoJOutputs_E_ObjectType 0x7
typedef int32_t NanoJOutputs_E_DataType;
#define NanoJOutputs_E_AccessType rwr
#define NanoJOutputs_E_DefaultValue 0x00000000
#define NanoJOutputs_E_PDOMapping 1
#define NanoJOutputs_E_ObjFlags 1
#define NanoJOutputs_F F // NanoJ Output #15
#define NanoJOutputs_F_ObjectType 0x7
typedef int32_t NanoJOutputs_F_DataType;
#define NanoJOutputs_F_AccessType rwr
#define NanoJOutputs_F_DefaultValue 0x00000000
#define NanoJOutputs_F_PDOMapping 1
#define NanoJOutputs_F_ObjFlags 1
#define NanoJOutputs_10 10 // NanoJ Output #16
#define NanoJOutputs_10_ObjectType 0x7
typedef int32_t NanoJOutputs_10_DataType;
#define NanoJOutputs_10_AccessType rwr
#define NanoJOutputs_10_DefaultValue 0x00000000
#define NanoJOutputs_10_PDOMapping 1
#define NanoJOutputs_10_ObjFlags 1
#define NanoJOutputs_11 11 // NanoJ Output #17
#define NanoJOutputs_11_ObjectType 0x7
typedef int32_t NanoJOutputs_11_DataType;
#define NanoJOutputs_11_AccessType rwr
#define NanoJOutputs_11_DefaultValue 0x00000000
#define NanoJOutputs_11_PDOMapping 1
#define NanoJOutputs_11_ObjFlags 1
#define NanoJOutputs_12 12 // NanoJ Output #18
#define NanoJOutputs_12_ObjectType 0x7
typedef int32_t NanoJOutputs_12_DataType;
#define NanoJOutputs_12_AccessType rwr
#define NanoJOutputs_12_DefaultValue 0x00000000
#define NanoJOutputs_12_PDOMapping 1
#define NanoJOutputs_12_ObjFlags 1
#define NanoJOutputs_13 13 // NanoJ Output #19
#define NanoJOutputs_13_ObjectType 0x7
typedef int32_t NanoJOutputs_13_DataType;
#define NanoJOutputs_13_AccessType rwr
#define NanoJOutputs_13_DefaultValue 0x00000000
#define NanoJOutputs_13_PDOMapping 1
#define NanoJOutputs_13_ObjFlags 1
#define NanoJOutputs_14 14 // NanoJ Output #20
#define NanoJOutputs_14_ObjectType 0x7
typedef int32_t NanoJOutputs_14_DataType;
#define NanoJOutputs_14_AccessType rwr
#define NanoJOutputs_14_DefaultValue 0x00000000
#define NanoJOutputs_14_PDOMapping 1
#define NanoJOutputs_14_ObjFlags 1
#define NanoJOutputs_15 15 // NanoJ Output #21
#define NanoJOutputs_15_ObjectType 0x7
typedef int32_t NanoJOutputs_15_DataType;
#define NanoJOutputs_15_AccessType rwr
#define NanoJOutputs_15_DefaultValue 0x00000000
#define NanoJOutputs_15_PDOMapping 1
#define NanoJOutputs_15_ObjFlags 1
#define NanoJOutputs_16 16 // NanoJ Output #22
#define NanoJOutputs_16_ObjectType 0x7
typedef int32_t NanoJOutputs_16_DataType;
#define NanoJOutputs_16_AccessType rwr
#define NanoJOutputs_16_DefaultValue 0x00000000
#define NanoJOutputs_16_PDOMapping 1
#define NanoJOutputs_16_ObjFlags 1
#define NanoJOutputs_17 17 // NanoJ Output #23
#define NanoJOutputs_17_ObjectType 0x7
typedef int32_t NanoJOutputs_17_DataType;
#define NanoJOutputs_17_AccessType rwr
#define NanoJOutputs_17_DefaultValue 0x00000000
#define NanoJOutputs_17_PDOMapping 1
#define NanoJOutputs_17_ObjFlags 1
#define NanoJOutputs_18 18 // NanoJ Output #24
#define NanoJOutputs_18_ObjectType 0x7
typedef int32_t NanoJOutputs_18_DataType;
#define NanoJOutputs_18_AccessType rwr
#define NanoJOutputs_18_DefaultValue 0x00000000
#define NanoJOutputs_18_PDOMapping 1
#define NanoJOutputs_18_ObjFlags 1
#define NanoJOutputs_19 19 // NanoJ Output #25
#define NanoJOutputs_19_ObjectType 0x7
typedef int32_t NanoJOutputs_19_DataType;
#define NanoJOutputs_19_AccessType rwr
#define NanoJOutputs_19_DefaultValue 0x00000000
#define NanoJOutputs_19_PDOMapping 1
#define NanoJOutputs_19_ObjFlags 1
#define NanoJOutputs_1A 1A // NanoJ Output #26
#define NanoJOutputs_1A_ObjectType 0x7
typedef int32_t NanoJOutputs_1A_DataType;
#define NanoJOutputs_1A_AccessType rwr
#define NanoJOutputs_1A_DefaultValue 0x00000000
#define NanoJOutputs_1A_PDOMapping 1
#define NanoJOutputs_1A_ObjFlags 1
#define NanoJOutputs_1B 1B // NanoJ Output #27
#define NanoJOutputs_1B_ObjectType 0x7
typedef int32_t NanoJOutputs_1B_DataType;
#define NanoJOutputs_1B_AccessType rwr
#define NanoJOutputs_1B_DefaultValue 0x00000000
#define NanoJOutputs_1B_PDOMapping 1
#define NanoJOutputs_1B_ObjFlags 1
#define NanoJOutputs_1C 1C // NanoJ Output #28
#define NanoJOutputs_1C_ObjectType 0x7
typedef int32_t NanoJOutputs_1C_DataType;
#define NanoJOutputs_1C_AccessType rwr
#define NanoJOutputs_1C_DefaultValue 0x00000000
#define NanoJOutputs_1C_PDOMapping 1
#define NanoJOutputs_1C_ObjFlags 1
#define NanoJOutputs_1D 1D // NanoJ Output #29
#define NanoJOutputs_1D_ObjectType 0x7
typedef int32_t NanoJOutputs_1D_DataType;
#define NanoJOutputs_1D_AccessType rwr
#define NanoJOutputs_1D_DefaultValue 0x00000000
#define NanoJOutputs_1D_PDOMapping 1
#define NanoJOutputs_1D_ObjFlags 1
#define NanoJOutputs_1E 1E // NanoJ Output #30
#define NanoJOutputs_1E_ObjectType 0x7
typedef int32_t NanoJOutputs_1E_DataType;
#define NanoJOutputs_1E_AccessType rwr
#define NanoJOutputs_1E_DefaultValue 0x00000000
#define NanoJOutputs_1E_PDOMapping 1
#define NanoJOutputs_1E_ObjFlags 1
#define NanoJOutputs_1F 1F // NanoJ Output #31
#define NanoJOutputs_1F_ObjectType 0x7
typedef int32_t NanoJOutputs_1F_DataType;
#define NanoJOutputs_1F_AccessType rwr
#define NanoJOutputs_1F_DefaultValue 0x00000000
#define NanoJOutputs_1F_PDOMapping 1
#define NanoJOutputs_1F_ObjFlags 1
#define NanoJOutputs_20 20 // NanoJ Output #32
#define NanoJOutputs_20_ObjectType 0x7
typedef int32_t NanoJOutputs_20_DataType;
#define NanoJOutputs_20_AccessType rwr
#define NanoJOutputs_20_DefaultValue 0x00000000
#define NanoJOutputs_20_PDOMapping 1
#define NanoJOutputs_20_ObjFlags 1
#define NanoJDebugOutput 0x2600
#define NanoJDebugOutput_ObjectType 0x8
#define NanoJDebugOutput_SubNumber 0x41
#define NanoJDebugOutput_0 0 // Highest sub-index supported
#define NanoJDebugOutput_0_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_0_DataType;
#define NanoJDebugOutput_0_AccessType rw
#define NanoJDebugOutput_0_DefaultValue 0x00
#define NanoJDebugOutput_0_PDOMapping 0
#define NanoJDebugOutput_0_ObjFlags 1
#define NanoJDebugOutput_1 1 // Value #1
#define NanoJDebugOutput_1_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1_DataType;
#define NanoJDebugOutput_1_AccessType ro
#define NanoJDebugOutput_1_DefaultValue 0x00
#define NanoJDebugOutput_1_PDOMapping 0
#define NanoJDebugOutput_1_ObjFlags 1
#define NanoJDebugOutput_2 2 // Value #2
#define NanoJDebugOutput_2_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2_DataType;
#define NanoJDebugOutput_2_AccessType ro
#define NanoJDebugOutput_2_DefaultValue 0x00
#define NanoJDebugOutput_2_PDOMapping 0
#define NanoJDebugOutput_2_ObjFlags 1
#define NanoJDebugOutput_3 3 // Value #3
#define NanoJDebugOutput_3_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3_DataType;
#define NanoJDebugOutput_3_AccessType ro
#define NanoJDebugOutput_3_DefaultValue 0x00
#define NanoJDebugOutput_3_PDOMapping 0
#define NanoJDebugOutput_3_ObjFlags 1
#define NanoJDebugOutput_4 4 // Value #4
#define NanoJDebugOutput_4_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_4_DataType;
#define NanoJDebugOutput_4_AccessType ro
#define NanoJDebugOutput_4_DefaultValue 0x00
#define NanoJDebugOutput_4_PDOMapping 0
#define NanoJDebugOutput_4_ObjFlags 1
#define NanoJDebugOutput_5 5 // Value #5
#define NanoJDebugOutput_5_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_5_DataType;
#define NanoJDebugOutput_5_AccessType ro
#define NanoJDebugOutput_5_DefaultValue 0x00
#define NanoJDebugOutput_5_PDOMapping 0
#define NanoJDebugOutput_5_ObjFlags 1
#define NanoJDebugOutput_6 6 // Value #6
#define NanoJDebugOutput_6_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_6_DataType;
#define NanoJDebugOutput_6_AccessType ro
#define NanoJDebugOutput_6_DefaultValue 0x00
#define NanoJDebugOutput_6_PDOMapping 0
#define NanoJDebugOutput_6_ObjFlags 1
#define NanoJDebugOutput_7 7 // Value #7
#define NanoJDebugOutput_7_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_7_DataType;
#define NanoJDebugOutput_7_AccessType ro
#define NanoJDebugOutput_7_DefaultValue 0x00
#define NanoJDebugOutput_7_PDOMapping 0
#define NanoJDebugOutput_7_ObjFlags 1
#define NanoJDebugOutput_8 8 // Value #8
#define NanoJDebugOutput_8_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_8_DataType;
#define NanoJDebugOutput_8_AccessType ro
#define NanoJDebugOutput_8_DefaultValue 0x00
#define NanoJDebugOutput_8_PDOMapping 0
#define NanoJDebugOutput_8_ObjFlags 1
#define NanoJDebugOutput_9 9 // Value #9
#define NanoJDebugOutput_9_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_9_DataType;
#define NanoJDebugOutput_9_AccessType ro
#define NanoJDebugOutput_9_DefaultValue 0x00
#define NanoJDebugOutput_9_PDOMapping 0
#define NanoJDebugOutput_9_ObjFlags 1
#define NanoJDebugOutput_A A // Value #10
#define NanoJDebugOutput_A_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_A_DataType;
#define NanoJDebugOutput_A_AccessType ro
#define NanoJDebugOutput_A_DefaultValue 0x00
#define NanoJDebugOutput_A_PDOMapping 0
#define NanoJDebugOutput_A_ObjFlags 1
#define NanoJDebugOutput_B B // Value #11
#define NanoJDebugOutput_B_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_B_DataType;
#define NanoJDebugOutput_B_AccessType ro
#define NanoJDebugOutput_B_DefaultValue 0x00
#define NanoJDebugOutput_B_PDOMapping 0
#define NanoJDebugOutput_B_ObjFlags 1
#define NanoJDebugOutput_C C // Value #12
#define NanoJDebugOutput_C_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_C_DataType;
#define NanoJDebugOutput_C_AccessType ro
#define NanoJDebugOutput_C_DefaultValue 0x00
#define NanoJDebugOutput_C_PDOMapping 0
#define NanoJDebugOutput_C_ObjFlags 1
#define NanoJDebugOutput_D D // Value #13
#define NanoJDebugOutput_D_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_D_DataType;
#define NanoJDebugOutput_D_AccessType ro
#define NanoJDebugOutput_D_DefaultValue 0x00
#define NanoJDebugOutput_D_PDOMapping 0
#define NanoJDebugOutput_D_ObjFlags 1
#define NanoJDebugOutput_E E // Value #14
#define NanoJDebugOutput_E_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_E_DataType;
#define NanoJDebugOutput_E_AccessType ro
#define NanoJDebugOutput_E_DefaultValue 0x00
#define NanoJDebugOutput_E_PDOMapping 0
#define NanoJDebugOutput_E_ObjFlags 1
#define NanoJDebugOutput_F F // Value #15
#define NanoJDebugOutput_F_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_F_DataType;
#define NanoJDebugOutput_F_AccessType ro
#define NanoJDebugOutput_F_DefaultValue 0x00
#define NanoJDebugOutput_F_PDOMapping 0
#define NanoJDebugOutput_F_ObjFlags 1
#define NanoJDebugOutput_10 10 // Value #16
#define NanoJDebugOutput_10_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_10_DataType;
#define NanoJDebugOutput_10_AccessType ro
#define NanoJDebugOutput_10_DefaultValue 0x00
#define NanoJDebugOutput_10_PDOMapping 0
#define NanoJDebugOutput_10_ObjFlags 1
#define NanoJDebugOutput_11 11 // Value #17
#define NanoJDebugOutput_11_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_11_DataType;
#define NanoJDebugOutput_11_AccessType ro
#define NanoJDebugOutput_11_DefaultValue 0x00
#define NanoJDebugOutput_11_PDOMapping 0
#define NanoJDebugOutput_11_ObjFlags 1
#define NanoJDebugOutput_12 12 // Value #18
#define NanoJDebugOutput_12_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_12_DataType;
#define NanoJDebugOutput_12_AccessType ro
#define NanoJDebugOutput_12_DefaultValue 0x00
#define NanoJDebugOutput_12_PDOMapping 0
#define NanoJDebugOutput_12_ObjFlags 1
#define NanoJDebugOutput_13 13 // Value #19
#define NanoJDebugOutput_13_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_13_DataType;
#define NanoJDebugOutput_13_AccessType ro
#define NanoJDebugOutput_13_DefaultValue 0x00
#define NanoJDebugOutput_13_PDOMapping 0
#define NanoJDebugOutput_13_ObjFlags 1
#define NanoJDebugOutput_14 14 // Value #20
#define NanoJDebugOutput_14_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_14_DataType;
#define NanoJDebugOutput_14_AccessType ro
#define NanoJDebugOutput_14_DefaultValue 0x00
#define NanoJDebugOutput_14_PDOMapping 0
#define NanoJDebugOutput_14_ObjFlags 1
#define NanoJDebugOutput_15 15 // Value #21
#define NanoJDebugOutput_15_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_15_DataType;
#define NanoJDebugOutput_15_AccessType ro
#define NanoJDebugOutput_15_DefaultValue 0x00
#define NanoJDebugOutput_15_PDOMapping 0
#define NanoJDebugOutput_15_ObjFlags 1
#define NanoJDebugOutput_16 16 // Value #22
#define NanoJDebugOutput_16_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_16_DataType;
#define NanoJDebugOutput_16_AccessType ro
#define NanoJDebugOutput_16_DefaultValue 0x00
#define NanoJDebugOutput_16_PDOMapping 0
#define NanoJDebugOutput_16_ObjFlags 1
#define NanoJDebugOutput_17 17 // Value #23
#define NanoJDebugOutput_17_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_17_DataType;
#define NanoJDebugOutput_17_AccessType ro
#define NanoJDebugOutput_17_DefaultValue 0x00
#define NanoJDebugOutput_17_PDOMapping 0
#define NanoJDebugOutput_17_ObjFlags 1
#define NanoJDebugOutput_18 18 // Value #24
#define NanoJDebugOutput_18_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_18_DataType;
#define NanoJDebugOutput_18_AccessType ro
#define NanoJDebugOutput_18_DefaultValue 0x00
#define NanoJDebugOutput_18_PDOMapping 0
#define NanoJDebugOutput_18_ObjFlags 1
#define NanoJDebugOutput_19 19 // Value #25
#define NanoJDebugOutput_19_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_19_DataType;
#define NanoJDebugOutput_19_AccessType ro
#define NanoJDebugOutput_19_DefaultValue 0x00
#define NanoJDebugOutput_19_PDOMapping 0
#define NanoJDebugOutput_19_ObjFlags 1
#define NanoJDebugOutput_1A 1A // Value #26
#define NanoJDebugOutput_1A_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1A_DataType;
#define NanoJDebugOutput_1A_AccessType ro
#define NanoJDebugOutput_1A_DefaultValue 0x00
#define NanoJDebugOutput_1A_PDOMapping 0
#define NanoJDebugOutput_1A_ObjFlags 1
#define NanoJDebugOutput_1B 1B // Value #27
#define NanoJDebugOutput_1B_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1B_DataType;
#define NanoJDebugOutput_1B_AccessType ro
#define NanoJDebugOutput_1B_DefaultValue 0x00
#define NanoJDebugOutput_1B_PDOMapping 0
#define NanoJDebugOutput_1B_ObjFlags 1
#define NanoJDebugOutput_1C 1C // Value #28
#define NanoJDebugOutput_1C_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1C_DataType;
#define NanoJDebugOutput_1C_AccessType ro
#define NanoJDebugOutput_1C_DefaultValue 0x00
#define NanoJDebugOutput_1C_PDOMapping 0
#define NanoJDebugOutput_1C_ObjFlags 1
#define NanoJDebugOutput_1D 1D // Value #29
#define NanoJDebugOutput_1D_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1D_DataType;
#define NanoJDebugOutput_1D_AccessType ro
#define NanoJDebugOutput_1D_DefaultValue 0x00
#define NanoJDebugOutput_1D_PDOMapping 0
#define NanoJDebugOutput_1D_ObjFlags 1
#define NanoJDebugOutput_1E 1E // Value #30
#define NanoJDebugOutput_1E_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1E_DataType;
#define NanoJDebugOutput_1E_AccessType ro
#define NanoJDebugOutput_1E_DefaultValue 0x00
#define NanoJDebugOutput_1E_PDOMapping 0
#define NanoJDebugOutput_1E_ObjFlags 1
#define NanoJDebugOutput_1F 1F // Value #31
#define NanoJDebugOutput_1F_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_1F_DataType;
#define NanoJDebugOutput_1F_AccessType ro
#define NanoJDebugOutput_1F_DefaultValue 0x00
#define NanoJDebugOutput_1F_PDOMapping 0
#define NanoJDebugOutput_1F_ObjFlags 1
#define NanoJDebugOutput_20 20 // Value #32
#define NanoJDebugOutput_20_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_20_DataType;
#define NanoJDebugOutput_20_AccessType ro
#define NanoJDebugOutput_20_DefaultValue 0x00
#define NanoJDebugOutput_20_PDOMapping 0
#define NanoJDebugOutput_20_ObjFlags 1
#define NanoJDebugOutput_21 21 // Value #33
#define NanoJDebugOutput_21_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_21_DataType;
#define NanoJDebugOutput_21_AccessType ro
#define NanoJDebugOutput_21_DefaultValue 0x00
#define NanoJDebugOutput_21_PDOMapping 0
#define NanoJDebugOutput_21_ObjFlags 1
#define NanoJDebugOutput_22 22 // Value #34
#define NanoJDebugOutput_22_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_22_DataType;
#define NanoJDebugOutput_22_AccessType ro
#define NanoJDebugOutput_22_DefaultValue 0x00
#define NanoJDebugOutput_22_PDOMapping 0
#define NanoJDebugOutput_22_ObjFlags 1
#define NanoJDebugOutput_23 23 // Value #35
#define NanoJDebugOutput_23_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_23_DataType;
#define NanoJDebugOutput_23_AccessType ro
#define NanoJDebugOutput_23_DefaultValue 0x00
#define NanoJDebugOutput_23_PDOMapping 0
#define NanoJDebugOutput_23_ObjFlags 1
#define NanoJDebugOutput_24 24 // Value #36
#define NanoJDebugOutput_24_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_24_DataType;
#define NanoJDebugOutput_24_AccessType ro
#define NanoJDebugOutput_24_DefaultValue 0x00
#define NanoJDebugOutput_24_PDOMapping 0
#define NanoJDebugOutput_24_ObjFlags 1
#define NanoJDebugOutput_25 25 // Value #37
#define NanoJDebugOutput_25_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_25_DataType;
#define NanoJDebugOutput_25_AccessType ro
#define NanoJDebugOutput_25_DefaultValue 0x00
#define NanoJDebugOutput_25_PDOMapping 0
#define NanoJDebugOutput_25_ObjFlags 1
#define NanoJDebugOutput_26 26 // Value #38
#define NanoJDebugOutput_26_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_26_DataType;
#define NanoJDebugOutput_26_AccessType ro
#define NanoJDebugOutput_26_DefaultValue 0x00
#define NanoJDebugOutput_26_PDOMapping 0
#define NanoJDebugOutput_26_ObjFlags 1
#define NanoJDebugOutput_27 27 // Value #39
#define NanoJDebugOutput_27_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_27_DataType;
#define NanoJDebugOutput_27_AccessType ro
#define NanoJDebugOutput_27_DefaultValue 0x00
#define NanoJDebugOutput_27_PDOMapping 0
#define NanoJDebugOutput_27_ObjFlags 1
#define NanoJDebugOutput_28 28 // Value #40
#define NanoJDebugOutput_28_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_28_DataType;
#define NanoJDebugOutput_28_AccessType ro
#define NanoJDebugOutput_28_DefaultValue 0x00
#define NanoJDebugOutput_28_PDOMapping 0
#define NanoJDebugOutput_28_ObjFlags 1
#define NanoJDebugOutput_29 29 // Value #41
#define NanoJDebugOutput_29_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_29_DataType;
#define NanoJDebugOutput_29_AccessType ro
#define NanoJDebugOutput_29_DefaultValue 0x00
#define NanoJDebugOutput_29_PDOMapping 0
#define NanoJDebugOutput_29_ObjFlags 1
#define NanoJDebugOutput_2A 2A // Value #42
#define NanoJDebugOutput_2A_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2A_DataType;
#define NanoJDebugOutput_2A_AccessType ro
#define NanoJDebugOutput_2A_DefaultValue 0x00
#define NanoJDebugOutput_2A_PDOMapping 0
#define NanoJDebugOutput_2A_ObjFlags 1
#define NanoJDebugOutput_2B 2B // Value #43
#define NanoJDebugOutput_2B_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2B_DataType;
#define NanoJDebugOutput_2B_AccessType ro
#define NanoJDebugOutput_2B_DefaultValue 0x00
#define NanoJDebugOutput_2B_PDOMapping 0
#define NanoJDebugOutput_2B_ObjFlags 1
#define NanoJDebugOutput_2C 2C // Value #44
#define NanoJDebugOutput_2C_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2C_DataType;
#define NanoJDebugOutput_2C_AccessType ro
#define NanoJDebugOutput_2C_DefaultValue 0x00
#define NanoJDebugOutput_2C_PDOMapping 0
#define NanoJDebugOutput_2C_ObjFlags 1
#define NanoJDebugOutput_2D 2D // Value #45
#define NanoJDebugOutput_2D_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2D_DataType;
#define NanoJDebugOutput_2D_AccessType ro
#define NanoJDebugOutput_2D_DefaultValue 0x00
#define NanoJDebugOutput_2D_PDOMapping 0
#define NanoJDebugOutput_2D_ObjFlags 1
#define NanoJDebugOutput_2E 2E // Value #46
#define NanoJDebugOutput_2E_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2E_DataType;
#define NanoJDebugOutput_2E_AccessType ro
#define NanoJDebugOutput_2E_DefaultValue 0x00
#define NanoJDebugOutput_2E_PDOMapping 0
#define NanoJDebugOutput_2E_ObjFlags 1
#define NanoJDebugOutput_2F 2F // Value #47
#define NanoJDebugOutput_2F_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_2F_DataType;
#define NanoJDebugOutput_2F_AccessType ro
#define NanoJDebugOutput_2F_DefaultValue 0x00
#define NanoJDebugOutput_2F_PDOMapping 0
#define NanoJDebugOutput_2F_ObjFlags 1
#define NanoJDebugOutput_30 30 // Value #48
#define NanoJDebugOutput_30_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_30_DataType;
#define NanoJDebugOutput_30_AccessType ro
#define NanoJDebugOutput_30_DefaultValue 0x00
#define NanoJDebugOutput_30_PDOMapping 0
#define NanoJDebugOutput_30_ObjFlags 1
#define NanoJDebugOutput_31 31 // Value #49
#define NanoJDebugOutput_31_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_31_DataType;
#define NanoJDebugOutput_31_AccessType ro
#define NanoJDebugOutput_31_DefaultValue 0x00
#define NanoJDebugOutput_31_PDOMapping 0
#define NanoJDebugOutput_31_ObjFlags 1
#define NanoJDebugOutput_32 32 // Value #50
#define NanoJDebugOutput_32_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_32_DataType;
#define NanoJDebugOutput_32_AccessType ro
#define NanoJDebugOutput_32_DefaultValue 0x00
#define NanoJDebugOutput_32_PDOMapping 0
#define NanoJDebugOutput_32_ObjFlags 1
#define NanoJDebugOutput_33 33 // Value #51
#define NanoJDebugOutput_33_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_33_DataType;
#define NanoJDebugOutput_33_AccessType ro
#define NanoJDebugOutput_33_DefaultValue 0x00
#define NanoJDebugOutput_33_PDOMapping 0
#define NanoJDebugOutput_33_ObjFlags 1
#define NanoJDebugOutput_34 34 // Value #52
#define NanoJDebugOutput_34_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_34_DataType;
#define NanoJDebugOutput_34_AccessType ro
#define NanoJDebugOutput_34_DefaultValue 0x00
#define NanoJDebugOutput_34_PDOMapping 0
#define NanoJDebugOutput_34_ObjFlags 1
#define NanoJDebugOutput_35 35 // Value #53
#define NanoJDebugOutput_35_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_35_DataType;
#define NanoJDebugOutput_35_AccessType ro
#define NanoJDebugOutput_35_DefaultValue 0x00
#define NanoJDebugOutput_35_PDOMapping 0
#define NanoJDebugOutput_35_ObjFlags 1
#define NanoJDebugOutput_36 36 // Value #54
#define NanoJDebugOutput_36_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_36_DataType;
#define NanoJDebugOutput_36_AccessType ro
#define NanoJDebugOutput_36_DefaultValue 0x00
#define NanoJDebugOutput_36_PDOMapping 0
#define NanoJDebugOutput_36_ObjFlags 1
#define NanoJDebugOutput_37 37 // Value #55
#define NanoJDebugOutput_37_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_37_DataType;
#define NanoJDebugOutput_37_AccessType ro
#define NanoJDebugOutput_37_DefaultValue 0x00
#define NanoJDebugOutput_37_PDOMapping 0
#define NanoJDebugOutput_37_ObjFlags 1
#define NanoJDebugOutput_38 38 // Value #56
#define NanoJDebugOutput_38_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_38_DataType;
#define NanoJDebugOutput_38_AccessType ro
#define NanoJDebugOutput_38_DefaultValue 0x00
#define NanoJDebugOutput_38_PDOMapping 0
#define NanoJDebugOutput_38_ObjFlags 1
#define NanoJDebugOutput_39 39 // Value #57
#define NanoJDebugOutput_39_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_39_DataType;
#define NanoJDebugOutput_39_AccessType ro
#define NanoJDebugOutput_39_DefaultValue 0x00
#define NanoJDebugOutput_39_PDOMapping 0
#define NanoJDebugOutput_39_ObjFlags 1
#define NanoJDebugOutput_3A 3A // Value #58
#define NanoJDebugOutput_3A_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3A_DataType;
#define NanoJDebugOutput_3A_AccessType ro
#define NanoJDebugOutput_3A_DefaultValue 0x00
#define NanoJDebugOutput_3A_PDOMapping 0
#define NanoJDebugOutput_3A_ObjFlags 1
#define NanoJDebugOutput_3B 3B // Value #59
#define NanoJDebugOutput_3B_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3B_DataType;
#define NanoJDebugOutput_3B_AccessType ro
#define NanoJDebugOutput_3B_DefaultValue 0x00
#define NanoJDebugOutput_3B_PDOMapping 0
#define NanoJDebugOutput_3B_ObjFlags 1
#define NanoJDebugOutput_3C 3C // Value #60
#define NanoJDebugOutput_3C_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3C_DataType;
#define NanoJDebugOutput_3C_AccessType ro
#define NanoJDebugOutput_3C_DefaultValue 0x00
#define NanoJDebugOutput_3C_PDOMapping 0
#define NanoJDebugOutput_3C_ObjFlags 1
#define NanoJDebugOutput_3D 3D // Value #61
#define NanoJDebugOutput_3D_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3D_DataType;
#define NanoJDebugOutput_3D_AccessType ro
#define NanoJDebugOutput_3D_DefaultValue 0x00
#define NanoJDebugOutput_3D_PDOMapping 0
#define NanoJDebugOutput_3D_ObjFlags 1
#define NanoJDebugOutput_3E 3E // Value #62
#define NanoJDebugOutput_3E_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3E_DataType;
#define NanoJDebugOutput_3E_AccessType ro
#define NanoJDebugOutput_3E_DefaultValue 0x00
#define NanoJDebugOutput_3E_PDOMapping 0
#define NanoJDebugOutput_3E_ObjFlags 1
#define NanoJDebugOutput_3F 3F // Value #63
#define NanoJDebugOutput_3F_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_3F_DataType;
#define NanoJDebugOutput_3F_AccessType ro
#define NanoJDebugOutput_3F_DefaultValue 0x00
#define NanoJDebugOutput_3F_PDOMapping 0
#define NanoJDebugOutput_3F_ObjFlags 1
#define NanoJDebugOutput_40 40 // Value #64
#define NanoJDebugOutput_40_ObjectType 0x7
typedef uint8_t NanoJDebugOutput_40_DataType;
#define NanoJDebugOutput_40_AccessType ro
#define NanoJDebugOutput_40_DefaultValue 0x00
#define NanoJDebugOutput_40_PDOMapping 0
#define NanoJDebugOutput_40_ObjFlags 1
#define Userstoragearea 0x2700
#define Userstoragearea_ObjectType 0x9
#define Userstoragearea_SubNumber 0x0A
#define Userstoragearea_0 0 // Highest sub-index supported
#define Userstoragearea_0_ObjectType 0x7
typedef uint8_t Userstoragearea_0_DataType;
#define Userstoragearea_0_AccessType ro
#define Userstoragearea_0_DefaultValue 0x09
#define Userstoragearea_0_PDOMapping 0
#define Userstoragearea_1 1 // Storage Control Word
#define Userstoragearea_1_ObjectType 0x7
typedef uint8_t Userstoragearea_1_DataType;
#define Userstoragearea_1_AccessType rw
#define Userstoragearea_1_DefaultValue 0x00
#define Userstoragearea_1_PDOMapping 0
#define Userstoragearea_2 2 // Storage #1
#define Userstoragearea_2_ObjectType 0x7
typedef uint16_t Userstoragearea_2_DataType;
#define Userstoragearea_2_AccessType rw
#define Userstoragearea_2_DefaultValue 0x0000
#define Userstoragearea_2_PDOMapping 0
#define Userstoragearea_3 3 // Storage #2
#define Userstoragearea_3_ObjectType 0x7
typedef uint16_t Userstoragearea_3_DataType;
#define Userstoragearea_3_AccessType rw
#define Userstoragearea_3_DefaultValue 0x0000
#define Userstoragearea_3_PDOMapping 0
#define Userstoragearea_4 4 // Storage #3
#define Userstoragearea_4_ObjectType 0x7
typedef uint16_t Userstoragearea_4_DataType;
#define Userstoragearea_4_AccessType rw
#define Userstoragearea_4_DefaultValue 0x0000
#define Userstoragearea_4_PDOMapping 0
#define Userstoragearea_5 5 // Storage #4
#define Userstoragearea_5_ObjectType 0x7
typedef uint16_t Userstoragearea_5_DataType;
#define Userstoragearea_5_AccessType rw
#define Userstoragearea_5_DefaultValue 0x0000
#define Userstoragearea_5_PDOMapping 0
#define Userstoragearea_6 6 // Storage #5
#define Userstoragearea_6_ObjectType 0x7
typedef uint16_t Userstoragearea_6_DataType;
#define Userstoragearea_6_AccessType rw
#define Userstoragearea_6_DefaultValue 0x0000
#define Userstoragearea_6_PDOMapping 0
#define Userstoragearea_7 7 // Storage #6
#define Userstoragearea_7_ObjectType 0x7
typedef uint16_t Userstoragearea_7_DataType;
#define Userstoragearea_7_AccessType rw
#define Userstoragearea_7_DefaultValue 0x0000
#define Userstoragearea_7_PDOMapping 0
#define Userstoragearea_8 8 // Storage #7
#define Userstoragearea_8_ObjectType 0x7
typedef uint16_t Userstoragearea_8_DataType;
#define Userstoragearea_8_AccessType rw
#define Userstoragearea_8_DefaultValue 0x0000
#define Userstoragearea_8_PDOMapping 0
#define Userstoragearea_9 9 // Storage #8
#define Userstoragearea_9_ObjectType 0x7
typedef uint16_t Userstoragearea_9_DataType;
#define Userstoragearea_9_AccessType rw
#define Userstoragearea_9_DefaultValue 0x0000
#define Userstoragearea_9_PDOMapping 0
#define Bootloaderandrebootsettings 0x2800
#define Bootloaderandrebootsettings_ObjectType 0x8
#define Bootloaderandrebootsettings_SubNumber 0x04
#define Bootloaderandrebootsettings_0 0 // Highest sub-index supported
#define Bootloaderandrebootsettings_0_ObjectType 0x7
typedef uint8_t Bootloaderandrebootsettings_0_DataType;
#define Bootloaderandrebootsettings_0_AccessType const
#define Bootloaderandrebootsettings_0_DefaultValue 0x03
#define Bootloaderandrebootsettings_0_PDOMapping 0
#define Bootloaderandrebootsettings_1 1 // Reboot command
#define Bootloaderandrebootsettings_1_ObjectType 0x7
typedef uint32_t Bootloaderandrebootsettings_1_DataType;
#define Bootloaderandrebootsettings_1_AccessType rw
#define Bootloaderandrebootsettings_1_PDOMapping 0
#define Bootloaderandrebootsettings_2 2 // Reboot delay time in ms
#define Bootloaderandrebootsettings_2_ObjectType 0x7
typedef uint32_t Bootloaderandrebootsettings_2_DataType;
#define Bootloaderandrebootsettings_2_AccessType rw
#define Bootloaderandrebootsettings_2_PDOMapping 0
#define Bootloaderandrebootsettings_3 3 // Bootloader HW config
#define Bootloaderandrebootsettings_3_ObjectType 0x7
typedef uint32_t Bootloaderandrebootsettings_3_DataType;
#define Bootloaderandrebootsettings_3_AccessType rw
#define Bootloaderandrebootsettings_3_DefaultValue 0x00000000
#define Bootloaderandrebootsettings_3_PDOMapping 0
#define Motordrivesubmodeselect 0x3202
#define Motordrivesubmodeselect_ObjectType 0x7
typedef uint32_t Motordrivesubmodeselect_DataType;
#define Motordrivesubmodeselect_AccessType rww
#define Motordrivesubmodeselect_DefaultValue 0
#define Motordrivesubmodeselect_PDOMapping 1
#define Motordrivesensordisplayopenloop 0x320A
#define Motordrivesensordisplayopenloop_ObjectType 0x8
#define Motordrivesensordisplayopenloop_SubNumber 0x05
#define Motordrivesensordisplayopenloop_0 0 // Highest sub-index supported
#define Motordrivesensordisplayopenloop_0_ObjectType 0x7
typedef uint8_t Motordrivesensordisplayopenloop_0_DataType;
#define Motordrivesensordisplayopenloop_0_AccessType ro
#define Motordrivesensordisplayopenloop_0_DefaultValue 4
#define Motordrivesensordisplayopenloop_0_PDOMapping 0
#define Motordrivesensordisplayopenloop_1 1 // commutation
#define Motordrivesensordisplayopenloop_1_ObjectType 0x7
typedef int32_t Motordrivesensordisplayopenloop_1_DataType;
#define Motordrivesensordisplayopenloop_1_AccessType rw
#define Motordrivesensordisplayopenloop_1_DefaultValue 0
#define Motordrivesensordisplayopenloop_1_PDOMapping 0
#define Motordrivesensordisplayopenloop_2 2 // torque
#define Motordrivesensordisplayopenloop_2_ObjectType 0x7
typedef int32_t Motordrivesensordisplayopenloop_2_DataType;
#define Motordrivesensordisplayopenloop_2_AccessType rw
#define Motordrivesensordisplayopenloop_2_DefaultValue 0
#define Motordrivesensordisplayopenloop_2_PDOMapping 0
#define Motordrivesensordisplayopenloop_3 3 // velocity
#define Motordrivesensordisplayopenloop_3_ObjectType 0x7
typedef int32_t Motordrivesensordisplayopenloop_3_DataType;
#define Motordrivesensordisplayopenloop_3_AccessType rw
#define Motordrivesensordisplayopenloop_3_DefaultValue 1
#define Motordrivesensordisplayopenloop_3_PDOMapping 0
#define Motordrivesensordisplayopenloop_4 4 // position
#define Motordrivesensordisplayopenloop_4_ObjectType 0x7
typedef int32_t Motordrivesensordisplayopenloop_4_DataType;
#define Motordrivesensordisplayopenloop_4_AccessType rw
#define Motordrivesensordisplayopenloop_4_DefaultValue 1
#define Motordrivesensordisplayopenloop_4_PDOMapping 0
#define Motordrivesensordisplayclosedloop 0x320B
#define Motordrivesensordisplayclosedloop_ObjectType 0x8
#define Motordrivesensordisplayclosedloop_SubNumber 0x05
#define Motordrivesensordisplayclosedloop_0 0 // Highest sub-index supported
#define Motordrivesensordisplayclosedloop_0_ObjectType 0x7
typedef uint8_t Motordrivesensordisplayclosedloop_0_DataType;
#define Motordrivesensordisplayclosedloop_0_AccessType ro
#define Motordrivesensordisplayclosedloop_0_DefaultValue 4
#define Motordrivesensordisplayclosedloop_0_PDOMapping 0
#define Motordrivesensordisplayclosedloop_1 1 // commutation
#define Motordrivesensordisplayclosedloop_1_ObjectType 0x7
typedef int32_t Motordrivesensordisplayclosedloop_1_DataType;
#define Motordrivesensordisplayclosedloop_1_AccessType rw
#define Motordrivesensordisplayclosedloop_1_DefaultValue 0
#define Motordrivesensordisplayclosedloop_1_PDOMapping 0
#define Motordrivesensordisplayclosedloop_2 2 // torque
#define Motordrivesensordisplayclosedloop_2_ObjectType 0x7
typedef int32_t Motordrivesensordisplayclosedloop_2_DataType;
#define Motordrivesensordisplayclosedloop_2_AccessType rw
#define Motordrivesensordisplayclosedloop_2_DefaultValue 0
#define Motordrivesensordisplayclosedloop_2_PDOMapping 0
#define Motordrivesensordisplayclosedloop_3 3 // velocity
#define Motordrivesensordisplayclosedloop_3_ObjectType 0x7
typedef int32_t Motordrivesensordisplayclosedloop_3_DataType;
#define Motordrivesensordisplayclosedloop_3_AccessType rw
#define Motordrivesensordisplayclosedloop_3_DefaultValue 1
#define Motordrivesensordisplayclosedloop_3_PDOMapping 0
#define Motordrivesensordisplayclosedloop_4 4 // position
#define Motordrivesensordisplayclosedloop_4_ObjectType 0x7
typedef int32_t Motordrivesensordisplayclosedloop_4_DataType;
#define Motordrivesensordisplayclosedloop_4_AccessType rw
#define Motordrivesensordisplayclosedloop_4_DefaultValue 1
#define Motordrivesensordisplayclosedloop_4_PDOMapping 0
#define Motordriveparameterset 0x3210
#define Motordriveparameterset_ObjectType 0x8
#define Motordriveparameterset_SubNumber 0x0B
#define Motordriveparameterset_0 0 // Highest sub-index supported
#define Motordriveparameterset_0_ObjectType 0x7
typedef uint8_t Motordriveparameterset_0_DataType;
#define Motordriveparameterset_0_AccessType ro
#define Motordriveparameterset_0_DefaultValue 10
#define Motordriveparameterset_0_PDOMapping 0
#define Motordriveparameterset_1 1 // Position loop, proportional gain (closed loop)
#define Motordriveparameterset_1_ObjectType 0x7
typedef uint32_t Motordriveparameterset_1_DataType;
#define Motordriveparameterset_1_AccessType rw
#define Motordriveparameterset_1_DefaultValue 2048
#define Motordriveparameterset_1_PDOMapping 0
#define Motordriveparameterset_2 2 // Position loop, integral gain (closed loop)
#define Motordriveparameterset_2_ObjectType 0x7
typedef uint32_t Motordriveparameterset_2_DataType;
#define Motordriveparameterset_2_AccessType rw
#define Motordriveparameterset_2_DefaultValue 0
#define Motordriveparameterset_2_PDOMapping 0
#define Motordriveparameterset_3 3 // Velocity loop, proportional gain (closed loop)
#define Motordriveparameterset_3_ObjectType 0x7
typedef uint32_t Motordriveparameterset_3_DataType;
#define Motordriveparameterset_3_AccessType rw
#define Motordriveparameterset_3_DefaultValue 7000
#define Motordriveparameterset_3_PDOMapping 0
#define Motordriveparameterset_4 4 // Velocity loop, integral gain (closed loop)
#define Motordriveparameterset_4_ObjectType 0x7
typedef uint32_t Motordriveparameterset_4_DataType;
#define Motordriveparameterset_4_AccessType rw
#define Motordriveparameterset_4_DefaultValue 4
#define Motordriveparameterset_4_PDOMapping 0
#define Motordriveparameterset_5 5 // Flux current loop, proportional gain (closed loop)
#define Motordriveparameterset_5_ObjectType 0x7
typedef uint32_t Motordriveparameterset_5_DataType;
#define Motordriveparameterset_5_AccessType rw
#define Motordriveparameterset_5_DefaultValue 420000
#define Motordriveparameterset_5_PDOMapping 0
#define Motordriveparameterset_6 6 // Flux current loop, integral gain (closed loop)
#define Motordriveparameterset_6_ObjectType 0x7
typedef uint32_t Motordriveparameterset_6_DataType;
#define Motordriveparameterset_6_AccessType rw
#define Motordriveparameterset_6_DefaultValue 12000
#define Motordriveparameterset_6_PDOMapping 0
#define Motordriveparameterset_7 7 // Torque current loop, proportional gain (closed loop)
#define Motordriveparameterset_7_ObjectType 0x7
typedef uint32_t Motordriveparameterset_7_DataType;
#define Motordriveparameterset_7_AccessType rw
#define Motordriveparameterset_7_DefaultValue 420000
#define Motordriveparameterset_7_PDOMapping 0
#define Motordriveparameterset_8 8 // Torque current loop, integral gain (closed loop)
#define Motordriveparameterset_8_ObjectType 0x7
typedef uint32_t Motordriveparameterset_8_DataType;
#define Motordriveparameterset_8_AccessType rw
#define Motordriveparameterset_8_DefaultValue 12000
#define Motordriveparameterset_8_PDOMapping 0
#define Motordriveparameterset_9 9 // Torque current loop, proportional gain (open loop)
#define Motordriveparameterset_9_ObjectType 0x7
typedef uint32_t Motordriveparameterset_9_DataType;
#define Motordriveparameterset_9_AccessType rw
#define Motordriveparameterset_9_DefaultValue 160000
#define Motordriveparameterset_9_PDOMapping 0
#define Motordriveparameterset_A A // Torque current loop, integral gain (open loop)
#define Motordriveparameterset_A_ObjectType 0x7
typedef uint32_t Motordriveparameterset_A_DataType;
#define Motordriveparameterset_A_AccessType rw
#define Motordriveparameterset_A_DefaultValue 10000
#define Motordriveparameterset_A_PDOMapping 0
#define Motordriveflags 0x3212
#define Motordriveflags_ObjectType 0x8
#define Motordriveflags_SubNumber 0x04
#define Motordriveflags_0 0 // Highest sub-index supported
#define Motordriveflags_0_ObjectType 0x7
typedef uint8_t Motordriveflags_0_DataType;
#define Motordriveflags_0_AccessType ro
#define Motordriveflags_0_DefaultValue 3
#define Motordriveflags_0_PDOMapping 0
#define Motordriveflags_1 1 // enable legacy power mode
#define Motordriveflags_1_ObjectType 0x7
typedef int8_t Motordriveflags_1_DataType;
#define Motordriveflags_1_AccessType rw
#define Motordriveflags_1_DefaultValue 0
#define Motordriveflags_1_PDOMapping 0
#define Motordriveflags_2 2 // override field inversion
#define Motordriveflags_2_ObjectType 0x7
typedef int8_t Motordriveflags_2_DataType;
#define Motordriveflags_2_AccessType rw
#define Motordriveflags_2_DefaultValue 0
#define Motordriveflags_2_PDOMapping 0
#define Motordriveflags_3 3 // do not touch controller settings
#define Motordriveflags_3_ObjectType 0x7
typedef int8_t Motordriveflags_3_DataType;
#define Motordriveflags_3_AccessType rw
#define Motordriveflags_3_DefaultValue 0
#define Motordriveflags_3_PDOMapping 0
#define Analoginputs 0x3220
#define Analoginputs_ObjectType 0x8
#define Analoginputs_SubNumber 0x03
#define Analoginputs_0 0 // Highest sub-index supported
#define Analoginputs_0_ObjectType 0x7
typedef uint8_t Analoginputs_0_DataType;
#define Analoginputs_0_AccessType ro
#define Analoginputs_0_DefaultValue 2
#define Analoginputs_0_PDOMapping 0
#define Analoginputs_0_ObjFlags 1
#define Analoginputs_1 1 // Analogue input 1
#define Analoginputs_1_ObjectType 0x7
typedef int16_t Analoginputs_1_DataType;
#define Analoginputs_1_AccessType ro
#define Analoginputs_1_DefaultValue 0
#define Analoginputs_1_PDOMapping 1
#define Analoginputs_1_ObjFlags 1
#define Analoginputs_2 2 // Analogue input 2
#define Analoginputs_2_ObjectType 0x7
typedef int16_t Analoginputs_2_DataType;
#define Analoginputs_2_AccessType ro
#define Analoginputs_2_DefaultValue 0
#define Analoginputs_2_PDOMapping 1
#define Analoginputs_2_ObjFlags 1
#define Analogueinputscontrol 0x3221
#define Analogueinputscontrol_ObjectType 0x7
typedef int32_t Analogueinputscontrol_DataType;
#define Analogueinputscontrol_AccessType rw
#define Analogueinputscontrol_DefaultValue 0x00000000
#define Analogueinputscontrol_PDOMapping 0
#define AnalogueinputsSwitches 0x3225
#define AnalogueinputsSwitches_ObjectType 0x8
#define AnalogueinputsSwitches_SubNumber 0x02
#define AnalogueinputsSwitches_0 0 // Highest sub-index supported
#define AnalogueinputsSwitches_0_ObjectType 0x7
typedef uint8_t AnalogueinputsSwitches_0_DataType;
#define AnalogueinputsSwitches_0_AccessType ro
#define AnalogueinputsSwitches_0_DefaultValue 1
#define AnalogueinputsSwitches_0_PDOMapping 0
#define AnalogueinputsSwitches_0_ObjFlags 1
#define AnalogueinputsSwitches_1 1 // Analogue input switch1
#define AnalogueinputsSwitches_1_ObjectType 0x7
typedef uint16_t AnalogueinputsSwitches_1_DataType;
#define AnalogueinputsSwitches_1_AccessType ro
#define AnalogueinputsSwitches_1_PDOMapping 1
#define AnalogueinputsSwitches_1_ObjFlags 1
#define Digitalinputscontrol 0x3240
#define Digitalinputscontrol_ObjectType 0x8
#define Digitalinputscontrol_SubNumber 0x09
#define Digitalinputscontrol_0 0 // Highest sub-index supported
#define Digitalinputscontrol_0_ObjectType 0x7
typedef uint8_t Digitalinputscontrol_0_DataType;
#define Digitalinputscontrol_0_AccessType ro
#define Digitalinputscontrol_0_DefaultValue 8
#define Digitalinputscontrol_0_PDOMapping 0
#define Digitalinputscontrol_1 1 // Special function enable
#define Digitalinputscontrol_1_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_1_DataType;
#define Digitalinputscontrol_1_AccessType rww
#define Digitalinputscontrol_1_DefaultValue 0
#define Digitalinputscontrol_1_PDOMapping 1
#define Digitalinputscontrol_2 2 // Function inverted
#define Digitalinputscontrol_2_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_2_DataType;
#define Digitalinputscontrol_2_AccessType rww
#define Digitalinputscontrol_2_DefaultValue 0
#define Digitalinputscontrol_2_PDOMapping 1
#define Digitalinputscontrol_3 3 // Force enable
#define Digitalinputscontrol_3_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_3_DataType;
#define Digitalinputscontrol_3_AccessType rww
#define Digitalinputscontrol_3_DefaultValue 0
#define Digitalinputscontrol_3_PDOMapping 1
#define Digitalinputscontrol_4 4 // Force value
#define Digitalinputscontrol_4_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_4_DataType;
#define Digitalinputscontrol_4_AccessType rww
#define Digitalinputscontrol_4_DefaultValue 0
#define Digitalinputscontrol_4_PDOMapping 1
#define Digitalinputscontrol_5 5 // Raw value
#define Digitalinputscontrol_5_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_5_DataType;
#define Digitalinputscontrol_5_AccessType rww
#define Digitalinputscontrol_5_DefaultValue 0
#define Digitalinputscontrol_5_PDOMapping 1
#define Digitalinputscontrol_6 6 // Input Range Select
#define Digitalinputscontrol_6_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_6_DataType;
#define Digitalinputscontrol_6_AccessType rww
#define Digitalinputscontrol_6_DefaultValue 0
#define Digitalinputscontrol_6_PDOMapping 1
#define Digitalinputscontrol_7 7 // Differential Select
#define Digitalinputscontrol_7_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_7_DataType;
#define Digitalinputscontrol_7_AccessType rww
#define Digitalinputscontrol_7_DefaultValue 0
#define Digitalinputscontrol_7_PDOMapping 1
#define Digitalinputscontrol_8 8 // Routing Enable
#define Digitalinputscontrol_8_ObjectType 0x7
typedef uint32_t Digitalinputscontrol_8_DataType;
#define Digitalinputscontrol_8_AccessType rww
#define Digitalinputscontrol_8_DefaultValue 0
#define Digitalinputscontrol_8_PDOMapping 1
#define Digitalinputcapture 0x3241
#define Digitalinputcapture_ObjectType 0x8
#define Digitalinputcapture_SubNumber 0x05
#define Digitalinputcapture_0 0 // Highest sub-index supported
#define Digitalinputcapture_0_ObjectType 0x7
typedef uint8_t Digitalinputcapture_0_DataType;
#define Digitalinputcapture_0_AccessType ro
#define Digitalinputcapture_0_DefaultValue 4
#define Digitalinputcapture_0_PDOMapping 1
#define Digitalinputcapture_1 1 // Control
#define Digitalinputcapture_1_ObjectType 0x7
typedef uint32_t Digitalinputcapture_1_DataType;
#define Digitalinputcapture_1_AccessType rwr
#define Digitalinputcapture_1_DefaultValue 0
#define Digitalinputcapture_1_PDOMapping 1
#define Digitalinputcapture_2 2 // Capture Count
#define Digitalinputcapture_2_ObjectType 0x7
typedef uint32_t Digitalinputcapture_2_DataType;
#define Digitalinputcapture_2_AccessType rwr
#define Digitalinputcapture_2_DefaultValue 0
#define Digitalinputcapture_2_PDOMapping 1
#define Digitalinputcapture_3 3 // Value
#define Digitalinputcapture_3_ObjectType 0x7
typedef uint32_t Digitalinputcapture_3_DataType;
#define Digitalinputcapture_3_AccessType rwr
#define Digitalinputcapture_3_DefaultValue 0
#define Digitalinputcapture_3_PDOMapping 1
#define Digitalinputcapture_4 4 // Encoder Raw Value
#define Digitalinputcapture_4_ObjectType 0x7
typedef uint32_t Digitalinputcapture_4_DataType;
#define Digitalinputcapture_4_AccessType rwr
#define Digitalinputcapture_4_DefaultValue 0
#define Digitalinputcapture_4_PDOMapping 1
#define DigitalInputRouting 0x3242
#define DigitalInputRouting_ObjectType 0x8
#define DigitalInputRouting_SubNumber 0x25
#define DigitalInputRouting_0 0 // Highest sub-index supported
#define DigitalInputRouting_0_ObjectType 0x7
typedef uint8_t DigitalInputRouting_0_DataType;
#define DigitalInputRouting_0_AccessType ro
#define DigitalInputRouting_0_DefaultValue 36
#define DigitalInputRouting_0_PDOMapping 0
#define DigitalInputRouting_1 1 // Input Source #1
#define DigitalInputRouting_1_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1_DataType;
#define DigitalInputRouting_1_AccessType rwr
#define DigitalInputRouting_1_DefaultValue 0
#define DigitalInputRouting_1_PDOMapping 1
#define DigitalInputRouting_2 2 // Input Source #2
#define DigitalInputRouting_2_ObjectType 0x7
typedef uint8_t DigitalInputRouting_2_DataType;
#define DigitalInputRouting_2_AccessType rwr
#define DigitalInputRouting_2_DefaultValue 0
#define DigitalInputRouting_2_PDOMapping 1
#define DigitalInputRouting_3 3 // Input Source #3
#define DigitalInputRouting_3_ObjectType 0x7
typedef uint8_t DigitalInputRouting_3_DataType;
#define DigitalInputRouting_3_AccessType rwr
#define DigitalInputRouting_3_DefaultValue 0
#define DigitalInputRouting_3_PDOMapping 1
#define DigitalInputRouting_4 4 // Input Source #4
#define DigitalInputRouting_4_ObjectType 0x7
typedef uint8_t DigitalInputRouting_4_DataType;
#define DigitalInputRouting_4_AccessType rwr
#define DigitalInputRouting_4_DefaultValue 0
#define DigitalInputRouting_4_PDOMapping 1
#define DigitalInputRouting_5 5 // Input Source #5
#define DigitalInputRouting_5_ObjectType 0x7
typedef uint8_t DigitalInputRouting_5_DataType;
#define DigitalInputRouting_5_AccessType rwr
#define DigitalInputRouting_5_DefaultValue 0
#define DigitalInputRouting_5_PDOMapping 1
#define DigitalInputRouting_6 6 // Input Source #6
#define DigitalInputRouting_6_ObjectType 0x7
typedef uint8_t DigitalInputRouting_6_DataType;
#define DigitalInputRouting_6_AccessType rwr
#define DigitalInputRouting_6_DefaultValue 0
#define DigitalInputRouting_6_PDOMapping 1
#define DigitalInputRouting_7 7 // Input Source #7
#define DigitalInputRouting_7_ObjectType 0x7
typedef uint8_t DigitalInputRouting_7_DataType;
#define DigitalInputRouting_7_AccessType rwr
#define DigitalInputRouting_7_DefaultValue 0
#define DigitalInputRouting_7_PDOMapping 1
#define DigitalInputRouting_8 8 // Input Source #8
#define DigitalInputRouting_8_ObjectType 0x7
typedef uint8_t DigitalInputRouting_8_DataType;
#define DigitalInputRouting_8_AccessType rwr
#define DigitalInputRouting_8_DefaultValue 0
#define DigitalInputRouting_8_PDOMapping 1
#define DigitalInputRouting_9 9 // Input Source #9
#define DigitalInputRouting_9_ObjectType 0x7
typedef uint8_t DigitalInputRouting_9_DataType;
#define DigitalInputRouting_9_AccessType rwr
#define DigitalInputRouting_9_DefaultValue 0
#define DigitalInputRouting_9_PDOMapping 1
#define DigitalInputRouting_A A // Input Source #10
#define DigitalInputRouting_A_ObjectType 0x7
typedef uint8_t DigitalInputRouting_A_DataType;
#define DigitalInputRouting_A_AccessType rwr
#define DigitalInputRouting_A_DefaultValue 0
#define DigitalInputRouting_A_PDOMapping 1
#define DigitalInputRouting_B B // Input Source #11
#define DigitalInputRouting_B_ObjectType 0x7
typedef uint8_t DigitalInputRouting_B_DataType;
#define DigitalInputRouting_B_AccessType rwr
#define DigitalInputRouting_B_DefaultValue 0
#define DigitalInputRouting_B_PDOMapping 1
#define DigitalInputRouting_C C // Input Source #12
#define DigitalInputRouting_C_ObjectType 0x7
typedef uint8_t DigitalInputRouting_C_DataType;
#define DigitalInputRouting_C_AccessType rwr
#define DigitalInputRouting_C_DefaultValue 0
#define DigitalInputRouting_C_PDOMapping 1
#define DigitalInputRouting_D D // Input Source #13
#define DigitalInputRouting_D_ObjectType 0x7
typedef uint8_t DigitalInputRouting_D_DataType;
#define DigitalInputRouting_D_AccessType rwr
#define DigitalInputRouting_D_DefaultValue 0
#define DigitalInputRouting_D_PDOMapping 1
#define DigitalInputRouting_E E // Input Source #14
#define DigitalInputRouting_E_ObjectType 0x7
typedef uint8_t DigitalInputRouting_E_DataType;
#define DigitalInputRouting_E_AccessType rwr
#define DigitalInputRouting_E_DefaultValue 0
#define DigitalInputRouting_E_PDOMapping 1
#define DigitalInputRouting_F F // Input Source #15
#define DigitalInputRouting_F_ObjectType 0x7
typedef uint8_t DigitalInputRouting_F_DataType;
#define DigitalInputRouting_F_AccessType rwr
#define DigitalInputRouting_F_DefaultValue 0
#define DigitalInputRouting_F_PDOMapping 1
#define DigitalInputRouting_10 10 // Input Source #16
#define DigitalInputRouting_10_ObjectType 0x7
typedef uint8_t DigitalInputRouting_10_DataType;
#define DigitalInputRouting_10_AccessType rwr
#define DigitalInputRouting_10_DefaultValue 0
#define DigitalInputRouting_10_PDOMapping 1
#define DigitalInputRouting_11 11 // Input Source #17
#define DigitalInputRouting_11_ObjectType 0x7
typedef uint8_t DigitalInputRouting_11_DataType;
#define DigitalInputRouting_11_AccessType rwr
#define DigitalInputRouting_11_DefaultValue 0
#define DigitalInputRouting_11_PDOMapping 1
#define DigitalInputRouting_12 12 // Input Source #18
#define DigitalInputRouting_12_ObjectType 0x7
typedef uint8_t DigitalInputRouting_12_DataType;
#define DigitalInputRouting_12_AccessType rwr
#define DigitalInputRouting_12_DefaultValue 0
#define DigitalInputRouting_12_PDOMapping 1
#define DigitalInputRouting_13 13 // Input Source #19
#define DigitalInputRouting_13_ObjectType 0x7
typedef uint8_t DigitalInputRouting_13_DataType;
#define DigitalInputRouting_13_AccessType rwr
#define DigitalInputRouting_13_DefaultValue 0
#define DigitalInputRouting_13_PDOMapping 1
#define DigitalInputRouting_14 14 // Input Source #20
#define DigitalInputRouting_14_ObjectType 0x7
typedef uint8_t DigitalInputRouting_14_DataType;
#define DigitalInputRouting_14_AccessType rwr
#define DigitalInputRouting_14_DefaultValue 0
#define DigitalInputRouting_14_PDOMapping 1
#define DigitalInputRouting_15 15 // Input Source #21
#define DigitalInputRouting_15_ObjectType 0x7
typedef uint8_t DigitalInputRouting_15_DataType;
#define DigitalInputRouting_15_AccessType rwr
#define DigitalInputRouting_15_DefaultValue 0
#define DigitalInputRouting_15_PDOMapping 1
#define DigitalInputRouting_16 16 // Input Source #22
#define DigitalInputRouting_16_ObjectType 0x7
typedef uint8_t DigitalInputRouting_16_DataType;
#define DigitalInputRouting_16_AccessType rwr
#define DigitalInputRouting_16_DefaultValue 0
#define DigitalInputRouting_16_PDOMapping 1
#define DigitalInputRouting_17 17 // Input Source #23
#define DigitalInputRouting_17_ObjectType 0x7
typedef uint8_t DigitalInputRouting_17_DataType;
#define DigitalInputRouting_17_AccessType rwr
#define DigitalInputRouting_17_DefaultValue 0
#define DigitalInputRouting_17_PDOMapping 1
#define DigitalInputRouting_18 18 // Input Source #24
#define DigitalInputRouting_18_ObjectType 0x7
typedef uint8_t DigitalInputRouting_18_DataType;
#define DigitalInputRouting_18_AccessType rwr
#define DigitalInputRouting_18_DefaultValue 0
#define DigitalInputRouting_18_PDOMapping 1
#define DigitalInputRouting_19 19 // Input Source #25
#define DigitalInputRouting_19_ObjectType 0x7
typedef uint8_t DigitalInputRouting_19_DataType;
#define DigitalInputRouting_19_AccessType rwr
#define DigitalInputRouting_19_DefaultValue 0
#define DigitalInputRouting_19_PDOMapping 1
#define DigitalInputRouting_1A 1A // Input Source #26
#define DigitalInputRouting_1A_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1A_DataType;
#define DigitalInputRouting_1A_AccessType rwr
#define DigitalInputRouting_1A_DefaultValue 0
#define DigitalInputRouting_1A_PDOMapping 1
#define DigitalInputRouting_1B 1B // Input Source #27
#define DigitalInputRouting_1B_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1B_DataType;
#define DigitalInputRouting_1B_AccessType rwr
#define DigitalInputRouting_1B_DefaultValue 0
#define DigitalInputRouting_1B_PDOMapping 1
#define DigitalInputRouting_1C 1C // Input Source #28
#define DigitalInputRouting_1C_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1C_DataType;
#define DigitalInputRouting_1C_AccessType rwr
#define DigitalInputRouting_1C_DefaultValue 0
#define DigitalInputRouting_1C_PDOMapping 1
#define DigitalInputRouting_1D 1D // Input Source #29
#define DigitalInputRouting_1D_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1D_DataType;
#define DigitalInputRouting_1D_AccessType rwr
#define DigitalInputRouting_1D_DefaultValue 0
#define DigitalInputRouting_1D_PDOMapping 1
#define DigitalInputRouting_1E 1E // Input Source #30
#define DigitalInputRouting_1E_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1E_DataType;
#define DigitalInputRouting_1E_AccessType rwr
#define DigitalInputRouting_1E_DefaultValue 0
#define DigitalInputRouting_1E_PDOMapping 1
#define DigitalInputRouting_1F 1F // Input Source #31
#define DigitalInputRouting_1F_ObjectType 0x7
typedef uint8_t DigitalInputRouting_1F_DataType;
#define DigitalInputRouting_1F_AccessType rwr
#define DigitalInputRouting_1F_DefaultValue 0
#define DigitalInputRouting_1F_PDOMapping 1
#define DigitalInputRouting_20 20 // Input Source #32
#define DigitalInputRouting_20_ObjectType 0x7
typedef uint8_t DigitalInputRouting_20_DataType;
#define DigitalInputRouting_20_AccessType rwr
#define DigitalInputRouting_20_DefaultValue 0
#define DigitalInputRouting_20_PDOMapping 1
#define DigitalInputRouting_21 21 // Input Source #33
#define DigitalInputRouting_21_ObjectType 0x7
typedef uint8_t DigitalInputRouting_21_DataType;
#define DigitalInputRouting_21_AccessType rwr
#define DigitalInputRouting_21_DefaultValue 0
#define DigitalInputRouting_21_PDOMapping 1
#define DigitalInputRouting_22 22 // Input Source #34
#define DigitalInputRouting_22_ObjectType 0x7
typedef uint8_t DigitalInputRouting_22_DataType;
#define DigitalInputRouting_22_AccessType rwr
#define DigitalInputRouting_22_DefaultValue 0
#define DigitalInputRouting_22_PDOMapping 1
#define DigitalInputRouting_23 23 // Input Source #35
#define DigitalInputRouting_23_ObjectType 0x7
typedef uint8_t DigitalInputRouting_23_DataType;
#define DigitalInputRouting_23_AccessType rwr
#define DigitalInputRouting_23_DefaultValue 0
#define DigitalInputRouting_23_PDOMapping 1
#define DigitalInputRouting_24 24 // Input Source #36
#define DigitalInputRouting_24_ObjectType 0x7
typedef uint8_t DigitalInputRouting_24_DataType;
#define DigitalInputRouting_24_AccessType rwr
#define DigitalInputRouting_24_DefaultValue 0
#define DigitalInputRouting_24_PDOMapping 1
#define Digitaloutputscontrol 0x3250
#define Digitaloutputscontrol_ObjectType 0x8
#define Digitaloutputscontrol_SubNumber 0x09
#define Digitaloutputscontrol_0 0 // Highest sub-index supported
#define Digitaloutputscontrol_0_ObjectType 0x7
typedef uint8_t Digitaloutputscontrol_0_DataType;
#define Digitaloutputscontrol_0_AccessType ro
#define Digitaloutputscontrol_0_DefaultValue 0x08
#define Digitaloutputscontrol_0_PDOMapping 0
#define Digitaloutputscontrol_1 1 // No function
#define Digitaloutputscontrol_1_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_1_DataType;
#define Digitaloutputscontrol_1_AccessType rww
#define Digitaloutputscontrol_1_DefaultValue 0
#define Digitaloutputscontrol_1_PDOMapping 1
#define Digitaloutputscontrol_2 2 // Function inverted
#define Digitaloutputscontrol_2_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_2_DataType;
#define Digitaloutputscontrol_2_AccessType rww
#define Digitaloutputscontrol_2_DefaultValue 0x00000000
#define Digitaloutputscontrol_2_PDOMapping 1
#define Digitaloutputscontrol_3 3 // Force enable
#define Digitaloutputscontrol_3_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_3_DataType;
#define Digitaloutputscontrol_3_AccessType rww
#define Digitaloutputscontrol_3_DefaultValue 0x00000000
#define Digitaloutputscontrol_3_PDOMapping 1
#define Digitaloutputscontrol_4 4 // Force value
#define Digitaloutputscontrol_4_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_4_DataType;
#define Digitaloutputscontrol_4_AccessType rww
#define Digitaloutputscontrol_4_DefaultValue 0x00000000
#define Digitaloutputscontrol_4_PDOMapping 1
#define Digitaloutputscontrol_5 5 // Raw value
#define Digitaloutputscontrol_5_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_5_DataType;
#define Digitaloutputscontrol_5_AccessType rww
#define Digitaloutputscontrol_5_PDOMapping 1
#define Digitaloutputscontrol_6 6 // Reserved1
#define Digitaloutputscontrol_6_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_6_DataType;
#define Digitaloutputscontrol_6_AccessType rww
#define Digitaloutputscontrol_6_DefaultValue 0x00000000
#define Digitaloutputscontrol_6_PDOMapping 1
#define Digitaloutputscontrol_7 7 // Reserved2
#define Digitaloutputscontrol_7_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_7_DataType;
#define Digitaloutputscontrol_7_AccessType rww
#define Digitaloutputscontrol_7_DefaultValue 0x00000000
#define Digitaloutputscontrol_7_PDOMapping 1
#define Digitaloutputscontrol_8 8 // Routing Enable
#define Digitaloutputscontrol_8_ObjectType 0x7
typedef uint32_t Digitaloutputscontrol_8_DataType;
#define Digitaloutputscontrol_8_AccessType rww
#define Digitaloutputscontrol_8_DefaultValue 0x00000000
#define Digitaloutputscontrol_8_PDOMapping 1
#define DigitalOutputRouting 0x3252
#define DigitalOutputRouting_ObjectType 0x8
#define DigitalOutputRouting_SubNumber 0x06
#define DigitalOutputRouting_0 0 // Highest sub-index supported
#define DigitalOutputRouting_0_ObjectType 0x7
typedef uint8_t DigitalOutputRouting_0_DataType;
#define DigitalOutputRouting_0_AccessType ro
#define DigitalOutputRouting_0_DefaultValue 5
#define DigitalOutputRouting_0_PDOMapping 0
#define DigitalOutputRouting_1 1 // Output Control #1
#define DigitalOutputRouting_1_ObjectType 0x7
typedef uint16_t DigitalOutputRouting_1_DataType;
#define DigitalOutputRouting_1_AccessType rwr
#define DigitalOutputRouting_1_DefaultValue 0x1080
#define DigitalOutputRouting_1_PDOMapping 1
#define DigitalOutputRouting_2 2 // Output Control #2
#define DigitalOutputRouting_2_ObjectType 0x7
typedef uint16_t DigitalOutputRouting_2_DataType;
#define DigitalOutputRouting_2_AccessType rwr
#define DigitalOutputRouting_2_DefaultValue 0x0090
#define DigitalOutputRouting_2_PDOMapping 1
#define DigitalOutputRouting_3 3 // Output Control #3
#define DigitalOutputRouting_3_ObjectType 0x7
typedef uint16_t DigitalOutputRouting_3_DataType;
#define DigitalOutputRouting_3_AccessType rwr
#define DigitalOutputRouting_3_DefaultValue 0x0091
#define DigitalOutputRouting_3_PDOMapping 1
#define DigitalOutputRouting_4 4 // Output Control #4
#define DigitalOutputRouting_4_ObjectType 0x7
typedef uint16_t DigitalOutputRouting_4_DataType;
#define DigitalOutputRouting_4_AccessType rwr
#define DigitalOutputRouting_4_DefaultValue 0x0092
#define DigitalOutputRouting_4_PDOMapping 1
#define DigitalOutputRouting_5 5 // Output Control #5
#define DigitalOutputRouting_5_ObjectType 0x7
typedef uint16_t DigitalOutputRouting_5_DataType;
#define DigitalOutputRouting_5_AccessType rwr
#define DigitalOutputRouting_5_DefaultValue 0x0093
#define DigitalOutputRouting_5_PDOMapping 1
#define Readanalogueinput 0x3320
#define Readanalogueinput_ObjectType 0x8
#define Readanalogueinput_SubNumber 0x03
#define Readanalogueinput_0 0 // Number of analogue inputs
#define Readanalogueinput_0_ObjectType 0x7
typedef uint8_t Readanalogueinput_0_DataType;
#define Readanalogueinput_0_AccessType ro
#define Readanalogueinput_0_DefaultValue 0x02
#define Readanalogueinput_0_PDOMapping 0
#define Readanalogueinput_0_ObjFlags 1
#define Readanalogueinput_1 1 // Analogue input 1
#define Readanalogueinput_1_ObjectType 0x7
typedef int32_t Readanalogueinput_1_DataType;
#define Readanalogueinput_1_AccessType ro
#define Readanalogueinput_1_PDOMapping 1
#define Readanalogueinput_1_ObjFlags 1
#define Readanalogueinput_2 2 // Analogue input 2
#define Readanalogueinput_2_ObjectType 0x7
typedef int32_t Readanalogueinput_2_DataType;
#define Readanalogueinput_2_AccessType ro
#define Readanalogueinput_2_PDOMapping 1
#define Readanalogueinput_2_ObjFlags 1
#define Analogueinputoffset 0x3321
#define Analogueinputoffset_ObjectType 0x8
#define Analogueinputoffset_SubNumber 0x03
#define Analogueinputoffset_0 0 // Number of analogue inputs
#define Analogueinputoffset_0_ObjectType 0x7
typedef uint8_t Analogueinputoffset_0_DataType;
#define Analogueinputoffset_0_AccessType ro
#define Analogueinputoffset_0_DefaultValue 0x02
#define Analogueinputoffset_0_PDOMapping 0
#define Analogueinputoffset_1 1 // Analogue input 1
#define Analogueinputoffset_1_ObjectType 0x7
typedef int32_t Analogueinputoffset_1_DataType;
#define Analogueinputoffset_1_AccessType rw
#define Analogueinputoffset_1_DefaultValue 0x00000000
#define Analogueinputoffset_1_PDOMapping 0
#define Analogueinputoffset_2 2 // Analogue input 2
#define Analogueinputoffset_2_ObjectType 0x7
typedef int32_t Analogueinputoffset_2_DataType;
#define Analogueinputoffset_2_AccessType rw
#define Analogueinputoffset_2_DefaultValue 0x00000000
#define Analogueinputoffset_2_PDOMapping 0
#define Analogueinputpre_scaling 0x3322
#define Analogueinputpre_scaling_ObjectType 0x8
#define Analogueinputpre_scaling_SubNumber 0x03
#define Analogueinputpre_scaling_0 0 // Number of analogue inputs
#define Analogueinputpre_scaling_0_ObjectType 0x7
typedef uint8_t Analogueinputpre_scaling_0_DataType;
#define Analogueinputpre_scaling_0_AccessType ro
#define Analogueinputpre_scaling_0_DefaultValue 2
#define Analogueinputpre_scaling_0_PDOMapping 0
#define Analogueinputpre_scaling_1 1 // Analogue input 1
#define Analogueinputpre_scaling_1_ObjectType 0x7
typedef int32_t Analogueinputpre_scaling_1_DataType;
#define Analogueinputpre_scaling_1_AccessType rw
#define Analogueinputpre_scaling_1_DefaultValue 1
#define Analogueinputpre_scaling_1_PDOMapping 0
#define Analogueinputpre_scaling_2 2 // Analogue input 2
#define Analogueinputpre_scaling_2_ObjectType 0x7
typedef int32_t Analogueinputpre_scaling_2_DataType;
#define Analogueinputpre_scaling_2_AccessType rw
#define Analogueinputpre_scaling_2_DefaultValue 1
#define Analogueinputpre_scaling_2_PDOMapping 0
#define Followingerroroptioncode 0x3700
#define Followingerroroptioncode_ObjectType 0x7
typedef int16_t Followingerroroptioncode_DataType;
#define Followingerroroptioncode_AccessType rw
#define Followingerroroptioncode_DefaultValue -1
#define Followingerroroptioncode_PDOMapping 0
#define HWinformation 0x4012
#define HWinformation_ObjectType 0x8
#define HWinformation_SubNumber 0x02
#define HWinformation_0 0 // Highest sub-index supported
#define HWinformation_0_ObjectType 0x7
typedef uint8_t HWinformation_0_DataType;
#define HWinformation_0_AccessType const
#define HWinformation_0_DefaultValue 1
#define HWinformation_0_PDOMapping 0
#define HWinformation_0_ObjFlags 1
#define HWinformation_1 1 // EEPROM size in bytes
#define HWinformation_1_ObjectType 0x7
typedef uint32_t HWinformation_1_DataType;
#define HWinformation_1_AccessType const
#define HWinformation_1_PDOMapping 0
#define HWinformation_1_ObjFlags 1
#define HWconfiguration 0x4013
#define HWconfiguration_ObjectType 0x8
#define HWconfiguration_SubNumber 0x02
#define HWconfiguration_0 0 // Highest sub-index supported
#define HWconfiguration_0_ObjectType 0x7
typedef uint8_t HWconfiguration_0_DataType;
#define HWconfiguration_0_AccessType const
#define HWconfiguration_0_DefaultValue 1
#define HWconfiguration_0_PDOMapping 0
#define HWconfiguration_1 1 // HW configuration #1
#define HWconfiguration_1_ObjectType 0x7
typedef uint32_t HWconfiguration_1_DataType;
#define HWconfiguration_1_AccessType rw
#define HWconfiguration_1_DefaultValue 0
#define HWconfiguration_1_PDOMapping 0
#define Operatingconditions 0x4014
#define Operatingconditions_ObjectType 0x8
#define Operatingconditions_SubNumber 0x04
#define Operatingconditions_0 0 // Highest sub-index supported
#define Operatingconditions_0_ObjectType 0x7
typedef uint8_t Operatingconditions_0_DataType;
#define Operatingconditions_0_AccessType const
#define Operatingconditions_0_DefaultValue 3
#define Operatingconditions_0_PDOMapping 0
#define Operatingconditions_0_ObjFlags 1
#define Operatingconditions_1 1 // Voltage UB Power [mV]
#define Operatingconditions_1_ObjectType 0x7
typedef int32_t Operatingconditions_1_DataType;
#define Operatingconditions_1_AccessType ro
#define Operatingconditions_1_DefaultValue 0
#define Operatingconditions_1_PDOMapping 1
#define Operatingconditions_1_ObjFlags 1
#define Operatingconditions_2 2 // Voltage UB Logic [mV]
#define Operatingconditions_2_ObjectType 0x7
typedef int32_t Operatingconditions_2_DataType;
#define Operatingconditions_2_AccessType ro
#define Operatingconditions_2_DefaultValue 0
#define Operatingconditions_2_PDOMapping 1
#define Operatingconditions_2_ObjFlags 1
#define Operatingconditions_3 3 // Temperature PCB [Celsius * 10]
#define Operatingconditions_3_ObjectType 0x7
typedef int32_t Operatingconditions_3_DataType;
#define Operatingconditions_3_AccessType ro
#define Operatingconditions_3_DefaultValue 0
#define Operatingconditions_3_PDOMapping 1
#define Operatingconditions_3_ObjFlags 1
#define Driveserialnumber 0x4040
#define Driveserialnumber_ObjectType 0x7
typedef char Driveserialnumber_DataType;
#define Driveserialnumber_AccessType ro
#define Driveserialnumber_PDOMapping 0
#define Driveserialnumber_ObjFlags 1
#define DeviceId 0x4041
#define DeviceId_ObjectType 0x7
typedef char DeviceId_DataType;
#define DeviceId_AccessType ro
#define DeviceId_DefaultValue             
#define DeviceId_PDOMapping 0
#define DeviceId_ObjFlags 1
#endif