  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 14;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.p80211
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtP.Channel_EsNo
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Channel_delay
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Channel_freqOffset
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.AWGNChannel_seed
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.CompareToConstant_const
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtP.MPDUIndices_Value
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.ChannelFrames_ic
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 72;
	
	  ;% rtP.FIRInterpolation_FILTER_COEFF
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 73;
	
	  ;% rtP.ChannelDelay_InitialCondition
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 109;
	
	  ;% rtP.PhaseFrequencyOffset_Phase
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 110;
	
	  ;% rtP.RandomSource_VarianceRTP
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 111;
	
	  ;% rtP.MatchCorrelatorDelay_InitialCondition
	  section.data(7).logicalSrcIdx = 12;
	  section.data(7).dtTransOffset = 112;
	
	  ;% rtP.FIRDecimation_FILT
	  section.data(8).logicalSrcIdx = 13;
	  section.data(8).dtTransOffset = 113;
	
	  ;% rtP.Delay_InitialCondition
	  section.data(9).logicalSrcIdx = 14;
	  section.data(9).dtTransOffset = 146;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtP.u024Framer_PadValue
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.AllZeros_Value
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.RandomSource_MeanRTP
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 1409;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtP.u024Framer_outDims
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.u024Framer_padBefore
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.u024Framer_padAfter
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.u024Framer_inWorkAdd
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtP.u024Framer_outWorkAdd
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.Delay1_DelayLength
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.MatchCorrelatorDelay_DelayLength
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.UnitDelay_InitialCondition
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.LengthinSamples_Gain
	  section.data(2).logicalSrcIdx = 26;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtP.PLCPCRCFlag_Y0
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.MPDUCRCFlag_Y0
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.UnitDelay1_InitialCondition
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.ReceivedMPDUGUI_openGUIBoolean
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.RateTransition_InitialCondition
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Delay1_InitialCondition
	  section.data(6).logicalSrcIdx = 32;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.UnitDelay1_InitialCondition_hc2uujannf
	  section.data(7).logicalSrcIdx = 33;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.hxqiytsi2o.GetElementData_elemIDIdx
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kyqjjdftn3.GetElementData_elemIDIdx
	  section.data(1).logicalSrcIdx = 35;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.mhw41tnrld.GetElementData_elemIDIdx
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.kuesm00ub3.GetElementData_elemIDIdx
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(14) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 13;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.fzud2bim0u
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nzefzefnpd
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 5632;
	
	  ;% rtB.jfy5xy2kuc
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 11264;
	
	  ;% rtB.e0moldxafh
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 16896;
	
	  ;% rtB.lw4xp41e1u
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 22528;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.bvkx3sf1em
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mesonpfm4v
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1408;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.pvzfxkfrym
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.frwtrtnl12
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.js0wj3ht0i
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.png3anych3
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.njsa1boqih
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtB.nfrz0m4ksz
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.l0nk5xxkr1
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.k2aypsd5z0
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtB.blansmpnzc
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.m3dvdwazqy
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtB.lkfqackkir
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 8;
	
	  ;% rtB.gknqx5tmmk
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 14;
	
	  ;% rtB.a0gx5m2w2q
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 16;
	
	  ;% rtB.fxsyckzo02
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 22;
	
	  ;% rtB.jlttncaanz
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 33;
	
	  ;% rtB.omppevnb4p
	  section.data(8).logicalSrcIdx = 24;
	  section.data(8).dtTransOffset = 65;
	
	  ;% rtB.exs1qjlcol
	  section.data(9).logicalSrcIdx = 25;
	  section.data(9).dtTransOffset = 97;
	
	  ;% rtB.jc1bi2eouc
	  section.data(10).logicalSrcIdx = 26;
	  section.data(10).dtTransOffset = 129;
	
	  ;% rtB.o3b30tl2jl
	  section.data(11).logicalSrcIdx = 27;
	  section.data(11).dtTransOffset = 161;
	
	  ;% rtB.en52az2zkv
	  section.data(12).logicalSrcIdx = 28;
	  section.data(12).dtTransOffset = 162;
	
	  ;% rtB.hjdknbavtt
	  section.data(13).logicalSrcIdx = 29;
	  section.data(13).dtTransOffset = 163;
	
	  ;% rtB.iyl4yi0uvq
	  section.data(14).logicalSrcIdx = 30;
	  section.data(14).dtTransOffset = 164;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% rtB.ejklemswad
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bmtamjdpq0
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.cgjkqywdur
	  section.data(3).logicalSrcIdx = 34;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.gxl0qnv0wl
	  section.data(4).logicalSrcIdx = 35;
	  section.data(4).dtTransOffset = 18;
	
	  ;% rtB.aihjtfsxoe
	  section.data(5).logicalSrcIdx = 36;
	  section.data(5).dtTransOffset = 19;
	
	  ;% rtB.j1zvrkidan
	  section.data(6).logicalSrcIdx = 37;
	  section.data(6).dtTransOffset = 163;
	
	  ;% rtB.ce2bilylfy
	  section.data(7).logicalSrcIdx = 38;
	  section.data(7).dtTransOffset = 195;
	
	  ;% rtB.ikrlju2x0k
	  section.data(8).logicalSrcIdx = 39;
	  section.data(8).dtTransOffset = 196;
	
	  ;% rtB.cb5viixu3v
	  section.data(9).logicalSrcIdx = 41;
	  section.data(9).dtTransOffset = 197;
	
	  ;% rtB.flyjfnu152
	  section.data(10).logicalSrcIdx = 42;
	  section.data(10).dtTransOffset = 198;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.hxqiytsi2o.mt4clpln1e
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kyqjjdftn3.mt4clpln1e
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.mhw41tnrld.mt4clpln1e
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.kuesm00ub3.mt4clpln1e
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(13) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 16;
    sectIdxOffset = 13;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.cxjyxxcg2g
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.dmrh52ujzk
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.ailpq0rvcs
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.lmuqtlmunv
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 11264;
	
	  ;% rtDW.ojyliirvek
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 11272;
	
	  ;% rtDW.nxrvg42s1b
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 56328;
	
	  ;% rtDW.kkpi3mq4dv
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 56329;
	
	  ;% rtDW.kiumjrib5v
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 61961;
	
	  ;% rtDW.kzmf0ug1yx
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 61962;
	
	  ;% rtDW.b2xuimdzdq
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 61994;
	
	  ;% rtDW.okigztdyds
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 73258;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.i0xxik035e
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jkrzwvg42y
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cjz5p51owa
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.jlx5xb42se
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.cgrqqqshve
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.doxqen31fx
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.krosbjypb5
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.e4mopuginb
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.eiqgaons3r
	  section.data(9).logicalSrcIdx = 19;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtDW.nx414qoue1
	  section.data(10).logicalSrcIdx = 20;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.oic55tm5hw
	  section.data(11).logicalSrcIdx = 21;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtDW.aawlgefele
	  section.data(12).logicalSrcIdx = 22;
	  section.data(12).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ohj0k0k5tf
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.jse1x2mabm.LoggedData
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.kcbbgjkdte.LoggedData
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% rtDW.dav0t3w3pe
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.kdlighzsdy
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.iddnucdkzw
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.kj0q5rzbdy
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.hkk5t5orjh
	  section.data(5).logicalSrcIdx = 30;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.iecicl2cix
	  section.data(6).logicalSrcIdx = 31;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.aylag3piuu
	  section.data(7).logicalSrcIdx = 32;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.k0zhdh21rc
	  section.data(8).logicalSrcIdx = 33;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtDW.owhzzoxezm
	  section.data(9).logicalSrcIdx = 34;
	  section.data(9).dtTransOffset = 20;
	
	  ;% rtDW.k1z1xzg4vk
	  section.data(10).logicalSrcIdx = 35;
	  section.data(10).dtTransOffset = 22;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.lr4j34ow0i
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nxhcar1emo
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ds1ypoaczg
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.bsnclpl5kf
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hfnphpu2ia
	  section.data(2).logicalSrcIdx = 40;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cvwym5cgd4
	  section.data(3).logicalSrcIdx = 41;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.dgazdfp4j2
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.k4rtvrnhf0
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 5632;
	
	  ;% rtDW.forgi5ndce
	  section.data(3).logicalSrcIdx = 44;
	  section.data(3).dtTransOffset = 5633;
	
	  ;% rtDW.gofhnz2obi
	  section.data(4).logicalSrcIdx = 45;
	  section.data(4).dtTransOffset = 5634;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.nuuny40hx2
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.d41ofodid5
	  section.data(2).logicalSrcIdx = 47;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ga3w5swikk
	  section.data(3).logicalSrcIdx = 48;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.bmnckkg14d
	  section.data(4).logicalSrcIdx = 49;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.injuyknmed
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pov34jhvyq
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.gwjx5jmivj
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.adzs4zhpm5
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ph3qmg42pw
	  section.data(5).logicalSrcIdx = 54;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ghdgqfto1n
	  section.data(6).logicalSrcIdx = 55;
	  section.data(6).dtTransOffset = 76;
	
	  ;% rtDW.gpr4bwdt2r
	  section.data(7).logicalSrcIdx = 56;
	  section.data(7).dtTransOffset = 1100;
	
	  ;% rtDW.jji3alrc23
	  section.data(8).logicalSrcIdx = 57;
	  section.data(8).dtTransOffset = 1101;
	
	  ;% rtDW.er1duxiunp
	  section.data(9).logicalSrcIdx = 58;
	  section.data(9).dtTransOffset = 1102;
	
	  ;% rtDW.huxisfnple
	  section.data(10).logicalSrcIdx = 59;
	  section.data(10).dtTransOffset = 1103;
	
	  ;% rtDW.mkelohhz3v
	  section.data(11).logicalSrcIdx = 60;
	  section.data(11).dtTransOffset = 1104;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hxqiytsi2o.gvmrj4p5th
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kyqjjdftn3.gvmrj4p5th
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.mhw41tnrld.gvmrj4p5th
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.kuesm00ub3.gvmrj4p5th
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 695390017;
  targMap.checksum1 = 52591618;
  targMap.checksum2 = 2693007962;
  targMap.checksum3 = 2889503436;

