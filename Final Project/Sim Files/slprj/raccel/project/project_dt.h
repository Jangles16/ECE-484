#include "__cf_project.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( struct_WwSR2Tmdjwktx1IY6ENZAF
) , sizeof ( FrameCtrlType ) , sizeof ( MPDUHeaderType ) , sizeof (
CapabilityType ) , sizeof ( InfoElementType ) , sizeof ( BeaconFrameBodyType
) , sizeof ( BeaconMPDUType ) , sizeof ( struct_dEAmvTt9fN03Icx4IJFA4D ) ,
sizeof ( struct_qXCkfgCzkcbb1jmKRmTbPE ) , sizeof (
struct_6vjZE1zVXiMs9MoZnA9ZPB ) , sizeof ( struct_88YLyz49467ZgAX8Jih9nB ) ,
sizeof ( struct_YP8IGiiiEwuzu0vqUDbpiD ) , sizeof ( kk3xchntuf ) , sizeof (
gsa1zzy4is ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" ,
"real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "struct_WwSR2Tmdjwktx1IY6ENZAF" , "FrameCtrlType" ,
"MPDUHeaderType" , "CapabilityType" , "InfoElementType" ,
"BeaconFrameBodyType" , "BeaconMPDUType" , "struct_dEAmvTt9fN03Icx4IJFA4D" ,
"struct_qXCkfgCzkcbb1jmKRmTbPE" , "struct_6vjZE1zVXiMs9MoZnA9ZPB" ,
"struct_88YLyz49467ZgAX8Jih9nB" , "struct_YP8IGiiiEwuzu0vqUDbpiD" ,
"kk3xchntuf" , "gsa1zzy4is" } ; static DataTypeTransition rtBTransitions [ ]
= { { ( char_T * ) ( & rtB . fzud2bim0u [ 0 ] . re ) , 0 , 1 , 56320 } , { (
char_T * ) ( & rtB . bvkx3sf1em [ 0 ] . re ) , 0 , 1 , 25344 } , { ( char_T *
) ( & rtB . pvzfxkfrym ) , 20 , 0 , 1 } , { ( char_T * ) ( & rtB . frwtrtnl12
[ 0 ] . re ) , 0 , 1 , 2816 } , { ( char_T * ) ( & rtB . js0wj3ht0i [ 0 ] .
re ) , 0 , 1 , 256 } , { ( char_T * ) ( & rtB . png3anych3 [ 0 ] ) , 0 , 0 ,
4 } , { ( char_T * ) ( & rtB . l0nk5xxkr1 ) , 5 , 0 , 2 } , { ( char_T * ) (
& rtB . blansmpnzc [ 0 ] ) , 3 , 0 , 165 } , { ( char_T * ) ( & rtB .
ejklemswad ) , 8 , 0 , 199 } , { ( char_T * ) ( & rtB . hxqiytsi2o .
mt4clpln1e [ 0 ] ) , 0 , 0 , 32 } , { ( char_T * ) ( & rtB . kyqjjdftn3 .
mt4clpln1e [ 0 ] ) , 0 , 0 , 32 } , { ( char_T * ) ( & rtB . mhw41tnrld .
mt4clpln1e [ 0 ] ) , 0 , 0 , 32 } , { ( char_T * ) ( & rtB . kuesm00ub3 .
mt4clpln1e [ 0 ] ) , 0 , 0 , 32 } , { ( char_T * ) ( & rtDW . cxjyxxcg2g ) ,
27 , 0 , 1 } , { ( char_T * ) ( & rtDW . dmrh52ujzk ) , 20 , 0 , 1 } , { (
char_T * ) ( & rtDW . ailpq0rvcs [ 0 ] . re ) , 0 , 1 , 146518 } , { ( char_T
* ) ( & rtDW . i0xxik035e ) , 0 , 0 , 14 } , { ( char_T * ) ( & rtDW .
ohj0k0k5tf ) , 26 , 0 , 1 } , { ( char_T * ) ( & rtDW . jse1x2mabm .
LoggedData ) , 11 , 0 , 2 } , { ( char_T * ) ( & rtDW . dav0t3w3pe ) , 6 , 0
, 24 } , { ( char_T * ) ( & rtDW . lr4j34ow0i ) , 7 , 0 , 5 } , { ( char_T *
) ( & rtDW . bsnclpl5kf ) , 5 , 0 , 3 } , { ( char_T * ) ( & rtDW .
dgazdfp4j2 [ 0 ] ) , 8 , 0 , 5635 } , { ( char_T * ) ( & rtDW . nuuny40hx2 )
, 2 , 0 , 4 } , { ( char_T * ) ( & rtDW . injuyknmed ) , 8 , 0 , 1105 } , { (
char_T * ) ( & rtDW . hxqiytsi2o . gvmrj4p5th [ 0 ] ) , 6 , 0 , 2 } , { (
char_T * ) ( & rtDW . kyqjjdftn3 . gvmrj4p5th [ 0 ] ) , 6 , 0 , 2 } , { (
char_T * ) ( & rtDW . mhw41tnrld . gvmrj4p5th [ 0 ] ) , 6 , 0 , 2 } , { (
char_T * ) ( & rtDW . kuesm00ub3 . gvmrj4p5th [ 0 ] ) , 6 , 0 , 2 } } ;
static DataTypeTransitionTable rtBTransTable = { 29U , rtBTransitions } ;
static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
p80211 ) , 14 , 0 , 1 } , { ( char_T * ) ( & rtP . Channel_EsNo ) , 0 , 0 , 3
} , { ( char_T * ) ( & rtP . AWGNChannel_seed ) , 7 , 0 , 1 } , { ( char_T *
) ( & rtP . CompareToConstant_const ) , 5 , 0 , 1 } , { ( char_T * ) ( & rtP
. MPDUIndices_Value [ 0 ] ) , 0 , 0 , 147 } , { ( char_T * ) ( & rtP .
u024Framer_PadValue . re ) , 0 , 1 , 2820 } , { ( char_T * ) ( & rtP .
u024Framer_outDims [ 0 ] ) , 6 , 0 , 10 } , { ( char_T * ) ( & rtP .
Delay1_DelayLength ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
UnitDelay_InitialCondition ) , 5 , 0 , 2 } , { ( char_T * ) ( & rtP .
PLCPCRCFlag_Y0 ) , 8 , 0 , 7 } , { ( char_T * ) ( & rtP . hxqiytsi2o .
GetElementData_elemIDIdx ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
kyqjjdftn3 . GetElementData_elemIDIdx ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . mhw41tnrld . GetElementData_elemIDIdx ) , 0 , 0 , 1 } , { ( char_T * )
( & rtP . kuesm00ub3 . GetElementData_elemIDIdx ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 14U , rtPTransitions } ;
