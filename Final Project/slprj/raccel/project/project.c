#include "__cf_project.h"
#include "rt_logging_mmi.h"
#include "project_capi.h"
#include <math.h>
#include "project.h"
#include "project_private.h"
#include "project_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "8.13 (R2017b) 24-Jul-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\project\\project_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ; SimStruct *
const rtS = & model_S ; static real_T jwg53rnu3l ( real_T x ) ; static void
ieir3nq3fa ( const uint32_T TSF [ 2 ] , uint8_T *
mpduHeader_FrameCtrl_ProtocolVersion , uint8_T * mpduHeader_FrameCtrl_Type ,
uint8_T * mpduHeader_FrameCtrl_Subtype , uint8_T * mpduHeader_FrameCtrl_ToDS
, uint8_T * mpduHeader_FrameCtrl_FromDS , uint8_T *
mpduHeader_FrameCtrl_MoreFragments , uint8_T * mpduHeader_FrameCtrl_Retry ,
uint8_T * mpduHeader_FrameCtrl_PowerManagement , uint8_T *
mpduHeader_FrameCtrl_MoreData , uint8_T * mpduHeader_FrameCtrl_ProtectedFrame
, uint8_T * mpduHeader_FrameCtrl_Order , uint8_T mpduHeader_DurationID [ 2 ]
, real_T mpduHeader_Address1 [ 6 ] , real_T mpduHeader_Address2 [ 6 ] ,
real_T mpduHeader_Address3 [ 6 ] , uint8_T mpduHeader_SequenceControl [ 2 ] ,
real_T mpduHeader_Address4 [ 6 ] , uint8_T mpduBody_TimeStamp [ 8 ] , uint8_T
mpduBody_BeaconInterval [ 2 ] , j42zv0quqn * mpduBody_Capability , d2m0tjn0tm
mpduBody_InfoElements [ 25 ] , real_T * mpduBody_NumInfoElements ) ; static
void plujx3igc4 ( const uint8_T mpduHeader_DurationID [ 2 ] , const real_T
mpduHeader_Address1 [ 6 ] , const real_T mpduHeader_Address2 [ 6 ] , const
real_T mpduHeader_Address3 [ 6 ] , const uint8_T mpduHeader_SequenceControl [
2 ] , const uint8_T mpduBody_TimeStamp [ 8 ] , const uint8_T
mpduBody_BeaconInterval [ 2 ] , const d2m0tjn0tm mpduBody_InfoElements [ 25 ]
, uint8_T payload [ 832 ] ) ; static boolean_T eawryqakn0 ( real_T varargin_1
, real_T varargin_2 ) ; static void nhncqw0bqs ( const creal_T x [ 5632 ] ,
const creal_T zi [ 5631 ] , creal_T y [ 5632 ] , creal_T zf [ 5631 ] ) ;
static void lpgqbq5wno ( const creal_T x [ 5632 ] , real_T y [ 5632 ] ) ;
static void lfgqhvndli ( const real_T crossCorr [ 5632 ] , real_T threshold ,
real_T idx_data [ ] , int32_T * idx_size ) ; static void nkmotpngpf (
BeaconFrameBodyType * frameBody ) ; static void jesjp43xz3 ( kk3xchntuf * obj
, const boolean_T varargin_1_data [ ] , const int32_T * varargin_1_size ,
boolean_T varargout_1_data [ ] , int32_T varargout_1_size [ 2 ] , boolean_T *
varargout_2 ) ; static FrameCtrlType ll3iti40qh ( const boolean_T fcBits [ 16
] , boolean_T mpduCRC ) ; static void f2lun0e1s3 ( const boolean_T bits [ 16
] , uint8_T octets [ 2 ] ) ; static void f2lun0e1s34 ( const boolean_T bits [
48 ] , uint8_T octets [ 6 ] ) ; static real_T jwg53rnu3l ( real_T x ) {
real_T r ; if ( x == 0.0 ) { r = 0.0 ; } else { r = muDoubleScalarRem ( x ,
4.0 ) ; if ( r == 0.0 ) { r = 0.0 ; } } return r ; } void l4dxp3tr3f ( const
InfoElementType l1u100cdku [ 60 ] , aikybtsj0j * localB , j5ctwrdnoe *
localDW , hu3rgy0cv4 * localP ) { uint8_T values_data [ 255 ] ; int32_T
elemID ; real_T data_data [ 255 ] ; int32_T p ; int32_T loop_ub ; boolean_T
exitg1 ; loop_ub = 1 ; values_data [ 0 ] = 0U ; switch ( ( int32_T ) localP
-> GetElementData_elemIDIdx ) { case 1 : elemID = 0 ; break ; case 2 : elemID
= 1 ; break ; case 3 : elemID = 3 ; break ; case 4 : elemID = 4 ; break ;
default : elemID = 0 ; break ; } p = 0 ; exitg1 = false ; while ( ( ! exitg1
) && ( p < 60 ) ) { if ( l1u100cdku [ p ] . ID == elemID ) { if ( 1 >
l1u100cdku [ p ] . Length ) { loop_ub = 0 ; } else { loop_ub = l1u100cdku [ p
] . Length ; } for ( elemID = 0 ; elemID < loop_ub ; elemID ++ ) {
values_data [ elemID ] = l1u100cdku [ p ] . Value [ elemID ] ; } exitg1 =
true ; } else { p ++ ; } } if ( ( int32_T ) localP ->
GetElementData_elemIDIdx == 2 ) { p = ( uint8_T ) loop_ub ; elemID = (
uint8_T ) loop_ub ; if ( 0 <= elemID - 1 ) { memset ( & data_data [ 0 ] , 0 ,
elemID * sizeof ( real_T ) ) ; } for ( elemID = 0 ; elemID < loop_ub ; elemID
++ ) { data_data [ elemID ] = ( real_T ) ( values_data [ elemID ] & 127 ) *
500000.0 / 1.0E+6 ; } } else { p = loop_ub ; for ( elemID = 0 ; elemID <
loop_ub ; elemID ++ ) { data_data [ elemID ] = values_data [ elemID ] ; } }
if ( p > 4 ) { elemID = ( int32_T ) muDoubleScalarCeil ( ( real_T ) p / 4.0 )
; localDW -> gvmrj4p5th [ 0 ] = elemID ; localDW -> gvmrj4p5th [ 1 ] = 4 ;
loop_ub = elemID << 2 ; if ( 0 <= loop_ub - 1 ) { memset ( & localB ->
mt4clpln1e [ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } for ( elemID = 0 ;
elemID < p ; elemID ++ ) { localB -> mt4clpln1e [ ( ( int32_T )
muDoubleScalarCeil ( ( 1.0 + ( real_T ) elemID ) / 4.0 ) + localDW ->
gvmrj4p5th [ 0 ] * ( ( int32_T ) ( jwg53rnu3l ( ( 1.0 + ( real_T ) elemID ) -
1.0 ) + 1.0 ) - 1 ) ) - 1 ] = data_data [ elemID ] ; } } else { localDW ->
gvmrj4p5th [ 0 ] = 1 ; localDW -> gvmrj4p5th [ 1 ] = p ; if ( 0 <= p - 1 ) {
memcpy ( & localB -> mt4clpln1e [ 0 ] , & data_data [ 0 ] , p * sizeof (
real_T ) ) ; } } } void RandSrcInitState_GZ ( const uint32_T seed [ ] ,
uint32_T state [ ] , int32_T nChans ) { int32_T i ; for ( i = 0 ; i < nChans
; i ++ ) { state [ i << 1 ] = 362436069U ; state [ ( i << 1 ) + 1 ] = seed [
i ] == 0U ? 521288629U : seed [ i ] ; } } static void ieir3nq3fa ( const
uint32_T TSF [ 2 ] , uint8_T * mpduHeader_FrameCtrl_ProtocolVersion , uint8_T
* mpduHeader_FrameCtrl_Type , uint8_T * mpduHeader_FrameCtrl_Subtype ,
uint8_T * mpduHeader_FrameCtrl_ToDS , uint8_T * mpduHeader_FrameCtrl_FromDS ,
uint8_T * mpduHeader_FrameCtrl_MoreFragments , uint8_T *
mpduHeader_FrameCtrl_Retry , uint8_T * mpduHeader_FrameCtrl_PowerManagement ,
uint8_T * mpduHeader_FrameCtrl_MoreData , uint8_T *
mpduHeader_FrameCtrl_ProtectedFrame , uint8_T * mpduHeader_FrameCtrl_Order ,
uint8_T mpduHeader_DurationID [ 2 ] , real_T mpduHeader_Address1 [ 6 ] ,
real_T mpduHeader_Address2 [ 6 ] , real_T mpduHeader_Address3 [ 6 ] , uint8_T
mpduHeader_SequenceControl [ 2 ] , real_T mpduHeader_Address4 [ 6 ] , uint8_T
mpduBody_TimeStamp [ 8 ] , uint8_T mpduBody_BeaconInterval [ 2 ] , j42zv0quqn
* mpduBody_Capability , d2m0tjn0tm mpduBody_InfoElements [ 25 ] , real_T *
mpduBody_NumInfoElements ) { int32_T p ; int32_T b ; int32_T c ; d2m0tjn0tm
b_s ; static const uint8_T t [ 6 ] = { 180U , 156U , 233U , 168U , 94U , 246U
} ; static const uint8_T u [ 6 ] = { 19U , 39U , 221U , 39U , 76U , 35U } ;
static const uint8_T v [ 6 ] = { 176U , 172U , 79U , 142U , 6U , 73U } ;
static const int8_T w [ 16 ] = { 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 } ; static const uint8_T b_b [ 8 ] = { 1U , 2U , 4U , 8U ,
16U , 32U , 64U , 128U } ; static const int8_T x [ 16 ] = { 1 , 1 , 0 , 0 , 1
, 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const uint8_T ssid [
18 ] = { 77U , 97U , 116U , 104U , 87U , 111U , 114U , 107U , 115U , 32U ,
83U , 68U , 82U , 32U , 116U , 101U , 97U , 109U } ; static const int8_T ab [
16 ] = { 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static const int8_T bb [ 16 ] = { 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; int8_T w_data [ 16 ] ; int32_T i ; real_T tmp ; *
mpduHeader_FrameCtrl_ProtocolVersion = 0U ; * mpduHeader_FrameCtrl_Type = 0U
; * mpduHeader_FrameCtrl_Subtype = 8U ; * mpduHeader_FrameCtrl_ToDS = 0U ; *
mpduHeader_FrameCtrl_FromDS = 0U ; * mpduHeader_FrameCtrl_MoreFragments = 0U
; * mpduHeader_FrameCtrl_Retry = 0U ; * mpduHeader_FrameCtrl_PowerManagement
= 1U ; * mpduHeader_FrameCtrl_MoreData = 0U ; *
mpduHeader_FrameCtrl_ProtectedFrame = 0U ; * mpduHeader_FrameCtrl_Order = 1U
; for ( p = 0 ; p < 2 ; p ++ ) { b = p << 3 ; c = ( 1 + p ) << 3 ; if ( b + 1
> c ) { b = 0 ; c = 0 ; } c -= b ; for ( i = 0 ; i < c ; i ++ ) { w_data [ i
] = w [ b + i ] ; } tmp = 0.0 ; for ( i = 0 ; i < 8 ; i ++ ) { tmp += (
real_T ) ( w_data [ i ] * b_b [ i ] ) ; } if ( tmp < 256.0 ) {
mpduHeader_DurationID [ p ] = ( uint8_T ) tmp ; } else {
mpduHeader_DurationID [ p ] = MAX_uint8_T ; } } for ( i = 0 ; i < 6 ; i ++ )
{ mpduHeader_Address1 [ i ] = t [ i ] ; mpduHeader_Address2 [ i ] = u [ i ] ;
mpduHeader_Address3 [ i ] = v [ i ] ; } for ( p = 0 ; p < 2 ; p ++ ) { b = p
<< 3 ; c = ( 1 + p ) << 3 ; if ( b + 1 > c ) { b = 0 ; c = 0 ; } c -= b ; for
( i = 0 ; i < c ; i ++ ) { w_data [ i ] = x [ b + i ] ; } tmp = 0.0 ; for ( i
= 0 ; i < 8 ; i ++ ) { tmp += ( real_T ) ( w_data [ i ] * b_b [ i ] ) ; } if
( tmp < 256.0 ) { mpduHeader_SequenceControl [ p ] = ( uint8_T ) tmp ; } else
{ mpduHeader_SequenceControl [ p ] = MAX_uint8_T ; } } for ( i = 0 ; i < 6 ;
i ++ ) { mpduHeader_Address4 [ i ] = 0.0 ; } mpduBody_TimeStamp [ 0 ] = (
uint8_T ) ( TSF [ 0 ] & 255U ) ; mpduBody_TimeStamp [ 1 ] = ( uint8_T ) ( TSF
[ 0 ] >> 8U & 255U ) ; mpduBody_TimeStamp [ 2 ] = ( uint8_T ) ( TSF [ 0 ] >>
16U & 255U ) ; mpduBody_TimeStamp [ 3 ] = ( uint8_T ) ( TSF [ 0 ] >> 24U ) ;
mpduBody_TimeStamp [ 4 ] = ( uint8_T ) ( TSF [ 1 ] & 255U ) ;
mpduBody_TimeStamp [ 5 ] = ( uint8_T ) ( TSF [ 1 ] >> 8U & 255U ) ;
mpduBody_TimeStamp [ 6 ] = ( uint8_T ) ( TSF [ 1 ] >> 16U & 255U ) ;
mpduBody_TimeStamp [ 7 ] = ( uint8_T ) ( TSF [ 1 ] >> 24U ) ;
mpduBody_BeaconInterval [ 0 ] = 2U ; mpduBody_BeaconInterval [ 1 ] = 0U ;
mpduBody_Capability -> ESS = true ; mpduBody_Capability -> IBSS = false ;
mpduBody_Capability -> CFPollable = false ; mpduBody_Capability ->
CFPollRequest = true ; mpduBody_Capability -> Privacy = false ;
mpduBody_Capability -> ShortPreamble = true ; mpduBody_Capability -> PBCC =
true ; mpduBody_Capability -> ChannelAgility = false ; mpduBody_Capability ->
SpectrumManagement = false ; mpduBody_Capability -> QoS = false ;
mpduBody_Capability -> ShortSlotTime = true ; mpduBody_Capability -> APSD =
false ; mpduBody_Capability -> Reserved = false ; mpduBody_Capability ->
DSSOFDM = true ; mpduBody_Capability -> DelayedBlockAck = false ;
mpduBody_Capability -> ImmediateBlockAck = true ; b_s . ID = 0U ; b_s .
Length = 0U ; for ( i = 0 ; i < 32 ; i ++ ) { b_s . Value [ i ] = 0U ; } for
( i = 0 ; i < 25 ; i ++ ) { mpduBody_InfoElements [ i ] = b_s ; } b_s . ID =
0U ; b_s . Length = 0U ; for ( i = 0 ; i < 32 ; i ++ ) { b_s . Value [ i ] =
0U ; } mpduBody_InfoElements [ 0 ] = b_s ; mpduBody_InfoElements [ 0 ] . ID =
0U ; mpduBody_InfoElements [ 0 ] . Length = 18U ; for ( i = 0 ; i < 18 ; i ++
) { mpduBody_InfoElements [ 0 ] . Value [ i ] = ssid [ i ] ; } b_s . ID = 0U
; b_s . Length = 0U ; for ( i = 0 ; i < 32 ; i ++ ) { b_s . Value [ i ] = 0U
; } mpduBody_InfoElements [ 1 ] = b_s ; mpduBody_InfoElements [ 1 ] . ID = 1U
; mpduBody_InfoElements [ 1 ] . Length = 3U ; mpduBody_InfoElements [ 1 ] .
Value [ 0 ] = 130U ; mpduBody_InfoElements [ 1 ] . Value [ 1 ] = 132U ;
mpduBody_InfoElements [ 1 ] . Value [ 2 ] = 138U ; b_s . ID = 0U ; b_s .
Length = 0U ; for ( i = 0 ; i < 32 ; i ++ ) { b_s . Value [ i ] = 0U ; }
mpduBody_InfoElements [ 2 ] = b_s ; mpduBody_InfoElements [ 2 ] . ID = 3U ;
mpduBody_InfoElements [ 2 ] . Length = 1U ; mpduBody_InfoElements [ 2 ] .
Value [ 0 ] = 11U ; b_s . ID = 0U ; b_s . Length = 0U ; for ( i = 0 ; i < 32
; i ++ ) { b_s . Value [ i ] = 0U ; } mpduBody_InfoElements [ 3 ] = b_s ;
mpduBody_InfoElements [ 3 ] . ID = 4U ; mpduBody_InfoElements [ 3 ] . Length
= 6U ; mpduBody_InfoElements [ 3 ] . Value [ 0 ] = 2U ; mpduBody_InfoElements
[ 3 ] . Value [ 1 ] = 5U ; for ( p = 0 ; p < 2 ; p ++ ) { b = p << 3 ; c = (
1 + p ) << 3 ; if ( b + 1 > c ) { b = 0 ; c = 0 ; } c -= b ; for ( i = 0 ; i
< c ; i ++ ) { w_data [ i ] = ab [ b + i ] ; } tmp = 0.0 ; for ( i = 0 ; i <
8 ; i ++ ) { tmp += ( real_T ) ( w_data [ i ] * b_b [ i ] ) ; } if ( tmp <
256.0 ) { mpduBody_InfoElements [ 3 ] . Value [ 2 + p ] = ( uint8_T ) tmp ; }
else { mpduBody_InfoElements [ 3 ] . Value [ 2 + p ] = MAX_uint8_T ; } } for
( p = 0 ; p < 2 ; p ++ ) { b = p << 3 ; c = ( 1 + p ) << 3 ; if ( b + 1 > c )
{ b = 0 ; c = 0 ; } c -= b ; for ( i = 0 ; i < c ; i ++ ) { w_data [ i ] = bb
[ b + i ] ; } tmp = 0.0 ; for ( i = 0 ; i < 8 ; i ++ ) { tmp += ( real_T ) (
w_data [ i ] * b_b [ i ] ) ; } if ( tmp < 256.0 ) { mpduBody_InfoElements [ 3
] . Value [ 4 + p ] = ( uint8_T ) tmp ; } else { mpduBody_InfoElements [ 3 ]
. Value [ 4 + p ] = MAX_uint8_T ; } } * mpduBody_NumInfoElements = 4.0 ; }
static void plujx3igc4 ( const uint8_T mpduHeader_DurationID [ 2 ] , const
real_T mpduHeader_Address1 [ 6 ] , const real_T mpduHeader_Address2 [ 6 ] ,
const real_T mpduHeader_Address3 [ 6 ] , const uint8_T
mpduHeader_SequenceControl [ 2 ] , const uint8_T mpduBody_TimeStamp [ 8 ] ,
const uint8_T mpduBody_BeaconInterval [ 2 ] , const d2m0tjn0tm
mpduBody_InfoElements [ 25 ] , uint8_T payload [ 832 ] ) { uint16_T p ;
int32_T e ; int32_T i ; int32_T loop_ub ; int32_T tmp ; real_T tmp_p ; memset
( & payload [ 0 ] , 0 , 832U * sizeof ( uint8_T ) ) ; payload [ 0 ] = 128U ;
payload [ 1 ] = 144U ; payload [ 2 ] = mpduHeader_DurationID [ 0 ] ; payload
[ 3 ] = mpduHeader_DurationID [ 1 ] ; for ( i = 0 ; i < 6 ; i ++ ) { tmp_p =
muDoubleScalarRound ( mpduHeader_Address1 [ i ] ) ; if ( tmp_p < 256.0 ) { if
( tmp_p >= 0.0 ) { payload [ 4 + i ] = ( uint8_T ) tmp_p ; } else { payload [
4 + i ] = 0U ; } } else if ( tmp_p >= 256.0 ) { payload [ 4 + i ] =
MAX_uint8_T ; } else { payload [ 4 + i ] = 0U ; } tmp_p = muDoubleScalarRound
( mpduHeader_Address2 [ i ] ) ; if ( tmp_p < 256.0 ) { if ( tmp_p >= 0.0 ) {
payload [ 10 + i ] = ( uint8_T ) tmp_p ; } else { payload [ 10 + i ] = 0U ; }
} else if ( tmp_p >= 256.0 ) { payload [ 10 + i ] = MAX_uint8_T ; } else {
payload [ 10 + i ] = 0U ; } tmp_p = muDoubleScalarRound ( mpduHeader_Address3
[ i ] ) ; if ( tmp_p < 256.0 ) { if ( tmp_p >= 0.0 ) { payload [ 16 + i ] = (
uint8_T ) tmp_p ; } else { payload [ 16 + i ] = 0U ; } } else if ( tmp_p >=
256.0 ) { payload [ 16 + i ] = MAX_uint8_T ; } else { payload [ 16 + i ] = 0U
; } } payload [ 22 ] = mpduHeader_SequenceControl [ 0 ] ; payload [ 23 ] =
mpduHeader_SequenceControl [ 1 ] ; for ( i = 0 ; i < 8 ; i ++ ) { payload [
24 + i ] = mpduBody_TimeStamp [ i ] ; } payload [ 32 ] =
mpduBody_BeaconInterval [ 0 ] ; payload [ 33 ] = mpduBody_BeaconInterval [ 1
] ; payload [ 34 ] = 105U ; payload [ 35 ] = 164U ; payload [ 36 ] =
mpduBody_InfoElements [ 0 ] . ID ; payload [ 37 ] = mpduBody_InfoElements [ 0
] . Length ; if ( 39 > ( uint16_T ) ( mpduBody_InfoElements [ 0 ] . Length +
38 ) ) { e = 0 ; } else { e = 38 ; } if ( 1 > mpduBody_InfoElements [ 0 ] .
Length ) { i = 0 ; } else { i = mpduBody_InfoElements [ 0 ] . Length ; }
loop_ub = i - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) { payload [ e + i ] =
mpduBody_InfoElements [ 0 ] . Value [ i ] ; } p = ( uint16_T ) ( 39U +
mpduBody_InfoElements [ 0 ] . Length ) ; payload [ p - 1 ] =
mpduBody_InfoElements [ 1 ] . ID ; i = ( int32_T ) ( p + 1U ) ; payload [ (
uint16_T ) i - 1 ] = mpduBody_InfoElements [ 1 ] . Length ; tmp = ( int32_T )
( ( uint16_T ) i + 1U ) ; if ( ( uint16_T ) tmp > ( uint16_T ) ( ( int32_T )
( ( uint32_T ) ( uint16_T ) tmp + mpduBody_InfoElements [ 1 ] . Length ) - 1
) ) { e = 0 ; } else { e = ( uint16_T ) tmp - 1 ; } if ( 1 >
mpduBody_InfoElements [ 1 ] . Length ) { i = 0 ; } else { i =
mpduBody_InfoElements [ 1 ] . Length ; } loop_ub = i - 1 ; for ( i = 0 ; i <=
loop_ub ; i ++ ) { payload [ e + i ] = mpduBody_InfoElements [ 1 ] . Value [
i ] ; } i = ( int32_T ) ( ( uint32_T ) ( uint16_T ) tmp +
mpduBody_InfoElements [ 1 ] . Length ) ; payload [ ( uint16_T ) i - 1 ] =
mpduBody_InfoElements [ 2 ] . ID ; i = ( int32_T ) ( ( uint16_T ) i + 1U ) ;
payload [ ( uint16_T ) i - 1 ] = mpduBody_InfoElements [ 2 ] . Length ; tmp =
( int32_T ) ( ( uint16_T ) i + 1U ) ; if ( ( uint16_T ) tmp > ( uint16_T ) (
( int32_T ) ( ( uint32_T ) ( uint16_T ) tmp + mpduBody_InfoElements [ 2 ] .
Length ) - 1 ) ) { e = 0 ; } else { e = ( uint16_T ) tmp - 1 ; } if ( 1 >
mpduBody_InfoElements [ 2 ] . Length ) { i = 0 ; } else { i =
mpduBody_InfoElements [ 2 ] . Length ; } loop_ub = i - 1 ; for ( i = 0 ; i <=
loop_ub ; i ++ ) { payload [ e + i ] = mpduBody_InfoElements [ 2 ] . Value [
i ] ; } i = ( int32_T ) ( ( uint32_T ) ( uint16_T ) tmp +
mpduBody_InfoElements [ 2 ] . Length ) ; payload [ ( uint16_T ) i - 1 ] =
mpduBody_InfoElements [ 3 ] . ID ; i = ( int32_T ) ( ( uint16_T ) i + 1U ) ;
payload [ ( uint16_T ) i - 1 ] = mpduBody_InfoElements [ 3 ] . Length ; i = (
int32_T ) ( ( uint16_T ) i + 1U ) ; if ( ( uint16_T ) i > ( uint16_T ) ( (
int32_T ) ( ( uint32_T ) ( uint16_T ) i + mpduBody_InfoElements [ 3 ] .
Length ) - 1 ) ) { e = 0 ; } else { e = ( uint16_T ) i - 1 ; } if ( 1 >
mpduBody_InfoElements [ 3 ] . Length ) { i = 0 ; } else { i =
mpduBody_InfoElements [ 3 ] . Length ; } loop_ub = i - 1 ; for ( i = 0 ; i <=
loop_ub ; i ++ ) { payload [ e + i ] = mpduBody_InfoElements [ 3 ] . Value [
i ] ; } } void RandSrc_GZ_Z ( creal_T y [ ] , const creal_T mean [ ] ,
int32_T meanLen , const real_T xstd [ ] , int32_T xstdLen , uint32_T state [
] , int32_T nChans , int32_T nSamps ) { int32_T i ; int32_T j ; real_T r ;
real_T x ; real_T s ; real_T y_p ; int32_T chan ; uint32_T icng ; uint32_T
jsr ; int32_T samp ; real_T resultsVal [ 2 ] ; real_T mean_p [ 2 ] ; static
const real_T vt [ 65 ] = { 0.340945 , 0.4573146 , 0.5397793 , 0.6062427 ,
0.6631691 , 0.7136975 , 0.7596125 , 0.8020356 , 0.8417227 , 0.8792102 ,
0.9148948 , 0.9490791 , 0.9820005 , 1.0138492 , 1.044781 , 1.0749254 ,
1.1043917 , 1.1332738 , 1.161653 , 1.189601 , 1.2171815 , 1.2444516 ,
1.2714635 , 1.298265 , 1.3249008 , 1.3514125 , 1.3778399 , 1.4042211 ,
1.4305929 , 1.4569915 , 1.4834527 , 1.5100122 , 1.5367061 , 1.5635712 ,
1.5906454 , 1.617968 , 1.6455802 , 1.6735255 , 1.7018503 , 1.7306045 ,
1.7598422 , 1.7896223 , 1.8200099 , 1.851077 , 1.8829044 , 1.9155831 ,
1.9492166 , 1.9839239 , 2.0198431 , 2.0571356 , 2.095993 , 2.136645 ,
2.1793713 , 2.2245175 , 2.2725186 , 2.3239338 , 2.3795008 , 2.4402218 ,
2.5075117 , 2.5834658 , 2.6713916 , 2.7769942 , 2.7769942 , 2.7769942 ,
2.7769942 } ; nSamps += nSamps ; for ( chan = 0 ; chan < nChans ; chan ++ ) {
icng = state [ chan << 1 ] ; jsr = state [ ( chan << 1 ) + 1 ] ; mean_p [ 0U
] = mean [ meanLen > 1 ? chan : 0 ] . re ; mean_p [ 1U ] = mean [ meanLen > 1
? chan : 0 ] . im ; for ( samp = 0 ; samp < nSamps ; samp ++ ) { icng =
69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr
<< 5 ; i = ( int32_T ) ( icng + jsr ) ; j = ( i & 63 ) + 1 ; r = ( real_T ) i
* 4.6566128730773926E-10 * vt [ j ] ; if ( ! ( muDoubleScalarAbs ( r ) <= vt
[ j - 1 ] ) ) { x = ( muDoubleScalarAbs ( r ) - vt [ j - 1 ] ) / ( vt [ j ] -
vt [ j - 1 ] ) ; icng = 69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^=
jsr >> 17 ; jsr ^= jsr << 5 ; y_p = ( real_T ) ( int32_T ) ( icng + jsr ) *
2.328306436538696E-10 + 0.5 ; s = x + y_p ; if ( s > 1.301198 ) { r = r < 0.0
? 0.4878992 * x - 0.4878992 : 0.4878992 - 0.4878992 * x ; } else { if ( ! ( s
<= 0.9689279 ) ) { x = 0.4878992 - 0.4878992 * x ; if ( y_p > 12.67706 -
muDoubleScalarExp ( - 0.5 * x * x ) * 12.37586 ) { r = r < 0.0 ? - x : x ; }
else { if ( ! ( muDoubleScalarExp ( - 0.5 * vt [ j ] * vt [ j ] ) + y_p *
0.01958303 / vt [ j ] <= muDoubleScalarExp ( - 0.5 * r * r ) ) ) { do { icng
= 69069U * icng + 1234567U ; jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr
<< 5 ; x = muDoubleScalarLog ( ( real_T ) ( int32_T ) ( icng + jsr ) *
2.328306436538696E-10 + 0.5 ) / 2.776994 ; icng = 69069U * icng + 1234567U ;
jsr ^= jsr << 13 ; jsr ^= jsr >> 17 ; jsr ^= jsr << 5 ; } while (
muDoubleScalarLog ( ( real_T ) ( int32_T ) ( icng + jsr ) *
2.328306436538696E-10 + 0.5 ) * - 2.0 <= x * x ) ; r = r < 0.0 ? x - 2.776994
: 2.776994 - x ; } } } } } resultsVal [ samp & 1 ] = xstd [ xstdLen > 1 ?
chan : 0 ] * r + mean_p [ samp & 1 ] ; if ( ( samp & 1 ) != 0 ) { y [ chan *
( nSamps >> 1 ) + ( samp >> 1 ) ] . re = resultsVal [ 0U ] ; y [ chan * (
nSamps >> 1 ) + ( samp >> 1 ) ] . im = resultsVal [ 1U ] ; } } state [ chan
<< 1 ] = icng ; state [ ( chan << 1 ) + 1 ] = jsr ; } } static boolean_T
eawryqakn0 ( real_T varargin_1 , real_T varargin_2 ) { boolean_T p ;
boolean_T p_p ; p = false ; p_p = true ; if ( ! ( varargin_1 == varargin_2 )
) { p_p = false ; } if ( p_p ) { p = true ; } return p ; } static void
nhncqw0bqs ( const creal_T x [ 5632 ] , const creal_T zi [ 5631 ] , creal_T y
[ 5632 ] , creal_T zf [ 5631 ] ) { int32_T b_k ; int32_T j ; int32_T naxpy ;
static const creal_T tmp [ 5632 ] = { { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25
, - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
- 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25
, - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
- 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25
, 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , -
0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25
, - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
- 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 ,
- 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0
} , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } ,
{ 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 }
, { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , -
0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { -
0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , {
0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , {
- 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0 }
, { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } ,
{ 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { - 0.25 , - 0.0 } ,
{ - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { - 0.25 , - 0.0 } , { 0.25 , - 0.0
} , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 , - 0.0 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { 0.25 ,
3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { - 0.25 , -
3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 ,
- 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25
, - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } ,
{ - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 }
, { - 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17
} , { 0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , {
0.25 , 3.0615158845559431E-17 } , { 0.25 , 3.0615158845559431E-17 } , { -
0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } , {
- 0.25 , - 3.0615158845559431E-17 } , { - 0.25 , - 3.0615158845559431E-17 } }
; const creal_T * b ; b = & tmp [ 0 ] ; for ( naxpy = 0 ; naxpy < 5631 ;
naxpy ++ ) { zf [ naxpy ] . re = 0.0 ; zf [ naxpy ] . im = 0.0 ; y [ naxpy ]
= zi [ naxpy ] ; } y [ 5631 ] . re = 0.0 ; y [ 5631 ] . im = 0.0 ; naxpy =
5632 ; for ( b_k = 0 ; b_k < 5632 ; b_k ++ ) { for ( j = 0 ; j + 1 <= naxpy ;
j ++ ) { y [ b_k + j ] . re += x [ b_k ] . re * b [ j ] . re - x [ b_k ] . im
* b [ j ] . im ; y [ b_k + j ] . im += x [ b_k ] . re * b [ j ] . im + x [
b_k ] . im * b [ j ] . re ; } naxpy -- ; } for ( naxpy = 0 ; naxpy < 5631 ;
naxpy ++ ) { for ( b_k = 0 ; b_k + 1 <= naxpy + 1 ; b_k ++ ) { zf [ b_k ] .
re += b [ ( b_k - naxpy ) + 5631 ] . re * x [ naxpy + 1 ] . re - b [ ( b_k -
naxpy ) + 5631 ] . im * x [ naxpy + 1 ] . im ; zf [ b_k ] . im += b [ ( b_k -
naxpy ) + 5631 ] . im * x [ naxpy + 1 ] . re + b [ ( b_k - naxpy ) + 5631 ] .
re * x [ naxpy + 1 ] . im ; } } } static void lpgqbq5wno ( const creal_T x [
5632 ] , real_T y [ 5632 ] ) { int32_T k ; for ( k = 0 ; k < 5632 ; k ++ ) {
y [ k ] = muDoubleScalarHypot ( x [ k ] . re , x [ k ] . im ) ; } } static
void lfgqhvndli ( const real_T crossCorr [ 5632 ] , real_T threshold , real_T
idx_data [ ] , int32_T * idx_size ) { int32_T idx ; int32_T ii ; boolean_T
exitg1 ; idx = 0 ; ii = 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( ii <
5633 ) ) { if ( crossCorr [ ii - 1 ] >= threshold ) { idx ++ ; rtB .
k2vkyuyjd4 [ idx - 1 ] = ( int16_T ) ii ; if ( idx >= 5632 ) { exitg1 = true
; } else { ii ++ ; } } else { ii ++ ; } } if ( 1 > idx ) { idx = 0 ; } if ( 0
<= idx - 1 ) { memcpy ( & rtB . bdnqmnrmbh [ 0 ] , & rtB . k2vkyuyjd4 [ 0 ] ,
idx * sizeof ( int16_T ) ) ; memcpy ( & rtB . k2vkyuyjd4 [ 0 ] , & rtB .
bdnqmnrmbh [ 0 ] , idx * sizeof ( int16_T ) ) ; } * idx_size = idx ; for ( ii
= 0 ; ii < idx ; ii ++ ) { idx_data [ ii ] = rtB . k2vkyuyjd4 [ ii ] ; } }
static void nkmotpngpf ( BeaconFrameBodyType * frameBody ) { InfoElementType
b_s ; int32_T i ; for ( i = 0 ; i < 8 ; i ++ ) { frameBody -> TimeStamp [ i ]
= 0U ; } frameBody -> BeaconInterval [ 0 ] = 0U ; frameBody -> BeaconInterval
[ 1 ] = 0U ; frameBody -> Capability . ESS = false ; frameBody -> Capability
. IBSS = false ; frameBody -> Capability . CFPollable = false ; frameBody ->
Capability . CFPollRequest = false ; frameBody -> Capability . Privacy =
false ; frameBody -> Capability . ShortPreamble = false ; frameBody ->
Capability . PBCC = false ; frameBody -> Capability . ChannelAgility = false
; frameBody -> Capability . SpectrumManagement = false ; frameBody ->
Capability . QoS = false ; frameBody -> Capability . ShortSlotTime = false ;
frameBody -> Capability . APSD = false ; frameBody -> Capability . Reserved =
false ; frameBody -> Capability . DSSOFDM = false ; frameBody -> Capability .
DelayedBlockAck = false ; frameBody -> Capability . ImmediateBlockAck = false
; frameBody -> NumInfoElements = 0U ; b_s . ID = MAX_uint8_T ; b_s . Length =
0U ; memset ( & b_s . Value [ 0 ] , 0 , 257U * sizeof ( uint8_T ) ) ; for ( i
= 0 ; i < 60 ; i ++ ) { frameBody -> InfoElements [ i ] = b_s ; } } static
void jesjp43xz3 ( kk3xchntuf * obj , const boolean_T varargin_1_data [ ] ,
const int32_T * varargin_1_size , boolean_T varargout_1_data [ ] , int32_T
varargout_1_size [ 2 ] , boolean_T * varargout_2 ) { int32_T inpBit ; int32_T
i ; uint32_T shReg ; uint32_T inpChksum ; int32_T varargin_1_idx_0 ; if ( obj
-> isInitialized != 1 ) { obj -> isInitialized = 1 ; } varargout_1_size [ 0 ]
= * varargin_1_size - 32 ; varargout_1_size [ 1 ] = 1 ; varargin_1_idx_0 = *
varargin_1_size ; shReg = MAX_uint32_T ; for ( i = 0 ; i < varargin_1_idx_0 -
32 ; i ++ ) { varargout_1_data [ i ] = varargin_1_data [ i ] ; inpBit = (
int32_T ) ( shReg >> 31U ^ varargin_1_data [ i ] ) ; if ( inpBit != 0 ) {
shReg = ( shReg ^ 39882459U ) << 1U ; } else { shReg <<= 1U ; } shReg +=
inpBit ; } shReg ^= MAX_uint32_T ; inpChksum = 0U ; for ( i = *
varargin_1_size - 32 ; i < varargin_1_idx_0 ; i ++ ) { inpChksum <<= 1U ;
inpChksum ^= varargin_1_data [ i ] ; } inpChksum ^= shReg ; * varargout_2 = !
( inpChksum == 0U ) ; } static FrameCtrlType ll3iti40qh ( const boolean_T
fcBits [ 16 ] , boolean_T mpduCRC ) { FrameCtrlType frameCtrl ; int32_T d ;
if ( ! mpduCRC ) { d = 0 ; if ( fcBits [ 0 ] ) { d = 1 ; } if ( fcBits [ 1 ]
) { d += 2 ; } frameCtrl . ProtocolVersion = ( uint8_T ) d ; d = 0 ; if (
fcBits [ 2 ] ) { d = 1 ; } if ( fcBits [ 3 ] ) { d += 2 ; } frameCtrl . Type
= ( uint8_T ) d ; d = 0 ; if ( fcBits [ 4 ] ) { d = 1 ; } if ( fcBits [ 5 ] )
{ d += 2 ; } if ( fcBits [ 6 ] ) { d += 4 ; } if ( fcBits [ 7 ] ) { d += 8 ;
} frameCtrl . Subtype = ( uint8_T ) d ; d = 0 ; if ( fcBits [ 8 ] ) { d = 1 ;
} frameCtrl . ToDS = ( uint8_T ) d ; d = 0 ; if ( fcBits [ 9 ] ) { d = 1 ; }
frameCtrl . FromDS = ( uint8_T ) d ; d = 0 ; if ( fcBits [ 10 ] ) { d = 1 ; }
frameCtrl . MoreFragments = ( uint8_T ) d ; d = 0 ; if ( fcBits [ 11 ] ) { d
= 1 ; } frameCtrl . Retry = ( uint8_T ) d ; d = 0 ; if ( fcBits [ 12 ] ) { d
= 1 ; } frameCtrl . PowerManagement = ( uint8_T ) d ; d = 0 ; if ( fcBits [
13 ] ) { d = 1 ; } frameCtrl . MoreData = ( uint8_T ) d ; d = 0 ; if ( fcBits
[ 14 ] ) { d = 1 ; } frameCtrl . ProtectedFrame = ( uint8_T ) d ; d = 0 ; if
( fcBits [ 15 ] ) { d = 1 ; } frameCtrl . Order = ( uint8_T ) d ; } else {
frameCtrl . ProtocolVersion = 0U ; frameCtrl . Type = 0U ; frameCtrl .
Subtype = 0U ; frameCtrl . ToDS = 0U ; frameCtrl . FromDS = 0U ; frameCtrl .
MoreFragments = 0U ; frameCtrl . Retry = 0U ; frameCtrl . PowerManagement =
0U ; frameCtrl . MoreData = 0U ; frameCtrl . ProtectedFrame = 0U ; frameCtrl
. Order = 0U ; } return frameCtrl ; } static void f2lun0e1s3 ( const
boolean_T bits [ 16 ] , uint8_T octets [ 2 ] ) { int32_T p ; int32_T b ;
int32_T c ; static const uint8_T b_b [ 8 ] = { 1U , 2U , 4U , 8U , 16U , 32U
, 64U , 128U } ; int8_T bits_data [ 16 ] ; int32_T i ; real_T tmp ; for ( p =
0 ; p < 2 ; p ++ ) { b = p << 3 ; c = ( 1 + p ) << 3 ; if ( b + 1 > c ) { b =
0 ; c = 0 ; } c -= b ; for ( i = 0 ; i < c ; i ++ ) { bits_data [ i ] = (
int8_T ) bits [ b + i ] ; } tmp = 0.0 ; for ( i = 0 ; i < 8 ; i ++ ) { tmp +=
( real_T ) ( bits_data [ i ] * b_b [ i ] ) ; } if ( tmp < 256.0 ) { octets [
p ] = ( uint8_T ) tmp ; } else { octets [ p ] = MAX_uint8_T ; } } } static
void f2lun0e1s34 ( const boolean_T bits [ 48 ] , uint8_T octets [ 6 ] ) {
int32_T p ; int32_T b ; int32_T c ; static const uint8_T b_b [ 8 ] = { 1U ,
2U , 4U , 8U , 16U , 32U , 64U , 128U } ; int8_T bits_data [ 48 ] ; int32_T i
; real_T tmp ; for ( p = 0 ; p < 6 ; p ++ ) { b = p << 3 ; c = ( 1 + p ) << 3
; if ( b + 1 > c ) { b = 0 ; c = 0 ; } c -= b ; for ( i = 0 ; i < c ; i ++ )
{ bits_data [ i ] = ( int8_T ) bits [ b + i ] ; } tmp = 0.0 ; for ( i = 0 ; i
< 8 ; i ++ ) { tmp += ( real_T ) ( bits_data [ i ] * b_b [ i ] ) ; } if ( tmp
< 256.0 ) { octets [ p ] = ( uint8_T ) tmp ; } else { octets [ p ] =
MAX_uint8_T ; } } } void MdlInitialize ( void ) { int32_T i ; rtDW .
dav0t3w3pe = 0 ; for ( i = 0 ; i < 11264 ; i ++ ) { rtDW . ailpq0rvcs [ i ] .
re = rtP . ChannelFrames_ic ; rtDW . ailpq0rvcs [ i ] . im = 0.0 ; } rtDW .
injuyknmed = rtP . RateTransition_InitialCondition ; memset ( & rtDW .
lmuqtlmunv [ 0 ] , 0 , sizeof ( creal_T ) << 3U ) ; for ( i = 0 ; i < 45056 ;
i ++ ) { rtDW . ojyliirvek [ i ] . re = rtP . ChannelDelay_InitialCondition ;
rtDW . ojyliirvek [ i ] . im = 0.0 ; } rtDW . i0xxik035e = 0.0 ; rtDW .
lr4j34ow0i = rtP . AWGNChannel_seed ; RandSrcInitState_GZ ( & rtDW .
lr4j34ow0i , rtDW . nxhcar1emo , 1 ) ; rtDW . k4rtvrnhf0 = rtP .
Delay1_InitialCondition ; for ( i = 0 ; i < 5632 ; i ++ ) { rtDW . kkpi3mq4dv
[ i ] . re = rtP . MatchCorrelatorDelay_InitialCondition ; rtDW . kkpi3mq4dv
[ i ] . im = 0.0 ; } rtDW . hkk5t5orjh = 0 ; rtDW . kj0q5rzbdy = 0 ; rtDW .
iecicl2cix = 0 ; rtDW . kiumjrib5v . re = 0.0 ; rtDW . kiumjrib5v . im = 0.0
; memset ( & rtDW . kzmf0ug1yx [ 0 ] , 0 , sizeof ( creal_T ) << 5U ) ; rtDW
. forgi5ndce = rtP . UnitDelay1_InitialCondition_hc2uujannf ; rtDW .
bsnclpl5kf = rtP . UnitDelay_InitialCondition ; for ( i = 0 ; i < 11264 ; i
++ ) { rtDW . b2xuimdzdq [ i ] . re = rtP . Delay_InitialCondition ; rtDW .
b2xuimdzdq [ i ] . im = 0.0 ; } rtDW . ds1ypoaczg [ 0 ] = 0U ; rtDW .
ds1ypoaczg [ 1 ] = 0U ; rtDW . krosbjypb5 = 0.0 ; rtDW . pov34jhvyq = false ;
rtDW . e4mopuginb = 1.0 ; for ( i = 0 ; i < 7 ; i ++ ) { rtDW . aylag3piuu [
i ] = 0 ; } rtDW . jlx5xb42se = 0.0 ; memset ( & rtDW . cxjyxxcg2g .
pFilterStates [ 0 ] , 0 , 5631U * sizeof ( creal_T ) ) ; rtDW . gwjx5jmivj =
false ; rtDW . eiqgaons3r = 0.0 ; rtDW . nx414qoue1 = 0.0 ; rtDW . oic55tm5hw
= 0.0 ; rtDW . aawlgefele = 0.0 ; rtDW . okigztdyds . re = 1.0 ; rtDW .
okigztdyds . im = 0.0 ; rtDW . cgrqqqshve [ 0 ] = 0.0 ; rtDW . cgrqqqshve [ 1
] = 0.0 ; rtDW . cgrqqqshve [ 2 ] = 0.0 ; for ( i = 0 ; i < 7 ; i ++ ) { rtDW
. k0zhdh21rc [ i ] = 0 ; } rtDW . gofhnz2obi = rtP .
UnitDelay1_InitialCondition ; rtDW . hfnphpu2ia = 1U ; rtDW . cvwym5cgd4 = 1U
; memset ( & rtDW . ph3qmg42pw [ 0 ] , 0 , 72U * sizeof ( boolean_T ) ) ;
memset ( & rtDW . ghdgqfto1n [ 0 ] , 0 , sizeof ( boolean_T ) << 10U ) ; rtDW
. gpr4bwdt2r = false ; rtDW . jji3alrc23 = true ; rtDW . er1duxiunp = true ;
rtB . cb5viixu3v = rtP . PLCPCRCFlag_Y0 ; rtB . flyjfnu152 = rtP .
MPDUCRCFlag_Y0 ; } void MdlStart ( void ) { hxjaxq5hqh varSizes ; int32_T i ;
{ void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL
) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } rtDW . huxisfnple = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; rtB . ejklemswad = rtP . RateTransition_InitialCondition ; rtB .
png3anych3 [ 0 ] = 0.000128 ; rtB . png3anych3 [ 1 ] = 0.0 ; rtDW .
cxjyxxcg2g . isInitialized = 0 ; rtDW . adzs4zhpm5 = true ; if ( rtDW .
cxjyxxcg2g . isInitialized == 1 ) { rtDW . cxjyxxcg2g . TunablePropsChanged =
true ; } rtDW . cxjyxxcg2g . Threshold = rtP . p80211 . CorrelationThreshold
; rtDW . cxjyxxcg2g . isInitialized = 1 ; varSizes . f1 [ 0 ] = 5632U ;
varSizes . f1 [ 1 ] = 1U ; for ( i = 0 ; i < 6 ; i ++ ) { varSizes . f1 [ i +
2 ] = 1U ; } rtDW . cxjyxxcg2g . inputVarSize = varSizes ; rtDW . cxjyxxcg2g
. pThreshold = rtDW . cxjyxxcg2g . Threshold ; memset ( & rtDW . cxjyxxcg2g .
pFilterStates [ 0 ] , 0 , 5631U * sizeof ( creal_T ) ) ; rtDW . cxjyxxcg2g .
TunablePropsChanged = false ; rtDW . mkelohhz3v = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; { int_T dimensions [ 2 ]
= { 5632 , 1 } ; rtDW . jse1x2mabm . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "RX_array" , SS_DOUBLE , 0 , 1 , 0 , 5632 , 2
, dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.000128 , 1 ) ;
if ( rtDW . jse1x2mabm . LoggedData == ( NULL ) ) return ; } { int_T
dimensions [ 2 ] = { 5632 , 1 } ; rtDW . kcbbgjkdte . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "TX_array" , SS_DOUBLE , 0 ,
1 , 0 , 5632 , 2 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.000128 , 1 ) ; if ( rtDW . kcbbgjkdte . LoggedData == ( NULL ) ) return ; }
MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { uint32_T beginIndex ; int32_T jIdx ;
uint32_T oldTSF1 ; uint8_T mpduHeader_DurationID [ 2 ] ; real_T
mpduHeader_Address1 [ 6 ] ; real_T mpduHeader_Address2 [ 6 ] ; real_T
mpduHeader_Address3 [ 6 ] ; uint8_T mpduHeader_SequenceControl [ 2 ] ;
uint8_T mpduBody_TimeStamp [ 8 ] ; uint8_T mpduBody_BeaconInterval [ 2 ] ;
d2m0tjn0tm mpduBody_InfoElements [ 25 ] ; int32_T ixstart ; int32_T n ;
int16_T inSize [ 8 ] ; boolean_T frame_data [ 992 ] ; boolean_T mpduCRC ;
MPDUHeaderType b ; boolean_T isControlFrame ; boolean_T b_frame_data [ 992 ]
; InfoElementType b_s ; static const uint8_T b_b [ 8 ] = { 1U , 2U , 4U , 8U
, 16U , 32U , 64U , 128U } ; boolean_T dry5wjbfll ; boolean_T ecwgnn0wgk [
800 ] ; uint8_T i3gxaaw4kk [ 832 ] ; boolean_T cljmia4kye [ 576 ] ; boolean_T
j5xakk53jp [ 608 ] ; boolean_T dfazfjgbly [ 800 ] ; boolean_T mfv5uqmzau [
128 ] ; boolean_T f1w32ogmn5 [ 128 ] ; boolean_T eykvotp4wa [ 1024 ] ;
boolean_T crjhd4du3f [ 32 ] ; real_T cftul3mkw2 ; real_T expl_temp [ 6 ] ;
j42zv0quqn expl_temp_p ; int32_T i ; boolean_T oqnr5ucgpm_data [ 1024 ] ;
int8_T bits_data [ 64 ] ; int8_T b_frame_data_p [ 992 ] ; int32_T b_idx_size
; int32_T frame_size [ 2 ] ; int32_T oqnr5ucgpm_size ; int32_T
mzyualjnmm_idx_1 ; int32_T mzyualjnmm_idx_0 ; int32_T okwshmbuu0_idx_1 ;
real_T okwshmbuu0_idx_0 ; real_T bz1mnftgil_idx_1 ; int32_T bz1mnftgil_idx_0
; uint8_T expl_temp_Order ; uint8_T expl_temp_ProtectedFrame ; uint8_T
expl_temp_MoreData ; uint8_T expl_temp_PowerManagement ; uint8_T
expl_temp_Retry ; uint8_T expl_temp_MoreFragments ; uint8_T expl_temp_FromDS
; uint8_T expl_temp_ToDS ; uint8_T expl_temp_Subtype ; uint8_T expl_temp_Type
; uint8_T expl_temp_ProtocolVersion ; real_T im ; uint32_T qY ; uint16_T tmp
; boolean_T * k0wtwtycgu_p ; boolean_T * bits ; boolean_T exitg1 ; srClearBC
( rtDW . bmnckkg14d ) ; if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC (
rtDW . ga3w5swikk ) ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC (
rtDW . d41ofodid5 ) ; } srClearBC ( rtDW . nuuny40hx2 ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { ieir3nq3fa ( rtDW . ds1ypoaczg , &
expl_temp_ProtocolVersion , & expl_temp_Type , & expl_temp_Subtype , &
expl_temp_ToDS , & expl_temp_FromDS , & expl_temp_MoreFragments , &
expl_temp_Retry , & expl_temp_PowerManagement , & expl_temp_MoreData , &
expl_temp_ProtectedFrame , & expl_temp_Order , mpduHeader_DurationID ,
mpduHeader_Address1 , mpduHeader_Address2 , mpduHeader_Address3 ,
mpduHeader_SequenceControl , expl_temp , mpduBody_TimeStamp ,
mpduBody_BeaconInterval , & expl_temp_p , mpduBody_InfoElements , &
cftul3mkw2 ) ; rtDW . owhzzoxezm [ 0 ] = 832 ; rtDW . owhzzoxezm [ 1 ] = 1 ;
plujx3igc4 ( mpduHeader_DurationID , mpduHeader_Address1 ,
mpduHeader_Address2 , mpduHeader_Address3 , mpduHeader_SequenceControl ,
mpduBody_TimeStamp , mpduBody_BeaconInterval , mpduBody_InfoElements ,
i3gxaaw4kk ) ; rtDW . e4mopuginb ++ ; switch ( ( int32_T ) rtDW . krosbjypb5
) { case 0 : if ( rtDW . e4mopuginb >= 2.0 ) { rtDW . e4mopuginb = 0.0 ;
ieir3nq3fa ( rtDW . ds1ypoaczg , & expl_temp_ProtocolVersion , &
expl_temp_Type , & expl_temp_Subtype , & expl_temp_ToDS , & expl_temp_FromDS
, & expl_temp_MoreFragments , & expl_temp_Retry , & expl_temp_PowerManagement
, & expl_temp_MoreData , & expl_temp_ProtectedFrame , & expl_temp_Order ,
mpduHeader_DurationID , mpduHeader_Address1 , mpduHeader_Address2 ,
mpduHeader_Address3 , mpduHeader_SequenceControl , expl_temp ,
mpduBody_TimeStamp , mpduBody_BeaconInterval , & expl_temp_p ,
mpduBody_InfoElements , & cftul3mkw2 ) ; rtDW . owhzzoxezm [ 0 ] = 832 ; rtDW
. owhzzoxezm [ 1 ] = 1 ; plujx3igc4 ( mpduHeader_DurationID ,
mpduHeader_Address1 , mpduHeader_Address2 , mpduHeader_Address3 ,
mpduHeader_SequenceControl , mpduBody_TimeStamp , mpduBody_BeaconInterval ,
mpduBody_InfoElements , i3gxaaw4kk ) ; rtDW . pov34jhvyq = true ; rtDW .
krosbjypb5 = 1.0 ; } break ; case 1 : rtDW . pov34jhvyq = false ; rtDW .
krosbjypb5 = 0.0 ; break ; } oldTSF1 = rtDW . ds1ypoaczg [ 0 ] ; qY = rtDW .
ds1ypoaczg [ 0 ] + 1024U ; if ( qY < rtDW . ds1ypoaczg [ 0 ] ) { qY =
MAX_uint32_T ; } rtDW . ds1ypoaczg [ 0 ] = qY ; if ( oldTSF1 > rtDW .
ds1ypoaczg [ 0 ] ) { qY = rtDW . ds1ypoaczg [ 1 ] + 1U ; if ( qY < rtDW .
ds1ypoaczg [ 1 ] ) { qY = MAX_uint32_T ; } rtDW . ds1ypoaczg [ 1 ] = qY ; }
rtB . ce2bilylfy = rtDW . pov34jhvyq ; i = 0 ; for ( ixstart = 0 ; ixstart <
72 ; ixstart ++ ) { oldTSF1 = i3gxaaw4kk [ ( int32_T ) rtP .
MPDUIndices_Value [ ixstart % 72 ] - 1 ] ; for ( n = 0 ; n < 8 ; n ++ ) {
cljmia4kye [ i ] = ( ( oldTSF1 & 1U ) != 0U ) ; oldTSF1 >>= 1 ; i ++ ; } }
oldTSF1 = MAX_uint32_T ; for ( ixstart = 0 ; ixstart < 576 ; ixstart ++ ) {
j5xakk53jp [ ixstart ] = cljmia4kye [ ixstart ] ; beginIndex = oldTSF1 >> 31U
^ cljmia4kye [ ixstart ] ; if ( beginIndex != 0U ) { oldTSF1 = ( oldTSF1 ^
39882459U ) << 1U ; } else { oldTSF1 <<= 1U ; } oldTSF1 += beginIndex ; }
oldTSF1 ^= MAX_uint32_T ; j5xakk53jp [ 576 ] = ( oldTSF1 >> 31U != 0U ) ;
j5xakk53jp [ 577 ] = ( ( oldTSF1 >> 30U & 1U ) != 0U ) ; j5xakk53jp [ 578 ] =
( ( oldTSF1 >> 29U & 1U ) != 0U ) ; j5xakk53jp [ 579 ] = ( ( oldTSF1 >> 28U &
1U ) != 0U ) ; j5xakk53jp [ 580 ] = ( ( oldTSF1 >> 27U & 1U ) != 0U ) ;
j5xakk53jp [ 581 ] = ( ( oldTSF1 >> 26U & 1U ) != 0U ) ; j5xakk53jp [ 582 ] =
( ( oldTSF1 >> 25U & 1U ) != 0U ) ; j5xakk53jp [ 583 ] = ( ( oldTSF1 >> 24U &
1U ) != 0U ) ; j5xakk53jp [ 584 ] = ( ( oldTSF1 >> 23U & 1U ) != 0U ) ;
j5xakk53jp [ 585 ] = ( ( oldTSF1 >> 22U & 1U ) != 0U ) ; j5xakk53jp [ 586 ] =
( ( oldTSF1 >> 21U & 1U ) != 0U ) ; j5xakk53jp [ 587 ] = ( ( oldTSF1 >> 20U &
1U ) != 0U ) ; j5xakk53jp [ 588 ] = ( ( oldTSF1 >> 19U & 1U ) != 0U ) ;
j5xakk53jp [ 589 ] = ( ( oldTSF1 >> 18U & 1U ) != 0U ) ; j5xakk53jp [ 590 ] =
( ( oldTSF1 >> 17U & 1U ) != 0U ) ; j5xakk53jp [ 591 ] = ( ( oldTSF1 >> 16U &
1U ) != 0U ) ; j5xakk53jp [ 592 ] = ( ( oldTSF1 >> 15U & 1U ) != 0U ) ;
j5xakk53jp [ 593 ] = ( ( oldTSF1 >> 14U & 1U ) != 0U ) ; j5xakk53jp [ 594 ] =
( ( oldTSF1 >> 13U & 1U ) != 0U ) ; j5xakk53jp [ 595 ] = ( ( oldTSF1 >> 12U &
1U ) != 0U ) ; j5xakk53jp [ 596 ] = ( ( oldTSF1 >> 11U & 1U ) != 0U ) ;
j5xakk53jp [ 597 ] = ( ( oldTSF1 >> 10U & 1U ) != 0U ) ; j5xakk53jp [ 598 ] =
( ( oldTSF1 >> 9U & 1U ) != 0U ) ; j5xakk53jp [ 599 ] = ( ( oldTSF1 >> 8U &
1U ) != 0U ) ; j5xakk53jp [ 600 ] = ( ( oldTSF1 >> 7U & 1U ) != 0U ) ;
j5xakk53jp [ 601 ] = ( ( oldTSF1 >> 6U & 1U ) != 0U ) ; j5xakk53jp [ 602 ] =
( ( oldTSF1 >> 5U & 1U ) != 0U ) ; j5xakk53jp [ 603 ] = ( ( oldTSF1 >> 4U &
1U ) != 0U ) ; j5xakk53jp [ 604 ] = ( ( oldTSF1 >> 3U & 1U ) != 0U ) ;
j5xakk53jp [ 605 ] = ( ( oldTSF1 >> 2U & 1U ) != 0U ) ; j5xakk53jp [ 606 ] =
( ( oldTSF1 >> 1U & 1U ) != 0U ) ; j5xakk53jp [ 607 ] = ( ( oldTSF1 & 1U ) !=
0U ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB . ce2bilylfy ) { if (
! rtDW . huxisfnple ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS )
) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } for ( ixstart = 0
; ixstart < 7 ; ixstart ++ ) { rtDW . aylag3piuu [ ixstart ] = 0 ; } rtDW .
jlx5xb42se = 0.0 ; rtDW . huxisfnple = true ; } memcpy ( & ecwgnn0wgk [ 0 ] ,
& rtB . aihjtfsxoe [ 0 ] , 144U * sizeof ( boolean_T ) ) ; oldTSF1 = 65535U ;
for ( ixstart = 0 ; ixstart < 32 ; ixstart ++ ) { ecwgnn0wgk [ ixstart + 144
] = rtB . j1zvrkidan [ ixstart ] ; beginIndex = ( oldTSF1 >> 15U & 1U ) ^ rtB
. j1zvrkidan [ ixstart ] ; if ( beginIndex != 0U ) { oldTSF1 = ( oldTSF1 ^
2064U ) << 1U ; } else { oldTSF1 <<= 1U ; } oldTSF1 += beginIndex ; } oldTSF1
^= 65535U ; ecwgnn0wgk [ 176 ] = ( ( oldTSF1 >> 15U & 1U ) != 0U ) ;
ecwgnn0wgk [ 177 ] = ( ( oldTSF1 >> 14U & 1U ) != 0U ) ; ecwgnn0wgk [ 178 ] =
( ( oldTSF1 >> 13U & 1U ) != 0U ) ; ecwgnn0wgk [ 179 ] = ( ( oldTSF1 >> 12U &
1U ) != 0U ) ; ecwgnn0wgk [ 180 ] = ( ( oldTSF1 >> 11U & 1U ) != 0U ) ;
ecwgnn0wgk [ 181 ] = ( ( oldTSF1 >> 10U & 1U ) != 0U ) ; ecwgnn0wgk [ 182 ] =
( ( oldTSF1 >> 9U & 1U ) != 0U ) ; ecwgnn0wgk [ 183 ] = ( ( oldTSF1 >> 8U &
1U ) != 0U ) ; ecwgnn0wgk [ 184 ] = ( ( oldTSF1 >> 7U & 1U ) != 0U ) ;
ecwgnn0wgk [ 185 ] = ( ( oldTSF1 >> 6U & 1U ) != 0U ) ; ecwgnn0wgk [ 186 ] =
( ( oldTSF1 >> 5U & 1U ) != 0U ) ; ecwgnn0wgk [ 187 ] = ( ( oldTSF1 >> 4U &
1U ) != 0U ) ; ecwgnn0wgk [ 188 ] = ( ( oldTSF1 >> 3U & 1U ) != 0U ) ;
ecwgnn0wgk [ 189 ] = ( ( oldTSF1 >> 2U & 1U ) != 0U ) ; ecwgnn0wgk [ 190 ] =
( ( oldTSF1 >> 1U & 1U ) != 0U ) ; ecwgnn0wgk [ 191 ] = ( ( oldTSF1 & 1U ) !=
0U ) ; memcpy ( & ecwgnn0wgk [ 192 ] , & j5xakk53jp [ 0 ] , 608U * sizeof (
boolean_T ) ) ; for ( n = 0 ; n < 800 ; n ++ ) { i = ecwgnn0wgk [ n ] ; for (
ixstart = 0 ; ixstart < 7 ; ixstart ++ ) { i += ( uint8_T ) ( rtConstP .
buo0q3kmga [ ixstart + 1 ] * rtDW . aylag3piuu [ ixstart ] ) ; } i %= 2 ;
dfazfjgbly [ n ] = ( i != 0 ) ; for ( ixstart = 5 ; ixstart >= 0 ; ixstart --
) { rtDW . aylag3piuu [ ixstart + 1 ] = rtDW . aylag3piuu [ ixstart ] ; }
rtDW . aylag3piuu [ 0U ] = i ; } ixstart = 0 ; for ( n = 0 ; n < 800 ; n ++ )
{ dry5wjbfll = dfazfjgbly [ ixstart ] ; ixstart ++ ; cftul3mkw2 =
muDoubleScalarRem ( rtDW . jlx5xb42se + rtConstP . fk03qsi2yu [ ( int32_T )
dry5wjbfll ] , 6.2831853071795862 ) ; rtB . e4fna2lj1c [ n ] . re =
muDoubleScalarCos ( cftul3mkw2 ) ; rtB . e4fna2lj1c [ n ] . im =
muDoubleScalarSin ( cftul3mkw2 ) ; rtDW . jlx5xb42se = cftul3mkw2 ; } for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 11 ; mzyualjnmm_idx_1 ++ ) { for (
i = 0 ; i < 800 ; i ++ ) { rtB . kx1ntkgnia [ mzyualjnmm_idx_1 + 11 * i ] .
re = rtP . p80211 . SpreadingCode [ mzyualjnmm_idx_1 ] * rtB . e4fna2lj1c [ i
] . re ; rtB . kx1ntkgnia [ mzyualjnmm_idx_1 + 11 * i ] . im = rtP . p80211 .
SpreadingCode [ mzyualjnmm_idx_1 ] * rtB . e4fna2lj1c [ i ] . im ; } } i =
rtP . u024Framer_outDims [ 0 ] ; if ( rtP . u024Framer_padBefore [ 0U ] > 0 )
{ i = rtP . u024Framer_outDims [ 0 ] - rtP . u024Framer_padBefore [ 0 ] ; }
if ( rtP . u024Framer_padAfter [ 0U ] > 0 ) { i -= rtP . u024Framer_padAfter
[ 0 ] ; } if ( rtP . u024Framer_padBefore [ 0 ] < 0 ) { mzyualjnmm_idx_0 = -
rtP . u024Framer_padBefore [ 0 ] ; n = 0 ; } else { mzyualjnmm_idx_0 = 0 ; n
= rtP . u024Framer_padBefore [ 0 ] ; } if ( rtP . u024Framer_padBefore [ 1 ]
< 0 ) { mzyualjnmm_idx_1 = - rtP . u024Framer_padBefore [ 1 ] ; ixstart = 0 ;
} else { mzyualjnmm_idx_1 = 0 ; ixstart = rtP . u024Framer_padBefore [ 1 ] ;
} mzyualjnmm_idx_0 = mzyualjnmm_idx_0 * rtP . u024Framer_inWorkAdd [ 0 ] +
mzyualjnmm_idx_1 * rtP . u024Framer_inWorkAdd [ 1 ] ; okwshmbuu0_idx_1 = n *
rtP . u024Framer_outWorkAdd [ 0 ] + ixstart * rtP . u024Framer_outWorkAdd [ 1
] ; for ( n = 0 ; n < i ; n ++ ) { rtB . mesonpfm4v [ okwshmbuu0_idx_1 + n ]
= rtB . kx1ntkgnia [ mzyualjnmm_idx_0 + n ] ; } if ( ( rtP .
u024Framer_padBefore [ 0 ] > 0 ) || ( rtP . u024Framer_padAfter [ 0 ] > 0 ) )
{ okwshmbuu0_idx_1 = 0 ; mzyualjnmm_idx_1 = rtP . u024Framer_outDims [ 0 ] ;
if ( rtP . u024Framer_padBefore [ 0 ] > 0 ) { mzyualjnmm_idx_1 = rtP .
u024Framer_outDims [ 0 ] - rtP . u024Framer_padBefore [ 0 ] ; } if ( rtP .
u024Framer_padAfter [ 0 ] > 0 ) { mzyualjnmm_idx_1 -= rtP .
u024Framer_padAfter [ 0 ] ; } ixstart = 0 ; while ( ixstart < 1 ) {
bz1mnftgil_idx_0 = okwshmbuu0_idx_1 ; for ( n = 0 ; n < rtP .
u024Framer_outDims [ 1 ] ; n ++ ) { for ( i = 0 ; i < rtP .
u024Framer_padBefore [ 0 ] ; i ++ ) { rtB . mesonpfm4v [ bz1mnftgil_idx_0 ] =
rtP . u024Framer_PadValue ; bz1mnftgil_idx_0 ++ ; } bz1mnftgil_idx_0 +=
mzyualjnmm_idx_1 ; for ( i = 0 ; i < rtP . u024Framer_padAfter [ 0 ] ; i ++ )
{ rtB . mesonpfm4v [ bz1mnftgil_idx_0 ] = rtP . u024Framer_PadValue ;
bz1mnftgil_idx_0 ++ ; } } okwshmbuu0_idx_1 ++ ; ixstart = 1 ; } } if ( ( rtP
. u024Framer_padBefore [ 1 ] > 0 ) || ( rtP . u024Framer_padAfter [ 1 ] > 0 )
) { okwshmbuu0_idx_1 = 0 ; mzyualjnmm_idx_0 = rtP . u024Framer_outDims [ 0 ]
; mzyualjnmm_idx_1 = rtP . u024Framer_outDims [ 1 ] ; if ( rtP .
u024Framer_padBefore [ 1 ] > 0 ) { mzyualjnmm_idx_1 = rtP .
u024Framer_outDims [ 1 ] - rtP . u024Framer_padBefore [ 1 ] ; } if ( rtP .
u024Framer_padAfter [ 1 ] > 0 ) { mzyualjnmm_idx_1 -= rtP .
u024Framer_padAfter [ 1 ] ; } mzyualjnmm_idx_1 *= rtP . u024Framer_outDims [
0 ] ; for ( ixstart = 0 ; ixstart < mzyualjnmm_idx_0 ; ixstart ++ ) {
bz1mnftgil_idx_0 = okwshmbuu0_idx_1 ; n = 0 ; while ( n < 1 ) { for ( i = 0 ;
i < rtP . u024Framer_padBefore [ 1 ] ; i ++ ) { rtB . mesonpfm4v [
bz1mnftgil_idx_0 ] = rtP . u024Framer_PadValue ; bz1mnftgil_idx_0 +=
mzyualjnmm_idx_0 ; } bz1mnftgil_idx_0 += mzyualjnmm_idx_1 ; for ( i = 0 ; i <
rtP . u024Framer_padAfter [ 1 ] ; i ++ ) { rtB . mesonpfm4v [
bz1mnftgil_idx_0 ] = rtP . u024Framer_PadValue ; bz1mnftgil_idx_0 +=
mzyualjnmm_idx_0 ; } n = 1 ; } okwshmbuu0_idx_1 ++ ; } } srUpdateBC ( rtDW .
d41ofodid5 ) ; } else { if ( rtDW . huxisfnple ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . huxisfnple =
false ; } } } memcpy ( & rtDW . ailpq0rvcs [ 0 ] , & rtB . mesonpfm4v [ 0 ] ,
11264U * sizeof ( creal_T ) ) ; rtDW . dav0t3w3pe = 0 ; } for ( ixstart = 0 ;
ixstart < 1408 ; ixstart ++ ) { rtB . gaiixqm2uv [ ixstart ] = rtDW .
ailpq0rvcs [ rtDW . dav0t3w3pe + ixstart ] ; } if ( rtDW . dav0t3w3pe < 9856
) { rtDW . dav0t3w3pe += 1408 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. ejklemswad = rtDW . injuyknmed ; } for ( i = 0 ; i < 1408 ; i ++ ) { if (
rtB . ejklemswad ) { rtB . frwtrtnl12 [ i ] = rtB . gaiixqm2uv [ i ] ; } else
{ rtB . frwtrtnl12 [ i ] = rtP . AllZeros_Value [ i ] ; } } for (
mzyualjnmm_idx_0 = 0 ; mzyualjnmm_idx_0 < 4 ; mzyualjnmm_idx_0 ++ ) {
mzyualjnmm_idx_1 = mzyualjnmm_idx_0 ; bz1mnftgil_idx_0 = mzyualjnmm_idx_0 * 9
; for ( ixstart = 0 ; ixstart < 8 ; ixstart ++ ) { okwshmbuu0_idx_0 = 0.0 ;
bz1mnftgil_idx_1 = 0.0 ; for ( n = 0 ; n < ixstart + 1 ; n ++ ) {
okwshmbuu0_idx_0 += rtB . frwtrtnl12 [ ixstart - n ] . re * rtP .
FIRInterpolation_FILTER_COEFF [ bz1mnftgil_idx_0 + n ] ; bz1mnftgil_idx_1 +=
rtB . frwtrtnl12 [ ixstart - n ] . im * rtP . FIRInterpolation_FILTER_COEFF [
bz1mnftgil_idx_0 + n ] ; } for ( n = 0 ; n < 8 - ixstart ; n ++ ) {
okwshmbuu0_idx_0 += rtP . FIRInterpolation_FILTER_COEFF [ ( (
bz1mnftgil_idx_0 + ixstart ) + n ) + 1 ] * rtDW . lmuqtlmunv [ n ] . re ;
bz1mnftgil_idx_1 += rtP . FIRInterpolation_FILTER_COEFF [ ( (
bz1mnftgil_idx_0 + ixstart ) + n ) + 1 ] * rtDW . lmuqtlmunv [ n ] . im ; }
rtB . fzud2bim0u [ mzyualjnmm_idx_1 ] . re = okwshmbuu0_idx_0 ; rtB .
fzud2bim0u [ mzyualjnmm_idx_1 ] . im = bz1mnftgil_idx_1 ; mzyualjnmm_idx_1 +=
4 ; } for ( ixstart = 0 ; ixstart < 1400 ; ixstart ++ ) { okwshmbuu0_idx_0 =
0.0 ; bz1mnftgil_idx_1 = 0.0 ; for ( n = 0 ; n < 9 ; n ++ ) {
okwshmbuu0_idx_0 += rtB . frwtrtnl12 [ ( ixstart - n ) + 8 ] . re * rtP .
FIRInterpolation_FILTER_COEFF [ bz1mnftgil_idx_0 + n ] ; bz1mnftgil_idx_1 +=
rtB . frwtrtnl12 [ ( ixstart - n ) + 8 ] . im * rtP .
FIRInterpolation_FILTER_COEFF [ bz1mnftgil_idx_0 + n ] ; } rtB . fzud2bim0u [
mzyualjnmm_idx_1 ] . re = okwshmbuu0_idx_0 ; rtB . fzud2bim0u [
mzyualjnmm_idx_1 ] . im = bz1mnftgil_idx_1 ; mzyualjnmm_idx_1 += 4 ; } } for
( ixstart = 0 ; ixstart < 8 ; ixstart ++ ) { rtDW . lmuqtlmunv [ 7 - ixstart
] = rtB . frwtrtnl12 [ ixstart + 1400 ] ; } cftul3mkw2 = muDoubleScalarRound
( rtP . Channel_delay / ( 1.0 / rtrtC . f00zqecg2x * rtB . png3anych3 [ 0 ] )
) ; if ( ( cftul3mkw2 < 1.0 ) || muDoubleScalarIsNaN ( cftul3mkw2 ) ) {
memcpy ( & rtB . dohdssua10 [ 0 ] , & rtB . fzud2bim0u [ 0 ] , 5632U * sizeof
( creal_T ) ) ; } else { if ( cftul3mkw2 > 45056.0 ) { oldTSF1 = 45056U ; }
else if ( muDoubleScalarIsNaN ( cftul3mkw2 ) ) { oldTSF1 = 0U ; } else {
oldTSF1 = ( uint32_T ) muDoubleScalarRem ( cftul3mkw2 , 4.294967296E+9 ) ; }
beginIndex = 45056U - oldTSF1 ; for ( i = 0 ; i < 5632 ; i ++ ) { if ( (
uint32_T ) i < oldTSF1 ) { rtB . dohdssua10 [ ( uint32_T ) i ] = rtDW .
ojyliirvek [ i + beginIndex ] ; } else { rtB . dohdssua10 [ ( uint32_T ) i ]
= rtB . fzud2bim0u [ i - oldTSF1 ] ; } } } for ( ixstart = 0 ; ixstart < 5632
; ixstart ++ ) { cftul3mkw2 = 6.2831853071795862 * rtDW . i0xxik035e + rtP .
PhaseFrequencyOffset_Phase ; rtB . m0kzgdhzqg [ ixstart ] . re = rtB .
dohdssua10 [ ixstart ] . re * muDoubleScalarCos ( cftul3mkw2 ) - rtB .
dohdssua10 [ ixstart ] . im * muDoubleScalarSin ( cftul3mkw2 ) ; rtB .
m0kzgdhzqg [ ixstart ] . im = rtB . dohdssua10 [ ixstart ] . re *
muDoubleScalarSin ( cftul3mkw2 ) + rtB . dohdssua10 [ ixstart ] . im *
muDoubleScalarCos ( cftul3mkw2 ) ; rtDW . i0xxik035e += rtP .
Channel_freqOffset * 2.2727272727272725E-8 ; } RandSrc_GZ_Z ( rtB .
dohdssua10 , & rtP . RandomSource_MeanRTP , 1 , & rtP .
RandomSource_VarianceRTP , 1 , rtDW . nxhcar1emo , 1 , 5632 ) ; i = 0 ; rtDW
. doxqen31fx = muDoubleScalarSqrt ( 0.99999999999999978 / rtP . p80211 .
SamplesPerChip * 9.0909090909090915E-8 / ( muDoubleScalarPower ( 10.0 , rtP .
Channel_EsNo / 10.0 ) * 2.2727272727272725E-8 ) ) ; dry5wjbfll = ! rtDW .
k4rtvrnhf0 ; for ( n = 0 ; n < 5632 ; n ++ ) { rtB . nzefzefnpd [ i ] . re =
rtDW . doxqen31fx * rtB . dohdssua10 [ i ] . re ; rtB . nzefzefnpd [ i ] . im
= rtDW . doxqen31fx * rtB . dohdssua10 [ i ] . im ; rtB . nzefzefnpd [ i ] .
re += rtB . m0kzgdhzqg [ i ] . re ; rtB . nzefzefnpd [ i ] . im += rtB .
m0kzgdhzqg [ i ] . im ; i ++ ; rtB . jfy5xy2kuc [ n ] = rtDW . kkpi3mq4dv [ n
] ; } i = 0 ; mzyualjnmm_idx_0 = rtDW . iecicl2cix ; n = rtDW . kj0q5rzbdy ;
ixstart = rtDW . hkk5t5orjh ; mzyualjnmm_idx_1 = 0 ; bz1mnftgil_idx_0 = (
rtDW . kj0q5rzbdy + 1 ) << 5 ; for ( okwshmbuu0_idx_1 = 0 ; okwshmbuu0_idx_1
< 5632 ; okwshmbuu0_idx_1 ++ ) { rtDW . kiumjrib5v . re += rtB . nzefzefnpd [
i ] . re * rtP . FIRDecimation_FILT [ ixstart ] ; rtDW . kiumjrib5v . im +=
rtB . nzefzefnpd [ i ] . im * rtP . FIRDecimation_FILT [ ixstart ] ; ixstart
++ ; for ( jIdx = mzyualjnmm_idx_0 + 1 ; jIdx < bz1mnftgil_idx_0 ; jIdx ++ )
{ rtDW . kiumjrib5v . re += rtDW . kzmf0ug1yx [ jIdx ] . re * rtP .
FIRDecimation_FILT [ ixstart ] ; rtDW . kiumjrib5v . im += rtDW . kzmf0ug1yx
[ jIdx ] . im * rtP . FIRDecimation_FILT [ ixstart ] ; ixstart ++ ; } for (
jIdx = bz1mnftgil_idx_0 - 32 ; jIdx <= mzyualjnmm_idx_0 ; jIdx ++ ) { rtDW .
kiumjrib5v . re += rtDW . kzmf0ug1yx [ jIdx ] . re * rtP . FIRDecimation_FILT
[ ixstart ] ; rtDW . kiumjrib5v . im += rtDW . kzmf0ug1yx [ jIdx ] . im * rtP
. FIRDecimation_FILT [ ixstart ] ; ixstart ++ ; } rtDW . kzmf0ug1yx [
mzyualjnmm_idx_0 ] = rtB . nzefzefnpd [ i ] ; i ++ ; mzyualjnmm_idx_0 += 32 ;
if ( mzyualjnmm_idx_0 >= 32 ) { mzyualjnmm_idx_0 -= 32 ; } n ++ ; if ( n < 1
) { bz1mnftgil_idx_0 += 32 ; } else { rtB . e0moldxafh [ mzyualjnmm_idx_1 ] =
rtDW . kiumjrib5v ; mzyualjnmm_idx_1 ++ ; rtDW . kiumjrib5v . re = 0.0 ; rtDW
. kiumjrib5v . im = 0.0 ; n = 0 ; ixstart = 0 ; mzyualjnmm_idx_0 -- ; if (
mzyualjnmm_idx_0 < 0 ) { mzyualjnmm_idx_0 += 32 ; } bz1mnftgil_idx_0 = 32 ; }
} rtDW . iecicl2cix = mzyualjnmm_idx_0 ; rtDW . hkk5t5orjh = ixstart ; rtDW .
kj0q5rzbdy = n ; if ( ! eawryqakn0 ( rtDW . cxjyxxcg2g . Threshold , rtP .
p80211 . CorrelationThreshold ) ) { if ( rtDW . cxjyxxcg2g . isInitialized ==
1 ) { rtDW . cxjyxxcg2g . TunablePropsChanged = true ; } rtDW . cxjyxxcg2g .
Threshold = rtP . p80211 . CorrelationThreshold ; } if ( rtDW . cxjyxxcg2g .
TunablePropsChanged ) { rtDW . cxjyxxcg2g . TunablePropsChanged = false ;
rtDW . cxjyxxcg2g . pThreshold = rtDW . cxjyxxcg2g . Threshold ; } inSize [ 0
] = 5632 ; inSize [ 1 ] = 1 ; for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 <
6 ; mzyualjnmm_idx_1 ++ ) { inSize [ mzyualjnmm_idx_1 + 2 ] = 1 ; } ixstart =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( ixstart < 8 ) ) { if ( rtDW .
cxjyxxcg2g . inputVarSize . f1 [ ixstart ] != ( uint32_T ) inSize [ ixstart ]
) { for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 8 ; mzyualjnmm_idx_1 ++ )
{ rtDW . cxjyxxcg2g . inputVarSize . f1 [ mzyualjnmm_idx_1 ] = ( uint32_T )
inSize [ mzyualjnmm_idx_1 ] ; } exitg1 = true ; } else { ixstart ++ ; } }
nhncqw0bqs ( rtB . e0moldxafh , rtDW . cxjyxxcg2g . pFilterStates , rtB .
dohdssua10 , rtB . gtc1w0gygb ) ; lpgqbq5wno ( rtB . dohdssua10 , rtB .
k45nwcwi25 ) ; lfgqhvndli ( rtB . k45nwcwi25 , rtDW . cxjyxxcg2g . pThreshold
, rtB . lvpqnqpxu4 , & b_idx_size ) ; if ( b_idx_size == 0 ) { b_idx_size = 0
; } memcpy ( & rtDW . cxjyxxcg2g . pFilterStates [ 0 ] , & rtB . gtc1w0gygb [
0 ] , 5631U * sizeof ( creal_T ) ) ; rtDW . k1z1xzg4vk [ 0 ] = b_idx_size ;
rtDW . k1z1xzg4vk [ 1 ] = 1 ; i = b_idx_size ; if ( 0 <= i - 1 ) { memcpy ( &
rtB . lpblkkpfkz [ 0 ] , & rtB . lvpqnqpxu4 [ 0 ] , i * sizeof ( real_T ) ) ;
} bz1mnftgil_idx_0 = 2 ; okwshmbuu0_idx_0 = 2.0 ; bz1mnftgil_idx_1 = 1.0 ;
okwshmbuu0_idx_1 = 1 ; switch ( ( int32_T ) rtDW . eiqgaons3r ) { case 0 : if
( ! ( rtDW . k1z1xzg4vk [ 0 ] == 0 ) ) { ixstart = 1 ; n = rtDW . k1z1xzg4vk
[ 0 ] ; cftul3mkw2 = rtB . k45nwcwi25 [ ( int32_T ) rtB . lpblkkpfkz [ 0 ] -
1 ] ; i = 0 ; if ( rtDW . k1z1xzg4vk [ 0 ] > 1 ) { if ( muDoubleScalarIsNaN (
rtB . k45nwcwi25 [ ( int32_T ) rtB . lpblkkpfkz [ 0 ] - 1 ] ) ) {
mzyualjnmm_idx_0 = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && (
mzyualjnmm_idx_0 <= n ) ) { ixstart = mzyualjnmm_idx_0 ; if ( !
muDoubleScalarIsNaN ( rtB . k45nwcwi25 [ ( int32_T ) rtB . lpblkkpfkz [
mzyualjnmm_idx_0 - 1 ] - 1 ] ) ) { cftul3mkw2 = rtB . k45nwcwi25 [ ( int32_T
) rtB . lpblkkpfkz [ mzyualjnmm_idx_0 - 1 ] - 1 ] ; i = mzyualjnmm_idx_0 - 1
; exitg1 = true ; } else { mzyualjnmm_idx_0 ++ ; } } } if ( ixstart < rtDW .
k1z1xzg4vk [ 0 ] ) { while ( ixstart + 1 <= n ) { if ( rtB . k45nwcwi25 [ (
int32_T ) rtB . lpblkkpfkz [ ixstart ] - 1 ] > cftul3mkw2 ) { cftul3mkw2 =
rtB . k45nwcwi25 [ ( int32_T ) rtB . lpblkkpfkz [ ixstart ] - 1 ] ; i =
ixstart ; } ixstart ++ ; } } } rtDW . aawlgefele = 5632.0 - ( rtB .
lpblkkpfkz [ i ] - 352.0 ) ; rtDW . nx414qoue1 = 5280.0 ; rtDW . gwjx5jmivj =
true ; rtDW . eiqgaons3r = 1.0 ; } break ; case 1 : rtDW . gwjx5jmivj = true
; rtDW . eiqgaons3r = 2.0 ; break ; case 2 : rtDW . nx414qoue1 += 5632.0 ; if
( rtDW . nx414qoue1 >= 8448.0 ) { rtDW . oic55tm5hw = rtDW . nx414qoue1 -
8448.0 ; bz1mnftgil_idx_0 = 1 ; bz1mnftgil_idx_1 = 128.0 - rtDW . oic55tm5hw
/ 44.0 ; okwshmbuu0_idx_0 = bz1mnftgil_idx_1 + 1.0 ; okwshmbuu0_idx_1 = 128 ;
rtDW . eiqgaons3r = 3.0 ; } else { bz1mnftgil_idx_0 = 1 ; bz1mnftgil_idx_1 =
128.0 ; } break ; case 3 : rtDW . oic55tm5hw += 5632.0 ; okwshmbuu0_idx_0 =
1.0 ; okwshmbuu0_idx_1 = 128 ; if ( ! rtDW . forgi5ndce ) { rtDW . eiqgaons3r
= 4.0 ; } else { rtDW . gwjx5jmivj = false ; rtDW . aawlgefele = 0.0 ; rtDW .
oic55tm5hw = 0.0 ; rtDW . eiqgaons3r = 0.0 ; } break ; case 4 : rtDW .
oic55tm5hw += 5632.0 ; if ( rtDW . oic55tm5hw >= ( uint32_T ) rtP .
LengthinSamples_Gain * rtDW . bsnclpl5kf ) { rtDW . eiqgaons3r = 5.0 ; }
okwshmbuu0_idx_0 = 1.0 ; okwshmbuu0_idx_1 = 128 ; break ; case 5 : rtDW .
gwjx5jmivj = false ; rtDW . aawlgefele = 0.0 ; rtDW . oic55tm5hw = 0.0 ; rtDW
. eiqgaons3r = 0.0 ; break ; } rtB . ikrlju2x0k = rtDW . gwjx5jmivj ; if ( (
rtDW . aawlgefele < 1.0 ) || muDoubleScalarIsNaN ( rtDW . aawlgefele ) ) {
memcpy ( & rtB . lw4xp41e1u [ 0 ] , & rtB . jfy5xy2kuc [ 0 ] , 5632U * sizeof
( creal_T ) ) ; } else { if ( rtDW . aawlgefele > 11264.0 ) { oldTSF1 =
11264U ; } else { if ( rtDW . aawlgefele < 0.0 ) { cftul3mkw2 =
muDoubleScalarCeil ( rtDW . aawlgefele ) ; } else { cftul3mkw2 =
muDoubleScalarFloor ( rtDW . aawlgefele ) ; } if ( muDoubleScalarIsNaN (
cftul3mkw2 ) || muDoubleScalarIsInf ( cftul3mkw2 ) ) { cftul3mkw2 = 0.0 ; }
else { cftul3mkw2 = muDoubleScalarRem ( cftul3mkw2 , 4.294967296E+9 ) ; }
oldTSF1 = cftul3mkw2 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cftul3mkw2 : ( uint32_T ) cftul3mkw2 ; } beginIndex = 11264U - oldTSF1 ; for
( i = 0 ; i < 5632 ; i ++ ) { if ( ( uint32_T ) i < oldTSF1 ) { rtB .
lw4xp41e1u [ ( uint32_T ) i ] = rtDW . b2xuimdzdq [ i + beginIndex ] ; } else
{ rtB . lw4xp41e1u [ ( uint32_T ) i ] = rtB . jfy5xy2kuc [ i - oldTSF1 ] ; }
} } for ( ixstart = 0 ; ixstart < 1408 ; ixstart ++ ) { rtB . bvkx3sf1em [
ixstart ] = rtB . lw4xp41e1u [ ixstart << 2 ] ; } if ( rtDW . k4rtvrnhf0 ) {
if ( ! rtDW . mkelohhz3v ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
okigztdyds . re = 1.0 ; rtDW . okigztdyds . im = 0.0 ; rtDW . cgrqqqshve [ 0
] = 0.0 ; rtDW . cgrqqqshve [ 1 ] = 0.0 ; rtDW . cgrqqqshve [ 2 ] = 0.0 ; for
( ixstart = 0 ; ixstart < 7 ; ixstart ++ ) { rtDW . k0zhdh21rc [ ixstart ] =
0 ; } rtDW . gofhnz2obi = rtP . UnitDelay1_InitialCondition ; rtDW .
hfnphpu2ia = 1U ; rtDW . cvwym5cgd4 = 1U ; memset ( & rtDW . ph3qmg42pw [ 0 ]
, 0 , 72U * sizeof ( boolean_T ) ) ; memset ( & rtDW . ghdgqfto1n [ 0 ] , 0 ,
sizeof ( boolean_T ) << 10U ) ; rtDW . gpr4bwdt2r = false ; rtDW . jji3alrc23
= true ; rtDW . er1duxiunp = true ; rtDW . mkelohhz3v = true ; } for (
ixstart = 0 ; ixstart < 128 ; ixstart ++ ) { cftul3mkw2 = 0.0 ; im = 0.0 ;
for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 11 ; mzyualjnmm_idx_1 ++ ) {
cftul3mkw2 += rtB . bvkx3sf1em [ 11 * ixstart + mzyualjnmm_idx_1 ] . re * rtP
. p80211 . SpreadingCode [ mzyualjnmm_idx_1 ] ; im += rtB . bvkx3sf1em [ 11 *
ixstart + mzyualjnmm_idx_1 ] . im * rtP . p80211 . SpreadingCode [
mzyualjnmm_idx_1 ] ; } rtB . js0wj3ht0i [ ixstart ] . re = cftul3mkw2 ; rtB .
js0wj3ht0i [ ixstart ] . im = im ; i = 0 ; cftul3mkw2 = muDoubleScalarAtan2 (
rtB . js0wj3ht0i [ ixstart ] . re * - rtDW . okigztdyds . im + rtB .
js0wj3ht0i [ ixstart ] . im * rtDW . okigztdyds . re , rtB . js0wj3ht0i [
ixstart ] . re * rtDW . okigztdyds . re - rtB . js0wj3ht0i [ ixstart ] . im *
- rtDW . okigztdyds . im ) ; rtDW . okigztdyds = rtB . js0wj3ht0i [ ixstart ]
; if ( cftul3mkw2 < 0.0 ) { cftul3mkw2 += 6.2831853071795862 ; } if (
cftul3mkw2 < 0.0 ) { cftul3mkw2 += 6.2831853071795862 ; } im =
muDoubleScalarAbs ( cftul3mkw2 ) ; if ( im > 3.1415926535897931 ) { im =
6.2831853071795862 - im ; } rtDW . cgrqqqshve [ 0 ] = muDoubleScalarAbs (
cftul3mkw2 ) ; if ( rtDW . cgrqqqshve [ 0 ] > 3.1415926535897931 ) { rtDW .
cgrqqqshve [ 0 ] = 6.2831853071795862 - rtDW . cgrqqqshve [ 0 ] ; } if ( rtDW
. cgrqqqshve [ 0 ] < im ) { im = rtDW . cgrqqqshve [ 0 ] ; } rtDW .
cgrqqqshve [ 1 ] = muDoubleScalarAbs ( cftul3mkw2 - 3.1415926535897931 ) ; if
( rtDW . cgrqqqshve [ 1 ] > 3.1415926535897931 ) { rtDW . cgrqqqshve [ 1 ] =
6.2831853071795862 - rtDW . cgrqqqshve [ 1 ] ; } if ( rtDW . cgrqqqshve [ 1 ]
< im ) { i = 1 ; } mfv5uqmzau [ ixstart ] = ( i % 2 != 0 ) ; } for ( n = 0 ;
n < 128 ; n ++ ) { i = mfv5uqmzau [ n ] ; for ( ixstart = 0 ; ixstart < 7 ;
ixstart ++ ) { i -= ( uint8_T ) ( rtConstP . buo0q3kmga [ ixstart + 1 ] *
rtDW . k0zhdh21rc [ ixstart ] ) ; } while ( i < 0 ) { i += 2 ; } i %= 2 ;
f1w32ogmn5 [ n ] = ( i != 0 ) ; for ( ixstart = 5 ; ixstart >= 0 ; ixstart --
) { rtDW . k0zhdh21rc [ ixstart + 1 ] = rtDW . k0zhdh21rc [ ixstart ] ; }
rtDW . k0zhdh21rc [ 0U ] = mfv5uqmzau [ n ] ; } cftul3mkw2 =
muDoubleScalarRound ( ( real_T ) rtDW . hfnphpu2ia + bz1mnftgil_idx_1 ) ; if
( cftul3mkw2 < 65536.0 ) { if ( cftul3mkw2 >= 0.0 ) { tmp = ( uint16_T )
cftul3mkw2 ; } else { tmp = 0U ; } } else if ( cftul3mkw2 >= 65536.0 ) { tmp
= MAX_uint16_T ; } else { tmp = 0U ; } mzyualjnmm_idx_1 = tmp -
bz1mnftgil_idx_0 ; if ( mzyualjnmm_idx_1 >= 0 ) { tmp = ( uint16_T )
mzyualjnmm_idx_1 ; } else { tmp = 0U ; } if ( bz1mnftgil_idx_0 >
bz1mnftgil_idx_1 ) { ixstart = 1 ; mzyualjnmm_idx_0 = 0 ; } else { ixstart =
bz1mnftgil_idx_0 ; mzyualjnmm_idx_0 = ( int32_T ) bz1mnftgil_idx_1 ; } if (
rtDW . hfnphpu2ia > tmp ) { n = 0 ; } else { n = rtDW . hfnphpu2ia - 1 ; }
bz1mnftgil_idx_0 = mzyualjnmm_idx_0 - ixstart ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 <= bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { rtDW .
ph3qmg42pw [ n + mzyualjnmm_idx_1 ] = f1w32ogmn5 [ ( ixstart +
mzyualjnmm_idx_1 ) - 1 ] ; } oldTSF1 = ( 1U + tmp ) + rtDW . hfnphpu2ia ; if
( oldTSF1 > 65535U ) { oldTSF1 = 65535U ; } qY = oldTSF1 - rtDW . hfnphpu2ia
; if ( qY > oldTSF1 ) { qY = 0U ; } rtDW . hfnphpu2ia = ( uint16_T ) qY ;
mzyualjnmm_idx_1 = rtDW . cvwym5cgd4 + okwshmbuu0_idx_1 ; if (
mzyualjnmm_idx_1 < 65536 ) { tmp = ( uint16_T ) mzyualjnmm_idx_1 ; } else {
tmp = MAX_uint16_T ; } cftul3mkw2 = muDoubleScalarRound ( ( real_T ) tmp -
okwshmbuu0_idx_0 ) ; if ( cftul3mkw2 < 65536.0 ) { if ( cftul3mkw2 >= 0.0 ) {
tmp = ( uint16_T ) cftul3mkw2 ; } else { tmp = 0U ; } } else if ( cftul3mkw2
>= 65536.0 ) { tmp = MAX_uint16_T ; } else { tmp = 0U ; } if (
okwshmbuu0_idx_0 > okwshmbuu0_idx_1 ) { n = 1 ; i = 0 ; } else { n = (
int32_T ) okwshmbuu0_idx_0 ; i = okwshmbuu0_idx_1 ; } if ( rtDW . cvwym5cgd4
> tmp ) { ixstart = 0 ; } else { ixstart = rtDW . cvwym5cgd4 - 1 ; }
bz1mnftgil_idx_0 = i - n ; for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 <=
bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { rtDW . ghdgqfto1n [ ixstart +
mzyualjnmm_idx_1 ] = f1w32ogmn5 [ ( n + mzyualjnmm_idx_1 ) - 1 ] ; } oldTSF1
= 1U + tmp ; if ( oldTSF1 > 65535U ) { oldTSF1 = 65535U ; } oldTSF1 += rtDW .
cvwym5cgd4 ; if ( oldTSF1 > 65535U ) { oldTSF1 = 65535U ; } qY = oldTSF1 -
rtDW . cvwym5cgd4 ; if ( qY > oldTSF1 ) { qY = 0U ; } rtDW . cvwym5cgd4 = (
uint16_T ) qY ; k0wtwtycgu_p = & rtDW . ph3qmg42pw [ 0 ] ; qY = rtDW .
cvwym5cgd4 - 1U ; if ( qY > rtDW . cvwym5cgd4 ) { qY = 0U ; } memcpy ( &
eykvotp4wa [ 0 ] , & rtDW . ghdgqfto1n [ 0 ] , sizeof ( boolean_T ) << 10U )
; oldTSF1 = rtDW . hfnphpu2ia - 1U ; if ( oldTSF1 > rtDW . hfnphpu2ia ) {
oldTSF1 = 0U ; } if ( rtDW . gofhnz2obi && ( ( int32_T ) oldTSF1 >= rtP .
CompareToConstant_const ) ) { i = 8 ; ixstart = 0 ; while ( ixstart < 1 ) {
oldTSF1 = 0U ; beginIndex = 1U ; for ( n = 0 ; n < 16 ; n ++ ) { if (
k0wtwtycgu_p [ i ] ) { oldTSF1 |= beginIndex ; } i ++ ; beginIndex <<= 1U ; }
rtB . l0nk5xxkr1 = ( uint16_T ) oldTSF1 ; ixstart = 1 ; } oldTSF1 = 65535U ;
for ( ixstart = 0 ; ixstart < 32 ; ixstart ++ ) { crjhd4du3f [ ixstart ] =
k0wtwtycgu_p [ ixstart + 24 ] ; beginIndex = ( oldTSF1 >> 15U & 1U ) ^
k0wtwtycgu_p [ ixstart + 24 ] ; if ( beginIndex != 0U ) { oldTSF1 = ( oldTSF1
^ 2064U ) << 1U ; } else { oldTSF1 <<= 1U ; } oldTSF1 += beginIndex ; }
oldTSF1 ^= 65535U ; beginIndex = 0U ; for ( ixstart = 0 ; ixstart < 16 ;
ixstart ++ ) { beginIndex <<= 1U ; beginIndex ^= k0wtwtycgu_p [ ixstart + 56
] ; } beginIndex = ( beginIndex ^ oldTSF1 ) << 16U ; rtB . cb5viixu3v = ! (
beginIndex == 0U ) ; i = 0 ; ixstart = 0 ; while ( ixstart < 1 ) { oldTSF1 =
0U ; beginIndex = 1U ; for ( n = 0 ; n < 8 ; n ++ ) { if ( crjhd4du3f [ i ] )
{ oldTSF1 |= beginIndex ; } i ++ ; beginIndex <<= 1U ; } rtB . hjdknbavtt = (
uint8_T ) oldTSF1 ; ixstart = 1 ; } i = 8 ; ixstart = 0 ; while ( ixstart < 1
) { oldTSF1 = 0U ; beginIndex = 1U ; for ( n = 0 ; n < 8 ; n ++ ) { if (
crjhd4du3f [ i ] ) { oldTSF1 |= beginIndex ; } i ++ ; beginIndex <<= 1U ; }
rtB . iyl4yi0uvq = ( uint8_T ) oldTSF1 ; ixstart = 1 ; } i = 16 ; ixstart = 0
; while ( ixstart < 1 ) { oldTSF1 = 0U ; beginIndex = 1U ; for ( n = 0 ; n <
16 ; n ++ ) { if ( crjhd4du3f [ i ] ) { oldTSF1 |= beginIndex ; } i ++ ;
beginIndex <<= 1U ; } rtB . k2aypsd5z0 = ( uint16_T ) oldTSF1 ; ixstart = 1 ;
} srUpdateBC ( rtDW . bmnckkg14d ) ; } if ( ! rtDW . gpr4bwdt2r ) { rtDW .
ohj0k0k5tf . isInitialized = 0 ; rtDW . gpr4bwdt2r = true ; rtDW . dmrh52ujzk
. Header . FrameCtrl . ProtocolVersion = 0U ; rtDW . dmrh52ujzk . Header .
FrameCtrl . Type = 0U ; rtDW . dmrh52ujzk . Header . FrameCtrl . Subtype = 0U
; rtDW . dmrh52ujzk . Header . FrameCtrl . ToDS = 0U ; rtDW . dmrh52ujzk .
Header . FrameCtrl . FromDS = 0U ; rtDW . dmrh52ujzk . Header . FrameCtrl .
MoreFragments = 0U ; rtDW . dmrh52ujzk . Header . FrameCtrl . Retry = 0U ;
rtDW . dmrh52ujzk . Header . FrameCtrl . PowerManagement = 0U ; rtDW .
dmrh52ujzk . Header . FrameCtrl . MoreData = 0U ; rtDW . dmrh52ujzk . Header
. FrameCtrl . ProtectedFrame = 0U ; rtDW . dmrh52ujzk . Header . FrameCtrl .
Order = 0U ; rtDW . dmrh52ujzk . Header . DurationID [ 0 ] = 0U ; rtDW .
dmrh52ujzk . Header . DurationID [ 1 ] = 0U ; rtDW . dmrh52ujzk . Header .
SequenceControl [ 0 ] = 0U ; rtDW . dmrh52ujzk . Header . SequenceControl [ 1
] = 0U ; for ( i = 0 ; i < 6 ; i ++ ) { rtDW . dmrh52ujzk . Header . Address1
[ i ] = 0U ; rtDW . dmrh52ujzk . Header . Address2 [ i ] = 0U ; rtDW .
dmrh52ujzk . Header . Address3 [ i ] = 0U ; rtDW . dmrh52ujzk . Header .
Address4 [ i ] = 0U ; } nkmotpngpf ( & rtB . cjdzbzy4wt ) ; rtDW . dmrh52ujzk
. FrameBody = rtB . cjdzbzy4wt ; } if ( ( ! rtB . cb5viixu3v ) && ( rtB .
k2aypsd5z0 > 0 ) && ( ( uint16_T ) qY >= rtB . k2aypsd5z0 ) && ( rtB .
k2aypsd5z0 >= 32 ) && rtDW . jji3alrc23 ) { oqnr5ucgpm_size = rtB .
k2aypsd5z0 ; bz1mnftgil_idx_0 = rtB . k2aypsd5z0 ; if ( 0 <= bz1mnftgil_idx_0
- 1 ) { memcpy ( & oqnr5ucgpm_data [ 0 ] , & eykvotp4wa [ 0 ] ,
bz1mnftgil_idx_0 * sizeof ( boolean_T ) ) ; } jesjp43xz3 ( & rtDW .
ohj0k0k5tf , oqnr5ucgpm_data , & oqnr5ucgpm_size , frame_data , frame_size ,
& mpduCRC ) ; rtB . flyjfnu152 = mpduCRC ; b . FrameCtrl = ll3iti40qh ( &
frame_data [ 0 ] , mpduCRC ) ; b . DurationID [ 0 ] = 0U ; b . DurationID [ 1
] = 0U ; b . SequenceControl [ 0 ] = 0U ; b . SequenceControl [ 1 ] = 0U ;
for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 6 ; mzyualjnmm_idx_1 ++ ) { b
. Address1 [ mzyualjnmm_idx_1 ] = 0U ; b . Address2 [ mzyualjnmm_idx_1 ] = 0U
; b . Address3 [ mzyualjnmm_idx_1 ] = 0U ; b . Address4 [ mzyualjnmm_idx_1 ]
= 0U ; } mzyualjnmm_idx_0 = 240 ; if ( ! mpduCRC ) { b . FrameCtrl =
ll3iti40qh ( & frame_data [ 0 ] , false ) ; f2lun0e1s3 ( & frame_data [ 16 ]
, b . DurationID ) ; f2lun0e1s34 ( & frame_data [ 32 ] , b . Address1 ) ;
ixstart = 80 ; isControlFrame = ( b . FrameCtrl . Type == 1 ) ; if ( ! ( (
isControlFrame && ( b . FrameCtrl . Subtype == 12 ) ) || ( isControlFrame &&
( b . FrameCtrl . Subtype == 13 ) ) ) ) { f2lun0e1s34 ( & frame_data [ 80 ] ,
b . Address2 ) ; ixstart = 128 ; } if ( b . FrameCtrl . Type == 0 ) {
f2lun0e1s34 ( & frame_data [ ixstart ] , b . Address3 ) ; ixstart += 48 ; }
if ( ! isControlFrame ) { f2lun0e1s3 ( & frame_data [ ixstart ] , b .
SequenceControl ) ; ixstart += 16 ; } if ( b . FrameCtrl . Type == 2 ) {
f2lun0e1s34 ( & frame_data [ ixstart ] , b . Address4 ) ; ixstart += 48 ; }
mzyualjnmm_idx_0 = ixstart ; } rtB . pvzfxkfrym . Header = b ; if ( mpduCRC
|| ( b . FrameCtrl . Type != 0 ) || ( b . FrameCtrl . Subtype != 8 ) ) {
nkmotpngpf ( & rtB . luawrspqrd ) ; rtB . pvzfxkfrym . FrameBody = rtB .
luawrspqrd ; } else { if ( mzyualjnmm_idx_0 + 1 > frame_size [ 0 ] ) {
mzyualjnmm_idx_0 = 0 ; ixstart = 0 ; } else { ixstart = frame_size [ 0 ] ; }
jIdx = ixstart - mzyualjnmm_idx_0 ; bz1mnftgil_idx_0 = ixstart -
mzyualjnmm_idx_0 ; for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 <
bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { b_frame_data [ mzyualjnmm_idx_1 ]
= frame_data [ mzyualjnmm_idx_0 + mzyualjnmm_idx_1 ] ; } bits = &
b_frame_data [ 0 ] ; for ( okwshmbuu0_idx_1 = 0 ; okwshmbuu0_idx_1 < 8 ;
okwshmbuu0_idx_1 ++ ) { i = okwshmbuu0_idx_1 << 3 ; n = ( 1 +
okwshmbuu0_idx_1 ) << 3 ; if ( i + 1 > n ) { i = 0 ; n = 0 ; }
bz1mnftgil_idx_0 = n - i ; for ( mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 <
bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { bits_data [ mzyualjnmm_idx_1 ] = (
int8_T ) bits [ i + mzyualjnmm_idx_1 ] ; } cftul3mkw2 = 0.0 ; for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 8 ; mzyualjnmm_idx_1 ++ ) {
cftul3mkw2 += ( real_T ) ( bits_data [ mzyualjnmm_idx_1 ] * b_b [
mzyualjnmm_idx_1 ] ) ; } if ( cftul3mkw2 < 256.0 ) { rtB . pvzfxkfrym .
FrameBody . TimeStamp [ okwshmbuu0_idx_1 ] = ( uint8_T ) cftul3mkw2 ; } else
{ rtB . pvzfxkfrym . FrameBody . TimeStamp [ okwshmbuu0_idx_1 ] = MAX_uint8_T
; } } f2lun0e1s3 ( & b_frame_data [ 64 ] , rtB . pvzfxkfrym . FrameBody .
BeaconInterval ) ; rtB . pvzfxkfrym . FrameBody . Capability . ESS =
frame_data [ mzyualjnmm_idx_0 + 80 ] ; rtB . pvzfxkfrym . FrameBody .
Capability . IBSS = frame_data [ mzyualjnmm_idx_0 + 81 ] ; rtB . pvzfxkfrym .
FrameBody . Capability . CFPollable = frame_data [ mzyualjnmm_idx_0 + 82 ] ;
rtB . pvzfxkfrym . FrameBody . Capability . CFPollRequest = frame_data [
mzyualjnmm_idx_0 + 83 ] ; rtB . pvzfxkfrym . FrameBody . Capability . Privacy
= frame_data [ mzyualjnmm_idx_0 + 84 ] ; rtB . pvzfxkfrym . FrameBody .
Capability . ShortPreamble = frame_data [ mzyualjnmm_idx_0 + 85 ] ; rtB .
pvzfxkfrym . FrameBody . Capability . PBCC = frame_data [ mzyualjnmm_idx_0 +
86 ] ; rtB . pvzfxkfrym . FrameBody . Capability . ChannelAgility =
frame_data [ mzyualjnmm_idx_0 + 87 ] ; rtB . pvzfxkfrym . FrameBody .
Capability . SpectrumManagement = frame_data [ mzyualjnmm_idx_0 + 88 ] ; rtB
. pvzfxkfrym . FrameBody . Capability . QoS = frame_data [ mzyualjnmm_idx_0 +
89 ] ; rtB . pvzfxkfrym . FrameBody . Capability . ShortSlotTime = frame_data
[ mzyualjnmm_idx_0 + 90 ] ; rtB . pvzfxkfrym . FrameBody . Capability . APSD
= frame_data [ mzyualjnmm_idx_0 + 91 ] ; rtB . pvzfxkfrym . FrameBody .
Capability . Reserved = frame_data [ mzyualjnmm_idx_0 + 92 ] ; rtB .
pvzfxkfrym . FrameBody . Capability . DSSOFDM = frame_data [ mzyualjnmm_idx_0
+ 93 ] ; rtB . pvzfxkfrym . FrameBody . Capability . DelayedBlockAck =
frame_data [ mzyualjnmm_idx_0 + 94 ] ; rtB . pvzfxkfrym . FrameBody .
Capability . ImmediateBlockAck = frame_data [ mzyualjnmm_idx_0 + 95 ] ;
oldTSF1 = 97U ; n = ixstart - mzyualjnmm_idx_0 ; rtB . pvzfxkfrym . FrameBody
. NumInfoElements = 0U ; b_s . ID = MAX_uint8_T ; b_s . Length = 0U ; memset
( & b_s . Value [ 0 ] , 0 , 257U * sizeof ( uint8_T ) ) ; for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 60 ; mzyualjnmm_idx_1 ++ ) { rtB .
pvzfxkfrym . FrameBody . InfoElements [ mzyualjnmm_idx_1 ] = b_s ; } while (
oldTSF1 < ( uint32_T ) n ) { mzyualjnmm_idx_1 = ( int32_T ) ( rtB .
pvzfxkfrym . FrameBody . NumInfoElements + 1U ) ; if ( ( uint32_T )
mzyualjnmm_idx_1 > 255U ) { mzyualjnmm_idx_1 = 255 ; } rtB . pvzfxkfrym .
FrameBody . NumInfoElements = ( uint8_T ) mzyualjnmm_idx_1 ; for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < jIdx ; mzyualjnmm_idx_1 ++ ) {
b_frame_data_p [ mzyualjnmm_idx_1 ] = ( int8_T ) b_frame_data [
mzyualjnmm_idx_1 ] ; } i = ( int32_T ) oldTSF1 ; cftul3mkw2 = 0.0 ; for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < 8 ; mzyualjnmm_idx_1 ++ ) {
cftul3mkw2 += ( real_T ) ( b_frame_data_p [ ( mzyualjnmm_idx_1 + i ) - 1 ] *
b_b [ mzyualjnmm_idx_1 ] ) ; } if ( cftul3mkw2 < 256.0 ) { rtB . pvzfxkfrym .
FrameBody . InfoElements [ rtB . pvzfxkfrym . FrameBody . NumInfoElements - 1
] . ID = ( uint8_T ) cftul3mkw2 ; } else { rtB . pvzfxkfrym . FrameBody .
InfoElements [ rtB . pvzfxkfrym . FrameBody . NumInfoElements - 1 ] . ID =
MAX_uint8_T ; } oldTSF1 += 16U ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < jIdx ; mzyualjnmm_idx_1 ++ ) { b_frame_data_p [
mzyualjnmm_idx_1 ] = ( int8_T ) b_frame_data [ mzyualjnmm_idx_1 ] ; } i = (
int32_T ) oldTSF1 ; cftul3mkw2 = 0.0 ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < 8 ; mzyualjnmm_idx_1 ++ ) { cftul3mkw2 += ( real_T ) (
b_frame_data_p [ ( mzyualjnmm_idx_1 + i ) - 9 ] * b_b [ mzyualjnmm_idx_1 ] )
; } if ( cftul3mkw2 < 256.0 ) { expl_temp_ProtocolVersion = ( uint8_T )
cftul3mkw2 ; } else { expl_temp_ProtocolVersion = MAX_uint8_T ; } rtB .
pvzfxkfrym . FrameBody . InfoElements [ rtB . pvzfxkfrym . FrameBody .
NumInfoElements - 1 ] . Length = expl_temp_ProtocolVersion ; for (
expl_temp_Type = 1U ; expl_temp_Type <= expl_temp_ProtocolVersion ;
expl_temp_Type ++ ) { cftul3mkw2 = 0.0 ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < 8 ; mzyualjnmm_idx_1 ++ ) { qY = oldTSF1 +
mzyualjnmm_idx_1 ; if ( qY < oldTSF1 ) { qY = MAX_uint32_T ; } cftul3mkw2 +=
( real_T ) ( b_frame_data [ ( int32_T ) qY - 1 ] * b_b [ mzyualjnmm_idx_1 ] )
; } if ( cftul3mkw2 < 256.0 ) { rtB . pvzfxkfrym . FrameBody . InfoElements [
rtB . pvzfxkfrym . FrameBody . NumInfoElements - 1 ] . Value [ expl_temp_Type
- 1 ] = ( uint8_T ) cftul3mkw2 ; } else { rtB . pvzfxkfrym . FrameBody .
InfoElements [ rtB . pvzfxkfrym . FrameBody . NumInfoElements - 1 ] . Value [
expl_temp_Type - 1 ] = MAX_uint8_T ; } qY = oldTSF1 + 8U ; if ( qY < oldTSF1
) { qY = MAX_uint32_T ; } oldTSF1 = qY ; } } } rtDW . dmrh52ujzk = rtB .
pvzfxkfrym ; rtDW . er1duxiunp = mpduCRC ; rtDW . jji3alrc23 = false ; } else
{ rtB . pvzfxkfrym = rtDW . dmrh52ujzk ; rtB . flyjfnu152 = rtDW . er1duxiunp
; } srUpdateBC ( rtDW . ga3w5swikk ) ; } else { if ( rtDW . mkelohhz3v ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . mkelohhz3v =
false ; } } rtB . bmtamjdpq0 = ( dry5wjbfll || rtB . flyjfnu152 ) ; rtB .
blansmpnzc [ 0 ] = rtB . pvzfxkfrym . Header . DurationID [ 0 ] ; rtB .
blansmpnzc [ 1 ] = rtB . pvzfxkfrym . Header . DurationID [ 1 ] ; rtB .
gknqx5tmmk [ 0 ] = rtB . pvzfxkfrym . Header . SequenceControl [ 0 ] ; rtB .
gknqx5tmmk [ 1 ] = rtB . pvzfxkfrym . Header . SequenceControl [ 1 ] ; for (
i = 0 ; i < 6 ; i ++ ) { rtB . m3dvdwazqy [ i ] = rtB . pvzfxkfrym . Header .
Address2 [ i ] ; rtB . lkfqackkir [ i ] = rtB . pvzfxkfrym . Header .
Address1 [ i ] ; rtB . a0gx5m2w2q [ i ] = rtB . pvzfxkfrym . Header .
Address3 [ i ] ; } rtB . fxsyckzo02 [ 0 ] = rtB . pvzfxkfrym . Header .
FrameCtrl . ProtocolVersion ; rtB . fxsyckzo02 [ 1 ] = rtB . pvzfxkfrym .
Header . FrameCtrl . Type ; rtB . fxsyckzo02 [ 2 ] = rtB . pvzfxkfrym .
Header . FrameCtrl . Subtype ; rtB . fxsyckzo02 [ 3 ] = rtB . pvzfxkfrym .
Header . FrameCtrl . ToDS ; rtB . fxsyckzo02 [ 4 ] = rtB . pvzfxkfrym .
Header . FrameCtrl . FromDS ; rtB . fxsyckzo02 [ 5 ] = rtB . pvzfxkfrym .
Header . FrameCtrl . MoreFragments ; rtB . fxsyckzo02 [ 6 ] = rtB .
pvzfxkfrym . Header . FrameCtrl . Retry ; rtB . fxsyckzo02 [ 7 ] = rtB .
pvzfxkfrym . Header . FrameCtrl . PowerManagement ; rtB . fxsyckzo02 [ 8 ] =
rtB . pvzfxkfrym . Header . FrameCtrl . MoreData ; rtB . fxsyckzo02 [ 9 ] =
rtB . pvzfxkfrym . Header . FrameCtrl . ProtectedFrame ; rtB . fxsyckzo02 [
10 ] = rtB . pvzfxkfrym . Header . FrameCtrl . Order ; rtB . njsa1boqih = rtB
. pvzfxkfrym . FrameBody . BeaconInterval [ 0 ] ; rtB . njsa1boqih += (
real_T ) rtB . pvzfxkfrym . FrameBody . BeaconInterval [ 1 ] * 256.0 ;
l4dxp3tr3f ( rtB . pvzfxkfrym . FrameBody . InfoElements , & rtB . hxqiytsi2o
, & rtDW . hxqiytsi2o , & rtP . hxqiytsi2o ) ; bz1mnftgil_idx_0 = rtDW .
hxqiytsi2o . gvmrj4p5th [ 0 ] * rtDW . hxqiytsi2o . gvmrj4p5th [ 1 ] ; for (
mzyualjnmm_idx_1 = 0 ; mzyualjnmm_idx_1 < bz1mnftgil_idx_0 ; mzyualjnmm_idx_1
++ ) { cftul3mkw2 = muDoubleScalarFloor ( rtB . hxqiytsi2o . mt4clpln1e [
mzyualjnmm_idx_1 ] ) ; if ( muDoubleScalarIsNaN ( cftul3mkw2 ) ||
muDoubleScalarIsInf ( cftul3mkw2 ) ) { cftul3mkw2 = 0.0 ; } else { cftul3mkw2
= muDoubleScalarRem ( cftul3mkw2 , 256.0 ) ; } rtB . jlttncaanz [
mzyualjnmm_idx_1 ] = ( uint8_T ) ( cftul3mkw2 < 0.0 ? ( int32_T ) ( uint8_T )
- ( int8_T ) ( uint8_T ) - cftul3mkw2 : ( int32_T ) ( uint8_T ) cftul3mkw2 )
; } rtB . cgjkqywdur [ 0 ] = rtB . pvzfxkfrym . FrameBody . Capability . ESS
; rtB . cgjkqywdur [ 1 ] = rtB . pvzfxkfrym . FrameBody . Capability . IBSS ;
rtB . cgjkqywdur [ 2 ] = rtB . pvzfxkfrym . FrameBody . Capability .
CFPollable ; rtB . cgjkqywdur [ 3 ] = rtB . pvzfxkfrym . FrameBody .
Capability . CFPollRequest ; rtB . cgjkqywdur [ 4 ] = rtB . pvzfxkfrym .
FrameBody . Capability . Privacy ; rtB . cgjkqywdur [ 5 ] = rtB . pvzfxkfrym
. FrameBody . Capability . ShortPreamble ; rtB . cgjkqywdur [ 6 ] = rtB .
pvzfxkfrym . FrameBody . Capability . PBCC ; rtB . cgjkqywdur [ 7 ] = rtB .
pvzfxkfrym . FrameBody . Capability . ChannelAgility ; rtB . cgjkqywdur [ 8 ]
= rtB . pvzfxkfrym . FrameBody . Capability . SpectrumManagement ; rtB .
cgjkqywdur [ 9 ] = rtB . pvzfxkfrym . FrameBody . Capability . QoS ; rtB .
cgjkqywdur [ 10 ] = rtB . pvzfxkfrym . FrameBody . Capability . ShortSlotTime
; rtB . cgjkqywdur [ 11 ] = rtB . pvzfxkfrym . FrameBody . Capability . APSD
; rtB . cgjkqywdur [ 12 ] = rtB . pvzfxkfrym . FrameBody . Capability .
Reserved ; rtB . cgjkqywdur [ 13 ] = rtB . pvzfxkfrym . FrameBody .
Capability . DSSOFDM ; rtB . cgjkqywdur [ 14 ] = rtB . pvzfxkfrym . FrameBody
. Capability . DelayedBlockAck ; rtB . cgjkqywdur [ 15 ] = rtB . pvzfxkfrym .
FrameBody . Capability . ImmediateBlockAck ; l4dxp3tr3f ( rtB . pvzfxkfrym .
FrameBody . InfoElements , & rtB . mhw41tnrld , & rtDW . mhw41tnrld , & rtP .
mhw41tnrld ) ; bz1mnftgil_idx_0 = rtDW . mhw41tnrld . gvmrj4p5th [ 0 ] * rtDW
. mhw41tnrld . gvmrj4p5th [ 1 ] ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { cftul3mkw2 =
muDoubleScalarFloor ( rtB . mhw41tnrld . mt4clpln1e [ mzyualjnmm_idx_1 ] ) ;
if ( muDoubleScalarIsNaN ( cftul3mkw2 ) || muDoubleScalarIsInf ( cftul3mkw2 )
) { cftul3mkw2 = 0.0 ; } else { cftul3mkw2 = muDoubleScalarRem ( cftul3mkw2 ,
256.0 ) ; } rtB . omppevnb4p [ mzyualjnmm_idx_1 ] = ( uint8_T ) ( cftul3mkw2
< 0.0 ? ( int32_T ) ( uint8_T ) - ( int8_T ) ( uint8_T ) - cftul3mkw2 : (
int32_T ) ( uint8_T ) cftul3mkw2 ) ; } l4dxp3tr3f ( rtB . pvzfxkfrym .
FrameBody . InfoElements , & rtB . kuesm00ub3 , & rtDW . kuesm00ub3 , & rtP .
kuesm00ub3 ) ; bz1mnftgil_idx_0 = rtDW . kuesm00ub3 . gvmrj4p5th [ 0 ] * rtDW
. kuesm00ub3 . gvmrj4p5th [ 1 ] ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { cftul3mkw2 =
muDoubleScalarFloor ( rtB . kuesm00ub3 . mt4clpln1e [ mzyualjnmm_idx_1 ] ) ;
if ( muDoubleScalarIsNaN ( cftul3mkw2 ) || muDoubleScalarIsInf ( cftul3mkw2 )
) { cftul3mkw2 = 0.0 ; } else { cftul3mkw2 = muDoubleScalarRem ( cftul3mkw2 ,
256.0 ) ; } rtB . exs1qjlcol [ mzyualjnmm_idx_1 ] = ( uint8_T ) ( cftul3mkw2
< 0.0 ? ( int32_T ) ( uint8_T ) - ( int8_T ) ( uint8_T ) - cftul3mkw2 : (
int32_T ) ( uint8_T ) cftul3mkw2 ) ; } l4dxp3tr3f ( rtB . pvzfxkfrym .
FrameBody . InfoElements , & rtB . kyqjjdftn3 , & rtDW . kyqjjdftn3 , & rtP .
kyqjjdftn3 ) ; bz1mnftgil_idx_0 = rtDW . kyqjjdftn3 . gvmrj4p5th [ 0 ] * rtDW
. kyqjjdftn3 . gvmrj4p5th [ 1 ] ; for ( mzyualjnmm_idx_1 = 0 ;
mzyualjnmm_idx_1 < bz1mnftgil_idx_0 ; mzyualjnmm_idx_1 ++ ) { cftul3mkw2 =
muDoubleScalarFloor ( rtB . kyqjjdftn3 . mt4clpln1e [ mzyualjnmm_idx_1 ] ) ;
if ( muDoubleScalarIsNaN ( cftul3mkw2 ) || muDoubleScalarIsInf ( cftul3mkw2 )
) { cftul3mkw2 = 0.0 ; } else { cftul3mkw2 = muDoubleScalarRem ( cftul3mkw2 ,
256.0 ) ; } rtB . jc1bi2eouc [ mzyualjnmm_idx_1 ] = ( uint8_T ) ( cftul3mkw2
< 0.0 ? ( int32_T ) ( uint8_T ) - ( int8_T ) ( uint8_T ) - cftul3mkw2 : (
int32_T ) ( uint8_T ) cftul3mkw2 ) ; } rtB . nfrz0m4ksz = rtB . pvzfxkfrym .
FrameBody . TimeStamp [ 0 ] ; for ( ixstart = 0 ; ixstart < 7 ; ixstart ++ )
{ rtB . nfrz0m4ksz += muDoubleScalarPower ( 2.0 , ( ( 2.0 + ( real_T )
ixstart ) - 1.0 ) * 8.0 ) * ( real_T ) rtB . pvzfxkfrym . FrameBody .
TimeStamp [ ixstart + 1 ] ; } rtB . gxl0qnv0wl = ( dry5wjbfll || rtB .
cb5viixu3v ) ; dry5wjbfll = ! rtB . bmtamjdpq0 ; if ( ( ! dry5wjbfll ) && (
rtPrevZCX . olvwi3gjly != ZERO_ZCSIG ) ) { rtDW . nuuny40hx2 = 4 ; }
rtPrevZCX . olvwi3gjly = dry5wjbfll ; rtB . o3b30tl2jl = rtB . pvzfxkfrym .
Header . FrameCtrl . Subtype ; if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . jse1x2mabm
. LoggedData ) , & rtB . nzefzefnpd [ 0 ] , 0 ) ; } } } if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . kcbbgjkdte . LoggedData ) , & rtB . fzud2bim0u [ 0 ] , 0
) ; } } } rtB . en52az2zkv = rtB . pvzfxkfrym . Header . FrameCtrl . Type ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { int32_T j ;
uint32_T u ; boolean_T bpw1isp3lg [ 16 ] ; int32_T i ; memcpy ( & rtB .
aihjtfsxoe [ 0 ] , & rtP . p80211 . SYNC [ 0 ] , sizeof ( boolean_T ) << 7U )
; for ( i = 0 ; i < 16 ; i ++ ) { rtB . aihjtfsxoe [ i + 128 ] = rtP . p80211
. SFD [ i ] ; } for ( i = 0 ; i < 8 ; i ++ ) { rtB . j1zvrkidan [ i ] = rtP .
p80211 . SIGNAL [ i ] ; rtB . j1zvrkidan [ i + 8 ] = rtP . p80211 . SERVICE [
i ] ; } i = 0 ; u = ( uint32_T ) rtrtC . fddlrog3tr ; for ( j = 0 ; j < 16 ;
j ++ ) { bpw1isp3lg [ i ] = ( ( u & 1U ) != 0U ) ; u >>= 1 ; i ++ ; } for ( i
= 0 ; i < 16 ; i ++ ) { rtB . j1zvrkidan [ i + 16 ] = bpw1isp3lg [ i ] ; }
srUpdateBC ( rtDW . d41ofodid5 ) ; srUpdateBC ( rtDW . ga3w5swikk ) ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { int32_T frameIdx
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . injuyknmed = rtB . ce2bilylfy
; } for ( frameIdx = 0 ; frameIdx < 39424 ; frameIdx ++ ) { rtDW . ojyliirvek
[ ( uint32_T ) frameIdx ] = rtDW . ojyliirvek [ frameIdx + 5632U ] ; } rtDW .
k4rtvrnhf0 = rtB . ikrlju2x0k ; rtDW . forgi5ndce = rtB . cb5viixu3v ; rtDW .
bsnclpl5kf = rtB . k2aypsd5z0 ; for ( frameIdx = 0 ; frameIdx < 5632 ;
frameIdx ++ ) { rtDW . ojyliirvek [ 39424 + frameIdx ] = rtB . fzud2bim0u [
frameIdx ] ; rtDW . kkpi3mq4dv [ frameIdx ] = rtB . e0moldxafh [ frameIdx ] ;
rtDW . b2xuimdzdq [ ( uint32_T ) frameIdx ] = rtDW . b2xuimdzdq [ frameIdx +
5632U ] ; } memcpy ( & rtDW . b2xuimdzdq [ 5632 ] , & rtB . jfy5xy2kuc [ 0 ]
, 5632U * sizeof ( creal_T ) ) ; if ( rtDW . mkelohhz3v ) { rtDW . gofhnz2obi
= rtB . cb5viixu3v ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { if (
rtDW . cxjyxxcg2g . isInitialized == 1 ) { rtDW . cxjyxxcg2g . isInitialized
= 2 ; } if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr
= rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 158 ) ;
ssSetNumBlockIO ( rtS , 47 ) ; ssSetNumBlockParams ( rtS , 1588 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.000128 ) ;
ssSetSampleTime ( rtS , 1 , 0.001024 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 695390017U ) ; ssSetChecksumVal ( rtS , 1 ,
52591618U ) ; ssSetChecksumVal ( rtS , 2 , 2693007962U ) ; ssSetChecksumVal (
rtS , 3 , 2889503436U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { void * dwork =
( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork
, 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset
( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo (
rtS , & dtInfo ) ; dtInfo . numDataTypes = 28 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; } project_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"project" ) ; ssSetPath ( rtS , "project" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.000128 ) ;
ssSetFixedStepSize ( rtS , 0.000128 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 11264 , 8 , 45056 , 1 , 5632 , 1 , 32 , 11264 ,
1 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 1 , 5632 , 1 , 1 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 11264 , 8 , 45056 , 1 ,
5632 , 1 , 32 , 11264 , 1 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7
, 1 , 5632 , 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds
[ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32
, SS_INT32 , SS_INT32 , SS_INT32 , SS_UINT16 , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN } ; static int_T rt_LoggedStateComplexSignals [ ] = {
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [
] = { "CircBuff" , "TapDelayBuff" , "DSTATE" , "txBuff" , "DSTATE" , "Sums" ,
"StatesBuff" , "DSTATE" , "prevSymbol" , "omegatTnow" , "errors" , "symbols"
, "prevPhase" , "phDiff" , "memIdx" , "STDelay" , "curTx" , "PhaseIdx" ,
"CoeffIdx" , "TapDelayIndex" , "shiftReg" , "shiftReg" , "DSTATE" ,
"useFrame" , "DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "project/802.11 Transmitter/Channel Frames"
,
"project/802.11 Transmitter/Raised Cosine\nTransmit Filter/FIR\nInterpolation"
, "project/Channel/Channel\nDelay" , "project/Error Rate\nCalculation" ,
"project/802.11 Receiver/Receiver Controller/Match Correlator\nDelay" ,
"project/802.11 Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"project/802.11 Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"project/802.11 Receiver/Receiver Controller/Delay" ,
 "project/802.11 Receiver/Detector/1 Mbps Demod/DBPSK\nDemodulator\nBaseband/M-DPSK\nDemodulator\nBaseband"
, "project/Channel/Phase//\nFrequency\nOffset" ,
"project/Error Rate\nCalculation" , "project/Error Rate\nCalculation" ,
 "project/802.11 Transmitter/PHY Framer and Modulator/1 Mbps Mod/DBPSK\nModulator\nBaseband1/M-DPSK\nModulator\nBaseband"
,
 "project/802.11 Receiver/Detector/1 Mbps Demod/DBPSK\nDemodulator\nBaseband/M-DPSK\nDemodulator\nBaseband"
, "project/802.11 Transmitter/Channel Frames" ,
"project/Error Rate\nCalculation" , "project/Error Rate\nCalculation" ,
"project/802.11 Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"project/802.11 Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"project/802.11 Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"project/802.11 Transmitter/PHY Framer and Modulator/Scrambler\nz^-7+z^-4+1"
, "project/802.11 Receiver/Detector/Descrambler" ,
"project/802.11 Receiver/Unit Delay" , "project/Error Rate\nCalculation" ,
"project/802.11 Receiver/Receiver Controller/Delay1" ,
"project/802.11 Receiver/Unit Delay1" ,
"project/802.11 Receiver/Detector/PLCP Dec Ctrl/Unit Delay1" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "txBuff" , "" , "" , "" ,
"" , "prevSymbol" , "omegatTnow" , "errors" , "symbols" , "prevPhase" ,
"phDiff" , "" , "STDelay" , "curTx" , "" , "" , "" , "shiftReg" , "shiftReg"
, "" , "useFrame" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32
, 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32
, 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_UINT16 , SS_UINT16 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ;
static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 27 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , ( NULL ) , { rt_LoggedStateLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , {
rt_LoggedStateNames } , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert
} ; static void * rt_LoggedStateSignalPtrs [ 27 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . ailpq0rvcs ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . lmuqtlmunv ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . ojyliirvek ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . nxrvg42s1b ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) rtDW . kkpi3mq4dv ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . kiumjrib5v ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) rtDW . kzmf0ug1yx ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) rtDW . b2xuimdzdq ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . okigztdyds ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . i0xxik035e ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . jkrzwvg42y ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . cjz5p51owa ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . jlx5xb42se ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) rtDW . cgrqqqshve ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . dav0t3w3pe ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . kdlighzsdy ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . iddnucdkzw ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . kj0q5rzbdy ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . hkk5t5orjh ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . iecicl2cix ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) rtDW . aylag3piuu ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) rtDW . k0zhdh21rc ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . bsnclpl5kf ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) rtDW . dgazdfp4j2 ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . k4rtvrnhf0 ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . forgi5ndce ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . gofhnz2obi ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } { ZCSigState * zc = ( ZCSigState * ) &
rtPrevZCX ; ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . olvwi3gjly =
ZERO_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 695390017U ) ; ssSetChecksumVal (
rtS , 1 , 52591618U ) ; ssSetChecksumVal ( rtS , 2 , 2693007962U ) ;
ssSetChecksumVal ( rtS , 3 , 2889503436U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 16 ] ; gblRTWExtModeInfo = &
rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . ga3w5swikk ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW . bmnckkg14d ;
systemRan [ 3 ] = ( sysRanDType * ) & rtDW . ga3w5swikk ; systemRan [ 4 ] = (
sysRanDType * ) & rtDW . ga3w5swikk ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = ( sysRanDType * ) & rtDW . d41ofodid5 ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = (
sysRanDType * ) & rtDW . nuuny40hx2 ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
