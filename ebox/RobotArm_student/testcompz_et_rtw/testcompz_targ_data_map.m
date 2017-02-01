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
    ;% Auto data (testcompz_P)
    ;%
      section.nData     = 32;
      section.data(32)  = dumData; %prealloc
      
	  ;% testcompz_P.Solenoid_Y0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_P.SineWave_Amp
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% testcompz_P.SineWave_Bias
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% testcompz_P.SineWave_Freq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% testcompz_P.SineWave_Phase
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% testcompz_P.ReferenceR_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% testcompz_P.Gain_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% testcompz_P.ReferenceX_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% testcompz_P.Gain_Gain_o
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% testcompz_P.Dctpd_P1_Size
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% testcompz_P.Dctpd_P1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% testcompz_P.Dctpd_P2_Size
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 12;
	
	  ;% testcompz_P.Dctpd_P2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% testcompz_P.Dctpd_P3_Size
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% testcompz_P.Dctpd_P3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% testcompz_P.Dct2lowpass_P1_Size
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% testcompz_P.Dct2lowpass_P1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% testcompz_P.Dct2lowpass_P2_Size
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% testcompz_P.Dct2lowpass_P2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 23;
	
	  ;% testcompz_P.Dct2lowpass_P3_Size
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 24;
	
	  ;% testcompz_P.Dct2lowpass_P3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 26;
	
	  ;% testcompz_P.FeedforwardR_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 27;
	
	  ;% testcompz_P.FeedforwardX_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 28;
	
	  ;% testcompz_P.Gravitycomp_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 29;
	
	  ;% testcompz_P.frictionleft_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 30;
	
	  ;% testcompz_P.frictionright_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 31;
	
	  ;% testcompz_P.Switch_Threshold
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 32;
	
	  ;% testcompz_P.ReferenceSolenoid_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 33;
	
	  ;% testcompz_P.SFunction_P1_Size
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 34;
	
	  ;% testcompz_P.SFunction_P1
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 36;
	
	  ;% testcompz_P.UnitDelay1_X0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 37;
	
	  ;% testcompz_P.UnitDelay_X0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 38;
	
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
    ;% Auto data (testcompz_B)
    ;%
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% testcompz_B.UnitDelay1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_B.UnitDelay
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% testcompz_B.RobotArm_sfcn_o1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% testcompz_B.RobotArm_sfcn_o2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% testcompz_B.RobotArm_sfcn_o4
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% testcompz_B.SineWave
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 9;
	
	  ;% testcompz_B.Sum3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% testcompz_B.Dctpd
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 11;
	
	  ;% testcompz_B.Dct2lowpass
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% testcompz_B.Sum4
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 13;
	
	  ;% testcompz_B.Sum5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 14;
	
	  ;% testcompz_B.Sum6
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% testcompz_B.ReferenceSolenoid
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% testcompz_B.SFunction
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_B.RobotArm_sfcn_o3
	  section.data(1).logicalSrcIdx = 14;
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
    ;% Auto data (testcompz_DWork)
    ;%
      section.nData     = 42;
      section.data(42)  = dumData; %prealloc
      
	  ;% testcompz_DWork.UnitDelay1_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK6
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK8
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK9
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK10
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK11
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK13
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK14
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK15
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK16
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK17
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 22;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK18
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK19
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK20
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 32;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK21
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 34;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK22
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK24
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK25
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 46;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK26
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 50;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK27
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 54;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK28
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 56;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK29
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 60;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK30
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 64;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK31
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 66;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK32
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK33
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 72;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK34
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 76;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK35
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK36
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% testcompz_DWork.Dctpd_RWORK
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 86;
	
	  ;% testcompz_DWork.Dct2lowpass_RWORK
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 88;
	
	  ;% testcompz_DWork.Derivative_RWORK.TimeStampA
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 92;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_DWork.ToFile1_PWORK.FilePtr
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK37
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK38
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK39
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 1;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK40
	  section.data(3).logicalSrcIdx = 46;
	  section.data(3).dtTransOffset = 2;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK41
	  section.data(4).logicalSrcIdx = 47;
	  section.data(4).dtTransOffset = 3;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK42
	  section.data(5).logicalSrcIdx = 48;
	  section.data(5).dtTransOffset = 4;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK43
	  section.data(6).logicalSrcIdx = 49;
	  section.data(6).dtTransOffset = 5;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK44
	  section.data(7).logicalSrcIdx = 50;
	  section.data(7).dtTransOffset = 6;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK45
	  section.data(8).logicalSrcIdx = 51;
	  section.data(8).dtTransOffset = 7;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK46
	  section.data(9).logicalSrcIdx = 52;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_DWork.ToFile1_IWORK.Count
	  section.data(1).logicalSrcIdx = 53;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK47
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK48
	  section.data(2).logicalSrcIdx = 55;
	  section.data(2).dtTransOffset = 1;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK49
	  section.data(3).logicalSrcIdx = 56;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_DWork.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK50
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK51
	  section.data(2).logicalSrcIdx = 59;
	  section.data(2).dtTransOffset = 1;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK52
	  section.data(3).logicalSrcIdx = 60;
	  section.data(3).dtTransOffset = 2;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK53
	  section.data(4).logicalSrcIdx = 61;
	  section.data(4).dtTransOffset = 3;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK54
	  section.data(5).logicalSrcIdx = 62;
	  section.data(5).dtTransOffset = 4;
	
	  ;% testcompz_DWork.RobotArm_sfcn_DWORK55
	  section.data(6).logicalSrcIdx = 63;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% testcompz_DWork.Controller_MODE
	  section.data(1).logicalSrcIdx = 64;
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


  targMap.checksum0 = 953550385;
  targMap.checksum1 = 3388217574;
  targMap.checksum2 = 159927853;
  targMap.checksum3 = 1272090489;

