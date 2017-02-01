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
    ;% Auto data (PerformanceXRZ_P)
    ;%
      section.nData     = 80;
      section.data(80)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_P.Switch_Threshold_g
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceXRZ_P.Switch_Threshold_p
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceXRZ_P.Solenoid_Y0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceXRZ_P.Constant_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceXRZ_P.SFunction_P1_Size
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% PerformanceXRZ_P.SFunction_P1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7;
	
	  ;% PerformanceXRZ_P.GainR_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1_Size
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 16;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 19;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1_Size
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 20;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 22;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2_Size
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 23;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 25;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3_Size
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 26;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 28;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1_Size
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 29;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 31;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2_Size
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 32;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 34;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 35;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 37;
	
	  ;% PerformanceXRZ_P.GainR_Gain_f
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1_Size_a
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 39;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1_d
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 41;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2_Size_l
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 42;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2_b
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 44;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1_Size_k
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 45;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1_l
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 47;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2_Size_o
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 48;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2_k
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 50;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3_Size_b
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 51;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3_g
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 53;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1_Size_p
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 54;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1_o
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 56;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2_Size_o
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 57;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2_c
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 59;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3_Size_o
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 60;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3_e
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 62;
	
	  ;% PerformanceXRZ_P.GainR_Gain_h
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 63;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1_Size_o
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 64;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P1_a
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 66;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2_Size_d
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 67;
	
	  ;% PerformanceXRZ_P.DctintegratorR_P2_i
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 69;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1_Size_kw
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 70;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P1_g
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 72;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2_Size_c
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 73;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P2_ka
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 75;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3_Size_f
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 76;
	
	  ;% PerformanceXRZ_P.DctleadlagR_P3_b
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 78;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1_Size_o
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 79;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P1_b
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 81;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2_Size_i
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 82;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P2_j
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 84;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3_Size_g
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 85;
	
	  ;% PerformanceXRZ_P.Dct2lowpassR_P3_i
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 87;
	
	  ;% PerformanceXRZ_P.ReferenceSolenoid1_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 88;
	
	  ;% PerformanceXRZ_P.Gain_Gain
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 89;
	
	  ;% PerformanceXRZ_P.Gain1_Gain
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 90;
	
	  ;% PerformanceXRZ_P.fcpos_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 91;
	
	  ;% PerformanceXRZ_P.fcneg_Value
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 92;
	
	  ;% PerformanceXRZ_P.speed0_Value
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 93;
	
	  ;% PerformanceXRZ_P.Gain_Gain_b
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 94;
	
	  ;% PerformanceXRZ_P.Gain1_Gain_k
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 95;
	
	  ;% PerformanceXRZ_P.fcpos_Value_g
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 96;
	
	  ;% PerformanceXRZ_P.fcneg_Value_k
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 97;
	
	  ;% PerformanceXRZ_P.speed0_Value_i
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 98;
	
	  ;% PerformanceXRZ_P.Gain_Gain_d
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 99;
	
	  ;% PerformanceXRZ_P.Gain1_Gain_b
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 100;
	
	  ;% PerformanceXRZ_P.fcpos_Value_b
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 101;
	
	  ;% PerformanceXRZ_P.fcneg_Value_i
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 102;
	
	  ;% PerformanceXRZ_P.speed0_Value_b
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 103;
	
	  ;% PerformanceXRZ_P.gravitationconstant_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 104;
	
	  ;% PerformanceXRZ_P.ReferenceSolenoid_Value
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 105;
	
	  ;% PerformanceXRZ_P.SFunction_P1_Size_g
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 106;
	
	  ;% PerformanceXRZ_P.SFunction_P1_a
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 108;
	
	  ;% PerformanceXRZ_P.UnitDelay1_X0
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 109;
	
	  ;% PerformanceXRZ_P.UnitDelay_X0
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 110;
	
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
    ;% Auto data (PerformanceXRZ_B)
    ;%
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_B.UnitDelay1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_B.UnitDelay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% PerformanceXRZ_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% PerformanceXRZ_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% PerformanceXRZ_B.RobotArm_sfcn_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% PerformanceXRZ_B.SFunction
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% PerformanceXRZ_B.GainR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% PerformanceXRZ_B.DctintegratorR
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% PerformanceXRZ_B.DctleadlagR
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% PerformanceXRZ_B.Dct2lowpassR
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% PerformanceXRZ_B.GainR_g
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
	  ;% PerformanceXRZ_B.DctintegratorR_a
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 17;
	
	  ;% PerformanceXRZ_B.DctleadlagR_i
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 18;
	
	  ;% PerformanceXRZ_B.Dct2lowpassR_p
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% PerformanceXRZ_B.GainR_h
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 20;
	
	  ;% PerformanceXRZ_B.DctintegratorR_e
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 21;
	
	  ;% PerformanceXRZ_B.DctleadlagR_ig
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 22;
	
	  ;% PerformanceXRZ_B.Dct2lowpassR_n
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 23;
	
	  ;% PerformanceXRZ_B.Speed
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 24;
	
	  ;% PerformanceXRZ_B.Speed_m
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 25;
	
	  ;% PerformanceXRZ_B.Speed_f
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 26;
	
	  ;% PerformanceXRZ_B.Sum4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 27;
	
	  ;% PerformanceXRZ_B.Sum5
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 28;
	
	  ;% PerformanceXRZ_B.Sum6
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 29;
	
	  ;% PerformanceXRZ_B.ReferenceSolenoid
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 30;
	
	  ;% PerformanceXRZ_B.SFunction_o
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 31;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 26;
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
    ;% Auto data (PerformanceXRZ_DWork)
    ;%
      section.nData     = 55;
      section.data(55)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.UnitDelay1_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% PerformanceXRZ_DWork.SFunction_RWORK
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% PerformanceXRZ_DWork.DctintegratorR_RWORK
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 136;
	
	  ;% PerformanceXRZ_DWork.DctleadlagR_RWORK
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 138;
	
	  ;% PerformanceXRZ_DWork.Dct2lowpassR_RWORK
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 140;
	
	  ;% PerformanceXRZ_DWork.DctintegratorR_RWORK_o
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 144;
	
	  ;% PerformanceXRZ_DWork.DctleadlagR_RWORK_m
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 146;
	
	  ;% PerformanceXRZ_DWork.Dct2lowpassR_RWORK_h
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 148;
	
	  ;% PerformanceXRZ_DWork.DctintegratorR_RWORK_i
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 152;
	
	  ;% PerformanceXRZ_DWork.DctleadlagR_RWORK_n
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 154;
	
	  ;% PerformanceXRZ_DWork.Dct2lowpassR_RWORK_n
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 156;
	
	  ;% PerformanceXRZ_DWork.Speed_RWORK.TimeStampA
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 160;
	
	  ;% PerformanceXRZ_DWork.Acceleration_RWORK.TimeStampA
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 161;
	
	  ;% PerformanceXRZ_DWork.Speed_RWORK_f.TimeStampA
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 162;
	
	  ;% PerformanceXRZ_DWork.Acceleration_RWORK_d.TimeStampA
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 163;
	
	  ;% PerformanceXRZ_DWork.Speed_RWORK_m.TimeStampA
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 164;
	
	  ;% PerformanceXRZ_DWork.Acceleration_RWORK_j.TimeStampA
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 165;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.ToFile1_PWORK.FilePtr
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 58;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 59;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 60;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 61;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 62;
	  section.data(6).dtTransOffset = 5;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 63;
	  section.data(7).dtTransOffset = 6;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 64;
	  section.data(8).dtTransOffset = 7;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 65;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.ToFile1_IWORK.Count
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 68;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 69;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 72;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 73;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 74;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 75;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceXRZ_DWork.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 76;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceXRZ_DWork.Controller_MODE
	  section.data(1).logicalSrcIdx = 77;
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


  targMap.checksum0 = 1530004757;
  targMap.checksum1 = 628483263;
  targMap.checksum2 = 2433937300;
  targMap.checksum3 = 2485999242;

