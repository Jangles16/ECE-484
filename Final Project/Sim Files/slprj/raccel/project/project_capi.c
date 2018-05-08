#include "__cf_project.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "project_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "project.h"
#include "project_capi.h"
#include "project_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 2 , TARGET_STRING ( "project/802.11 Receiver/Detector" ) ,
TARGET_STRING ( "SFD" ) , 1 , 1 , 0 , 0 , 0 } , { 2 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector" ) , TARGET_STRING ( "SIGNAL" ) , 1 , 2 , 0
, 0 , 0 } , { 3 , 2 , TARGET_STRING ( "project/802.11 Receiver/Detector" ) ,
TARGET_STRING ( "SERVICE" ) , 1 , 2 , 0 , 0 , 0 } , { 4 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector" ) , TARGET_STRING ( "LENGTH" ) , 1 , 1 , 0
, 0 , 0 } , { 5 , 1 , TARGET_STRING ( "project/802.11 Receiver/Detector" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 6 , 1 , TARGET_STRING (
"project/802.11 Receiver/Detector" ) , TARGET_STRING ( "" ) , 3 , 8 , 0 , 0 ,
0 } , { 7 , 0 , TARGET_STRING ( "project/802.11 Receiver/Logical Operator" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"project/802.11 Receiver/Logical Operator1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 9 , 8 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator" ) , TARGET_STRING ( ""
) , 0 , 9 , 7 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"project/802.11 Transmitter/Rate Transition" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"project/802.11 Transmitter/Transmitter Switch" ) , TARGET_STRING ( "" ) , 0
, 9 , 8 , 0 , 0 } , { 12 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder" ) , TARGET_STRING ( "SFD" ) ,
0 , 1 , 0 , 0 , 0 } , { 13 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder" ) , TARGET_STRING ( "SIGNAL"
) , 0 , 2 , 0 , 0 , 0 } , { 14 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder" ) , TARGET_STRING ( "SERVICE"
) , 0 , 2 , 0 , 0 , 0 } , { 15 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder" ) , TARGET_STRING ( "LENGTH"
) , 0 , 1 , 0 , 0 , 0 } , { 16 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder" ) , TARGET_STRING ( "" ) , 1
, 0 , 0 , 0 , 0 } , { 17 , 1 , TARGET_STRING (
"project/802.11 Receiver/Detector/MPDU Decoder" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 18 , 1 , TARGET_STRING (
"project/802.11 Receiver/Detector/MPDU Decoder" ) , TARGET_STRING ( "" ) , 1
, 8 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"project/802.11 Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "" ) , 0 , 9 , 9 , 0 , 0 } , { 20 , 6 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Rx Controller" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Delay" ) , TARGET_STRING ( "" )
, 0 , 9 , 9 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Match Correlator Delay" ) ,
TARGET_STRING ( "" ) , 0 , 9 , 9 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Sample  Chip" ) , TARGET_STRING
( "" ) , 0 , 9 , 8 , 0 , 0 } , { 24 , 7 , TARGET_STRING (
"project/802.11 Transmitter/MAC Sublayer/Transmitter Controller" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 25 , 8 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "" ) , 0 , 9 , 7 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"project/802.11 Transmitter/Raised Cosine Transmit Filter/FIR Interpolation"
) , TARGET_STRING ( "" ) , 0 , 9 , 9 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"project/Channel/AWGN Channel/Dynamic AWGN" ) , TARGET_STRING ( "" ) , 0 , 9
, 9 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"project/Channel/seconds  to samples/Sampling time" ) , TARGET_STRING ( "" )
, 0 , 10 , 10 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"project/Channel/seconds  to samples/Width" ) , TARGET_STRING ( "" ) , 0 , 10
, 0 , 0 , 2 } , { 30 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Header Display/Frame Control" ) , TARGET_STRING (
"" ) , 0 , 2 , 11 , 0 , 0 } , { 31 , 13 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Octet to Decimal" ) , TARGET_STRING
( "" ) , 0 , 10 , 0 , 0 , 0 } , { 32 , 14 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Octet to Decimal1" ) ,
TARGET_STRING ( "" ) , 0 , 10 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Capability" ) , TARGET_STRING ( ""
) , 0 , 0 , 12 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Data Type Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 13 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Data Type Conversion1" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 14 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Data Type Conversion2" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 15 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Data Type Conversion3" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 16 , 0 , 0 } , { 38 , 4 , TARGET_STRING (
"project/802.11 Receiver/Detector/1 Mbps Demod/Product" ) , TARGET_STRING (
"" ) , 0 , 9 , 17 , 0 , 0 } , { 39 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder/Bit to Integer Converter" ) ,
TARGET_STRING ( "SFD" ) , 0 , 1 , 0 , 0 , 0 } , { 40 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder/Bit to Integer Converter1" ) ,
TARGET_STRING ( "SIGNAL" ) , 0 , 2 , 0 , 0 , 0 } , { 41 , 2 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Decoder/Bit to Integer Converter2" ) ,
TARGET_STRING ( "SERVICE" ) , 0 , 2 , 0 , 0 , 0 } , { 42 , 2 , TARGET_STRING
( "project/802.11 Receiver/Detector/PLCP Decoder/Bit to Integer Converter3" )
, TARGET_STRING ( "LENGTH" ) , 0 , 1 , 0 , 0 , 0 } , { 43 , 2 , TARGET_STRING
( "project/802.11 Receiver/Detector/PLCP Decoder/CRC Detector" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 44 , 8 , TARGET_STRING (
 "project/802.11 Transmitter/PHY Framer and Modulator/Framing by adding PLCP preamble and header/Matrix Concatenation2"
) , TARGET_STRING ( "PLCP Preamble" ) , 0 , 0 , 18 , 0 , 2 } , { 45 , 8 ,
TARGET_STRING (
 "project/802.11 Transmitter/PHY Framer and Modulator/Framing by adding PLCP preamble and header/Matrix Concatenation3"
) , TARGET_STRING ( "PLCP Header" ) , 0 , 0 , 19 , 0 , 2 } , { 46 , 8 ,
TARGET_STRING (
 "project/802.11 Transmitter/PHY Framer and Modulator/Framing by adding PLCP preamble and header/Width"
) , TARGET_STRING ( "" ) , 0 , 10 , 0 , 0 , 2 } , { 47 , 9 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Get Element Data/Get Element Data"
) , TARGET_STRING ( "" ) , 0 , 10 , 13 , 0 , 0 } , { 48 , 10 , TARGET_STRING
(
"project/MPDU Display/MAC Payload Display/Get Element Data1/Get Element Data"
) , TARGET_STRING ( "" ) , 0 , 10 , 14 , 0 , 0 } , { 49 , 11 , TARGET_STRING
(
"project/MPDU Display/MAC Payload Display/Get Element Data2/Get Element Data"
) , TARGET_STRING ( "" ) , 0 , 10 , 15 , 0 , 0 } , { 50 , 12 , TARGET_STRING
(
"project/MPDU Display/MAC Payload Display/Get Element Data3/Get Element Data"
) , TARGET_STRING ( "" ) , 0 , 10 , 16 , 0 , 0 } , { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 51 , TARGET_STRING ( "project/Channel" ) ,
TARGET_STRING ( "EsNo" ) , 10 , 0 , 0 } , { 52 , TARGET_STRING (
"project/Channel" ) , TARGET_STRING ( "freqOffset" ) , 10 , 0 , 0 } , { 53 ,
TARGET_STRING ( "project/Channel" ) , TARGET_STRING ( "delay" ) , 10 , 0 , 0
} , { 54 , TARGET_STRING ( "project/802.11 Receiver/Length in  Samples" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 55 , TARGET_STRING (
"project/802.11 Receiver/Unit Delay" ) , TARGET_STRING ( "InitialCondition" )
, 1 , 0 , 0 } , { 56 , TARGET_STRING ( "project/802.11 Receiver/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING
( "project/802.11 Transmitter/All Zeros" ) , TARGET_STRING ( "Value" ) , 9 ,
20 , 0 } , { 58 , TARGET_STRING (
"project/802.11 Transmitter/Rate Transition" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"project/802.11 Transmitter/Channel Frames" ) , TARGET_STRING ( "ic" ) , 10 ,
0 , 0 } , { 60 , TARGET_STRING ( "project/Channel/AWGN Channel" ) ,
TARGET_STRING ( "seed" ) , 11 , 0 , 0 } , { 61 , TARGET_STRING (
"project/Channel/Phase// Frequency Offset" ) , TARGET_STRING ( "Phase" ) , 10
, 0 , 0 } , { 62 , TARGET_STRING ( "project/Channel/Channel Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 10 , 0 , 0 } , { 63 , TARGET_STRING (
"project/Received MPDU/Received MPDU GUI" ) , TARGET_STRING (
"openGUIBoolean" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP CRC Flag" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"project/802.11 Receiver/Detector/MPDU CRC Flag" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"project/802.11 Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "FILT" ) , 10 , 21 , 0 } , { 67 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 10 , 0 , 0 } , { 68 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Delay1" ) , TARGET_STRING (
"DelayLength" ) , 11 , 0 , 0 } , { 69 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Match Correlator Delay" ) ,
TARGET_STRING ( "DelayLength" ) , 11 , 0 , 0 } , { 71 , TARGET_STRING (
"project/802.11 Receiver/Receiver Controller/Match Correlator Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 10 , 0 , 0 } , { 72 , TARGET_STRING (
"project/802.11 Transmitter/MAC Sublayer/MPDU Indices" ) , TARGET_STRING (
"Value" ) , 10 , 22 , 0 } , { 73 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "outDims" ) , 12 , 23 , 0 } , { 74 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "padBefore" ) , 12 , 23 , 0 } , { 75 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "padAfter" ) , 12 , 23 , 0 } , { 76 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "inWorkAdd" ) , 12 , 23 , 0 } , { 77 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "outWorkAdd" ) , 12 , 23 , 0 } , { 78 , TARGET_STRING (
"project/802.11 Transmitter/PHY Framer and Modulator/1024 Framer" ) ,
TARGET_STRING ( "PadValue" ) , 9 , 0 , 0 } , { 79 , TARGET_STRING (
"project/802.11 Transmitter/Raised Cosine Transmit Filter/FIR Interpolation"
) , TARGET_STRING ( "FILTER_COEFF" ) , 10 , 24 , 0 } , { 80 , TARGET_STRING (
"project/Channel/AWGN Channel/Random Source" ) , TARGET_STRING ( "MeanRTP" )
, 9 , 0 , 0 } , { 81 , TARGET_STRING (
"project/Channel/AWGN Channel/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 10 , 0 , 0 } , { 82 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Dec Ctrl/Compare To Constant" ) ,
TARGET_STRING ( "const" ) , 1 , 0 , 0 } , { 83 , TARGET_STRING (
"project/802.11 Receiver/Detector/PLCP Dec Ctrl/Unit Delay1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Get Element Data/Get Element Data"
) , TARGET_STRING ( "elemIDIdx" ) , 10 , 0 , 0 } , { 85 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Get Element Data1/Get Element Data"
) , TARGET_STRING ( "elemIDIdx" ) , 10 , 0 , 0 } , { 86 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Get Element Data2/Get Element Data"
) , TARGET_STRING ( "elemIDIdx" ) , 10 , 0 , 0 } , { 87 , TARGET_STRING (
"project/MPDU Display/MAC Payload Display/Get Element Data3/Get Element Data"
) , TARGET_STRING ( "elemIDIdx" ) , 10 , 0 , 0 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ]
= { { 88 , TARGET_STRING ( "p80211" ) , 13 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0
, 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . cb5viixu3v , & rtB . l0nk5xxkr1 ,
& rtB . hjdknbavtt , & rtB . iyl4yi0uvq , & rtB . k2aypsd5z0 , & rtB .
flyjfnu152 , & rtB . pvzfxkfrym , & rtB . gxl0qnv0wl , & rtB . bmtamjdpq0 , &
rtB . mesonpfm4v [ 0 ] . re , & rtB . ejklemswad , & rtB . frwtrtnl12 [ 0 ] .
re , & rtB . l0nk5xxkr1 , & rtB . hjdknbavtt , & rtB . iyl4yi0uvq , & rtB .
k2aypsd5z0 , & rtB . cb5viixu3v , & rtB . flyjfnu152 , & rtB . pvzfxkfrym , &
rtB . e0moldxafh [ 0 ] . re , & rtB . ikrlju2x0k , & rtB . lw4xp41e1u [ 0 ] .
re , & rtB . jfy5xy2kuc [ 0 ] . re , & rtB . bvkx3sf1em [ 0 ] . re , & rtB .
ce2bilylfy , & rtB . mesonpfm4v [ 0 ] . re , & rtB . fzud2bim0u [ 0 ] . re ,
& rtB . nzefzefnpd [ 0 ] . re , & rtB . png3anych3 [ 0 ] , ( void * ) & rtrtC
. f00zqecg2x , & rtB . fxsyckzo02 [ 0 ] , & rtB . nfrz0m4ksz , & rtB .
njsa1boqih , & rtB . cgjkqywdur [ 0 ] , & rtB . exs1qjlcol [ 0 ] , & rtB .
omppevnb4p [ 0 ] , & rtB . jc1bi2eouc [ 0 ] , & rtB . jlttncaanz [ 0 ] , &
rtB . js0wj3ht0i [ 0 ] . re , & rtB . l0nk5xxkr1 , & rtB . hjdknbavtt , & rtB
. iyl4yi0uvq , & rtB . k2aypsd5z0 , & rtB . cb5viixu3v , & rtB . aihjtfsxoe [
0 ] , & rtB . j1zvrkidan [ 0 ] , ( void * ) & rtrtC . fddlrog3tr , & rtB .
kuesm00ub3 . mt4clpln1e [ 0 ] , & rtB . mhw41tnrld . mt4clpln1e [ 0 ] , & rtB
. kyqjjdftn3 . mt4clpln1e [ 0 ] , & rtB . hxqiytsi2o . mt4clpln1e [ 0 ] , &
rtP . Channel_EsNo , & rtP . Channel_freqOffset , & rtP . Channel_delay , &
rtP . LengthinSamples_Gain , & rtP . UnitDelay_InitialCondition , & rtP .
UnitDelay1_InitialCondition_hc2uujannf , & rtP . AllZeros_Value [ 0 ] . re ,
& rtP . RateTransition_InitialCondition , & rtP . ChannelFrames_ic , & rtP .
AWGNChannel_seed , & rtP . PhaseFrequencyOffset_Phase , & rtP .
ChannelDelay_InitialCondition , & rtP . ReceivedMPDUGUI_openGUIBoolean , &
rtP . PLCPCRCFlag_Y0 , & rtP . MPDUCRCFlag_Y0 , & rtP . FIRDecimation_FILT [
0 ] , & rtP . Delay_InitialCondition , & rtP . Delay1_DelayLength , & rtP .
Delay1_InitialCondition , & rtP . MatchCorrelatorDelay_DelayLength , & rtP .
MatchCorrelatorDelay_InitialCondition , & rtP . MPDUIndices_Value [ 0 ] , &
rtP . u024Framer_outDims [ 0 ] , & rtP . u024Framer_padBefore [ 0 ] , & rtP .
u024Framer_padAfter [ 0 ] , & rtP . u024Framer_inWorkAdd [ 0 ] , & rtP .
u024Framer_outWorkAdd [ 0 ] , & rtP . u024Framer_PadValue . re , & rtP .
FIRInterpolation_FILTER_COEFF [ 0 ] , & rtP . RandomSource_MeanRTP . re , &
rtP . RandomSource_VarianceRTP , & rtP . CompareToConstant_const , & rtP .
UnitDelay1_InitialCondition , & rtP . kuesm00ub3 . GetElementData_elemIDIdx ,
& rtP . mhw41tnrld . GetElementData_elemIDIdx , & rtP . kyqjjdftn3 .
GetElementData_elemIDIdx , & rtP . hxqiytsi2o . GetElementData_elemIDIdx , &
rtP . p80211 , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) , &
rtDW . kuesm00ub3 . gvmrj4p5th [ 0 ] , & rtDW . mhw41tnrld . gvmrj4p5th [ 0 ]
, & rtDW . kyqjjdftn3 . gvmrj4p5th [ 0 ] , & rtDW . hxqiytsi2o . gvmrj4p5th [
0 ] } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } , { "unsigned short" , "uint16_T" , 0 , 0 , sizeof ( uint16_T ) ,
SS_UINT16 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , SS_UINT8 , 0 , 0 } , { "struct" , "FrameCtrlType" , 11 , 1 ,
sizeof ( FrameCtrlType ) , SS_STRUCT , 0 , 0 } , { "struct" ,
"MPDUHeaderType" , 7 , 12 , sizeof ( MPDUHeaderType ) , SS_STRUCT , 0 , 0 } ,
{ "struct" , "CapabilityType" , 16 , 19 , sizeof ( CapabilityType ) ,
SS_STRUCT , 0 , 0 } , { "struct" , "InfoElementType" , 3 , 35 , sizeof (
InfoElementType ) , SS_STRUCT , 0 , 0 } , { "struct" , "BeaconFrameBodyType"
, 5 , 38 , sizeof ( BeaconFrameBodyType ) , SS_STRUCT , 0 , 0 } , { "struct"
, "BeaconMPDUType" , 2 , 43 , sizeof ( BeaconMPDUType ) , SS_STRUCT , 0 , 0 }
, { "struct" , "creal_T" , 0 , 0 , sizeof ( creal_T ) , SS_DOUBLE , 1 , 0 } ,
{ "double" , "real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , SS_UINT32 , 0 , 0
} , { "int" , "int32_T" , 0 , 0 , sizeof ( int32_T ) , SS_INT32 , 0 , 0 } , {
"struct" , "struct_WwSR2Tmdjwktx1IY6ENZAF" , 43 , 45 , sizeof (
struct_WwSR2Tmdjwktx1IY6ENZAF ) , SS_STRUCT , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "ProtocolVersion" , rt_offsetof ( FrameCtrlType ,
ProtocolVersion ) , 2 , 1 , 0 } , { "Type" , rt_offsetof ( FrameCtrlType ,
Type ) , 2 , 1 , 0 } , { "Subtype" , rt_offsetof ( FrameCtrlType , Subtype )
, 2 , 1 , 0 } , { "ToDS" , rt_offsetof ( FrameCtrlType , ToDS ) , 2 , 1 , 0 }
, { "FromDS" , rt_offsetof ( FrameCtrlType , FromDS ) , 2 , 1 , 0 } , {
"MoreFragments" , rt_offsetof ( FrameCtrlType , MoreFragments ) , 2 , 1 , 0 }
, { "Retry" , rt_offsetof ( FrameCtrlType , Retry ) , 2 , 1 , 0 } , {
"PowerManagement" , rt_offsetof ( FrameCtrlType , PowerManagement ) , 2 , 1 ,
0 } , { "MoreData" , rt_offsetof ( FrameCtrlType , MoreData ) , 2 , 1 , 0 } ,
{ "ProtectedFrame" , rt_offsetof ( FrameCtrlType , ProtectedFrame ) , 2 , 1 ,
0 } , { "Order" , rt_offsetof ( FrameCtrlType , Order ) , 2 , 1 , 0 } , {
"FrameCtrl" , rt_offsetof ( MPDUHeaderType , FrameCtrl ) , 3 , 1 , 0 } , {
"DurationID" , rt_offsetof ( MPDUHeaderType , DurationID ) , 2 , 2 , 0 } , {
"Address1" , rt_offsetof ( MPDUHeaderType , Address1 ) , 2 , 3 , 0 } , {
"Address2" , rt_offsetof ( MPDUHeaderType , Address2 ) , 2 , 3 , 0 } , {
"Address3" , rt_offsetof ( MPDUHeaderType , Address3 ) , 2 , 3 , 0 } , {
"SequenceControl" , rt_offsetof ( MPDUHeaderType , SequenceControl ) , 2 , 2
, 0 } , { "Address4" , rt_offsetof ( MPDUHeaderType , Address4 ) , 2 , 3 , 0
} , { "ESS" , rt_offsetof ( CapabilityType , ESS ) , 0 , 1 , 0 } , { "IBSS" ,
rt_offsetof ( CapabilityType , IBSS ) , 0 , 1 , 0 } , { "CFPollable" ,
rt_offsetof ( CapabilityType , CFPollable ) , 0 , 1 , 0 } , { "CFPollRequest"
, rt_offsetof ( CapabilityType , CFPollRequest ) , 0 , 1 , 0 } , { "Privacy"
, rt_offsetof ( CapabilityType , Privacy ) , 0 , 1 , 0 } , { "ShortPreamble"
, rt_offsetof ( CapabilityType , ShortPreamble ) , 0 , 1 , 0 } , { "PBCC" ,
rt_offsetof ( CapabilityType , PBCC ) , 0 , 1 , 0 } , { "ChannelAgility" ,
rt_offsetof ( CapabilityType , ChannelAgility ) , 0 , 1 , 0 } , {
"SpectrumManagement" , rt_offsetof ( CapabilityType , SpectrumManagement ) ,
0 , 1 , 0 } , { "QoS" , rt_offsetof ( CapabilityType , QoS ) , 0 , 1 , 0 } ,
{ "ShortSlotTime" , rt_offsetof ( CapabilityType , ShortSlotTime ) , 0 , 1 ,
0 } , { "APSD" , rt_offsetof ( CapabilityType , APSD ) , 0 , 1 , 0 } , {
"Reserved" , rt_offsetof ( CapabilityType , Reserved ) , 0 , 1 , 0 } , {
"DSSOFDM" , rt_offsetof ( CapabilityType , DSSOFDM ) , 0 , 1 , 0 } , {
"DelayedBlockAck" , rt_offsetof ( CapabilityType , DelayedBlockAck ) , 0 , 1
, 0 } , { "ImmediateBlockAck" , rt_offsetof ( CapabilityType ,
ImmediateBlockAck ) , 0 , 1 , 0 } , { "ID" , rt_offsetof ( InfoElementType ,
ID ) , 2 , 1 , 0 } , { "Length" , rt_offsetof ( InfoElementType , Length ) ,
2 , 1 , 0 } , { "Value" , rt_offsetof ( InfoElementType , Value ) , 2 , 5 , 0
} , { "TimeStamp" , rt_offsetof ( BeaconFrameBodyType , TimeStamp ) , 2 , 4 ,
0 } , { "BeaconInterval" , rt_offsetof ( BeaconFrameBodyType , BeaconInterval
) , 2 , 2 , 0 } , { "Capability" , rt_offsetof ( BeaconFrameBodyType ,
Capability ) , 5 , 1 , 0 } , { "NumInfoElements" , rt_offsetof (
BeaconFrameBodyType , NumInfoElements ) , 2 , 0 , 0 } , { "InfoElements" ,
rt_offsetof ( BeaconFrameBodyType , InfoElements ) , 6 , 6 , 0 } , { "Header"
, rt_offsetof ( BeaconMPDUType , Header ) , 4 , 0 , 0 } , { "FrameBody" ,
rt_offsetof ( BeaconMPDUType , FrameBody ) , 7 , 0 , 0 } , { "SymbolRate" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , SymbolRate ) , 10 , 1 , 0 } , {
"BitsPerSymbol" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , BitsPerSymbol
) , 10 , 1 , 0 } , { "SamplesPerChip" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SamplesPerChip ) , 10 , 1 , 0 } , {
"FilterOrder" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , FilterOrder ) ,
10 , 1 , 0 } , { "SpreadingCode" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SpreadingCode ) , 10 , 11 , 0 } , {
"SpreadingRate" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , SpreadingRate
) , 10 , 1 , 0 } , { "ChipRate" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF
, ChipRate ) , 10 , 1 , 0 } , { "SynchronizationSignal" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SynchronizationSignal ) , 9 , 9 , 0 } , {
"CorrelationThreshold" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
CorrelationThreshold ) , 10 , 1 , 0 } , { "SYNC" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SYNC ) , 0 , 17 , 0 } , { "SFD" , rt_offsetof
( struct_WwSR2Tmdjwktx1IY6ENZAF , SFD ) , 0 , 12 , 0 } , { "SIGNAL" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , SIGNAL ) , 0 , 25 , 0 } , {
"SERVICE" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , SERVICE ) , 0 , 25
, 0 } , { "LENGTH" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , LENGTH ) ,
0 , 26 , 0 } , { "CRCLength" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
CRCLength ) , 10 , 1 , 0 } , { "ScramblerPolynomial" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , ScramblerPolynomial ) , 10 , 4 , 0 } , {
"ScramblerAmbiguity" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
ScramblerAmbiguity ) , 10 , 1 , 0 } , { "ScramblerAmbiguitySamples" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , ScramblerAmbiguitySamples ) ,
10 , 1 , 0 } , { "NumSYNCSamples" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , NumSYNCSamples ) , 10 , 1 , 0 } , {
"PLCPPreambleLength" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
PLCPPreambleLength ) , 10 , 1 , 0 } , { "NumPLCPPreambleSamples" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , NumPLCPPreambleSamples ) , 10 ,
1 , 0 } , { "PLCPHeaderLength" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF
, PLCPHeaderLength ) , 10 , 1 , 0 } , { "NumPLCPHeaderSamples" , rt_offsetof
( struct_WwSR2Tmdjwktx1IY6ENZAF , NumPLCPHeaderSamples ) , 10 , 1 , 0 } , {
"PLCPLength" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , PLCPLength ) ,
10 , 1 , 0 } , { "NumPLCPSamples" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , NumPLCPSamples ) , 10 , 1 , 0 } , {
"MaximumPPDULength" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
MaximumPPDULength ) , 10 , 1 , 0 } , { "MaximumMPDULength" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , MaximumMPDULength ) , 10 , 1 , 0 } , {
"SymbolsPerChannelFrame" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
SymbolsPerChannelFrame ) , 10 , 1 , 0 } , { "BitsPerChannelFrame" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , BitsPerChannelFrame ) , 10 , 1
, 0 } , { "SamplesPerChannelFrame" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SamplesPerChannelFrame ) , 10 , 1 , 0 } , {
"MaximumPayloadSymbols" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
MaximumPayloadSymbols ) , 10 , 1 , 0 } , { "MaximumPayloadSamples" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , MaximumPayloadSamples ) , 10 ,
1 , 0 } , { "PayloadBufferLength" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , PayloadBufferLength ) , 10 , 1 , 0 } , {
"BeaconInterval" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
BeaconInterval ) , 10 , 1 , 0 } , { "SSID" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SSID ) , 2 , 27 , 0 } , { "SupportedRates" ,
rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , SupportedRates ) , 10 , 28 , 0
} , { "ChannelNumber" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
ChannelNumber ) , 10 , 1 , 0 } , { "SendCFParameters" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , SendCFParameters ) , 0 , 1 , 0 } , {
"CFPCount" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF , CFPCount ) , 10 ,
1 , 0 } , { "CFPPeriod" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
CFPPeriod ) , 10 , 1 , 0 } , { "CFPMaxDuration" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , CFPMaxDuration ) , 10 , 1 , 0 } , {
"CFPDurRemaining" , rt_offsetof ( struct_WwSR2Tmdjwktx1IY6ENZAF ,
CFPDurRemaining ) , 10 , 1 , 0 } , { "NumMPDUOctets" , rt_offsetof (
struct_WwSR2Tmdjwktx1IY6ENZAF , NumMPDUOctets ) , 10 , 1 , 0 } } ; static
const rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_SCALAR , 0 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 1 } , {
rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 2 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2
, 3 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 4 } , {
rtwCAPI_MATRIX_COL_MAJOR , 26 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 28 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 30 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2
, 0 } , { rtwCAPI_VECTOR , 32 , 2 , 0 } , { rtwCAPI_VECTOR , 34 , 2 , 0 } , {
rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 36 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 38 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 40 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 42 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 44 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 1 , 2 , 1 , 6 , 1 , 8 , 1 , 257 , 1 , 60 ,
11264 , 1 , 1408 , 1 , 5632 , 1 , 2 , 1 , 11 , 1 , 16 , 1 , 8 , 4 , 128 , 1 ,
144 , 1 , 32 , 1 , 33 , 1 , 72 , 1 , 9 , 4 , 8 , 1 , 1 , 16 , 1 , 18 , 1 , 3
} ; static const real_T rtcapiStoredFloats [ ] = { 0.000128 , 0.0 , 0.001024
} ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( NULL ) , ( NULL ) , - 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 51 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 37 , rtModelParameters , 1 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 695390017U , 52591618U ,
2693007962U , 2889503436U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * project_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void project_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void project_host_InitializeDataMapInfo ( project_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
