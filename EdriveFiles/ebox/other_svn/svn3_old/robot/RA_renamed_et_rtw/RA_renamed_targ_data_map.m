  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
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
    ;% Auto data (RA_renamed_P)
    ;%
      section.nData     = 66;
      section.data(66)  = dumData; %prealloc
      
	  ;% RA_renamed_P.Solenoid_Y0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_P.FeedforwardR_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA_renamed_P.FeedforwardX_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA_renamed_P.FeedforwardZ_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA_renamed_P.SineWave_Amp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA_renamed_P.SineWave_Bias
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% RA_renamed_P.SineWave_Freq
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% RA_renamed_P.SineWave_Phase
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% RA_renamed_P.Gain1_Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% RA_renamed_P.Dctleadlag2_P1_Size
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% RA_renamed_P.Dctleadlag2_P1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% RA_renamed_P.Dctleadlag2_P2_Size
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% RA_renamed_P.Dctleadlag2_P2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% RA_renamed_P.Dctleadlag2_P3_Size
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% RA_renamed_P.Dctleadlag2_P3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% RA_renamed_P.Dctintegrator3_P1_Size
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% RA_renamed_P.Dctintegrator3_P1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% RA_renamed_P.Dctintegrator3_P2_Size
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% RA_renamed_P.Dctintegrator3_P2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 23;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1_Size
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 24;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 26;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2_Size
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 27;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 29;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3_Size
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 30;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 32;
	
	  ;% RA_renamed_P.ReferenceX_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 33;
	
	  ;% RA_renamed_P.ReferenceZ_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 34;
	
	  ;% RA_renamed_P.Gain1_Gain_c
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 35;
	
	  ;% RA_renamed_P.Dctleadlag2_P1_Size_e
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 36;
	
	  ;% RA_renamed_P.Dctleadlag2_P1_n
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 38;
	
	  ;% RA_renamed_P.Dctleadlag2_P2_Size_f
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 39;
	
	  ;% RA_renamed_P.Dctleadlag2_P2_n
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 41;
	
	  ;% RA_renamed_P.Dctleadlag2_P3_Size_i
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 42;
	
	  ;% RA_renamed_P.Dctleadlag2_P3_e
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 44;
	
	  ;% RA_renamed_P.Dctintegrator3_P1_Size_o
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 45;
	
	  ;% RA_renamed_P.Dctintegrator3_P1_g
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 47;
	
	  ;% RA_renamed_P.Dctintegrator3_P2_Size_c
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 48;
	
	  ;% RA_renamed_P.Dctintegrator3_P2_m
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 50;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1_Size_h
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 51;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1_g
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 53;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2_Size_l
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 54;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2_c
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 56;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3_Size_p
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 57;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3_a
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 59;
	
	  ;% RA_renamed_P.Gain1_Gain_d
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 60;
	
	  ;% RA_renamed_P.Dctleadlag2_P1_Size_o
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 61;
	
	  ;% RA_renamed_P.Dctleadlag2_P1_f
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 63;
	
	  ;% RA_renamed_P.Dctleadlag2_P2_Size_g
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 64;
	
	  ;% RA_renamed_P.Dctleadlag2_P2_nq
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 66;
	
	  ;% RA_renamed_P.Dctleadlag2_P3_Size_h
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 67;
	
	  ;% RA_renamed_P.Dctleadlag2_P3_i
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 69;
	
	  ;% RA_renamed_P.Dctintegrator3_P1_Size_e
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 70;
	
	  ;% RA_renamed_P.Dctintegrator3_P1_o
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 72;
	
	  ;% RA_renamed_P.Dctintegrator3_P2_Size_o
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 73;
	
	  ;% RA_renamed_P.Dctintegrator3_P2_p
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 75;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1_Size_n
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 76;
	
	  ;% RA_renamed_P.Dct2lowpass4_P1_i
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 78;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2_Size_e
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 79;
	
	  ;% RA_renamed_P.Dct2lowpass4_P2_p
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 81;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3_Size_f
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 82;
	
	  ;% RA_renamed_P.Dct2lowpass4_P3_n
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 84;
	
	  ;% RA_renamed_P.ReferenceSolenoid_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 85;
	
	  ;% RA_renamed_P.SFunction_P1_Size
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 86;
	
	  ;% RA_renamed_P.SFunction_P1
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 88;
	
	  ;% RA_renamed_P.UnitDelay_InitialCondition
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 89;
	
	  ;% RA_renamed_P.UnitDelay1_InitialCondition
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 90;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
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
    nTotSects     = 2;
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
    ;% Auto data (RA_renamed_B)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% RA_renamed_B.UnitDelay
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_B.UnitDelay1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% RA_renamed_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% RA_renamed_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% RA_renamed_B.Gain1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 9;
	
	  ;% RA_renamed_B.Dctleadlag2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% RA_renamed_B.Dctintegrator3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 11;
	
	  ;% RA_renamed_B.Dct2lowpass4
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
	  ;% RA_renamed_B.Sum4
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 13;
	
	  ;% RA_renamed_B.Gain1_a
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 14;
	
	  ;% RA_renamed_B.Dctleadlag2_g
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 15;
	
	  ;% RA_renamed_B.Dctintegrator3_n
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 16;
	
	  ;% RA_renamed_B.Dct2lowpass4_l
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 17;
	
	  ;% RA_renamed_B.Sum5
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 18;
	
	  ;% RA_renamed_B.Gain1_ak
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 19;
	
	  ;% RA_renamed_B.Dctleadlag2_p
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 20;
	
	  ;% RA_renamed_B.Dctintegrator3_nr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 21;
	
	  ;% RA_renamed_B.Dct2lowpass4_h
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 22;
	
	  ;% RA_renamed_B.Sum6
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 23;
	
	  ;% RA_renamed_B.ReferenceSolenoid
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 24;
	
	  ;% RA_renamed_B.Clock
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 25;
	
	  ;% RA_renamed_B.SFunction
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% RA_renamed_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    nTotSects     = 7;
    sectIdxOffset = 2;
    
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
    ;% Auto data (RA_renamed_DW)
    ;%
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_DW.UnitDelay1_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% RA_renamed_DW.Dctleadlag2_RWORK
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% RA_renamed_DW.Dctintegrator3_RWORK
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 88;
	
	  ;% RA_renamed_DW.Dct2lowpass4_RWORK
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 90;
	
	  ;% RA_renamed_DW.Dctleadlag2_RWORK_a
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 94;
	
	  ;% RA_renamed_DW.Dctintegrator3_RWORK_p
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 96;
	
	  ;% RA_renamed_DW.Dct2lowpass4_RWORK_d
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 98;
	
	  ;% RA_renamed_DW.Dctleadlag2_RWORK_a5
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 102;
	
	  ;% RA_renamed_DW.Dctintegrator3_RWORK_k
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 104;
	
	  ;% RA_renamed_DW.Dct2lowpass4_RWORK_l
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 106;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 50;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 51;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 52;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 53;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 54;
	  section.data(6).dtTransOffset = 5;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 55;
	  section.data(7).dtTransOffset = 6;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 56;
	  section.data(8).dtTransOffset = 7;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 57;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 59;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 60;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 63;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 64;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 65;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 66;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA_renamed_DW.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 67;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% RA_renamed_DW.Controller_MODE
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
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


  targMap.checksum0 = 3510567136;
  targMap.checksum1 = 1452408391;
  targMap.checksum2 = 616722308;
  targMap.checksum3 = 2818514376;

