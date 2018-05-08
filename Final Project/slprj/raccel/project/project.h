#include "__cf_project.h"
#ifndef RTW_HEADER_project_h_
#define RTW_HEADER_project_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef project_COMMON_INCLUDES_
#define project_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "project_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME project
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (47) 
#define NUM_ZC_EVENTS (1) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T mt4clpln1e [ 32 ] ; } aikybtsj0j ; typedef struct {
int32_T gvmrj4p5th [ 2 ] ; } j5ctwrdnoe ; typedef struct { creal_T kx1ntkgnia
[ 8800 ] ; creal_T fzud2bim0u [ 5632 ] ; creal_T nzefzefnpd [ 5632 ] ;
creal_T jfy5xy2kuc [ 5632 ] ; creal_T e0moldxafh [ 5632 ] ; creal_T
lw4xp41e1u [ 5632 ] ; creal_T dohdssua10 [ 5632 ] ; creal_T m0kzgdhzqg [ 5632
] ; creal_T gtc1w0gygb [ 5631 ] ; real_T lvpqnqpxu4 [ 5632 ] ; real_T
k45nwcwi25 [ 5632 ] ; real_T lpblkkpfkz [ 5632 ] ; creal_T bvkx3sf1em [ 1408
] ; creal_T mesonpfm4v [ 11264 ] ; creal_T gaiixqm2uv [ 1408 ] ;
BeaconMPDUType pvzfxkfrym ; creal_T frwtrtnl12 [ 1408 ] ; BeaconFrameBodyType
luawrspqrd ; BeaconFrameBodyType cjdzbzy4wt ; creal_T e4fna2lj1c [ 800 ] ;
int16_T k2vkyuyjd4 [ 5632 ] ; int16_T bdnqmnrmbh [ 5632 ] ; creal_T
js0wj3ht0i [ 128 ] ; real_T png3anych3 [ 2 ] ; real_T njsa1boqih ; real_T
nfrz0m4ksz ; uint16_T l0nk5xxkr1 ; uint16_T k2aypsd5z0 ; uint8_T blansmpnzc [
2 ] ; uint8_T m3dvdwazqy [ 6 ] ; uint8_T lkfqackkir [ 6 ] ; uint8_T
gknqx5tmmk [ 2 ] ; uint8_T a0gx5m2w2q [ 6 ] ; uint8_T fxsyckzo02 [ 11 ] ;
uint8_T jlttncaanz [ 32 ] ; uint8_T omppevnb4p [ 32 ] ; uint8_T exs1qjlcol [
32 ] ; uint8_T jc1bi2eouc [ 32 ] ; uint8_T o3b30tl2jl ; uint8_T en52az2zkv ;
uint8_T hjdknbavtt ; uint8_T iyl4yi0uvq ; boolean_T ejklemswad ; boolean_T
bmtamjdpq0 ; boolean_T cgjkqywdur [ 16 ] ; boolean_T gxl0qnv0wl ; boolean_T
aihjtfsxoe [ 144 ] ; boolean_T j1zvrkidan [ 32 ] ; boolean_T ce2bilylfy ;
boolean_T ikrlju2x0k ; boolean_T cb5viixu3v ; boolean_T flyjfnu152 ;
aikybtsj0j hxqiytsi2o ; aikybtsj0j kyqjjdftn3 ; aikybtsj0j mhw41tnrld ;
aikybtsj0j kuesm00ub3 ; } B ; typedef struct { gsa1zzy4is cxjyxxcg2g ;
BeaconMPDUType dmrh52ujzk ; creal_T ailpq0rvcs [ 11264 ] ; creal_T lmuqtlmunv
[ 8 ] ; creal_T ojyliirvek [ 45056 ] ; creal_T nxrvg42s1b ; creal_T
kkpi3mq4dv [ 5632 ] ; creal_T kiumjrib5v ; creal_T kzmf0ug1yx [ 32 ] ;
creal_T b2xuimdzdq [ 11264 ] ; creal_T okigztdyds ; real_T i0xxik035e ;
real_T jkrzwvg42y ; real_T cjz5p51owa ; real_T jlx5xb42se ; real_T cgrqqqshve
[ 3 ] ; real_T doxqen31fx ; real_T krosbjypb5 ; real_T e4mopuginb ; real_T
eiqgaons3r ; real_T nx414qoue1 ; real_T oic55tm5hw ; real_T aawlgefele ;
kk3xchntuf ohj0k0k5tf ; struct { void * LoggedData ; } jse1x2mabm ; struct {
void * LoggedData ; } kcbbgjkdte ; int32_T dav0t3w3pe ; int32_T kdlighzsdy ;
int32_T iddnucdkzw ; int32_T kj0q5rzbdy ; int32_T hkk5t5orjh ; int32_T
iecicl2cix ; int32_T aylag3piuu [ 7 ] ; int32_T k0zhdh21rc [ 7 ] ; int32_T
owhzzoxezm [ 2 ] ; int32_T k1z1xzg4vk [ 2 ] ; uint32_T lr4j34ow0i ; uint32_T
nxhcar1emo [ 2 ] ; uint32_T ds1ypoaczg [ 2 ] ; uint16_T bsnclpl5kf ; uint16_T
hfnphpu2ia ; uint16_T cvwym5cgd4 ; boolean_T dgazdfp4j2 [ 5632 ] ; boolean_T
k4rtvrnhf0 ; boolean_T forgi5ndce ; boolean_T gofhnz2obi ; int8_T nuuny40hx2
; int8_T d41ofodid5 ; int8_T ga3w5swikk ; int8_T bmnckkg14d ; boolean_T
injuyknmed ; boolean_T pov34jhvyq ; boolean_T gwjx5jmivj ; boolean_T
adzs4zhpm5 ; boolean_T ph3qmg42pw [ 72 ] ; boolean_T ghdgqfto1n [ 1024 ] ;
boolean_T gpr4bwdt2r ; boolean_T jji3alrc23 ; boolean_T er1duxiunp ;
boolean_T huxisfnple ; boolean_T mkelohhz3v ; j5ctwrdnoe hxqiytsi2o ;
j5ctwrdnoe kyqjjdftn3 ; j5ctwrdnoe mhw41tnrld ; j5ctwrdnoe kuesm00ub3 ; } DW
; typedef struct { ZCSigState olvwi3gjly ; } PrevZCX ; typedef struct { const
real_T f00zqecg2x ; const real_T fddlrog3tr ; } ConstB ; typedef struct {
real_T fk03qsi2yu [ 2 ] ; uint8_T buo0q3kmga [ 8 ] ; } ConstP ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct hu3rgy0cv4_ {
real_T GetElementData_elemIDIdx ; } ; struct P_ {
struct_WwSR2Tmdjwktx1IY6ENZAF p80211 ; real_T Channel_EsNo ; real_T
Channel_delay ; real_T Channel_freqOffset ; uint32_T AWGNChannel_seed ;
uint16_T CompareToConstant_const ; real_T MPDUIndices_Value [ 72 ] ; real_T
ChannelFrames_ic ; real_T FIRInterpolation_FILTER_COEFF [ 36 ] ; real_T
ChannelDelay_InitialCondition ; real_T PhaseFrequencyOffset_Phase ; real_T
RandomSource_VarianceRTP ; real_T MatchCorrelatorDelay_InitialCondition ;
real_T FIRDecimation_FILT [ 33 ] ; real_T Delay_InitialCondition ; creal_T
u024Framer_PadValue ; creal_T AllZeros_Value [ 1408 ] ; creal_T
RandomSource_MeanRTP ; int32_T u024Framer_outDims [ 2 ] ; int32_T
u024Framer_padBefore [ 2 ] ; int32_T u024Framer_padAfter [ 2 ] ; int32_T
u024Framer_inWorkAdd [ 2 ] ; int32_T u024Framer_outWorkAdd [ 2 ] ; uint32_T
Delay1_DelayLength ; uint32_T MatchCorrelatorDelay_DelayLength ; uint16_T
UnitDelay_InitialCondition ; uint16_T LengthinSamples_Gain ; boolean_T
PLCPCRCFlag_Y0 ; boolean_T MPDUCRCFlag_Y0 ; boolean_T
UnitDelay1_InitialCondition ; boolean_T ReceivedMPDUGUI_openGUIBoolean ;
boolean_T RateTransition_InitialCondition ; boolean_T Delay1_InitialCondition
; boolean_T UnitDelay1_InitialCondition_hc2uujannf ; hu3rgy0cv4 hxqiytsi2o ;
hu3rgy0cv4 kyqjjdftn3 ; hu3rgy0cv4 mhw41tnrld ; hu3rgy0cv4 kuesm00ub3 ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern PrevZCX rtPrevZCX ; extern P rtP ; extern const ConstB rtrtC ;
extern const ConstP rtConstP ; extern const rtwCAPI_ModelMappingStaticInfo *
project_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern
const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const
int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern
const char * gblInportFileName ; extern const int_T gblNumRootInportBlks ;
extern const int_T gblNumModelInputs ; extern const int_T
gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ; extern
const int_T gblInportComplex [ ] ; extern const int_T gblInportInterpoFlag [
] ; extern const int_T gblInportContinuous [ ] ; extern const int_T
gblParameterTuningTid ; extern size_t gblCurrentSFcnIdx ; extern DataMapInfo
* rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
