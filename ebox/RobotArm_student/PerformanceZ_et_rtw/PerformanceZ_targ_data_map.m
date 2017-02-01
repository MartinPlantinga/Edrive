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
    ;% Auto data (PerformanceZ_P)
    ;%
      section.nData     = 40;
      section.data(40)  = dumData; %prealloc
      
	  ;% PerformanceZ_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_P.Solenoid_Y0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceZ_P.ReferenceX1_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceZ_P.Gain_Gain
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceZ_P.fcpos_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceZ_P.fcneg_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% PerformanceZ_P.speed0_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% PerformanceZ_P.Gain1_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% PerformanceZ_P.gravitation_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% PerformanceZ_P.Gain_Gain_c
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% PerformanceZ_P.Dctintegrator_P1_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% PerformanceZ_P.Dctintegrator_P1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% PerformanceZ_P.Dctintegrator_P2_Size
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 13;
	
	  ;% PerformanceZ_P.Dctintegrator_P2
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% PerformanceZ_P.Dctleadlag_P1_Size
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% PerformanceZ_P.Dctleadlag_P1
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% PerformanceZ_P.Dctleadlag_P2_Size
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 19;
	
	  ;% PerformanceZ_P.Dctleadlag_P2
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% PerformanceZ_P.Dctleadlag_P3_Size
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% PerformanceZ_P.Dctleadlag_P3
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 24;
	
	  ;% PerformanceZ_P.Dct2lowpass_P1_Size
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 25;
	
	  ;% PerformanceZ_P.Dct2lowpass_P1
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 27;
	
	  ;% PerformanceZ_P.Dct2lowpass_P2_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 28;
	
	  ;% PerformanceZ_P.Dct2lowpass_P2
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 30;
	
	  ;% PerformanceZ_P.Dct2lowpass_P3_Size
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 31;
	
	  ;% PerformanceZ_P.Dct2lowpass_P3
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 33;
	
	  ;% PerformanceZ_P.ReferenceR_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 34;
	
	  ;% PerformanceZ_P.Gain_Gain_cq
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 35;
	
	  ;% PerformanceZ_P.ReferenceX_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 36;
	
	  ;% PerformanceZ_P.Gain_Gain_m
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 37;
	
	  ;% PerformanceZ_P.FeedforwardR_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 38;
	
	  ;% PerformanceZ_P.FeedforwardX_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 39;
	
	  ;% PerformanceZ_P.ReferenceSolenoid_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 40;
	
	  ;% PerformanceZ_P.SFunction_P1_Size
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 41;
	
	  ;% PerformanceZ_P.SFunction_P1
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 43;
	
	  ;% PerformanceZ_P.Constant_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 44;
	
	  ;% PerformanceZ_P.SFunction_P1_Size_j
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 45;
	
	  ;% PerformanceZ_P.SFunction_P1_i
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 47;
	
	  ;% PerformanceZ_P.UnitDelay1_X0
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 53;
	
	  ;% PerformanceZ_P.UnitDelay_X0
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 54;
	
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
    ;% Auto data (PerformanceZ_B)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% PerformanceZ_B.UnitDelay1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_B.UnitDelay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% PerformanceZ_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% PerformanceZ_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% PerformanceZ_B.RobotArm_sfcn_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% PerformanceZ_B.Sum3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% PerformanceZ_B.Speed
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% PerformanceZ_B.Sum
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% PerformanceZ_B.Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% PerformanceZ_B.Dctintegrator
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% PerformanceZ_B.Dctleadlag
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% PerformanceZ_B.Dct2lowpass
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% PerformanceZ_B.Sum4
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% PerformanceZ_B.Sum5
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% PerformanceZ_B.Sum6
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% PerformanceZ_B.ReferenceSolenoid
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% PerformanceZ_B.SFunction
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% PerformanceZ_B.SFunction_g
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 18;
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
    ;% Auto data (PerformanceZ_DWork)
    ;%
      section.nData     = 45;
      section.data(45)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.UnitDelay1_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% PerformanceZ_DWork.Speed_RWORK.TimeStampA
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% PerformanceZ_DWork.Acceleration_RWORK.TimeStampA
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 87;
	
	  ;% PerformanceZ_DWork.Dctintegrator_RWORK
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 88;
	
	  ;% PerformanceZ_DWork.Dctleadlag_RWORK
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 90;
	
	  ;% PerformanceZ_DWork.Dct2lowpass_RWORK
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 92;
	
	  ;% PerformanceZ_DWork.SFunction_RWORK
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 96;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.ToFile1_PWORK.FilePtr
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 49;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 50;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 51;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 52;
	  section.data(6).dtTransOffset = 5;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 53;
	  section.data(7).dtTransOffset = 6;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 54;
	  section.data(8).dtTransOffset = 7;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 55;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.ToFile1_IWORK.Count
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 58;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 59;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 62;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 63;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 64;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 65;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PerformanceZ_DWork.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 66;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% PerformanceZ_DWork.Controller_MODE
	  section.data(1).logicalSrcIdx = 67;
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


  targMap.checksum0 = 374677946;
  targMap.checksum1 = 4185145491;
  targMap.checksum2 = 3286683720;
  targMap.checksum3 = 2063718784;

