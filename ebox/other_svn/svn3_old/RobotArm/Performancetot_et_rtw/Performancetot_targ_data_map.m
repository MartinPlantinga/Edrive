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
    ;% Auto data (Performancetot_P)
    ;%
      section.nData     = 77;
      section.data(77)  = dumData; %prealloc
      
	  ;% Performancetot_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_P.Switch_Threshold_p
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_P.Switch_Threshold_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Performancetot_P.Solenoid_Y0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Performancetot_P.offsetX_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Performancetot_P.offsetZ_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Performancetot_P.GainR_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Performancetot_P.DctintegratorR_P1_Size
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Performancetot_P.DctintegratorR_P1
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% Performancetot_P.DctintegratorR_P2_Size
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% Performancetot_P.DctintegratorR_P2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% Performancetot_P.DctleadlagR_P1_Size
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% Performancetot_P.DctleadlagR_P1
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% Performancetot_P.DctleadlagR_P2_Size
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% Performancetot_P.DctleadlagR_P2
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% Performancetot_P.DctleadlagR_P3_Size
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% Performancetot_P.DctleadlagR_P3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 21;
	
	  ;% Performancetot_P.Dct2lowpassR_P1_Size
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 22;
	
	  ;% Performancetot_P.Dct2lowpassR_P1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 24;
	
	  ;% Performancetot_P.Dct2lowpassR_P2_Size
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 25;
	
	  ;% Performancetot_P.Dct2lowpassR_P2
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 27;
	
	  ;% Performancetot_P.Dct2lowpassR_P3_Size
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% Performancetot_P.Dct2lowpassR_P3
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 30;
	
	  ;% Performancetot_P.GainR_Gain_p
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 31;
	
	  ;% Performancetot_P.DctintegratorR_P1_Size_f
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 32;
	
	  ;% Performancetot_P.DctintegratorR_P1_k
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 34;
	
	  ;% Performancetot_P.DctintegratorR_P2_Size_h
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 35;
	
	  ;% Performancetot_P.DctintegratorR_P2_n
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 37;
	
	  ;% Performancetot_P.DctleadlagR_P1_Size_g
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 38;
	
	  ;% Performancetot_P.DctleadlagR_P1_l
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 40;
	
	  ;% Performancetot_P.DctleadlagR_P2_Size_e
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 41;
	
	  ;% Performancetot_P.DctleadlagR_P2_k
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 43;
	
	  ;% Performancetot_P.DctleadlagR_P3_Size_l
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 44;
	
	  ;% Performancetot_P.DctleadlagR_P3_i
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 46;
	
	  ;% Performancetot_P.Dct2lowpassR_P1_Size_n
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 47;
	
	  ;% Performancetot_P.Dct2lowpassR_P1_i
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 49;
	
	  ;% Performancetot_P.Dct2lowpassR_P2_Size_k
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 50;
	
	  ;% Performancetot_P.Dct2lowpassR_P2_l
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 52;
	
	  ;% Performancetot_P.Dct2lowpassR_P3_Size_f
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 53;
	
	  ;% Performancetot_P.Dct2lowpassR_P3_h
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 55;
	
	  ;% Performancetot_P.GainR_Gain_n
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 56;
	
	  ;% Performancetot_P.DctintegratorR_P1_Size_a
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 57;
	
	  ;% Performancetot_P.DctintegratorR_P1_a
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 59;
	
	  ;% Performancetot_P.DctintegratorR_P2_Size_j
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 60;
	
	  ;% Performancetot_P.DctintegratorR_P2_m
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 62;
	
	  ;% Performancetot_P.DctleadlagR_P1_Size_h
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 63;
	
	  ;% Performancetot_P.DctleadlagR_P1_m
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 65;
	
	  ;% Performancetot_P.DctleadlagR_P2_Size_a
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 66;
	
	  ;% Performancetot_P.DctleadlagR_P2_f
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 68;
	
	  ;% Performancetot_P.DctleadlagR_P3_Size_b
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 69;
	
	  ;% Performancetot_P.DctleadlagR_P3_o
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 71;
	
	  ;% Performancetot_P.Dct2lowpassR_P1_Size_i
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 72;
	
	  ;% Performancetot_P.Dct2lowpassR_P1_f
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 74;
	
	  ;% Performancetot_P.Dct2lowpassR_P2_Size_h
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 75;
	
	  ;% Performancetot_P.Dct2lowpassR_P2_c
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 77;
	
	  ;% Performancetot_P.Dct2lowpassR_P3_Size_m
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 78;
	
	  ;% Performancetot_P.Dct2lowpassR_P3_m
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 80;
	
	  ;% Performancetot_P.Gain_Gain
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 81;
	
	  ;% Performancetot_P.Gain1_Gain
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 82;
	
	  ;% Performancetot_P.fcpos_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 83;
	
	  ;% Performancetot_P.fcneg_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 84;
	
	  ;% Performancetot_P.speed0_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 85;
	
	  ;% Performancetot_P.Gain_Gain_k
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 86;
	
	  ;% Performancetot_P.Gain1_Gain_m
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 87;
	
	  ;% Performancetot_P.fcpos_Value_i
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 88;
	
	  ;% Performancetot_P.fcneg_Value_i
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 89;
	
	  ;% Performancetot_P.speed0_Value_m
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 90;
	
	  ;% Performancetot_P.Gain_Gain_d
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 91;
	
	  ;% Performancetot_P.Gain1_Gain_b
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 92;
	
	  ;% Performancetot_P.fcpos_Value_f
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 93;
	
	  ;% Performancetot_P.fcneg_Value_k
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 94;
	
	  ;% Performancetot_P.speed0_Value_mf
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 95;
	
	  ;% Performancetot_P.gravitationconstant_Value
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 96;
	
	  ;% Performancetot_P.SFunction_P1_Size
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 97;
	
	  ;% Performancetot_P.SFunction_P1
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 99;
	
	  ;% Performancetot_P.UnitDelay1_InitialCondition
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 100;
	
	  ;% Performancetot_P.UnitDelay_InitialCondition
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 101;
	
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
    ;% Auto data (Performancetot_B)
    ;%
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% Performancetot_B.UnitDelay1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_B.UnitDelay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% Performancetot_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Performancetot_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Performancetot_B.RobotArm_sfcn_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Performancetot_B.FromFile
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% Performancetot_B.Sum8
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% Performancetot_B.Sum7
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% Performancetot_B.GainR
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% Performancetot_B.DctintegratorR
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% Performancetot_B.DctleadlagR
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% Performancetot_B.Dct2lowpassR
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% Performancetot_B.GainR_i
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% Performancetot_B.DctintegratorR_b
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% Performancetot_B.DctleadlagR_g
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% Performancetot_B.Dct2lowpassR_o
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% Performancetot_B.GainR_m
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% Performancetot_B.DctintegratorR_e
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% Performancetot_B.DctleadlagR_p
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% Performancetot_B.Dct2lowpassR_a
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% Performancetot_B.Speed
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Performancetot_B.Speed_f
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
	  ;% Performancetot_B.Speed_n
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 26;
	
	  ;% Performancetot_B.Sum4
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 27;
	
	  ;% Performancetot_B.Sum5
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 28;
	
	  ;% Performancetot_B.Sum6
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 29;
	
	  ;% Performancetot_B.FromFile3
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 30;
	
	  ;% Performancetot_B.SFunction
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 31;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Performancetot_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 28;
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
    nTotSects     = 9;
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
    ;% Auto data (Performancetot_DW)
    ;%
      section.nData     = 72;
      section.data(72)  = dumData; %prealloc
      
	  ;% Performancetot_DW.UnitDelay1_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% Performancetot_DW.TimeStampA
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% Performancetot_DW.LastUAtTimeA
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 87;
	
	  ;% Performancetot_DW.TimeStampB
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 88;
	
	  ;% Performancetot_DW.LastUAtTimeB
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 89;
	
	  ;% Performancetot_DW.TimeStampA_i
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 90;
	
	  ;% Performancetot_DW.LastUAtTimeA_e
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 91;
	
	  ;% Performancetot_DW.TimeStampB_g
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 92;
	
	  ;% Performancetot_DW.LastUAtTimeB_d
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 93;
	
	  ;% Performancetot_DW.TimeStampA_p
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 94;
	
	  ;% Performancetot_DW.LastUAtTimeA_g
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 95;
	
	  ;% Performancetot_DW.TimeStampB_n
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 96;
	
	  ;% Performancetot_DW.LastUAtTimeB_k
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 97;
	
	  ;% Performancetot_DW.TimeStampA_l
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 98;
	
	  ;% Performancetot_DW.LastUAtTimeA_h
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 99;
	
	  ;% Performancetot_DW.TimeStampB_i
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 100;
	
	  ;% Performancetot_DW.LastUAtTimeB_c
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 101;
	
	  ;% Performancetot_DW.TimeStampA_m
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 102;
	
	  ;% Performancetot_DW.LastUAtTimeA_k
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 103;
	
	  ;% Performancetot_DW.TimeStampB_c
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 104;
	
	  ;% Performancetot_DW.LastUAtTimeB_a
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 105;
	
	  ;% Performancetot_DW.TimeStampA_o
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 106;
	
	  ;% Performancetot_DW.LastUAtTimeA_d
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 107;
	
	  ;% Performancetot_DW.TimeStampB_f
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 108;
	
	  ;% Performancetot_DW.LastUAtTimeB_f
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 109;
	
	  ;% Performancetot_DW.DctintegratorR_RWORK
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 110;
	
	  ;% Performancetot_DW.DctleadlagR_RWORK
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 112;
	
	  ;% Performancetot_DW.Dct2lowpassR_RWORK
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 114;
	
	  ;% Performancetot_DW.DctintegratorR_RWORK_n
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 118;
	
	  ;% Performancetot_DW.DctleadlagR_RWORK_o
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 120;
	
	  ;% Performancetot_DW.Dct2lowpassR_RWORK_o
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 122;
	
	  ;% Performancetot_DW.DctintegratorR_RWORK_a
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 126;
	
	  ;% Performancetot_DW.DctleadlagR_RWORK_b
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 128;
	
	  ;% Performancetot_DW.Dct2lowpassR_RWORK_h
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 130;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Performancetot_DW.FromFile_PWORK.PrevTimePtr
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.ToFile_PWORK.FilePtr
	  section.data(2).logicalSrcIdx = 73;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_DW.FromFile1_PWORK.PrevTimePtr
	  section.data(3).logicalSrcIdx = 74;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Performancetot_DW.ToFile1_PWORK.FilePtr
	  section.data(4).logicalSrcIdx = 75;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Performancetot_DW.FromFile2_PWORK.PrevTimePtr
	  section.data(5).logicalSrcIdx = 76;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Performancetot_DW.ToFile2_PWORK.FilePtr
	  section.data(6).logicalSrcIdx = 77;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Performancetot_DW.FromFile3_PWORK.PrevTimePtr
	  section.data(7).logicalSrcIdx = 78;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 79;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 80;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 81;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 82;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 83;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 84;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 85;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 86;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 87;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 88;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Performancetot_DW.ToFile_IWORK.Count
	  section.data(1).logicalSrcIdx = 89;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.ToFile1_IWORK.Count
	  section.data(2).logicalSrcIdx = 90;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_DW.ToFile2_IWORK.Count
	  section.data(3).logicalSrcIdx = 91;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 93;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 94;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Performancetot_DW.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 97;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 98;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 99;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 100;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Performancetot_DW.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 101;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Performancetot_DW.Controller_MODE
	  section.data(1).logicalSrcIdx = 102;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
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


  targMap.checksum0 = 1666068970;
  targMap.checksum1 = 3320072924;
  targMap.checksum2 = 481068246;
  targMap.checksum3 = 756017321;

