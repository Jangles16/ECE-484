#include "__cf_project.h"
#ifndef RTW_HEADER_project_types_h_
#define RTW_HEADER_project_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_FrameCtrlType_
#define DEFINED_TYPEDEF_FOR_FrameCtrlType_
typedef struct { uint8_T ProtocolVersion ; uint8_T Type ; uint8_T Subtype ;
uint8_T ToDS ; uint8_T FromDS ; uint8_T MoreFragments ; uint8_T Retry ;
uint8_T PowerManagement ; uint8_T MoreData ; uint8_T ProtectedFrame ; uint8_T
Order ; uint8_T sl_padding0 [ 5 ] ; } FrameCtrlType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MPDUHeaderType_
#define DEFINED_TYPEDEF_FOR_MPDUHeaderType_
typedef struct { FrameCtrlType FrameCtrl ; uint8_T DurationID [ 2 ] ; uint8_T
Address1 [ 6 ] ; uint8_T Address2 [ 6 ] ; uint8_T Address3 [ 6 ] ; uint8_T
SequenceControl [ 2 ] ; uint8_T Address4 [ 6 ] ; uint8_T sl_padding0 [ 4 ] ;
} MPDUHeaderType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_CapabilityType_
#define DEFINED_TYPEDEF_FOR_CapabilityType_
typedef struct { boolean_T ESS ; boolean_T IBSS ; boolean_T CFPollable ;
boolean_T CFPollRequest ; boolean_T Privacy ; boolean_T ShortPreamble ;
boolean_T PBCC ; boolean_T ChannelAgility ; boolean_T SpectrumManagement ;
boolean_T QoS ; boolean_T ShortSlotTime ; boolean_T APSD ; boolean_T Reserved
; boolean_T DSSOFDM ; boolean_T DelayedBlockAck ; boolean_T ImmediateBlockAck
; } CapabilityType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_InfoElementType_
#define DEFINED_TYPEDEF_FOR_InfoElementType_
typedef struct { uint8_T ID ; uint8_T Length ; uint8_T Value [ 257 ] ;
uint8_T sl_padding0 [ 5 ] ; } InfoElementType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BeaconFrameBodyType_
#define DEFINED_TYPEDEF_FOR_BeaconFrameBodyType_
typedef struct { uint8_T TimeStamp [ 8 ] ; uint8_T BeaconInterval [ 2 ] ;
uint8_T sl_padding0 [ 6 ] ; CapabilityType Capability ; uint8_T
NumInfoElements ; uint8_T sl_padding1 [ 7 ] ; InfoElementType InfoElements [
60 ] ; } BeaconFrameBodyType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BeaconMPDUType_
#define DEFINED_TYPEDEF_FOR_BeaconMPDUType_
typedef struct { MPDUHeaderType Header ; BeaconFrameBodyType FrameBody ; }
BeaconMPDUType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_WwSR2Tmdjwktx1IY6ENZAF_
#define DEFINED_TYPEDEF_FOR_struct_WwSR2Tmdjwktx1IY6ENZAF_
typedef struct { real_T SymbolRate ; real_T BitsPerSymbol ; real_T
SamplesPerChip ; real_T FilterOrder ; real_T SpreadingCode [ 11 ] ; real_T
SpreadingRate ; real_T ChipRate ; creal_T SynchronizationSignal [ 5632 ] ;
real_T CorrelationThreshold ; boolean_T SYNC [ 128 ] ; boolean_T SFD [ 16 ] ;
boolean_T SIGNAL [ 8 ] ; boolean_T SERVICE [ 8 ] ; boolean_T LENGTH [ 16 ] ;
real_T CRCLength ; real_T ScramblerPolynomial [ 8 ] ; real_T
ScramblerAmbiguity ; real_T ScramblerAmbiguitySamples ; real_T NumSYNCSamples
; real_T PLCPPreambleLength ; real_T NumPLCPPreambleSamples ; real_T
PLCPHeaderLength ; real_T NumPLCPHeaderSamples ; real_T PLCPLength ; real_T
NumPLCPSamples ; real_T MaximumPPDULength ; real_T MaximumMPDULength ; real_T
SymbolsPerChannelFrame ; real_T BitsPerChannelFrame ; real_T
SamplesPerChannelFrame ; real_T MaximumPayloadSymbols ; real_T
MaximumPayloadSamples ; real_T PayloadBufferLength ; real_T BeaconInterval ;
uint8_T SSID [ 18 ] ; uint8_T sl_padding0 [ 6 ] ; real_T SupportedRates [ 3 ]
; real_T ChannelNumber ; boolean_T SendCFParameters ; uint8_T sl_padding1 [ 7
] ; real_T CFPCount ; real_T CFPPeriod ; real_T CFPMaxDuration ; real_T
CFPDurRemaining ; real_T NumMPDUOctets ; } struct_WwSR2Tmdjwktx1IY6ENZAF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_dEAmvTt9fN03Icx4IJFA4D_
#define DEFINED_TYPEDEF_FOR_struct_dEAmvTt9fN03Icx4IJFA4D_
typedef struct { real_T coeff [ 33 ] ; real_T decimFactor ; real_T
decimOffset ; } struct_dEAmvTt9fN03Icx4IJFA4D ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_qXCkfgCzkcbb1jmKRmTbPE_
#define DEFINED_TYPEDEF_FOR_struct_qXCkfgCzkcbb1jmKRmTbPE_
typedef struct { real_T CoeffSource ; real_T h [ 33 ] ; real_T D ; real_T
filtStruct ; real_T outBufIC ; } struct_qXCkfgCzkcbb1jmKRmTbPE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_6vjZE1zVXiMs9MoZnA9ZPB_
#define DEFINED_TYPEDEF_FOR_struct_6vjZE1zVXiMs9MoZnA9ZPB_
typedef struct { real_T firstCoeffMode ; real_T firstCoeffWordLength ; real_T
firstCoeffFracLength ; real_T prodOutputMode ; real_T prodOutputWordLength ;
real_T prodOutputFracLength ; real_T accumMode ; real_T accumWordLength ;
real_T accumFracLength ; real_T outputMode ; real_T outputWordLength ; real_T
outputFracLength ; real_T roundingMode ; real_T overflowMode ; real_T
arithmetic ; real_T inputWordLength ; real_T inputFracLength ; }
struct_6vjZE1zVXiMs9MoZnA9ZPB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_88YLyz49467ZgAX8Jih9nB_
#define DEFINED_TYPEDEF_FOR_struct_88YLyz49467ZgAX8Jih9nB_
typedef struct { real_T coeff [ 33 ] ; real_T rateFactor ; }
struct_88YLyz49467ZgAX8Jih9nB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_YP8IGiiiEwuzu0vqUDbpiD_
#define DEFINED_TYPEDEF_FOR_struct_YP8IGiiiEwuzu0vqUDbpiD_
typedef struct { real_T CoeffSource ; real_T h [ 36 ] ; real_T L ; real_T
outBufIC ; } struct_YP8IGiiiEwuzu0vqUDbpiD ;
#endif
#ifndef struct_md63dee483427c44fa26934841fe6df9c2
#define struct_md63dee483427c44fa26934841fe6df9c2
struct md63dee483427c44fa26934841fe6df9c2 { int32_T S0_isInitialized ; } ;
#endif
#ifndef typedef_j3mpbjhsfr
#define typedef_j3mpbjhsfr
typedef struct md63dee483427c44fa26934841fe6df9c2 j3mpbjhsfr ;
#endif
#ifndef struct_mdU4cj2dn609vTwDh8MqxKIB
#define struct_mdU4cj2dn609vTwDh8MqxKIB
struct mdU4cj2dn609vTwDh8MqxKIB { int32_T isInitialized ; j3mpbjhsfr
cSFunObject ; } ;
#endif
#ifndef typedef_kk3xchntuf
#define typedef_kk3xchntuf
typedef struct mdU4cj2dn609vTwDh8MqxKIB kk3xchntuf ;
#endif
#ifndef struct_tag_sCA6ZPdGV45Yzy15DNQrgPC
#define struct_tag_sCA6ZPdGV45Yzy15DNQrgPC
struct tag_sCA6ZPdGV45Yzy15DNQrgPC { uint8_T ProtocolVersion ; uint8_T Type ;
uint8_T Subtype ; uint8_T ToDS ; uint8_T FromDS ; uint8_T MoreFragments ;
uint8_T Retry ; uint8_T PowerManagement ; uint8_T MoreData ; uint8_T
ProtectedFrame ; uint8_T Order ; } ;
#endif
#ifndef typedef_lpj1pxc2is
#define typedef_lpj1pxc2is
typedef struct tag_sCA6ZPdGV45Yzy15DNQrgPC lpj1pxc2is ;
#endif
#ifndef struct_tag_smaA7IWR3iWHbuO3XvZ9USF
#define struct_tag_smaA7IWR3iWHbuO3XvZ9USF
struct tag_smaA7IWR3iWHbuO3XvZ9USF { boolean_T ESS ; boolean_T IBSS ;
boolean_T CFPollable ; boolean_T CFPollRequest ; boolean_T Privacy ;
boolean_T ShortPreamble ; boolean_T PBCC ; boolean_T ChannelAgility ;
boolean_T SpectrumManagement ; boolean_T QoS ; boolean_T ShortSlotTime ;
boolean_T APSD ; boolean_T Reserved ; boolean_T DSSOFDM ; boolean_T
DelayedBlockAck ; boolean_T ImmediateBlockAck ; } ;
#endif
#ifndef typedef_j42zv0quqn
#define typedef_j42zv0quqn
typedef struct tag_smaA7IWR3iWHbuO3XvZ9USF j42zv0quqn ;
#endif
#ifndef struct_tag_s1YKNbsSsPDmDEuWjBbe6OE
#define struct_tag_s1YKNbsSsPDmDEuWjBbe6OE
struct tag_s1YKNbsSsPDmDEuWjBbe6OE { real_T Polynomial [ 15 ] ; real_T
InitialConditions ; boolean_T DirectMethod ; boolean_T ReflectInputBytes ;
boolean_T ReflectChecksums ; real_T FinalXOR ; real_T ChecksumsPerFrame ; } ;
#endif
#ifndef typedef_ce4nqm4pjp
#define typedef_ce4nqm4pjp
typedef struct tag_s1YKNbsSsPDmDEuWjBbe6OE ce4nqm4pjp ;
#endif
#ifndef typedef_hxjaxq5hqh
#define typedef_hxjaxq5hqh
typedef struct { uint32_T f1 [ 8 ] ; } hxjaxq5hqh ;
#endif
#ifndef struct_tag_sj81JOGZkFLD8oCGCTXK1WG
#define struct_tag_sj81JOGZkFLD8oCGCTXK1WG
struct tag_sj81JOGZkFLD8oCGCTXK1WG { uint8_T ID ; uint8_T Length ; uint8_T
Value [ 32 ] ; } ;
#endif
#ifndef typedef_d2m0tjn0tm
#define typedef_d2m0tjn0tm
typedef struct tag_sj81JOGZkFLD8oCGCTXK1WG d2m0tjn0tm ;
#endif
#ifndef struct_tag_saGt2VxnbRn7UeJNTyBVDjF
#define struct_tag_saGt2VxnbRn7UeJNTyBVDjF
struct tag_saGt2VxnbRn7UeJNTyBVDjF { real_T SymbolRate ; real_T BitsPerSymbol
; real_T SamplesPerChip ; real_T FilterOrder ; real_T SpreadingCode [ 11 ] ;
real_T SpreadingRate ; real_T ChipRate ; creal_T SynchronizationSignal [ 5632
] ; real_T CorrelationThreshold ; boolean_T SYNC [ 128 ] ; boolean_T SFD [ 16
] ; boolean_T SIGNAL [ 8 ] ; boolean_T SERVICE [ 8 ] ; boolean_T LENGTH [ 16
] ; real_T CRCLength ; real_T ScramblerPolynomial [ 8 ] ; real_T
ScramblerAmbiguity ; real_T ScramblerAmbiguitySamples ; real_T NumSYNCSamples
; real_T PLCPPreambleLength ; real_T NumPLCPPreambleSamples ; real_T
PLCPHeaderLength ; real_T NumPLCPHeaderSamples ; real_T PLCPLength ; real_T
NumPLCPSamples ; real_T MaximumPPDULength ; real_T MaximumMPDULength ; real_T
SymbolsPerChannelFrame ; real_T BitsPerChannelFrame ; real_T
SamplesPerChannelFrame ; real_T MaximumPayloadSymbols ; real_T
MaximumPayloadSamples ; real_T PayloadBufferLength ; real_T BeaconInterval ;
uint8_T SSID [ 18 ] ; real_T SupportedRates [ 3 ] ; real_T ChannelNumber ;
boolean_T SendCFParameters ; real_T CFPCount ; real_T CFPPeriod ; real_T
CFPMaxDuration ; real_T CFPDurRemaining ; real_T NumMPDUOctets ; } ;
#endif
#ifndef typedef_hlsfegsgxs
#define typedef_hlsfegsgxs
typedef struct tag_saGt2VxnbRn7UeJNTyBVDjF hlsfegsgxs ;
#endif
#ifndef typedef_gsa1zzy4is
#define typedef_gsa1zzy4is
typedef struct { int32_T isInitialized ; boolean_T TunablePropsChanged ;
hxjaxq5hqh inputVarSize ; real_T Threshold ; real_T pThreshold ; creal_T
pFilterStates [ 5631 ] ; } gsa1zzy4is ;
#endif
typedef struct hu3rgy0cv4_ hu3rgy0cv4 ; typedef struct P_ P ;
#endif
