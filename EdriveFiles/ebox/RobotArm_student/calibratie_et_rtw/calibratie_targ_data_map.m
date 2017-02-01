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
    ;% Auto data (calibratie_P)
    ;%
      section.nData     = 79;
      section.data(79)  = dumData; %prealloc
      
	  ;% calibratie_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_P.Switch_Threshold_b
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% calibratie_P.Switch_Threshold_f
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% calibratie_P.Solenoid_Y0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% calibratie_P.Constant_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% calibratie_P.Constant1_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% calibratie_P.Constant2_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% calibratie_P.GainR_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% calibratie_P.DctintegratorR_P1_Size
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% calibratie_P.DctintegratorR_P1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% calibratie_P.DctintegratorR_P2_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% calibratie_P.DctintegratorR_P2
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% calibratie_P.DctleadlagR_P1_Size
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% calibratie_P.DctleadlagR_P1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% calibratie_P.DctleadlagR_P2_Size
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% calibratie_P.DctleadlagR_P2
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% calibratie_P.DctleadlagR_P3_Size
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% calibratie_P.DctleadlagR_P3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 22;
	
	  ;% calibratie_P.Dct2lowpassR_P1_Size
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 23;
	
	  ;% calibratie_P.Dct2lowpassR_P1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 25;
	
	  ;% calibratie_P.Dct2lowpassR_P2_Size
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 26;
	
	  ;% calibratie_P.Dct2lowpassR_P2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% calibratie_P.Dct2lowpassR_P3_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 29;
	
	  ;% calibratie_P.Dct2lowpassR_P3
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 31;
	
	  ;% calibratie_P.GainR_Gain_m
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 32;
	
	  ;% calibratie_P.DctintegratorR_P1_Size_p
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 33;
	
	  ;% calibratie_P.DctintegratorR_P1_j
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 35;
	
	  ;% calibratie_P.DctintegratorR_P2_Size_c
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 36;
	
	  ;% calibratie_P.DctintegratorR_P2_h
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 38;
	
	  ;% calibratie_P.DctleadlagR_P1_Size_h
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 39;
	
	  ;% calibratie_P.DctleadlagR_P1_k
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 41;
	
	  ;% calibratie_P.DctleadlagR_P2_Size_h
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 42;
	
	  ;% calibratie_P.DctleadlagR_P2_d
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 44;
	
	  ;% calibratie_P.DctleadlagR_P3_Size_e
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 45;
	
	  ;% calibratie_P.DctleadlagR_P3_e
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 47;
	
	  ;% calibratie_P.Dct2lowpassR_P1_Size_c
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 48;
	
	  ;% calibratie_P.Dct2lowpassR_P1_m
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 50;
	
	  ;% calibratie_P.Dct2lowpassR_P2_Size_i
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 51;
	
	  ;% calibratie_P.Dct2lowpassR_P2_k
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 53;
	
	  ;% calibratie_P.Dct2lowpassR_P3_Size_j
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 54;
	
	  ;% calibratie_P.Dct2lowpassR_P3_n
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 56;
	
	  ;% calibratie_P.GainR_Gain_j
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 57;
	
	  ;% calibratie_P.DctintegratorR_P1_Size_d
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 58;
	
	  ;% calibratie_P.DctintegratorR_P1_d
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 60;
	
	  ;% calibratie_P.DctintegratorR_P2_Size_o
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 61;
	
	  ;% calibratie_P.DctintegratorR_P2_h3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 63;
	
	  ;% calibratie_P.DctleadlagR_P1_Size_e
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 64;
	
	  ;% calibratie_P.DctleadlagR_P1_p
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 66;
	
	  ;% calibratie_P.DctleadlagR_P2_Size_f
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 67;
	
	  ;% calibratie_P.DctleadlagR_P2_m
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 69;
	
	  ;% calibratie_P.DctleadlagR_P3_Size_o
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 70;
	
	  ;% calibratie_P.DctleadlagR_P3_g
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 72;
	
	  ;% calibratie_P.Dct2lowpassR_P1_Size_o
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 73;
	
	  ;% calibratie_P.Dct2lowpassR_P1_o
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 75;
	
	  ;% calibratie_P.Dct2lowpassR_P2_Size_ij
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 76;
	
	  ;% calibratie_P.Dct2lowpassR_P2_o
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 78;
	
	  ;% calibratie_P.Dct2lowpassR_P3_Size_p
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 79;
	
	  ;% calibratie_P.Dct2lowpassR_P3_o
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 81;
	
	  ;% calibratie_P.Gain_Gain
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 82;
	
	  ;% calibratie_P.Gain1_Gain
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 83;
	
	  ;% calibratie_P.fcpos_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 84;
	
	  ;% calibratie_P.fcneg_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 85;
	
	  ;% calibratie_P.speed0_Value
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 86;
	
	  ;% calibratie_P.Gain_Gain_l
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 87;
	
	  ;% calibratie_P.Gain1_Gain_l
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 88;
	
	  ;% calibratie_P.fcpos_Value_k
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 89;
	
	  ;% calibratie_P.fcneg_Value_e
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 90;
	
	  ;% calibratie_P.speed0_Value_b
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 91;
	
	  ;% calibratie_P.Gain_Gain_j
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 92;
	
	  ;% calibratie_P.Gain1_Gain_j
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 93;
	
	  ;% calibratie_P.fcpos_Value_e
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 94;
	
	  ;% calibratie_P.fcneg_Value_g
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 95;
	
	  ;% calibratie_P.speed0_Value_n
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 96;
	
	  ;% calibratie_P.gravitationconstant_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 97;
	
	  ;% calibratie_P.ReferenceSolenoid_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 98;
	
	  ;% calibratie_P.SFunction_P1_Size
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 99;
	
	  ;% calibratie_P.SFunction_P1
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 101;
	
	  ;% calibratie_P.UnitDelay1_X0
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 102;
	
	  ;% calibratie_P.UnitDelay_X0
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 103;
	
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
    ;% Auto data (calibratie_B)
    ;%
      section.nData     = 25;
      section.data(25)  = dumData; %prealloc
      
	  ;% calibratie_B.UnitDelay1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_B.UnitDelay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% calibratie_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% calibratie_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% calibratie_B.RobotArm_sfcn_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% calibratie_B.GainR
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% calibratie_B.DctintegratorR
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% calibratie_B.DctleadlagR
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% calibratie_B.Dct2lowpassR
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% calibratie_B.GainR_o
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% calibratie_B.DctintegratorR_b
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% calibratie_B.DctleadlagR_k
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% calibratie_B.Dct2lowpassR_g
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% calibratie_B.GainR_p
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% calibratie_B.DctintegratorR_l
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% calibratie_B.DctleadlagR_d
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% calibratie_B.Dct2lowpassR_d
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% calibratie_B.Speed
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% calibratie_B.Speed_e
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% calibratie_B.Speed_a
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% calibratie_B.Sum4
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% calibratie_B.Sum5
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
	  ;% calibratie_B.Sum6
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 26;
	
	  ;% calibratie_B.ReferenceSolenoid
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 27;
	
	  ;% calibratie_B.SFunction
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 28;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% calibratie_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 25;
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
    ;% Auto data (calibratie_DWork)
    ;%
      section.nData     = 54;
      section.data(54)  = dumData; %prealloc
      
	  ;% calibratie_DWork.UnitDelay1_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% calibratie_DWork.DctintegratorR_RWORK
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% calibratie_DWork.DctleadlagR_RWORK
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 88;
	
	  ;% calibratie_DWork.Dct2lowpassR_RWORK
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 90;
	
	  ;% calibratie_DWork.DctintegratorR_RWORK_o
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 94;
	
	  ;% calibratie_DWork.DctleadlagR_RWORK_k
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 96;
	
	  ;% calibratie_DWork.Dct2lowpassR_RWORK_b
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 98;
	
	  ;% calibratie_DWork.DctintegratorR_RWORK_j
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 102;
	
	  ;% calibratie_DWork.DctleadlagR_RWORK_kb
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 104;
	
	  ;% calibratie_DWork.Dct2lowpassR_RWORK_h
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 106;
	
	  ;% calibratie_DWork.Speed_RWORK.TimeStampA
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 110;
	
	  ;% calibratie_DWork.Acceleration_RWORK.TimeStampA
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 111;
	
	  ;% calibratie_DWork.Speed_RWORK_o.TimeStampA
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 112;
	
	  ;% calibratie_DWork.Acceleration_RWORK_h.TimeStampA
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 113;
	
	  ;% calibratie_DWork.Speed_RWORK_a.TimeStampA
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 114;
	
	  ;% calibratie_DWork.Acceleration_RWORK_a.TimeStampA
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 56;
	  section.data(2).dtTransOffset = 1;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 57;
	  section.data(3).dtTransOffset = 2;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 58;
	  section.data(4).dtTransOffset = 3;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 59;
	  section.data(5).dtTransOffset = 4;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 60;
	  section.data(6).dtTransOffset = 5;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 61;
	  section.data(7).dtTransOffset = 6;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 62;
	  section.data(8).dtTransOffset = 7;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 63;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% calibratie_DWork.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 69;
	  section.data(2).dtTransOffset = 1;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 70;
	  section.data(3).dtTransOffset = 2;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 71;
	  section.data(4).dtTransOffset = 3;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 72;
	  section.data(5).dtTransOffset = 4;
	
	  ;% calibratie_DWork.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 73;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% calibratie_DWork.Controller_MODE
	  section.data(1).logicalSrcIdx = 74;
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


  targMap.checksum0 = 1055110914;
  targMap.checksum1 = 3601619212;
  targMap.checksum2 = 2367844512;
  targMap.checksum3 = 4238665610;

