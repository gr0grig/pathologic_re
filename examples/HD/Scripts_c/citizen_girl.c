// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,GetDirection/1,StopAsync/0,UnlookAsync/1,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,GetScene/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,AddItem/3,AddItem/4,self/1,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetGameTime/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,CanSee/2,SetVariable/2,WorkWithCorpse/1,Barter/1,ClearSubContainer/1
// @STRINGS: W:Neutral|W:all|W:idle|W:head|W:attack_on|W:attack_stay|W:attack_off|A:GetPosition|W:Can't retreat, distance: |A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:Can't find lsh animation : |W:.bin|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:d1GhostCatHDPathologic|W:quest_ghost_cat|A:SetReturnValue|W:branch|W:reputation|W:alpha_pills|W:meradorm|W:beta_pills|W:monomicin|W:lockpick|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0x28
// @RUN_TASK: 1
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=bool,bool,bool params=0
// @EVENT_0: op=0x40 vars=object
// @EVENT_17: op=0x54 vars=object
// @EVENT_30: op=0x6c vars=object,object,bool
// @EVENT_40: op=0x88 vars=object
// @EVENT_42: op=0x9c vars=object,string
// @EVENT_26: op=0xc1 vars=string
// @EVENT_1: op=0xcf vars=object
// @EVENT_3: op=0xe2 vars=object
// @EVENT_7: op=0xe8 vars=int
// @EVENT_6: op=0xf4 vars=
// @EVENT_41: op=0x10b vars=object
// @EVENT_10: op=0x17c vars=object
// @EVENT_28: op=0x180 vars=
// @TASK_2: vars= params=0
// @EVENT_0: op=0x199 vars=object
// @EVENT_17: op=0x1ad vars=object
// @EVENT_30: op=0x1c5 vars=object,object,bool
// @EVENT_40: op=0x1e1 vars=object
// @EVENT_42: op=0x1f5 vars=object,string
// @EVENT_26: op=0x21a vars=string
// @EVENT_6: op=0x228 vars=
// @EVENT_1: op=0x22f vars=object
// @TASK_3: vars=object params=1
// @EVENT_0: op=0x2cb vars=object
// @EVENT_17: op=0x2df vars=object
// @EVENT_30: op=0x2f7 vars=object,object,bool
// @EVENT_40: op=0x313 vars=object
// @EVENT_42: op=0x327 vars=object,string
// @EVENT_26: op=0x34c vars=string
// @EVENT_41: op=0x365 vars=object
// @EVENT_7: op=0x36e vars=int
// @EVENT_6: op=0x391 vars=
// @EVENT_1: op=0x398 vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_6: op=0x3c2 vars=
// @EVENT_7: op=0x430 vars=int
// @EVENT_41: op=0x46b vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4eb vars=int
// @EVENT_41: op=0x526 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x53f vars=
// @EVENT_7: op=0x5ad vars=int
// @EVENT_41: op=0x5e8 vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_6: op=0x601 vars=
// @EVENT_7: op=0x66f vars=int
// @EVENT_41: op=0x6aa vars=object
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a5 vars=int,int
// @STANDALONE_EVENT_16: op=0x167d vars=object,string
// @STANDALONE_EVENT_41: op=0x167f vars=object
// @STANDALONE_EVENT_22: op=0x1681 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x1683 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0xc1,0xcf,0xe2,0xe8,0xf4,0x10b,0x17c,0x21a,0x228,0x22f,0x34c,0x365,0x391,0x398,0x3a6,0x3c2,0x46b,0x526,0x53f,0x5e8,0x601,0x6aa,0x70d,0x98f,0x9a5,0x1593,0x15cb,0x1630,0x1638,0x1641,0x164b,0x167d,0x167f,0x1681,0x1683,0x1685,0x16a5,0x16d5,0x16db,0x171d,0x1726,0x172e,0x1738,0x1740,0x174a,0x1794,0x1797,0x1799,0x179c,0x179e,0x17a1,0x17ad,0x17c4,0x17cc,0x17d3,0x17d9,0x17dc,0x17de,0x17e8,0x17ed,0x17f9,0x1805,0x180f,0x1819,0x1823,0x182d,0x1837,0x1841,0x184b,0x1855,0x185f,0x1869,0x1873,0x187d,0x1887,0x1891,0x1898,0x189f,0x18a6,0x18ad,0x18b4,0x18bb,0x18c2,0x18c9,0x18d0,0x18d7,0x18de,0x18e5,0x18fa,0x192a,0x19db

task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0;
	func_6563(var_23_bool);
	if(var_23_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6046(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_32_object = Obj();
		var_22_bool = var_32_object;
		func_6049(var_32_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5851(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5934(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_251(var_24_int);
		}
		var_75_object = Obj();
		var_22_bool = var_75_object;
		func_5944(var_75_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_string = var_29_object;
	var_24_bool = var_30_bool;
	func_6619(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5952(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_251(var_26_int);
			}
			var_110_object = Obj();
			var_22_object = var_110_object;
			func_5962(var_110_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6036(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_22_bool = Obj();
		func_6039();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5765(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_251(var_25_int);
		var_59_object = Obj(); var_60_string = "";
		var_22_string = var_59_object;
		var_23_bool = var_60_string;
		func_5797(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_23_bool = var_209_string;
		var_22_string = var_210_object;
		func_6041(var_210_object);
		var_208_int = var_25_int;
		var_212_bool = var_25_int > (int)0;
		if(var_212_bool == 0) goto Label_192;
		var_214_bool = var_25_int > (int)1;
		if(var_214_bool != 0) {
			func_251(var_25_int);
		}
		var_215_string = ""; var_216_object = Obj();
		var_23_bool = var_215_string;
		var_22_string = var_216_object;
		func_6044();
	}
Label_192:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5864(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_33_string = "";
		var_22_bool = var_33_string;
		func_5880(var_33_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5822(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_38_object = Obj();
		var_22_bool = var_38_object;
		func_5845(var_38_object);
	} else {
		var_112_object = Obj();
		var_22_bool = var_112_object;
		func_276(var_22_bool, var_112_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_object = Obj();
	var_22_bool = var_23_object;
	func_276(var_22_bool, var_23_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_24_bool = var_22_bool != (int)110;
	if(var_24_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_251(var_21_bool);
	func_6055();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool);
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	RequestClearPath(var_22_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6046(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_31_object = Obj();
		var_22_bool = var_31_object;
		func_6049(var_31_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5851(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5934(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_654();
		}
		var_74_object = Obj();
		var_22_bool = var_74_object;
		func_5944(var_74_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_string = var_29_object;
	var_24_bool = var_30_bool;
	func_6619(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5952(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_654();
			}
			var_109_object = Obj();
			var_22_object = var_109_object;
			func_5962(var_109_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6036(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_22_bool = Obj();
		func_6039();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5765(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_654();
		var_58_object = Obj(); var_59_string = "";
		var_22_string = var_58_object;
		var_23_bool = var_59_string;
		func_5797(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_23_bool = var_208_string;
		var_22_string = var_209_object;
		func_6041(var_209_object);
		var_207_int = var_25_int;
		var_211_bool = var_25_int > (int)0;
		if(var_211_bool == 0) goto Label_537;
		var_213_bool = var_25_int > (int)1;
		if(var_213_bool != 0) {
			func_654();
		}
		var_214_string = ""; var_215_object = Obj();
		var_23_bool = var_214_string;
		var_22_string = var_215_object;
		func_6044();
	}
Label_537:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5864(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_654();
		var_32_string = "";
		var_22_bool = var_32_string;
		func_5880(var_32_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654();
	func_6055();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5822(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_654();
		var_37_object = Obj();
		var_22_bool = var_37_object;
		func_5845(var_37_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6046(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_33_object = Obj();
		var_22_bool = var_33_object;
		func_6049(var_33_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5851(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5934(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_858();
		}
		var_76_object = Obj();
		var_22_bool = var_76_object;
		func_5944(var_76_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0;
	var_22_object = var_28_object;
	var_23_string = var_29_object;
	var_24_bool = var_30_bool;
	func_6619(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5952(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_858();
			}
			var_111_object = Obj();
			var_22_object = var_111_object;
			func_5962(var_111_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_6036(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_22_bool = Obj();
		func_6039();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5765(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_858();
		var_60_object = Obj(); var_61_string = "";
		var_22_string = var_60_object;
		var_23_bool = var_61_string;
		func_5797(var_60_object, var_61_string);
	} else {
		var_209_int = 0; var_210_string = ""; var_211_object = Obj();
		var_23_bool = var_210_string;
		var_22_string = var_211_object;
		func_6041(var_211_object);
		var_209_int = var_25_int;
		var_213_bool = var_25_int > (int)0;
		if(var_213_bool == 0) goto Label_843;
		var_215_bool = var_25_int > (int)1;
		if(var_215_bool != 0) {
			func_858();
		}
		var_216_string = ""; var_217_object = Obj();
		var_23_bool = var_216_string;
		var_22_string = var_217_object;
		func_6044();
	}
Label_843:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5864(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_858();
		var_34_string = "";
		var_22_bool = var_34_string;
		func_5880(var_34_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858();
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_28_bool = var_22_bool != (int)111;
	if(var_28_bool != 0) {
		return 4;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_0_bool;
	func_5396(var_29_bool, var_30_object);
	var_63_bool = var_29_bool == 0; //@nz
	if(var_63_bool != 0) {
		func_858();
		return 4;
	}
	GetDirection(var_25_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_5323(var_66_cvector, var_67_object);
	var_66_cvector = var_26_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_25_cvector = var_73_cvector;
	var_26_cvector = var_74_cvector;
	func_5707(var_72_float, var_73_cvector, var_74_cvector);
	var_97_bool = var_72_float < (float)0.4999999701976776;
	if(var_97_bool != 0) {
		var_98_object = Obj();
		var_98_object = var_0_bool;
		func_5420(var_98_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858();
	func_6055();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5822(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_858();
		var_39_object = Obj();
		var_22_bool = var_39_object;
		func_5845(var_39_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool);
	func_6055();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_969(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_1140((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_1123;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_5318(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1123:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool);
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_1156(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_1327((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_1310;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_5318(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1310:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool);
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool);
	func_6055();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_1350(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_1521((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_1504;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_5318(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1504:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool);
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool);
	func_6055();
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0;
	var_32_bool = var_22_bool != (int)120;
	if(var_32_bool != 0) {
		return 8;
	}
	var_33_bool = var_0_bool == 0; //@ne
	if(var_33_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_27_cvector);
		FindDirLength(var_28_float, var_27_cvector, (float)7000.0);
		var_36_cvector = CVector(0,0,0); var_37_float = 0;
		func_1544(var_30_float, var_36_cvector, (float)1.7453293800354004);
		var_36_cvector = var_29_cvector;
		var_30_float = var_29_cvector | var_29_cvector;
		var_66_bool = 0;
		var_66_bool = 0;
		var_68_bool = var_30_float >= (float)2500.0;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_70_float = var_28_float * var_28_float;
			var_72_float = var_70_float * (float)2.25;
			var_73_bool = var_30_float >= var_72_float;
			if(var_73_bool != 1) {
				var_74_bool = 0;
				func_1715((bool)1, var_74_bool);
				if(var_74_bool != 1) {
					var_69_bool = 0;
				}
			}
			if(var_69_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool == 0) goto Label_1698;
		Stop();
		var_94_cvector = CVector(0,0,0);
		func_5318(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1698:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool);
	var_22_bool = Obj();
	func_5759();
	return 0;
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	if((int)1 != 0) {
		func_5626();
		var_27_bool = var_23_int == (int)45666;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_bool;
			var_29_object = var_0_bool;
			func_6120(var_29_object);
		}
		var_32_bool = var_23_int == (int)45667;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_bool;
			var_34_object = var_0_bool;
			func_6120(var_34_object);
		}
		var_36_bool = var_23_int == (int)45668;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_bool;
			var_38_object = var_0_bool;
			func_6120(var_38_object);
		}
		var_40_bool = var_23_int == (int)39084;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_bool;
			var_42_object = var_0_bool;
			func_6120(var_42_object);
		}
		var_44_bool = var_23_int == (int)39093;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_bool;
			var_46_object = var_0_bool;
			func_6110();
		}
		var_58_bool = var_23_int == (int)39094;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_bool;
			var_60_object = var_0_bool;
			func_6110();
		}
		var_62_bool = var_23_int == (int)39095;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_bool;
			var_64_object = var_0_bool;
			func_6110();
		}
		var_66_bool = var_22_int == (int)45665;
		if(var_66_bool != 0) {
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_bool;
			func_6137(var_68_object);
			if(var_67_bool != 0) {
				var_75_string = "";
				func_2447(var_23_int, "Neutral");
				@@@var_0_bool:SetMessage((int)543209);
				@@@var_0_bool:ClearReplies();
				var_93_bool = 0;
				var_93_bool = 1;
				var_94_bool = 0; var_95_object = Obj();
				var_95_object = var_1_bool;
				func_6219(var_94_bool, var_95_object);
				if(var_94_bool != 1) {
					var_105_bool = 0; var_106_object = Obj();
					var_106_object = var_1_bool;
					func_6239(var_105_bool, var_106_object);
					if(var_105_bool != 1) {
						var_93_bool = 0;
					}
				}
				if(var_93_bool != 0) {
					@@@var_0_bool:AddReply((int)543240, (int)45697, (int)45696);
				}
				var_114_bool = 0;
				var_114_bool = 1;
				var_115_bool = 0;
				var_115_bool = 1;
				var_116_bool = 0;
				var_116_bool = 1;
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_bool;
				func_6149(var_117_bool, var_118_object);
				if(var_117_bool != 1) {
					var_123_bool = 0; var_124_object = Obj();
					var_124_object = var_1_bool;
					func_6169(var_123_bool, var_124_object);
					if(var_123_bool != 1) {
						var_116_bool = 0;
					}
				}
				if(var_116_bool != 1) {
					var_129_bool = 0; var_130_object = Obj();
					var_130_object = var_1_bool;
					func_6189(var_129_bool, var_130_object);
					if(var_129_bool != 1) {
						var_115_bool = 0;
					}
				}
				if(var_115_bool != 1) {
					var_135_bool = 0; var_136_object = Obj();
					var_136_object = var_1_bool;
					func_6179(var_135_bool, var_136_object);
					if(var_135_bool != 1) {
						var_114_bool = 0;
					}
				}
				if(var_114_bool != 0) {
					@@@var_0_bool:AddReply((int)543233, (int)45690, (int)45689);
				}
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_bool;
				func_6159(var_144_bool, var_145_object);
				if(var_144_bool != 0) {
					@@@var_0_bool:AddReply((int)543214, (int)45672, (int)45670);
				}
				var_153_bool = 0;
				var_153_bool = 1;
				var_154_bool = 0;
				var_154_bool = 1;
				var_155_bool = 0;
				var_155_bool = 1;
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_bool;
				func_6149(var_156_bool, var_157_object);
				if(var_156_bool != 1) {
					var_158_bool = 0; var_159_object = Obj();
					var_159_object = var_1_bool;
					func_6159(var_158_bool, var_159_object);
					if(var_158_bool != 1) {
						var_155_bool = 0;
					}
				}
				if(var_155_bool != 1) {
					var_160_bool = 0; var_161_object = Obj();
					var_161_object = var_1_bool;
					func_6169(var_160_bool, var_161_object);
					if(var_160_bool != 1) {
						var_154_bool = 0;
					}
				}
				if(var_154_bool != 1) {
					var_162_bool = 0; var_163_object = Obj();
					var_163_object = var_1_bool;
					func_6179(var_162_bool, var_163_object);
					if(var_162_bool != 1) {
						var_153_bool = 0;
					}
				}
				if(var_153_bool != 0) {
					@@@var_0_bool:AddReply((int)543210, (int)-1, (int)45666);
				}
				var_167_bool = 0;
				var_167_bool = 1;
				var_168_bool = 0;
				var_168_bool = 1;
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_bool;
				func_6189(var_169_bool, var_170_object);
				if(var_169_bool != 1) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_bool;
					func_6199(var_171_bool, var_172_object);
					if(var_171_bool != 1) {
						var_168_bool = 0;
					}
				}
				if(var_168_bool != 1) {
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_bool;
					func_6209(var_177_bool, var_178_object);
					if(var_177_bool != 1) {
						var_167_bool = 0;
					}
				}
				if(var_167_bool != 0) {
					@@@var_0_bool:AddReply((int)543211, (int)-1, (int)45667);
				}
				var_186_bool = 0;
				var_186_bool = 1;
				var_187_bool = 0;
				var_187_bool = 1;
				var_188_bool = 0;
				var_188_bool = 1;
				var_189_bool = 0;
				var_189_bool = 1;
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_bool;
				func_6219(var_190_bool, var_191_object);
				if(var_190_bool != 1) {
					var_192_bool = 0; var_193_object = Obj();
					var_193_object = var_1_bool;
					func_6229(var_192_bool, var_193_object);
					if(var_192_bool != 1) {
						var_189_bool = 0;
					}
				}
				if(var_189_bool != 1) {
					var_198_bool = 0; var_199_object = Obj();
					var_199_object = var_1_bool;
					func_6239(var_198_bool, var_199_object);
					if(var_198_bool != 1) {
						var_188_bool = 0;
					}
				}
				if(var_188_bool != 1) {
					var_200_bool = 0; var_201_object = Obj();
					var_201_object = var_1_bool;
					func_6249(var_200_bool, var_201_object);
					if(var_200_bool != 1) {
						var_187_bool = 0;
					}
				}
				if(var_187_bool != 1) {
					var_206_bool = 0; var_207_object = Obj();
					var_207_object = var_1_bool;
					func_6259(var_206_bool, var_207_object);
					if(var_206_bool != 1) {
						var_186_bool = 0;
					}
				}
				if(var_186_bool != 0) {
					@@@var_0_bool:AddReply((int)543212, (int)-1, (int)45668);
				}
				var_215_bool = 0;
				var_215_bool = 1;
				var_216_bool = 0;
				var_216_bool = 1;
				var_217_bool = 0;
				var_217_bool = 1;
				var_218_bool = 0;
				var_218_bool = 1;
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_bool;
				func_6149(var_219_bool, var_220_object);
				if(var_219_bool != 1) {
					var_221_bool = 0; var_222_object = Obj();
					var_222_object = var_1_bool;
					func_6159(var_221_bool, var_222_object);
					if(var_221_bool != 1) {
						var_218_bool = 0;
					}
				}
				if(var_218_bool != 1) {
					var_223_bool = 0; var_224_object = Obj();
					var_224_object = var_1_bool;
					func_6179(var_223_bool, var_224_object);
					if(var_223_bool != 1) {
						var_217_bool = 0;
					}
				}
				if(var_217_bool != 1) {
					var_225_bool = 0; var_226_object = Obj();
					var_226_object = var_1_bool;
					func_6189(var_225_bool, var_226_object);
					if(var_225_bool != 1) {
						var_216_bool = 0;
					}
				}
				if(var_216_bool != 1) {
					var_227_bool = 0; var_228_object = Obj();
					var_228_object = var_1_bool;
					func_6209(var_227_bool, var_228_object);
					if(var_227_bool != 1) {
						var_215_bool = 0;
					}
				}
				if(var_215_bool != 0) {
					@@@var_0_bool:AddReply((int)543213, (int)-1, (int)45669);
				}
				var_232_bool = 0;
				var_232_bool = 1;
				var_233_bool = 0;
				var_233_bool = 1;
				var_234_bool = 0;
				var_234_bool = 1;
				var_235_bool = 0;
				var_235_bool = 1;
				var_236_bool = 0;
				var_236_bool = 1;
				var_237_bool = 0;
				var_237_bool = 1;
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_bool;
				func_6169(var_238_bool, var_239_object);
				if(var_238_bool != 1) {
					var_240_bool = 0; var_241_object = Obj();
					var_241_object = var_1_bool;
					func_6199(var_240_bool, var_241_object);
					if(var_240_bool != 1) {
						var_237_bool = 0;
					}
				}
				if(var_237_bool != 1) {
					var_242_bool = 0; var_243_object = Obj();
					var_243_object = var_1_bool;
					func_6229(var_242_bool, var_243_object);
					if(var_242_bool != 1) {
						var_236_bool = 0;
					}
				}
				if(var_236_bool != 1) {
					var_244_bool = 0; var_245_object = Obj();
					var_245_object = var_1_bool;
					func_6259(var_244_bool, var_245_object);
					if(var_244_bool != 1) {
						var_235_bool = 0;
					}
				}
				if(var_235_bool != 1) {
					var_246_bool = 0; var_247_object = Obj();
					var_247_object = var_1_bool;
					func_6159(var_246_bool, var_247_object);
					if(var_246_bool != 1) {
						var_234_bool = 0;
					}
				}
				if(var_234_bool != 1) {
					var_248_bool = 0; var_249_object = Obj();
					var_249_object = var_1_bool;
					func_6219(var_248_bool, var_249_object);
					if(var_248_bool != 1) {
						var_233_bool = 0;
					}
				}
				if(var_233_bool != 1) {
					var_250_bool = 0; var_251_object = Obj();
					var_251_object = var_1_bool;
					func_6239(var_250_bool, var_251_object);
					if(var_250_bool != 1) {
						var_232_bool = 0;
					}
				}
				if(var_232_bool != 0) {
					@@@var_0_bool:AddReply((int)543215, (int)-1, (int)45671);
				}
				var_255_bool = 0;
				var_255_bool = 1;
				var_256_bool = 0;
				var_256_bool = 1;
				var_257_bool = 0;
				var_257_bool = 1;
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_bool;
				func_6249(var_258_bool, var_259_object);
				if(var_258_bool != 1) {
					var_260_bool = 0; var_261_object = Obj();
					var_261_object = var_1_bool;
					func_6229(var_260_bool, var_261_object);
					if(var_260_bool != 1) {
						var_257_bool = 0;
					}
				}
				if(var_257_bool != 1) {
					var_262_bool = 0; var_263_object = Obj();
					var_263_object = var_1_bool;
					func_6219(var_262_bool, var_263_object);
					if(var_262_bool != 1) {
						var_256_bool = 0;
					}
				}
				if(var_256_bool != 1) {
					var_264_bool = 0; var_265_object = Obj();
					var_265_object = var_1_bool;
					func_6209(var_264_bool, var_265_object);
					if(var_264_bool != 1) {
						var_255_bool = 0;
					}
				}
				if(var_255_bool != 0) {
					@@@var_0_bool:AddReply((int)543219, (int)-1, (int)45675);
				}
				return 0;
			}
			var_269_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537240);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537241, (int)-1, (int)39084);
			var_274_bool = 0;
			var_274_bool = 0;
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_bool;
			func_6125(var_276_object);
			if(var_275_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_bool;
				func_6149(var_281_bool, var_282_object);
				if(var_281_bool != 0) {
					var_274_bool = 1;
				}
			}
			if(var_274_bool != 0) {
				@@@var_0_bool:AddReply((int)537242, (int)39086, (int)39085);
			}
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_bool;
			func_6149(var_286_bool, var_287_object);
			if(var_286_bool != 0) {
				@@@var_0_bool:AddReply((int)537277, (int)39122, (int)39121);
			}
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_bool;
			func_6159(var_291_bool, var_292_object);
			if(var_291_bool != 0) {
				@@@var_0_bool:AddReply((int)537329, (int)39176, (int)39175);
			}
			var_296_bool = 0;
			var_296_bool = 0;
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_bool;
			func_6169(var_297_bool, var_298_object);
			if(var_297_bool != 0) {
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_bool;
				func_6269(var_299_bool, var_300_object);
				if(var_299_bool != 0) {
					var_296_bool = 1;
				}
			}
			if(var_296_bool != 0) {
				@@@var_0_bool:AddReply((int)537352, (int)39199, (int)39198);
			}
			var_317_bool = 0;
			var_317_bool = 0;
			var_318_bool = 0;
			var_318_bool = 0;
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_bool;
			func_6125(var_320_object);
			if(var_319_bool != 0) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_bool;
				func_6169(var_321_bool, var_322_object);
				if(var_321_bool != 0) {
					var_318_bool = 1;
				}
			}
			if(var_318_bool != 0) {
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_bool;
				func_6279(var_323_bool, var_324_object);
				if(var_323_bool != 0) {
					var_317_bool = 1;
				}
			}
			if(var_317_bool != 0) {
				@@@var_0_bool:AddReply((int)537359, (int)39206, (int)39205);
			}
			var_333_bool = 0;
			var_333_bool = 0;
			var_334_bool = 0; var_335_object = Obj();
			var_335_object = var_1_bool;
			func_6179(var_334_bool, var_335_object);
			if(var_334_bool != 0) {
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_bool;
				func_6269(var_336_bool, var_337_object);
				if(var_336_bool != 0) {
					var_333_bool = 1;
				}
			}
			if(var_333_bool != 0) {
				@@@var_0_bool:AddReply((int)537380, (int)39227, (int)39226);
			}
			var_341_bool = 0;
			var_341_bool = 0;
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_bool;
			func_6179(var_342_bool, var_343_object);
			if(var_342_bool != 0) {
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_bool;
				func_6279(var_344_bool, var_345_object);
				if(var_344_bool != 0) {
					var_341_bool = 1;
				}
			}
			if(var_341_bool != 0) {
				@@@var_0_bool:AddReply((int)537390, (int)39237, (int)39236);
			}
			var_349_bool = 0; var_350_object = Obj();
			var_350_object = var_1_bool;
			func_6189(var_349_bool, var_350_object);
			if(var_349_bool != 0) {
				@@@var_0_bool:AddReply((int)537400, (int)39247, (int)39246);
			}
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_bool;
			func_6125(var_356_object);
			if(var_355_bool != 0) {
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_bool;
				func_6199(var_357_bool, var_358_object);
				if(var_357_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_bool:AddReply((int)537423, (int)39270, (int)39269);
			}
			var_362_bool = 0; var_363_object = Obj();
			var_363_object = var_1_bool;
			func_6209(var_362_bool, var_363_object);
			if(var_362_bool != 0) {
				@@@var_0_bool:AddReply((int)537433, (int)39280, (int)39279);
			}
			var_367_bool = 0;
			var_367_bool = 0;
			var_368_bool = 0; var_369_object = Obj();
			var_369_object = var_1_bool;
			func_6125(var_369_object);
			if(var_368_bool != 0) {
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_bool;
				func_6219(var_370_bool, var_371_object);
				if(var_370_bool != 0) {
					var_367_bool = 1;
				}
			}
			if(var_367_bool != 0) {
				@@@var_0_bool:AddReply((int)537451, (int)39299, (int)39298);
			}
			var_375_bool = 0;
			var_375_bool = 0;
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_bool;
			func_6125(var_377_object);
			if(var_376_bool != 0) {
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_bool;
				func_6229(var_378_bool, var_379_object);
				if(var_378_bool != 0) {
					var_375_bool = 1;
				}
			}
			if(var_375_bool != 0) {
				@@@var_0_bool:AddReply((int)537460, (int)39308, (int)39307);
			}
			var_383_bool = 0;
			var_383_bool = 0;
			var_384_bool = 0; var_385_object = Obj();
			var_385_object = var_1_bool;
			func_6125(var_385_object);
			if(var_384_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_bool;
				func_6249(var_386_bool, var_387_object);
				if(var_386_bool != 0) {
					var_383_bool = 1;
				}
			}
			if(var_383_bool != 0) {
				@@@var_0_bool:AddReply((int)537473, (int)39321, (int)39320);
			}
			var_391_bool = 0; var_392_object = Obj();
			var_392_object = var_1_bool;
			func_6249(var_391_bool, var_392_object);
			if(var_391_bool != 0) {
				@@@var_0_bool:AddReply((int)537483, (int)39331, (int)39330);
			}
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_bool;
			func_6259(var_396_bool, var_397_object);
			if(var_396_bool != 0) {
				@@@var_0_bool:AddReply((int)537493, (int)39341, (int)39340);
			}
			@@@var_0_bool:AddReply((int)537503, (int)-1, (int)39350);
			@@@var_0_bool:AddReply((int)537504, (int)-1, (int)39351);
			return 0;
		}
		var_408_bool = var_22_int == (int)39341;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537494);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537495, (int)39343, (int)39342);
			@@@var_0_bool:AddReply((int)537499, (int)39347, (int)39346);
			return 0;
		}
		var_418_bool = var_22_int == (int)39347;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537500);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537501, (int)-1, (int)39348);
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_bool;
			func_6125(var_425_object);
			if(var_424_bool != 0) {
				@@@var_0_bool:AddReply((int)537502, (int)-1, (int)39349);
			}
			return 0;
		}
		var_430_bool = var_22_int == (int)39343;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537496);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537497, (int)-1, (int)39344);
			@@@var_0_bool:AddReply((int)537498, (int)-1, (int)39345);
			return 0;
		}
		var_440_bool = var_22_int == (int)39331;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537484);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537485, (int)39333, (int)39332);
			@@@var_0_bool:AddReply((int)537492, (int)-1, (int)39339);
			return 0;
		}
		var_450_bool = var_22_int == (int)39333;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537486);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537487, (int)39335, (int)39334);
			var_456_bool = 0; var_457_object = Obj();
			var_457_object = var_1_bool;
			func_6125(var_457_object);
			if(var_456_bool != 0) {
				@@@var_0_bool:AddReply((int)537491, (int)-1, (int)39338);
			}
			return 0;
		}
		var_462_bool = var_22_int == (int)39335;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537488);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537489, (int)-1, (int)39336);
			@@@var_0_bool:AddReply((int)537490, (int)-1, (int)39337);
			return 0;
		}
		var_472_bool = var_22_int == (int)39321;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537474);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537475, (int)39323, (int)39322);
			@@@var_0_bool:AddReply((int)537482, (int)-1, (int)39329);
			return 0;
		}
		var_482_bool = var_22_int == (int)39323;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537476);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537477, (int)39325, (int)39324);
			@@@var_0_bool:AddReply((int)537481, (int)-1, (int)39328);
			return 0;
		}
		var_492_bool = var_22_int == (int)39325;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537478);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537479, (int)-1, (int)39326);
			@@@var_0_bool:AddReply((int)537480, (int)-1, (int)39327);
			return 0;
		}
		var_502_bool = var_22_int == (int)39308;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537461);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537462, (int)39310, (int)39309);
			@@@var_0_bool:AddReply((int)537472, (int)-1, (int)39319);
			return 0;
		}
		var_512_bool = var_22_int == (int)39310;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537463);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537464, (int)39312, (int)39311);
			@@@var_0_bool:AddReply((int)537471, (int)-1, (int)39318);
			return 0;
		}
		var_522_bool = var_22_int == (int)39312;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537465);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537466, (int)39314, (int)39313);
			@@@var_0_bool:AddReply((int)537470, (int)-1, (int)39317);
			return 0;
		}
		var_532_bool = var_22_int == (int)39314;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537467);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537468, (int)-1, (int)39315);
			@@@var_0_bool:AddReply((int)537469, (int)-1, (int)39316);
			return 0;
		}
		var_542_bool = var_22_int == (int)39299;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537452);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537453, (int)39301, (int)39300);
			@@@var_0_bool:AddReply((int)537459, (int)-1, (int)39306);
			return 0;
		}
		var_552_bool = var_22_int == (int)39301;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537454);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537455, (int)39303, (int)39302);
			return 0;
		}
		var_559_bool = var_22_int == (int)39303;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537456);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537457, (int)-1, (int)39304);
			@@@var_0_bool:AddReply((int)537458, (int)-1, (int)39305);
			return 0;
		}
		var_569_bool = var_22_int == (int)39280;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537434);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537435, (int)39282, (int)39281);
			@@@var_0_bool:AddReply((int)537447, (int)39294, (int)39293);
			return 0;
		}
		var_579_bool = var_22_int == (int)39294;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537448);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537449, (int)39284, (int)39295);
			@@@var_0_bool:AddReply((int)537450, (int)-1, (int)39297);
			return 0;
		}
		var_589_bool = var_22_int == (int)39282;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537436);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537437, (int)39284, (int)39283);
			return 0;
		}
		var_596_bool = var_22_int == (int)39284;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537438);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537439, (int)39286, (int)39285);
			@@@var_0_bool:AddReply((int)537442, (int)39289, (int)39288);
			return 0;
		}
		var_606_bool = var_22_int == (int)39289;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537443);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537444, (int)39291, (int)39290);
			return 0;
		}
		var_613_bool = var_22_int == (int)39291;
		if(var_613_bool != 0) {
			var_614_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537445);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537446, (int)-1, (int)39292);
			return 0;
		}
		var_620_bool = var_22_int == (int)39286;
		if(var_620_bool != 0) {
			var_621_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537440);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537441, (int)-1, (int)39287);
			return 0;
		}
		var_627_bool = var_22_int == (int)39270;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537424);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537425, (int)39272, (int)39271);
			@@@var_0_bool:AddReply((int)537432, (int)-1, (int)39278);
			return 0;
		}
		var_637_bool = var_22_int == (int)39272;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537426);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537427, (int)39274, (int)39273);
			@@@var_0_bool:AddReply((int)537431, (int)-1, (int)39277);
			return 0;
		}
		var_647_bool = var_22_int == (int)39274;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537428);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537429, (int)-1, (int)39275);
			@@@var_0_bool:AddReply((int)537430, (int)-1, (int)39276);
			return 0;
		}
		var_657_bool = var_22_int == (int)39247;
		if(var_657_bool != 0) {
			var_658_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537401);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537402, (int)39249, (int)39248);
			var_663_bool = 0; var_664_object = Obj();
			var_664_object = var_1_bool;
			func_6125(var_664_object);
			if(var_663_bool != 0) {
				@@@var_0_bool:AddReply((int)537418, (int)39265, (int)39264);
			}
			@@@var_0_bool:AddReply((int)537422, (int)-1, (int)39268);
			return 0;
		}
		var_672_bool = var_22_int == (int)39265;
		if(var_672_bool != 0) {
			var_673_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537419);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537420, (int)-1, (int)39266);
			@@@var_0_bool:AddReply((int)537421, (int)-1, (int)39267);
			return 0;
		}
		var_682_bool = var_22_int == (int)39249;
		if(var_682_bool != 0) {
			var_683_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537403);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537404, (int)39251, (int)39250);
			@@@var_0_bool:AddReply((int)537417, (int)-1, (int)39263);
			return 0;
		}
		var_692_bool = var_22_int == (int)39251;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537405);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537406, (int)39253, (int)39252);
			var_698_bool = 0; var_699_object = Obj();
			var_699_object = var_1_bool;
			func_6125(var_699_object);
			if(var_698_bool != 0) {
				@@@var_0_bool:AddReply((int)537416, (int)-1, (int)39262);
			}
			return 0;
		}
		var_704_bool = var_22_int == (int)39253;
		if(var_704_bool != 0) {
			var_705_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537407);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537408, (int)39255, (int)39254);
			@@@var_0_bool:AddReply((int)537415, (int)-1, (int)39261);
			return 0;
		}
		var_714_bool = var_22_int == (int)39255;
		if(var_714_bool != 0) {
			var_715_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537409);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537410, (int)39257, (int)39256);
			@@@var_0_bool:AddReply((int)537414, (int)-1, (int)39260);
			return 0;
		}
		var_724_bool = var_22_int == (int)39257;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537411);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537412, (int)-1, (int)39258);
			@@@var_0_bool:AddReply((int)537413, (int)-1, (int)39259);
			return 0;
		}
		var_734_bool = var_22_int == (int)39237;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537391);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537392, (int)39239, (int)39238);
			@@@var_0_bool:AddReply((int)537397, (int)39244, (int)39243);
			return 0;
		}
		var_744_bool = var_22_int == (int)39244;
		if(var_744_bool != 0) {
			var_745_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537398);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537399, (int)-1, (int)39245);
			return 0;
		}
		var_751_bool = var_22_int == (int)39239;
		if(var_751_bool != 0) {
			var_752_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537393);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537394, (int)39241, (int)39240);
			return 0;
		}
		var_758_bool = var_22_int == (int)39241;
		if(var_758_bool != 0) {
			var_759_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537395);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537396, (int)-1, (int)39242);
			return 0;
		}
		var_765_bool = var_22_int == (int)39227;
		if(var_765_bool != 0) {
			var_766_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537381);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537382, (int)39229, (int)39228);
			@@@var_0_bool:AddReply((int)537386, (int)39233, (int)39232);
			@@@var_0_bool:AddReply((int)537389, (int)-1, (int)39235);
			return 0;
		}
		var_778_bool = var_22_int == (int)39233;
		if(var_778_bool != 0) {
			var_779_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537387);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537388, (int)-1, (int)39234);
			return 0;
		}
		var_785_bool = var_22_int == (int)39229;
		if(var_785_bool != 0) {
			var_786_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537383);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537384, (int)-1, (int)39230);
			@@@var_0_bool:AddReply((int)537385, (int)-1, (int)39231);
			return 0;
		}
		var_795_bool = var_22_int == (int)39206;
		if(var_795_bool != 0) {
			var_796_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537360);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537361, (int)39208, (int)39207);
			@@@var_0_bool:AddReply((int)537376, (int)39223, (int)39222);
			@@@var_0_bool:AddReply((int)537379, (int)-1, (int)39225);
			return 0;
		}
		var_808_bool = var_22_int == (int)39223;
		if(var_808_bool != 0) {
			var_809_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537377);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537378, (int)-1, (int)39224);
			return 0;
		}
		var_815_bool = var_22_int == (int)39208;
		if(var_815_bool != 0) {
			var_816_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537362);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537363, (int)39210, (int)39209);
			@@@var_0_bool:AddReply((int)537369, (int)39216, (int)39215);
			return 0;
		}
		var_825_bool = var_22_int == (int)39216;
		if(var_825_bool != 0) {
			var_826_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537370);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537371, (int)39218, (int)39217);
			@@@var_0_bool:AddReply((int)537375, (int)-1, (int)39221);
			return 0;
		}
		var_835_bool = var_22_int == (int)39218;
		if(var_835_bool != 0) {
			var_836_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537372);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537373, (int)-1, (int)39219);
			@@@var_0_bool:AddReply((int)537374, (int)-1, (int)39220);
			return 0;
		}
		var_845_bool = var_22_int == (int)39210;
		if(var_845_bool != 0) {
			var_846_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537364);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537365, (int)39212, (int)39211);
			return 0;
		}
		var_852_bool = var_22_int == (int)39212;
		if(var_852_bool != 0) {
			var_853_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537366);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537367, (int)-1, (int)39213);
			@@@var_0_bool:AddReply((int)537368, (int)-1, (int)39214);
			return 0;
		}
		var_862_bool = var_22_int == (int)39199;
		if(var_862_bool != 0) {
			var_863_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537353);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537354, (int)39201, (int)39200);
			@@@var_0_bool:AddReply((int)537358, (int)-1, (int)39204);
			return 0;
		}
		var_872_bool = var_22_int == (int)39201;
		if(var_872_bool != 0) {
			var_873_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537355);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537356, (int)-1, (int)39202);
			@@@var_0_bool:AddReply((int)537357, (int)-1, (int)39203);
			return 0;
		}
		var_882_bool = var_22_int == (int)39176;
		if(var_882_bool != 0) {
			var_883_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537330);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537331, (int)39178, (int)39177);
			@@@var_0_bool:AddReply((int)537341, (int)39188, (int)39187);
			@@@var_0_bool:AddReply((int)537351, (int)-1, (int)39197);
			return 0;
		}
		var_895_bool = var_22_int == (int)39188;
		if(var_895_bool != 0) {
			var_896_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537342);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537343, (int)39190, (int)39189);
			@@@var_0_bool:AddReply((int)537349, (int)-1, (int)39195);
			return 0;
		}
		var_905_bool = var_22_int == (int)39190;
		if(var_905_bool != 0) {
			var_906_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537344);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537345, (int)39192, (int)39191);
			@@@var_0_bool:AddReply((int)537348, (int)-1, (int)39194);
			return 0;
		}
		var_915_bool = var_22_int == (int)39192;
		if(var_915_bool != 0) {
			var_916_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537346);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537347, (int)-1, (int)39193);
			return 0;
		}
		var_922_bool = var_22_int == (int)39178;
		if(var_922_bool != 0) {
			var_923_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537332);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537333, (int)39180, (int)39179);
			@@@var_0_bool:AddReply((int)537336, (int)39183, (int)39182);
			return 0;
		}
		var_932_bool = var_22_int == (int)39183;
		if(var_932_bool != 0) {
			var_933_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537337);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537338, (int)39185, (int)39184);
			return 0;
		}
		var_939_bool = var_22_int == (int)39185;
		if(var_939_bool != 0) {
			var_940_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537339);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537340, (int)43752, (int)39186);
			return 0;
		}
		var_946_bool = var_22_int == (int)43752;
		if(var_946_bool != 0) {
			var_947_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)541583);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541584, (int)-1, (int)43753);
			return 0;
		}
		var_953_bool = var_22_int == (int)39180;
		if(var_953_bool != 0) {
			var_954_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537334);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537335, (int)-1, (int)39181);
			return 0;
		}
		var_960_bool = var_22_int == (int)39122;
		if(var_960_bool != 0) {
			var_961_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537278);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537279, (int)39124, (int)39123);
			@@@var_0_bool:AddReply((int)537292, (int)39124, (int)39137);
			var_969_bool = 0; var_970_object = Obj();
			var_970_object = var_1_bool;
			func_6125(var_970_object);
			if(var_969_bool != 0) {
				@@@var_0_bool:AddReply((int)537293, (int)39140, (int)39139);
			}
			var_974_bool = 0; var_975_object = Obj();
			var_975_object = var_1_bool;
			func_6125(var_975_object);
			if(var_974_bool != 0) {
				@@@var_0_bool:AddReply((int)537304, (int)39151, (int)39150);
			}
			@@@var_0_bool:AddReply((int)537328, (int)-1, (int)39174);
			return 0;
		}
		var_983_bool = var_22_int == (int)39151;
		if(var_983_bool != 0) {
			var_984_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537305);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537306, (int)39153, (int)39152);
			@@@var_0_bool:AddReply((int)537318, (int)39165, (int)39164);
			return 0;
		}
		var_993_bool = var_22_int == (int)39165;
		if(var_993_bool != 0) {
			var_994_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537319);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537320, (int)-1, (int)39166);
			@@@var_0_bool:AddReply((int)537321, (int)39168, (int)39167);
			return 0;
		}
		var_1003_bool = var_22_int == (int)39168;
		if(var_1003_bool != 0) {
			var_1004_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537322);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537323, (int)-1, (int)39169);
			@@@var_0_bool:AddReply((int)537324, (int)39171, (int)39170);
			return 0;
		}
		var_1013_bool = var_22_int == (int)39171;
		if(var_1013_bool != 0) {
			var_1014_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537325);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537326, (int)-1, (int)39172);
			return 0;
		}
		var_1020_bool = var_22_int == (int)39153;
		if(var_1020_bool != 0) {
			var_1021_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537307);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537308, (int)39155, (int)39154);
			@@@var_0_bool:AddReply((int)537317, (int)-1, (int)39163);
			return 0;
		}
		var_1030_bool = var_22_int == (int)39155;
		if(var_1030_bool != 0) {
			var_1031_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537309);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537310, (int)39157, (int)39156);
			@@@var_0_bool:AddReply((int)537313, (int)39160, (int)39159);
			return 0;
		}
		var_1040_bool = var_22_int == (int)39160;
		if(var_1040_bool != 0) {
			var_1041_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537314);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537315, (int)-1, (int)39161);
			@@@var_0_bool:AddReply((int)537316, (int)-1, (int)39162);
			return 0;
		}
		var_1050_bool = var_22_int == (int)39157;
		if(var_1050_bool != 0) {
			var_1051_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537311);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537312, (int)-1, (int)39158);
			return 0;
		}
		var_1057_bool = var_22_int == (int)39140;
		if(var_1057_bool != 0) {
			var_1058_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537294);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537295, (int)39142, (int)39141);
			@@@var_0_bool:AddReply((int)537301, (int)39148, (int)39147);
			return 0;
		}
		var_1067_bool = var_22_int == (int)39148;
		if(var_1067_bool != 0) {
			var_1068_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537302);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537303, (int)-1, (int)39149);
			return 0;
		}
		var_1074_bool = var_22_int == (int)39142;
		if(var_1074_bool != 0) {
			var_1075_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537296);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537297, (int)39144, (int)39143);
			return 0;
		}
		var_1081_bool = var_22_int == (int)39144;
		if(var_1081_bool != 0) {
			var_1082_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537298);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537299, (int)-1, (int)39145);
			@@@var_0_bool:AddReply((int)537300, (int)-1, (int)39146);
			return 0;
		}
		var_1091_bool = var_22_int == (int)39124;
		if(var_1091_bool != 0) {
			var_1092_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537280);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537281, (int)39126, (int)39125);
			@@@var_0_bool:AddReply((int)537288, (int)39133, (int)39132);
			return 0;
		}
		var_1101_bool = var_22_int == (int)39133;
		if(var_1101_bool != 0) {
			var_1102_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537289);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537290, (int)39126, (int)39134);
			@@@var_0_bool:AddReply((int)537291, (int)-1, (int)39136);
			return 0;
		}
		var_1111_bool = var_22_int == (int)39126;
		if(var_1111_bool != 0) {
			var_1112_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537282);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537283, (int)39128, (int)39127);
			@@@var_0_bool:AddReply((int)537287, (int)-1, (int)39131);
			return 0;
		}
		var_1121_bool = var_22_int == (int)39128;
		if(var_1121_bool != 0) {
			var_1122_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537284);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537285, (int)-1, (int)39129);
			@@@var_0_bool:AddReply((int)537286, (int)-1, (int)39130);
			return 0;
		}
		var_1131_bool = var_22_int == (int)39086;
		if(var_1131_bool != 0) {
			var_1132_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537243);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537244, (int)39088, (int)39087);
			@@@var_0_bool:AddReply((int)537254, (int)39099, (int)39098);
			@@@var_0_bool:AddReply((int)537264, (int)39109, (int)39108);
			@@@var_0_bool:AddReply((int)537275, (int)-1, (int)39119);
			@@@var_0_bool:AddReply((int)537276, (int)-1, (int)39120);
			return 0;
		}
		var_1150_bool = var_22_int == (int)39109;
		if(var_1150_bool != 0) {
			var_1151_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537265);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537266, (int)44319, (int)39110);
			@@@var_0_bool:AddReply((int)537267, (int)39112, (int)39111);
			return 0;
		}
		var_1160_bool = var_22_int == (int)39112;
		if(var_1160_bool != 0) {
			var_1161_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537268);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537269, (int)39114, (int)39113);
			@@@var_0_bool:AddReply((int)537273, (int)-1, (int)39117);
			return 0;
		}
		var_1170_bool = var_22_int == (int)39114;
		if(var_1170_bool != 0) {
			var_1171_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537270);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537271, (int)-1, (int)39115);
			@@@var_0_bool:AddReply((int)537272, (int)-1, (int)39116);
			return 0;
		}
		var_1180_bool = var_22_int == (int)44319;
		if(var_1180_bool != 0) {
			var_1181_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542041, (int)-1, (int)44320);
			@@@var_0_bool:AddReply((int)542042, (int)-1, (int)44321);
			return 0;
		}
		var_1190_bool = var_22_int == (int)39099;
		if(var_1190_bool != 0) {
			var_1191_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537255);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537256, (int)39101, (int)39100);
			@@@var_0_bool:AddReply((int)537260, (int)39105, (int)39104);
			return 0;
		}
		var_1200_bool = var_22_int == (int)39105;
		if(var_1200_bool != 0) {
			var_1201_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537261);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537262, (int)-1, (int)39106);
			@@@var_0_bool:AddReply((int)537263, (int)-1, (int)39107);
			return 0;
		}
		var_1210_bool = var_22_int == (int)39101;
		if(var_1210_bool != 0) {
			var_1211_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537257);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537258, (int)-1, (int)39102);
			@@@var_0_bool:AddReply((int)537259, (int)-1, (int)39103);
			return 0;
		}
		var_1220_bool = var_22_int == (int)39088;
		if(var_1220_bool != 0) {
			var_1221_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537245);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537246, (int)39090, (int)39089);
			@@@var_0_bool:AddReply((int)537253, (int)39090, (int)39096);
			return 0;
		}
		var_1230_bool = var_22_int == (int)39090;
		if(var_1230_bool != 0) {
			var_1231_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537247);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537248, (int)39092, (int)39091);
			@@@var_0_bool:AddReply((int)537252, (int)-1, (int)39095);
			return 0;
		}
		var_1240_bool = var_22_int == (int)39092;
		if(var_1240_bool != 0) {
			var_1241_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537249);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537250, (int)-1, (int)39093);
			@@@var_0_bool:AddReply((int)537251, (int)-1, (int)39094);
			return 0;
		}
		var_1250_bool = var_22_int == (int)45672;
		if(var_1250_bool != 0) {
			var_1251_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543216);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543220, (int)-1, (int)45676);
			@@@var_0_bool:AddReply((int)543221, (int)45678, (int)45677);
			return 0;
		}
		var_1260_bool = var_22_int == (int)45678;
		if(var_1260_bool != 0) {
			var_1261_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543222);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543223, (int)-1, (int)45679);
			@@@var_0_bool:AddReply((int)543225, (int)45682, (int)45681);
			return 0;
		}
		var_1270_bool = var_22_int == (int)45682;
		if(var_1270_bool != 0) {
			var_1271_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543226);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543227, (int)-1, (int)45683);
			@@@var_0_bool:AddReply((int)543228, (int)45686, (int)45684);
			return 0;
		}
		var_1280_bool = var_22_int == (int)45686;
		if(var_1280_bool != 0) {
			var_1281_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543230);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543231, (int)-1, (int)45687);
			@@@var_0_bool:AddReply((int)543232, (int)-1, (int)45688);
			return 0;
		}
		var_1290_bool = var_22_int == (int)45690;
		if(var_1290_bool != 0) {
			var_1291_bool = 0;
			var_1291_bool = 1;
			var_1292_bool = 0;
			var_1292_bool = 1;
			var_1293_bool = 0; var_1294_object = Obj();
			var_1294_object = var_1_bool;
			func_6169(var_1293_bool, var_1294_object);
			if(var_1293_bool != 1) {
				var_1295_bool = 0; var_1296_object = Obj();
				var_1296_object = var_1_bool;
				func_6189(var_1295_bool, var_1296_object);
				if(var_1295_bool != 1) {
					var_1292_bool = 0;
				}
			}
			if(var_1292_bool != 1) {
				var_1297_bool = 0; var_1298_object = Obj();
				var_1298_object = var_1_bool;
				func_6179(var_1297_bool, var_1298_object);
				if(var_1297_bool != 1) {
					var_1291_bool = 0;
				}
			}
			if(var_1291_bool != 0) {
				var_1299_string = "";
				func_2447(var_23_int, "Neutral");
				@@@var_0_bool:SetMessage((int)543234);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543235, (int)-1, (int)45691);
				@@@var_0_bool:AddReply((int)543236, (int)-1, (int)45692);
				return 0;
			}
			var_1307_bool = 0; var_1308_object = Obj();
			var_1308_object = var_1_bool;
			func_6149(var_1307_bool, var_1308_object);
			if(var_1307_bool != 0) {
				var_1309_string = "";
				func_2447(var_23_int, "Neutral");
				@@@var_0_bool:SetMessage((int)543237);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)543238, (int)-1, (int)45694);
				@@@var_0_bool:AddReply((int)543239, (int)-1, (int)45695);
				return 0;
			}
		}
		var_1318_bool = var_22_int == (int)45697;
		if(var_1318_bool != 0) {
			var_1319_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543241);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543242, (int)-1, (int)45698);
			@@@var_0_bool:AddReply((int)543243, (int)45700, (int)45699);
			return 0;
		}
		var_1328_bool = var_22_int == (int)45700;
		if(var_1328_bool != 0) {
			var_1329_string = "";
			func_2447(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543244);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543245, (int)-1, (int)45701);
			@@@var_0_bool:AddReply((int)543246, (int)-1, (int)45702);
			return 0;
		}
		var_3_bool = true;
		var_1337_bool = 0;
		func_6563(var_1337_bool);
		if(var_1337_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9a6";
	
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_string)
{
	return 0;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object)
{
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	SensePlayerOnly((bool)1);
	func_6565();
	func_55();
	
Label_49:
	var_2_bool = false;
	func_316(var_20_string, var_21_bool);
	goto Label_49;
}
EMIT "Return(); Pop(0)";


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_529_bool = 0;
	func_6563(var_529_bool);
	if(var_529_bool != 0) {
		var_530_string = "";
		func_5584("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_531_bool = var_0_bool;
	if(var_531_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_5633(var_61_string, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0;
	var_66_bool = 0; var_67_int = 0; var_68_int = 0;
	var_62_int = var_67_int;
	var_63_int = var_68_int;
	func_5675(var_66_bool, var_67_int, var_68_int);
	if(var_66_bool != 0) {
		AddItem(var_65_bool, var_61_string, (int)0);
	}
	return 2;
}


func_6149(var_117_bool, var_118_object)
{
	var_119_bool = 0; var_120_object = Obj();
	var_118_object = var_120_object;
	func_6289(var_120_object);
	if(var_119_bool != 0) {
		var_117_bool = 1;
		return 0;
	}
	var_117_bool = 0;
	return 0;
}


func_1544(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_5665(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5665(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_5644(var_39_string, var_40_int, var_41_int, var_42_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0;
	var_47_bool = 0; var_48_int = 0; var_49_int = 0;
	var_40_int = var_48_int;
	var_41_int = var_49_int;
	func_5675(var_47_bool, var_48_int, var_49_int);
	if(var_47_bool != 0) {
		irand(var_45_int, var_42_int);
		var_54_int = var_45_int + (int)1;
		AddItem(var_46_bool, var_39_string, (int)0, var_54_int);
	}
	return 4;
}


func_6159(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_object = Obj();
	var_145_object = var_147_object;
	func_6296(var_147_object);
	if(var_146_bool != 0) {
		var_144_bool = 1;
		return 0;
	}
	var_144_bool = 0;
	return 0;
}


func_6169(var_123_bool, var_124_object)
{
	var_125_bool = 0; var_126_object = Obj();
	var_124_object = var_126_object;
	func_6303(var_126_object);
	if(var_125_bool != 0) {
		var_123_bool = 1;
		return 0;
	}
	var_123_bool = 0;
	return 0;
}


func_5659(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5665(var_52_cvector, var_53_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_53_cvector | var_53_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_55_float;
	return 2;
}


func_6179(var_135_bool, var_136_object)
{
	var_137_bool = 0; var_138_object = Obj();
	var_136_object = var_138_object;
	func_6310(var_138_object);
	if(var_137_bool != 0) {
		var_135_bool = 1;
		return 0;
	}
	var_135_bool = 0;
	return 0;
}


func_1574(var_0_bool, var_1_bool, var_2_bool, var_140_object)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0;
	var_0_bool = var_140_object;
	var_154_cvector = CVector(0,0,0); var_155_float = 0;
	func_1544(var_153_float, var_154_cvector, (float)1.7453293800354004);
	var_154_cvector = var_149_cvector;
	var_150_float = var_149_cvector | var_149_cvector;
	var_180_bool = var_150_float < (float)2500.0;
	if(var_180_bool != 0) {
		var_181_cvector = CVector(0,0,0); var_182_float = 0;
		func_1544(var_153_float, var_181_cvector, (float)2.6179938316345215);
		var_181_cvector = var_149_cvector;
		var_150_float = var_149_cvector | var_149_cvector;
		var_184_bool = var_150_float < (float)2500.0;
		if(var_184_bool != 0) {
			var_186_float = sqrt(var_150_float);
			var_187_int = "Can't retreat, distance: " + var_186_float;
			Trace(var_187_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_189_float = GetByIndex(var_149_cvector, 0);
	var_190_float = GetByIndex(var_149_cvector, 2);
	Rotate(var_189_float, var_190_float);
	var_191_cvector = CVector(0,0,0);
	func_5318(var_191_cvector);
	var_1_bool = var_191_cvector + var_149_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1616:
	MovePoint(var_1_bool, (int)1, var_151_bool);
	var_195_bool = var_151_bool;
	if(var_195_bool != 0) {
		var_196_bool = var_0_bool == 0; //@ne
		if(var_196_bool != 0) {
			goto Label_1646;
		EMIT "GOTO 0x66c";

		Label_1646:
			return 10;
		}
		var_197_cvector = CVector(0,0,0); var_198_float = 0;
		func_1544(var_153_float, var_197_cvector, (float)2.6179938316345215);
		var_197_cvector = var_152_cvector;
		var_153_float = var_152_cvector | var_152_cvector;
		var_200_bool = var_153_float >= (float)2500.0;
		if(var_200_bool != 0) {
			var_201_cvector = CVector(0,0,0);
			func_5318(var_201_cvector);
			var_1_bool = var_201_cvector + var_152_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1646;
		}
	}
	var_204_bool = var_2_bool == 0; //@nz
	if(var_204_bool == 1) goto Label_1616;
	
}


func_5675(var_47_bool, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_int = 0;
	irand(var_51_int, var_49_int);
	var_47_bool = var_51_int < var_48_int;
	return 2;
}


func_6189(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj();
	var_130_object = var_132_object;
	func_6317(var_132_object);
	if(var_131_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_5680(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_int = var_87_cvector | var_87_cvector;
	var_91_float = var_89_int * var_90_int;
	var_92_float = sqrt(var_91_float);
	var_85_float = var_88_int / var_92_float;
	return 0;
}


func_55()
{
	var_105_bool = 0;
	func_5431(var_105_bool);
	var_108_bool = var_105_bool == 0; //@nz
	if(var_108_bool != 0) {
		func_6055();
	}
	return 0;
}


func_6199(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj();
	var_172_object = var_174_object;
	func_6324(var_174_object);
	if(var_173_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_5688(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_80_float = var_78_float * var_79_float;
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_83_float = var_81_float * var_82_float;
	var_75_float = var_80_float + var_83_float;
	return 0;
}


func_573()
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_bool = 0;
	WaitForAnimEnd();
	var_150_bool = 0;
	func_5431(var_150_bool);
	var_151_bool = var_150_bool == 0; //@nz
	if(var_151_bool != 0) {
		return 14;
	}
	func_5900((int)0);
	var_152_int = var_143_int;
	var_144_int = 0;
	
Label_587:
	var_165_bool = 0;
	var_165_bool = 0;
	var_167_bool = var_144_int < (int)5;
	if(var_167_bool != 0) {
		var_168_bool = 0;
		func_5431(var_168_bool);
		if(var_168_bool != 0) {
			var_165_bool = 1;
		}
	}
	if(var_165_bool != 0) {
		irand(var_145_int, (int)3);
		var_171_bool = var_145_int == (int)0;
		if(var_171_bool != 0) {
			var_172_int = var_143_int;
			if(var_172_int == 0) goto Label_620;
			irand(var_146_int, var_143_int);
			var_174_string = ""; var_175_int = 0;
			var_146_int = var_175_int;
			func_5893(var_174_string, var_175_int);
			PlayAnimation("all", var_174_string);
			WaitForAnimEnd(var_147_bool);
			var_176_bool = var_147_bool == 0; //@nz
			if(var_176_bool != 0) {
			} else {
		} else {
				var_181_bool = var_145_int == (int)1;
				if(var_181_bool != 0) {
					rand(var_148_float, (int)4);
					var_184_int = var_148_float + (int)1;
					Sleep(var_184_int, var_149_bool);
					var_185_bool = var_149_bool == 0; //@nz
					if(var_185_bool != 0) {
						goto Label_649;
					}
					goto Label_638;
				}
				var_186_int = var_144_int;
				if(var_186_int == 0) goto Label_638;
				goto Label_649;
		}
		Label_638:
			var_177_bool = 0;
			func_652(var_177_bool);
			var_178_bool = var_177_bool == 0; //@nz
			if(var_178_bool != 0) {
				goto Label_649;
			}
			ResetAAS();
			var_144_int = var_144_int + (int)1;
			goto Label_587;

		}
	}
Label_649:
	ResetAAS();
	return 14;
	
}


func_6209(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj();
	var_178_object = var_180_object;
	func_6331(var_180_object);
	if(var_179_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_5697(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_88_float = var_86_float * var_87_float;
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_91_float = var_89_float * var_90_float;
	var_92_int = var_88_float + var_91_float;
	var_84_float = sqrt(var_92_int);
	return 0;
}


func_5707(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	var_73_cvector = var_76_cvector;
	var_74_cvector = var_77_cvector;
	func_5688(var_75_float, var_76_cvector, var_77_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_73_cvector = var_85_cvector;
	func_5697(var_84_float, var_85_cvector);
	var_93_float = 0; var_94_cvector = CVector(0,0,0);
	var_74_cvector = var_94_cvector;
	func_5697(var_93_float, var_94_cvector);
	var_95_float = var_84_float * var_93_float;
	var_72_float = var_75_float / var_95_float;
	return 0;
}


func_6219(var_94_bool, var_95_object)
{
	var_96_bool = 0; var_97_object = Obj();
	var_95_object = var_97_object;
	func_6338(var_97_object);
	if(var_96_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_6229(var_192_bool, var_193_object)
{
	var_194_bool = 0; var_195_object = Obj();
	var_193_object = var_195_object;
	func_6345(var_195_object);
	if(var_194_bool != 0) {
		var_192_bool = 1;
		return 0;
	}
	var_192_bool = 0;
	return 0;
}


func_5724(var_69_int, var_70_string)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable(var_70_string, var_72_int);
	var_72_int = var_69_int;
	return 2;
}


func_6239(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_object = Obj();
	var_106_object = var_108_object;
	func_6352(var_108_object);
	if(var_107_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_5729(var_49_object, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj();
	GetMainOutdoorScene(var_53_object);
	var_56_int = var_50_string + ".bin";
	AddBlankActor(var_54_object, var_53_object, var_50_string, var_56_int);
	var_54_object = var_49_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1124(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_6249(var_200_bool, var_201_object)
{
	var_202_bool = 0; var_203_object = Obj();
	var_201_object = var_203_object;
	func_6359(var_203_object);
	if(var_202_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_5740(var_32_int)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_36_int = 0;
	var_36_int = var_34_float / (int)24;
	var_32_int = (int)1 + var_36_int;
	return 2;
}


func_6259(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj();
	var_207_object = var_209_object;
	func_6366(var_209_object);
	if(var_208_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_5323(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5749(var_304_int)
{
	var_305_float = 0; var_306_float = 0;
	GetGameTime(var_306_float);
	var_307_int = 0;
	var_306_float = var_307_int;
	var_304_int = var_307_int % (int)24;
	return 2;
}


func_6269(var_299_bool, var_300_object)
{
	var_301_bool = 0; var_302_object = Obj();
	var_300_object = var_302_object;
	func_6373(var_302_object);
	if(var_301_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_1156(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_5665(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5665(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_5765(var_26_bool, var_27_object, var_28_string)
{
	var_30_bool = var_28_string == "unholster";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_6056(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x16a3";
	}
	var_36_bool = var_28_string == "player_shot";
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_6069(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x16a3";
	}
	var_53_bool = var_28_string == "battle";
	if(var_53_bool != 0) {
		var_54_bool = 0; var_55_object = Obj();
		var_27_object = var_55_object;
		func_6092(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = 0;
	return 0;
}


func_6279(var_323_bool, var_324_object)
{
	var_325_bool = 0; var_326_object = Obj();
	var_324_object = var_326_object;
	func_6394(var_326_object);
	if(var_325_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_652(var_177_bool)
{
	var_177_bool = 1;
	return 0;
}


func_654()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6289(var_119_bool)
{
	var_121_int = 0;
	func_5740(var_121_int);
	var_119_bool = var_121_int == (int)1;
	return 0;
}


func_659(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0;
	var_0_bool = var_83_object;
	func_710(var_90_bool);
	GetDirection(var_88_cvector);
	var_98_cvector = CVector(0,0,0); var_99_object = Obj();
	var_99_object = var_0_bool;
	func_5323(var_98_cvector, var_99_object);
	var_98_cvector = var_89_cvector;
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_5707(var_104_float, var_105_cvector, var_106_cvector);
	var_129_bool = var_104_float < (int)0;
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_130_object = var_0_bool;
		func_5420(var_130_object);
		var_90_bool = 1;
	} else {
		Sleep((float)1.5, var_90_bool);
	}
	var_139_bool = var_90_bool;
	if(var_139_bool != 0) {
		var_140_object = Obj();
		var_140_object = var_0_bool;
		func_5420(var_140_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_6296(var_146_bool)
{
	var_148_int = 0;
	func_5740(var_148_int);
	var_146_bool = var_148_int == (int)2;
	return 0;
}


func_6303(var_125_bool)
{
	var_127_int = 0;
	func_5740(var_127_int);
	var_125_bool = var_127_int == (int)3;
	return 0;
}


func_1186(var_0_bool, var_1_bool, var_2_bool, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0;
	var_0_bool = var_112_object;
	var_126_cvector = CVector(0,0,0); var_127_float = 0;
	func_1156(var_125_float, var_126_cvector, (float)1.7453293800354004);
	var_126_cvector = var_121_cvector;
	var_122_float = var_121_cvector | var_121_cvector;
	var_157_bool = var_122_float < (float)2500.0;
	if(var_157_bool != 0) {
		var_158_cvector = CVector(0,0,0); var_159_float = 0;
		func_1156(var_125_float, var_158_cvector, (float)2.6179938316345215);
		var_158_cvector = var_121_cvector;
		var_122_float = var_121_cvector | var_121_cvector;
		var_161_bool = var_122_float < (float)2500.0;
		if(var_161_bool != 0) {
			var_163_float = sqrt(var_122_float);
			var_164_int = "Can't retreat, distance: " + var_163_float;
			Trace(var_164_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_166_float = GetByIndex(var_121_cvector, 0);
	var_167_float = GetByIndex(var_121_cvector, 2);
	Rotate(var_166_float, var_167_float);
	var_168_cvector = CVector(0,0,0);
	func_5318(var_168_cvector);
	var_1_bool = var_168_cvector + var_121_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1228:
	MovePoint(var_1_bool, (int)1, var_123_bool);
	var_174_bool = var_123_bool;
	if(var_174_bool != 0) {
		var_175_bool = var_0_bool == 0; //@ne
		if(var_175_bool != 0) {
			goto Label_1258;
		EMIT "GOTO 0x4e8";

		Label_1258:
			return 10;
		}
		var_176_cvector = CVector(0,0,0); var_177_float = 0;
		func_1156(var_125_float, var_176_cvector, (float)2.6179938316345215);
		var_176_cvector = var_124_cvector;
		var_125_float = var_124_cvector | var_124_cvector;
		var_179_bool = var_125_float >= (float)2500.0;
		if(var_179_bool != 0) {
			var_180_cvector = CVector(0,0,0);
			func_5318(var_180_cvector);
			var_1_bool = var_180_cvector + var_124_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1258;
		}
	}
	var_183_bool = var_2_bool == 0; //@nz
	if(var_183_bool == 1) goto Label_1228;
	
}


func_1699(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_5797(var_60_object, var_61_string)
{
	var_63_bool = var_61_string == "unholster";
	if(var_63_bool != 0) {
		var_64_object = Obj();
		var_60_object = var_64_object;
		func_6061(var_64_object);
	} else {
		var_138_bool = var_61_string == "player_shot";
		if(var_138_bool != 0) {
			var_139_object = Obj();
			var_60_object = var_139_object;
			func_6084(var_139_object);
			goto Label_5821;
		}
		var_206_bool = var_61_string == "battle";
		if(var_206_bool == 0) goto Label_5821;
		var_207_object = Obj();
		var_60_object = var_207_object;
		func_6099(var_207_object);
	}
Label_5821:
	return 0;
	
}


func_6310(var_137_bool)
{
	var_139_int = 0;
	func_5740(var_139_int);
	var_137_bool = var_139_int == (int)4;
	return 0;
}


func_6317(var_131_bool)
{
	var_133_int = 0;
	func_5740(var_133_int);
	var_131_bool = var_133_int == (int)5;
	return 0;
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_5323(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_6324(var_173_bool)
{
	var_175_int = 0;
	func_5740(var_175_int);
	var_173_bool = var_175_int == (int)6;
	return 0;
}


func_6331(var_179_bool)
{
	var_181_int = 0;
	func_5740(var_181_int);
	var_179_bool = var_181_int == (int)7;
	return 0;
}


func_5822(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_24_object = var_29_object;
	func_6056(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_5338(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		@@var_24_object:IsWeaponHolstered(var_26_bool);
		var_36_bool = var_26_bool == 0; //@nz
		if(var_36_bool != 0) {
			var_23_bool = 1;
			return 2;
		}
	}
	var_23_bool = 0;
	return 2;
}


func_6338(var_96_bool)
{
	var_98_int = 0;
	func_5740(var_98_int);
	var_96_bool = var_98_int == (int)8;
	return 0;
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_bool = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_5436(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_6557(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_6555(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_6559(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_6561(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_6405(var_110_int);
	@@var_54_object:SetPlayerName(var_110_int);
	IsOverrideActive(var_55_bool);
	var_118_bool = var_55_bool;
	if(var_118_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	DoDialog(var_54_object);
	var_119_object = Obj(); var_120_object = Obj();
	var_48_object = var_119_object;
	var_54_object = var_120_object;
	TaskCall(9);
	func_1805(var_121_object, var_122_object, var_123_string, var_124_bool, var_119_object, var_120_object);
	TaskReturn();
	@@var_54_object:IsDialogEnd(var_57_bool);
	
Label_1787:
	var_484_bool = var_57_bool == 0; //@nz
	if(var_484_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_1787;
	}
	var_48_object = Obj();
	func_5505();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_710(var_0_bool)
{
	var_91_object = Obj();
	var_91_object = var_0_bool;
	func_5615(var_91_object);
	return 0;
}


func_5318(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
	return 2;
}


func_6345(var_194_bool)
{
	var_196_int = 0;
	func_5740(var_196_int);
	var_194_bool = var_196_int == (int)9;
	return 0;
}


func_5323(var_79_cvector, var_80_object)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_83_cvector);
	@@var_80_object:GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
	return 4;
}


func_6352(var_107_bool)
{
	var_109_int = 0;
	func_5740(var_109_int);
	var_107_bool = var_109_int == (int)10;
	return 0;
}


func_5330(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_5845(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	func_6061(var_40_object);
	return 0;
}


func_6359(var_202_bool)
{
	var_204_int = 0;
	func_5740(var_204_int);
	var_202_bool = var_204_int == (int)11;
	return 0;
}


func_5338(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_5851(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_5338(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_object = Obj();
		func_5659(var_30_object);
		ReportReputationChange(var_25_object, var_30_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_6366(var_208_bool)
{
	var_210_int = 0;
	func_5740(var_210_int);
	var_208_bool = var_210_int == (int)12;
	return 0;
}


func_5343(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


func_6373(var_301_bool)
{
	var_303_bool = 0;
	var_303_bool = 0;
	var_304_int = 0;
	func_5749(var_304_int);
	var_310_bool = var_304_int >= (int)0;
	if(var_310_bool != 0) {
		var_311_int = 0;
		func_5749(var_311_int);
		var_313_bool = var_311_int < (int)12;
		if(var_313_bool != 0) {
			var_303_bool = 1;
		}
	}
	if(var_303_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_5864(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_6105(var_31_object);
		var_30_bool = var_23_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = 0;
	return 2;
}


func_5355(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_5360(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_5355(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5880(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj();
	var_38_bool = var_34_string == "heal";
	if(var_38_bool != 0) {
		FindActor(var_36_object, "player");
		var_36_object = Obj();
		func_6108();
		var_36_object = 0;
	}
	return 2;
}


func_6394(var_325_bool)
{
	var_327_int = 0;
	func_5749(var_327_int);
	var_329_bool = var_327_int >= (int)12;
	if(var_329_bool != 0) {
		var_325_bool = 1;
		return 0;
	}
	var_325_bool = 0;
	return 0;
}


func_251(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
	return 0;
}


func_259(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
	return 0;
}


func_5893(var_158_string, var_159_int)
{
	var_160_string = ""; var_161_string = "";
	var_162_int = var_159_int;
	if(var_162_int != 0) {
		"idle" = "idle" + var_159_int;
	}
	var_161_string = var_158_string;
	return 2;
}


func_6405(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x1914";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_5900(var_152_int)
{
	var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_bool = 0;
	var_155_int = 0;
	
Label_5902:
	var_158_string = ""; var_159_int = 0;
	var_155_int = var_159_int;
	func_5893(var_158_string, var_159_int);
	HasAnimation(var_156_bool, "all", var_158_string);
	var_163_bool = var_156_bool == 0; //@nz
	if(var_163_bool != 0) {
	} else {
		var_155_int = var_155_int + (int)1;
		goto Label_5902;
	}
	var_155_int = var_152_int;
	return 4;
	
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_119_object, var_120_object)
{
	var_0_bool = var_120_object;
	var_1_bool = var_119_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_126_bool = 0; var_127_object = Obj();
		var_127_object = var_1_bool;
		func_6137(var_127_object);
		if(var_126_bool != 0) {
			var_134_string = "";
			func_2447(var_120_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543209);
			@@@var_0_bool:ClearReplies();
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_bool;
			func_6219(var_153_bool, var_154_object);
			if(var_153_bool != 1) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_bool;
				func_6239(var_164_bool, var_165_object);
				if(var_164_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_bool:AddReply((int)543240, (int)45697, (int)45696);
			}
			var_173_bool = 0;
			var_173_bool = 1;
			var_174_bool = 0;
			var_174_bool = 1;
			var_175_bool = 0;
			var_175_bool = 1;
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_bool;
			func_6149(var_176_bool, var_177_object);
			if(var_176_bool != 1) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_bool;
				func_6169(var_182_bool, var_183_object);
				if(var_182_bool != 1) {
					var_175_bool = 0;
				}
			}
			if(var_175_bool != 1) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_bool;
				func_6189(var_188_bool, var_189_object);
				if(var_188_bool != 1) {
					var_174_bool = 0;
				}
			}
			if(var_174_bool != 1) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_bool;
				func_6179(var_194_bool, var_195_object);
				if(var_194_bool != 1) {
					var_173_bool = 0;
				}
			}
			if(var_173_bool != 0) {
				@@@var_0_bool:AddReply((int)543233, (int)45690, (int)45689);
			}
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_bool;
			func_6159(var_203_bool, var_204_object);
			if(var_203_bool != 0) {
				@@@var_0_bool:AddReply((int)543214, (int)45672, (int)45670);
			}
			var_212_bool = 0;
			var_212_bool = 1;
			var_213_bool = 0;
			var_213_bool = 1;
			var_214_bool = 0;
			var_214_bool = 1;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_bool;
			func_6149(var_215_bool, var_216_object);
			if(var_215_bool != 1) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_bool;
				func_6159(var_217_bool, var_218_object);
				if(var_217_bool != 1) {
					var_214_bool = 0;
				}
			}
			if(var_214_bool != 1) {
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_bool;
				func_6169(var_219_bool, var_220_object);
				if(var_219_bool != 1) {
					var_213_bool = 0;
				}
			}
			if(var_213_bool != 1) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_bool;
				func_6179(var_221_bool, var_222_object);
				if(var_221_bool != 1) {
					var_212_bool = 0;
				}
			}
			if(var_212_bool != 0) {
				@@@var_0_bool:AddReply((int)543210, (int)-1, (int)45666);
			}
			var_226_bool = 0;
			var_226_bool = 1;
			var_227_bool = 0;
			var_227_bool = 1;
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_bool;
			func_6189(var_228_bool, var_229_object);
			if(var_228_bool != 1) {
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_bool;
				func_6199(var_230_bool, var_231_object);
				if(var_230_bool != 1) {
					var_227_bool = 0;
				}
			}
			if(var_227_bool != 1) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_bool;
				func_6209(var_236_bool, var_237_object);
				if(var_236_bool != 1) {
					var_226_bool = 0;
				}
			}
			if(var_226_bool != 0) {
				@@@var_0_bool:AddReply((int)543211, (int)-1, (int)45667);
			}
			var_245_bool = 0;
			var_245_bool = 1;
			var_246_bool = 0;
			var_246_bool = 1;
			var_247_bool = 0;
			var_247_bool = 1;
			var_248_bool = 0;
			var_248_bool = 1;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_bool;
			func_6219(var_249_bool, var_250_object);
			if(var_249_bool != 1) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_bool;
				func_6229(var_251_bool, var_252_object);
				if(var_251_bool != 1) {
					var_248_bool = 0;
				}
			}
			if(var_248_bool != 1) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_bool;
				func_6239(var_257_bool, var_258_object);
				if(var_257_bool != 1) {
					var_247_bool = 0;
				}
			}
			if(var_247_bool != 1) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_bool;
				func_6249(var_259_bool, var_260_object);
				if(var_259_bool != 1) {
					var_246_bool = 0;
				}
			}
			if(var_246_bool != 1) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_bool;
				func_6259(var_265_bool, var_266_object);
				if(var_265_bool != 1) {
					var_245_bool = 0;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_bool:AddReply((int)543212, (int)-1, (int)45668);
			}
			var_274_bool = 0;
			var_274_bool = 1;
			var_275_bool = 0;
			var_275_bool = 1;
			var_276_bool = 0;
			var_276_bool = 1;
			var_277_bool = 0;
			var_277_bool = 1;
			var_278_bool = 0; var_279_object = Obj();
			var_279_object = var_1_bool;
			func_6149(var_278_bool, var_279_object);
			if(var_278_bool != 1) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_bool;
				func_6159(var_280_bool, var_281_object);
				if(var_280_bool != 1) {
					var_277_bool = 0;
				}
			}
			if(var_277_bool != 1) {
				var_282_bool = 0; var_283_object = Obj();
				var_283_object = var_1_bool;
				func_6179(var_282_bool, var_283_object);
				if(var_282_bool != 1) {
					var_276_bool = 0;
				}
			}
			if(var_276_bool != 1) {
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_bool;
				func_6189(var_284_bool, var_285_object);
				if(var_284_bool != 1) {
					var_275_bool = 0;
				}
			}
			if(var_275_bool != 1) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_bool;
				func_6209(var_286_bool, var_287_object);
				if(var_286_bool != 1) {
					var_274_bool = 0;
				}
			}
			if(var_274_bool != 0) {
				@@@var_0_bool:AddReply((int)543213, (int)-1, (int)45669);
			}
			var_291_bool = 0;
			var_291_bool = 1;
			var_292_bool = 0;
			var_292_bool = 1;
			var_293_bool = 0;
			var_293_bool = 1;
			var_294_bool = 0;
			var_294_bool = 1;
			var_295_bool = 0;
			var_295_bool = 1;
			var_296_bool = 0;
			var_296_bool = 1;
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_bool;
			func_6169(var_297_bool, var_298_object);
			if(var_297_bool != 1) {
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_bool;
				func_6199(var_299_bool, var_300_object);
				if(var_299_bool != 1) {
					var_296_bool = 0;
				}
			}
			if(var_296_bool != 1) {
				var_301_bool = 0; var_302_object = Obj();
				var_302_object = var_1_bool;
				func_6229(var_301_bool, var_302_object);
				if(var_301_bool != 1) {
					var_295_bool = 0;
				}
			}
			if(var_295_bool != 1) {
				var_303_bool = 0; var_304_object = Obj();
				var_304_object = var_1_bool;
				func_6259(var_303_bool, var_304_object);
				if(var_303_bool != 1) {
					var_294_bool = 0;
				}
			}
			if(var_294_bool != 1) {
				var_305_bool = 0; var_306_object = Obj();
				var_306_object = var_1_bool;
				func_6159(var_305_bool, var_306_object);
				if(var_305_bool != 1) {
					var_293_bool = 0;
				}
			}
			if(var_293_bool != 1) {
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_bool;
				func_6219(var_307_bool, var_308_object);
				if(var_307_bool != 1) {
					var_292_bool = 0;
				}
			}
			if(var_292_bool != 1) {
				var_309_bool = 0; var_310_object = Obj();
				var_310_object = var_1_bool;
				func_6239(var_309_bool, var_310_object);
				if(var_309_bool != 1) {
					var_291_bool = 0;
				}
			}
			if(var_291_bool != 0) {
				@@@var_0_bool:AddReply((int)543215, (int)-1, (int)45671);
			}
			var_314_bool = 0;
			var_314_bool = 1;
			var_315_bool = 0;
			var_315_bool = 1;
			var_316_bool = 0;
			var_316_bool = 1;
			var_317_bool = 0; var_318_object = Obj();
			var_318_object = var_1_bool;
			func_6249(var_317_bool, var_318_object);
			if(var_317_bool != 1) {
				var_319_bool = 0; var_320_object = Obj();
				var_320_object = var_1_bool;
				func_6229(var_319_bool, var_320_object);
				if(var_319_bool != 1) {
					var_316_bool = 0;
				}
			}
			if(var_316_bool != 1) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_bool;
				func_6219(var_321_bool, var_322_object);
				if(var_321_bool != 1) {
					var_315_bool = 0;
				}
			}
			if(var_315_bool != 1) {
				var_323_bool = 0; var_324_object = Obj();
				var_324_object = var_1_bool;
				func_6209(var_323_bool, var_324_object);
				if(var_323_bool != 1) {
					var_314_bool = 0;
				}
			}
			if(var_314_bool != 0) {
				@@@var_0_bool:AddReply((int)543219, (int)-1, (int)45675);
			}
		} else {
				var_346_string = "";
				func_2447(var_120_object, "Neutral");
				@@@var_0_bool:SetMessage((int)537240);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)537241, (int)-1, (int)39084);
				var_351_bool = 0;
				var_351_bool = 0;
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_bool;
				func_6125(var_353_object);
				if(var_352_bool != 0) {
					var_358_bool = 0; var_359_object = Obj();
					var_359_object = var_1_bool;
					func_6149(var_358_bool, var_359_object);
					if(var_358_bool != 0) {
						var_351_bool = 1;
					}
				}
				if(var_351_bool != 0) {
					@@@var_0_bool:AddReply((int)537242, (int)39086, (int)39085);
				}
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_bool;
				func_6149(var_363_bool, var_364_object);
				if(var_363_bool != 0) {
					@@@var_0_bool:AddReply((int)537277, (int)39122, (int)39121);
				}
				var_368_bool = 0; var_369_object = Obj();
				var_369_object = var_1_bool;
				func_6159(var_368_bool, var_369_object);
				if(var_368_bool != 0) {
					@@@var_0_bool:AddReply((int)537329, (int)39176, (int)39175);
				}
				var_373_bool = 0;
				var_373_bool = 0;
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_bool;
				func_6169(var_374_bool, var_375_object);
				if(var_374_bool != 0) {
					var_376_bool = 0; var_377_object = Obj();
					var_377_object = var_1_bool;
					func_6269(var_376_bool, var_377_object);
					if(var_376_bool != 0) {
						var_373_bool = 1;
					}
				}
				if(var_373_bool != 0) {
					@@@var_0_bool:AddReply((int)537352, (int)39199, (int)39198);
				}
				var_394_bool = 0;
				var_394_bool = 0;
				var_395_bool = 0;
				var_395_bool = 0;
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_bool;
				func_6125(var_397_object);
				if(var_396_bool != 0) {
					var_398_bool = 0; var_399_object = Obj();
					var_399_object = var_1_bool;
					func_6169(var_398_bool, var_399_object);
					if(var_398_bool != 0) {
						var_395_bool = 1;
					}
				}
				if(var_395_bool != 0) {
					var_400_bool = 0; var_401_object = Obj();
					var_401_object = var_1_bool;
					func_6279(var_400_bool, var_401_object);
					if(var_400_bool != 0) {
						var_394_bool = 1;
					}
				}
				if(var_394_bool != 0) {
					@@@var_0_bool:AddReply((int)537359, (int)39206, (int)39205);
				}
				var_410_bool = 0;
				var_410_bool = 0;
				var_411_bool = 0; var_412_object = Obj();
				var_412_object = var_1_bool;
				func_6179(var_411_bool, var_412_object);
				if(var_411_bool != 0) {
					var_413_bool = 0; var_414_object = Obj();
					var_414_object = var_1_bool;
					func_6269(var_413_bool, var_414_object);
					if(var_413_bool != 0) {
						var_410_bool = 1;
					}
				}
				if(var_410_bool != 0) {
					@@@var_0_bool:AddReply((int)537380, (int)39227, (int)39226);
				}
				var_418_bool = 0;
				var_418_bool = 0;
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_bool;
				func_6179(var_419_bool, var_420_object);
				if(var_419_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_bool;
					func_6279(var_421_bool, var_422_object);
					if(var_421_bool != 0) {
						var_418_bool = 1;
					}
				}
				if(var_418_bool != 0) {
					@@@var_0_bool:AddReply((int)537390, (int)39237, (int)39236);
				}
				var_426_bool = 0; var_427_object = Obj();
				var_427_object = var_1_bool;
				func_6189(var_426_bool, var_427_object);
				if(var_426_bool != 0) {
					@@@var_0_bool:AddReply((int)537400, (int)39247, (int)39246);
				}
				var_431_bool = 0;
				var_431_bool = 0;
				var_432_bool = 0; var_433_object = Obj();
				var_433_object = var_1_bool;
				func_6125(var_433_object);
				if(var_432_bool != 0) {
					var_434_bool = 0; var_435_object = Obj();
					var_435_object = var_1_bool;
					func_6199(var_434_bool, var_435_object);
					if(var_434_bool != 0) {
						var_431_bool = 1;
					}
				}
				if(var_431_bool != 0) {
					@@@var_0_bool:AddReply((int)537423, (int)39270, (int)39269);
				}
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_bool;
				func_6209(var_439_bool, var_440_object);
				if(var_439_bool != 0) {
					@@@var_0_bool:AddReply((int)537433, (int)39280, (int)39279);
				}
				var_444_bool = 0;
				var_444_bool = 0;
				var_445_bool = 0; var_446_object = Obj();
				var_446_object = var_1_bool;
				func_6125(var_446_object);
				if(var_445_bool != 0) {
					var_447_bool = 0; var_448_object = Obj();
					var_448_object = var_1_bool;
					func_6219(var_447_bool, var_448_object);
					if(var_447_bool != 0) {
						var_444_bool = 1;
					}
				}
				if(var_444_bool != 0) {
					@@@var_0_bool:AddReply((int)537451, (int)39299, (int)39298);
				}
				var_452_bool = 0;
				var_452_bool = 0;
				var_453_bool = 0; var_454_object = Obj();
				var_454_object = var_1_bool;
				func_6125(var_454_object);
				if(var_453_bool != 0) {
					var_455_bool = 0; var_456_object = Obj();
					var_456_object = var_1_bool;
					func_6229(var_455_bool, var_456_object);
					if(var_455_bool != 0) {
						var_452_bool = 1;
					}
				}
				if(var_452_bool != 0) {
					@@@var_0_bool:AddReply((int)537460, (int)39308, (int)39307);
				}
				var_460_bool = 0;
				var_460_bool = 0;
				var_461_bool = 0; var_462_object = Obj();
				var_462_object = var_1_bool;
				func_6125(var_462_object);
				if(var_461_bool != 0) {
					var_463_bool = 0; var_464_object = Obj();
					var_464_object = var_1_bool;
					func_6249(var_463_bool, var_464_object);
					if(var_463_bool != 0) {
						var_460_bool = 1;
					}
				}
				if(var_460_bool != 0) {
					@@@var_0_bool:AddReply((int)537473, (int)39321, (int)39320);
				}
				var_468_bool = 0; var_469_object = Obj();
				var_469_object = var_1_bool;
				func_6249(var_468_bool, var_469_object);
				if(var_468_bool != 0) {
					@@@var_0_bool:AddReply((int)537483, (int)39331, (int)39330);
				}
				var_473_bool = 0; var_474_object = Obj();
				var_474_object = var_1_bool;
				func_6259(var_473_bool, var_474_object);
				if(var_473_bool != 0) {
					@@@var_0_bool:AddReply((int)537493, (int)39341, (int)39340);
				}
				@@@var_0_bool:AddReply((int)537503, (int)-1, (int)39350);
				@@@var_0_bool:AddReply((int)537504, (int)-1, (int)39351);
				goto Label_2417;
		}
	}
Label_2417:
	var_328_bool = 0;
	func_6563(var_328_bool);
	if(var_328_bool != 0) {

	Label_2421:
		lshWaitForAnimEnd();
		var_329_bool = var_3_bool;
		if(var_329_bool != 0) {
		} else {
			var_330_string = "";
			var_330_string = var_2_bool;
			func_5584(var_330_string);
			goto Label_2421;
	}
		PlayAnimation("all", "idle");

	Label_2436:
		WaitForAnimEnd();
		var_343_bool = var_3_bool;
		if(var_343_bool != 0) {
			goto Label_2446;
		}
		PlayAnimation("all", "idle");
		goto Label_2436;

	}
	goto Label_2446;
	
Label_2446:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_23_object = var_29_object;
	func_5396(var_28_bool, var_29_object);
	var_62_bool = var_28_bool == 0; //@nz
	if(var_62_bool != 0) {
		return 4;
	}
	var_63_bool = var_2_bool;
	if(var_63_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_23_object, var_26_bool);
	var_64_bool = var_26_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 4;
	}
	var_65_int = 0; var_66_object = Obj();
	var_23_object = var_66_object;
	func_5917(var_66_object);
	var_65_int = var_27_int;
	var_78_bool = var_27_int > (int)0;
	if(var_78_bool != 0) {
		var_80_bool = var_27_int > (int)1;
		if(var_80_bool != 0) {
			func_259(var_27_int);
		}
		var_82_object = Obj();
		var_23_object = var_82_object;
		func_5926(var_82_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_5396(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_5360(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_5343(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_6422(var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
	return 2;
}


func_6428(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0;
	FindActor(var_71_object, "player");
	var_74_bool = var_71_object == 0; //@nz
	if(var_74_bool != 0) {
		var_68_float = 0;
		return 4;
	}
	@@var_71_object:GetProperty("reputation", var_72_float);
	var_72_float = var_68_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5917(var_65_int)
{
	var_67_bool = 0;
	func_6613(var_67_bool);
	if(var_67_bool != 0) {
		var_65_int = 2;
	} else {
		var_65_int = 0;
	}
	return 0;
	
}


func_1311(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_5926(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	TaskCall(3);
	func_659(var_84_object, var_83_object);
	TaskReturn();
	return 0;
}


func_6442(var_39_object)
{
	var_40_int = 0;
	func_6422(var_40_int);
	var_45_bool = var_40_int == (int)1;
	if(var_45_bool != 0) {
		WorkWithCorpse(var_39_object);
	} else {
		Barter(var_39_object);
	}
	return 0;
	
}


func_5420(var_98_object)
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0);
	@@var_98_object:GetPosition(var_102_cvector);
	GetPosition(var_103_cvector);
	var_104_cvector = var_102_cvector - var_103_cvector;
	var_105_float = GetByIndex(var_104_cvector, 0);
	var_106_float = GetByIndex(var_104_cvector, 2);
	RotateAsync(var_105_float, var_106_float);
	return 6;
}


func_5934(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_object = var_37_object;
	func_5396(var_36_bool, var_37_object);
	if(var_36_bool != 0) {
		var_34_int = 2;
	} else {
		var_34_int = 0;
	}
	return 0;
	
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_5323(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5431(var_105_bool)
{
	var_106_bool = 0; var_107_bool = 0;
	IsLoaded(var_107_bool);
	var_107_bool = var_105_bool;
	return 2;
}


func_5944(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
	return 0;
}


func_6455(var_24_bool)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0;
	ClearSubContainer((int)0);
	func_5740((int)0);
	var_32_int = var_30_int;
	var_38_bool = var_24_bool;
	if(var_38_bool != 0) {
		var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0;
		func_5644("alpha_pills", (int)1, (int)2, (int)4);
		var_55_string = ""; var_56_int = 0; var_57_int = 0; var_58_int = 0;
		func_5644("meradorm", (int)2, (int)3, (int)3);
		var_60_bool = var_30_int >= (int)3;
		if(var_60_bool != 0) {
			var_61_string = ""; var_62_int = 0; var_63_int = 0;
			func_5633("beta_pills", (int)1, (int)4);
		}
		var_71_bool = var_30_int >= (int)8;
		if(var_71_bool != 0) {
			var_72_string = ""; var_73_int = 0; var_74_int = 0; var_75_int = 0;
			func_5644("monomicin", (int)1, (int)2, (int)2);
		} else {
			var_77_bool = var_30_int >= (int)4;
			if(var_77_bool == 0) goto Label_6508;
			var_78_string = ""; var_79_int = 0; var_80_int = 0;
			func_5633("monomicin", (int)1, (int)2);
	}
		var_81_string = ""; var_82_int = 0; var_83_int = 0;
		func_5633("lockpick", (int)1, (int)4);
		var_84_string = ""; var_85_int = 0; var_86_int = 0;
		func_5633("rifle_ammo", (int)1, (int)2);
		var_87_string = ""; var_88_int = 0; var_89_int = 0;
		func_5633("revolver_ammo", (int)1, (int)2);
		var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0;
		func_5644("samopal_ammo", (int)1, (int)2, (int)2);
		var_95_bool = var_30_int >= (int)8;
		if(var_95_bool != 0) {
			var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_int = 0;
			func_5644("monomicin", (int)1, (int)2, (int)2);
			goto Label_6554;
		}
		var_101_bool = var_30_int >= (int)4;
		if(var_101_bool == 0) goto Label_6554;
		var_102_string = ""; var_103_int = 0; var_104_int = 0;
		func_5633("monomicin", (int)1, (int)2);
	}
Label_6508:
	goto Label_6554;
	
Label_6554:
	return 6;
	
}


func_316(var_0_bool, var_1_bool)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0; var_113_object = Obj(); var_114_bool = 0; var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_bool = 0; var_119_object = Obj(); var_120_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_115_float, (float)0.5);
	Sleep(var_115_float);
	
Label_324:
	var_122_bool = var_0_bool == 0; //@nz
	if(var_122_bool != 0) {
		var_123_bool = var_1_bool == 0; //@nz
		if(var_123_bool != 0) {

		Label_328:
			GetPosition(var_117_cvector);
			var_124_float = 0;
			func_375(var_124_float);
			GetRandomPFPointInCircle(var_116_cvector, var_117_cvector, var_124_float, var_118_bool);
			var_127_bool = var_118_bool;
			if(var_127_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_328;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_344;
	
Label_344:
	var_128_object = Obj(); var_129_cvector = CVector(0,0,0);
	var_116_cvector = var_129_cvector;
	func_403(var_128_object, var_129_cvector);
	var_128_object = var_119_object;
	var_132_bool = var_119_object != 0; //@nn
	if(var_132_bool != 0) {
		RotatePath(var_119_object, var_120_bool);
		var_133_bool = var_120_bool;
		if(var_133_bool != 0) {
			var_134_bool = 0;
			func_401(var_134_bool);
			FollowPath(var_119_object, var_134_bool, var_120_bool);
			var_119_object = 0;
			var_135_bool = var_120_bool;
			if(var_135_bool != 0) {
				TaskCall(2);
				func_573();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_119_object = 0;
	goto Label_324;
	
}


func_5436(var_58_bool, var_59_object, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0;
	@@var_59_object:GetPosition(var_71_cvector);
	@@var_59_object:GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	var_79_float = var_79_float + var_70_float;
	SetByIndex(var_71_cvector, 1) = var_79_float;
	GetPosition(var_72_cvector);
	GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	var_80_float = var_80_float + var_70_float;
	SetByIndex(var_72_cvector, 1) = var_80_float;
	var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_82_int = var_73_cvector | var_73_cvector;
	var_83_float = sqrt(var_82_int);
	var_73_cvector = var_73_cvector / var_83_float;
	var_74_cvector = -var_73_cvector;
	var_84_float = var_73_cvector * var_60_float;
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_86_cvector = var_74_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5665(var_85_cvector, var_86_cvector);
	var_94_float = var_85_cvector * (int)25;
	var_95_int = var_84_float + var_94_float;
	var_75_cvector = var_95_int - CVector(0.0, 10.0, 0.0);
	var_76_cvector = var_72_cvector + var_75_cvector;
	IsOverrideActive(var_77_bool);
	var_97_bool = var_77_bool;
	if(var_97_bool != 0) {
		var_58_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_76_cvector, var_74_cvector, (bool)1);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	Rotate(var_99_float, var_100_float);
	var_101_bool = 0;
	func_6563(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_5499;
		LookAsyncCamera("head");
	}
Label_5499:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_5952(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj();
	var_75_object = var_78_object;
	func_5396(var_77_bool, var_78_object);
	if(var_77_bool != 0) {
		var_74_int = 2;
	} else {
		var_74_int = 0;
	}
	return 0;
	
}


func_1350(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_5665(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5665(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_5962(var_111_object)
{
	var_112_object = Obj();
	var_111_object = var_112_object;
	TaskCall(5);
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
	return 0;
}


func_5970(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_33_object = var_40_object;
	func_5343(var_39_bool, var_40_object, "class");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	@@var_33_object:GetProperty("class", var_37_string);
	var_51_bool = var_37_string == "rat";
	if(var_51_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0x1770";
	}
	var_53_bool = var_37_string == "rat_big";
	if(var_53_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0x1770";
	}
	var_55_bool = var_37_string == "dog";
	if(var_55_bool != 0) {
		var_31_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_32_object);
	var_56_bool = 0;
	var_56_bool = 1;
	var_57_bool = var_38_bool;
	if(var_57_bool != 1) {
		var_58_float = 0; var_59_object = Obj();
		var_32_object = var_59_object;
		func_5330(var_58_float, var_59_object);
		var_66_float = var_34_float * var_34_float;
		var_67_bool = var_58_float <= var_66_float;
		if(var_67_bool != 1) {
			var_56_bool = 0;
		}
	}
	if(var_56_bool != 0) {
		var_31_bool = 1;
		return 4;
	}
	CanSee(var_38_bool, var_33_object);
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = var_38_bool;
	if(var_69_bool != 1) {
		var_70_float = 0; var_71_object = Obj();
		var_33_object = var_71_object;
		func_5330(var_70_float, var_71_object);
		var_72_float = var_34_float * var_34_float;
		var_73_bool = var_70_float <= var_72_float;
		if(var_73_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 0) {
		var_31_bool = 1;
		return 4;
	}
	var_31_bool = 0;
	return 4;
}


func_858()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1380(var_0_bool, var_1_bool, var_2_bool, var_41_object)
{
	var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_float = 0;
	var_0_bool = var_41_object;
	var_55_cvector = CVector(0,0,0); var_56_float = 0;
	func_1350(var_54_float, var_55_cvector, (float)1.7453293800354004);
	var_55_cvector = var_50_cvector;
	var_51_float = var_50_cvector | var_50_cvector;
	var_86_bool = var_51_float < (float)2500.0;
	if(var_86_bool != 0) {
		var_87_cvector = CVector(0,0,0); var_88_float = 0;
		func_1350(var_54_float, var_87_cvector, (float)2.6179938316345215);
		var_87_cvector = var_50_cvector;
		var_51_float = var_50_cvector | var_50_cvector;
		var_90_bool = var_51_float < (float)2500.0;
		if(var_90_bool != 0) {
			var_92_float = sqrt(var_51_float);
			var_93_int = "Can't retreat, distance: " + var_92_float;
			Trace(var_93_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_95_float = GetByIndex(var_50_cvector, 0);
	var_96_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_cvector = CVector(0,0,0);
	func_5318(var_97_cvector);
	var_1_bool = var_97_cvector + var_50_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1422:
	MovePoint(var_1_bool, (int)1, var_52_bool);
	var_103_bool = var_52_bool;
	if(var_103_bool != 0) {
		var_104_bool = var_0_bool == 0; //@ne
		if(var_104_bool != 0) {
			goto Label_1452;
		EMIT "GOTO 0x5aa";

		Label_1452:
			return 10;
		}
		var_105_cvector = CVector(0,0,0); var_106_float = 0;
		func_1350(var_54_float, var_105_cvector, (float)2.6179938316345215);
		var_105_cvector = var_53_cvector;
		var_54_float = var_53_cvector | var_53_cvector;
		var_108_bool = var_54_float >= (float)2500.0;
		if(var_108_bool != 0) {
			var_109_cvector = CVector(0,0,0);
			func_5318(var_109_cvector);
			var_1_bool = var_109_cvector + var_53_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1452;
		}
	}
	var_112_bool = var_2_bool == 0; //@nz
	if(var_112_bool == 1) goto Label_1422;
	
}


func_375(var_124_float)
{
	var_125_float = 0; var_126_float = 0;
	GetCameraFarDistance(var_126_float);
	var_126_float = var_124_float;
	return 2;
}


func_5505()
{
	var_486_bool = 0; var_487_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_489_bool = 0;
	func_6563(var_489_bool);
	if(var_489_bool != 0) {
	} else {
		HasAnimationTrack(var_487_bool, "head");
		var_491_bool = var_487_bool;
		if(var_491_bool == 0) goto Label_5522;
		UnlookAsync("head");
	}
Label_5522:
	return 2;
	
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2447(var_2_bool, var_75_string)
{
	var_76_bool = 0;
	func_6563(var_76_bool);
	var_77_bool = var_76_bool == 0; //@nz
	if(var_77_bool != 0) {
		return 0;
	}
	var_78_bool = var_75_string == var_2_bool;
	if(var_78_bool != 0) {
		return 0;
	}
	var_79_string = ""; var_80_bool = 0;
	var_75_string = var_79_string;
	var_82_bool = var_75_string == "";
	if(var_82_bool != 0) {
		var_80_bool = 0;
	} else {
		var_80_bool = 1;
	}
	func_5600(var_79_string, var_80_bool);
	var_2_bool = var_75_string;
	return 0;
	
}


func_401(var_134_bool)
{
	var_134_bool = 0;
	return 0;
}


func_403(var_128_object, var_129_cvector)
{
	var_130_object = Obj(); var_131_object = Obj();
	FindShiftedPathTo(var_131_object, var_129_cvector);
	var_131_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6036(var_25_int)
{
	var_25_int = 0;
	return 0;
}


func_5523(var_494_bool, var_495_object)
{
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0;
	var_495_object = var_497_object;
	func_5531(var_496_bool, var_497_object, (float)70);
	var_496_bool = var_494_bool;
	return 0;
}


func_6039()
{
	return 0;
}


func_6041(var_209_int)
{
	var_209_int = 0;
	return 0;
}


func_6555(var_107_int)
{
	var_107_int = 515559;
	return 0;
}


func_6044()
{
	return 0;
}


func_6557(var_106_int)
{
	var_106_int = 503344;
	return 0;
}


func_6046(var_25_int)
{
	var_25_int = 2;
	return 0;
}


func_6559(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_5531(var_496_bool, var_497_object, var_498_float)
{
	var_499_float = 0; var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_cvector = CVector(0,0,0); var_504_cvector = CVector(0,0,0); var_505_cvector = CVector(0,0,0); var_506_bool = 0; var_507_float = 0; var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); var_513_cvector = CVector(0,0,0); var_514_bool = 0;
	@@var_497_object:GetPosition(var_508_cvector);
	@@var_497_object:GetEyesHeight(var_507_float);
	var_515_float = GetByIndex(var_508_cvector, 1);
	var_515_float = var_515_float + var_507_float;
	SetByIndex(var_508_cvector, 1) = var_515_float;
	GetPosition(var_509_cvector);
	GetEyesHeight(var_507_float);
	var_516_float = GetByIndex(var_509_cvector, 1);
	var_516_float = var_516_float + var_507_float;
	SetByIndex(var_509_cvector, 1) = var_516_float;
	var_510_cvector = var_508_cvector - var_509_cvector;
	var_517_float = GetByIndex(var_510_cvector, 1);
	SetByIndex(var_510_cvector, 1) = (float)0;
	var_518_int = var_510_cvector | var_510_cvector;
	var_519_float = sqrt(var_518_int);
	var_510_cvector = var_510_cvector / var_519_float;
	var_511_cvector = -var_510_cvector;
	var_520_float = var_510_cvector * var_498_float;
	var_512_cvector = var_520_float - CVector(0.0, 10.0, 0.0);
	var_513_cvector = var_509_cvector + var_512_cvector;
	IsOverrideActive(var_514_bool);
	var_522_bool = var_514_bool;
	if(var_522_bool != 0) {
		var_496_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_513_cvector, var_511_cvector, (bool)1);
	var_524_float = GetByIndex(var_512_cvector, 0);
	var_525_float = GetByIndex(var_512_cvector, 2);
	Rotate(var_524_float, var_525_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_496_bool = 1;
	return 16;
}


func_6049(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_6573(var_33_object, var_34_object);
	return 0;
}


func_6561(var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_6563(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_6565()
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_24_bool = 0;
	func_6455((bool)0);
	return 0;
}


func_934(var_77_object)
{
	Face(var_77_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_87_object = Obj();
	var_77_object = var_87_object;
	func_999(var_79_cvector, var_80_bool, var_77_object, var_87_object);
	return 0;
}


func_6055()
{
	return 0;
}


func_6056(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
	return 2;
}


func_6061(var_40_object)
{
	var_41_object = Obj();
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
	return 0;
}


func_6573(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		IsOverrideActive(var_36_bool);
		var_38_bool = var_36_bool == 0; //@nz
		if(var_38_bool != 0) {
			var_39_object = Obj();
			var_34_object = var_39_object;
			func_6442(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x19d4";
	}
	var_47_int = 0; var_48_object = Obj();
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	var_493_bool = (int)1000 == var_49_object;
	if(var_493_bool != 0) {
		var_494_bool = 0; var_495_object = Obj();
		var_34_object = var_495_object;
		func_5523(var_494_bool, var_495_object);
		var_526_bool = var_494_bool == 0; //@nz
		if(var_526_bool != 0) {
			return 2;
		}
		var_527_object = Obj();
		var_34_object = var_527_object;
		TaskCall(0);
		func_0(var_527_object);
		TaskReturn();
		var_34_object = Obj();
		func_5579();
	}
	return 2;
}


func_6069(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	CanSee(var_40_bool, var_38_object);
	var_37_bool = 1;
	var_41_bool = var_40_bool;
	if(var_41_bool != 1) {
		var_42_float = 0; var_43_object = Obj();
		var_38_object = var_43_object;
		func_5330(var_42_float, var_43_object);
		var_51_bool = var_42_float <= (int)4000000;
		if(var_51_bool != 1) {
			var_37_bool = 0;
		}
	}
	return 2;
}


func_6084(var_139_object)
{
	var_140_object = Obj();
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
	return 0;
}


func_969(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_5665(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5665(var_50_cvector, var_51_cvector);
	var_50_cvector = var_47_cvector;
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, (int)32, (float)7000.0);
	var_49_float = var_49_float - (int)100;
	var_65_bool = var_49_float < (int)0;
	if(var_65_bool != 0) {
		var_49_float = 0;
	}
	var_36_cvector = var_48_cvector * var_49_float;
	return 12;
}


func_5579()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_6092(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj();
	var_55_object = var_57_object;
	func_6069(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
	return 0;
}


func_5584(var_330_string)
{
	var_331_bool = 0; var_332_float = 0; var_333_float = 0; var_334_bool = 0; var_335_float = 0; var_336_float = 0;
	lshHasAnimation(var_334_bool, var_330_string);
	var_337_bool = var_334_bool;
	if(var_337_bool != 0) {
		lshGetAnimTimes(var_330_string, var_335_float, var_336_float);
		lshPlayAnimation(var_335_float, var_336_float, (bool)0);
	} else {
		var_340_int = "Can't find lsh animation : " + var_330_string;
		Trace(var_340_int);
	}
	return 6;
	
}


func_6099(var_207_object)
{
	var_208_object = Obj();
	var_207_object = var_208_object;
	func_6084(var_208_object);
	return 0;
}


func_6613(var_67_bool)
{
	var_68_float = 0;
	func_6428(var_68_float);
	var_67_bool = var_68_float > (float)0.6000000238418579;
	return 0;
}


func_6105(var_30_bool)
{
	var_30_bool = 0;
	return 0;
}


func_6619(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0;
	var_28_object = var_32_object;
	var_29_object = var_33_object;
	func_5970(var_31_bool, var_32_object, var_33_object, (float)700.0);
	var_31_bool = var_27_bool;
	return 0;
}


func_6108()
{
	return 0;
}


func_6110()
{
	SetVariable("d1GhostCatHDPathologic", (int)1);
	var_49_object = Obj(); var_50_string = "";
	func_5729(var_49_object, "quest_ghost_cat");
	return 0;
}


func_5600(var_79_string, var_80_bool)
{
	var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_bool = 0; var_87_float = 0; var_88_float = 0;
	lshHasAnimation(var_86_bool, var_79_string);
	var_89_bool = var_86_bool;
	if(var_89_bool != 0) {
		lshGetAnimTimes(var_79_string, var_87_float, var_88_float);
		lshPlayAnimation(var_87_float, var_88_float, var_80_bool);
	} else {
		var_91_int = "Can't find lsh animation : " + var_79_string;
		Trace(var_91_int);
	}
	return 6;
	
}


func_1505(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_999(var_0_bool, var_1_bool, var_2_bool, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0;
	var_0_bool = var_87_object;
	var_98_cvector = CVector(0,0,0); var_99_float = 0;
	func_969(var_97_float, var_98_cvector, (float)1.7453293800354004);
	var_98_cvector = var_93_cvector;
	var_94_float = var_93_cvector | var_93_cvector;
	var_129_bool = var_94_float < (float)2500.0;
	if(var_129_bool != 0) {
		var_130_cvector = CVector(0,0,0); var_131_float = 0;
		func_969(var_97_float, var_130_cvector, (float)2.6179938316345215);
		var_130_cvector = var_93_cvector;
		var_94_float = var_93_cvector | var_93_cvector;
		var_133_bool = var_94_float < (float)2500.0;
		if(var_133_bool != 0) {
			var_135_float = sqrt(var_94_float);
			var_136_int = "Can't retreat, distance: " + var_135_float;
			Trace(var_136_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_138_float = GetByIndex(var_93_cvector, 0);
	var_139_float = GetByIndex(var_93_cvector, 2);
	Rotate(var_138_float, var_139_float);
	var_140_cvector = CVector(0,0,0);
	func_5318(var_140_cvector);
	var_1_bool = var_140_cvector + var_93_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1041:
	MovePoint(var_1_bool, (int)1, var_95_bool);
	var_146_bool = var_95_bool;
	if(var_146_bool != 0) {
		var_147_bool = var_0_bool == 0; //@ne
		if(var_147_bool != 0) {
			goto Label_1071;
		EMIT "GOTO 0x42d";

		Label_1071:
			return 10;
		}
		var_148_cvector = CVector(0,0,0); var_149_float = 0;
		func_969(var_97_float, var_148_cvector, (float)2.6179938316345215);
		var_148_cvector = var_96_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_151_bool = var_97_float >= (float)2500.0;
		if(var_151_bool != 0) {
			var_152_cvector = CVector(0,0,0);
			func_5318(var_152_cvector);
			var_1_bool = var_152_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1071;
		}
	}
	var_155_bool = var_2_bool == 0; //@nz
	if(var_155_bool == 1) goto Label_1041;
	
}


func_6120(var_29_object)
{
	@@var_29_object:SetReturnValue((int)1000);
	return 0;
}


func_6125(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_5724(var_277_int, "branch");
	var_280_bool = var_277_int == (int)0;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_5615(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0);
	@@var_91_object:GetEyesHeight(var_94_float);
	var_95_cvector = CVector(0.0, 0.0, 0.0);
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	LookAsync(var_91_object, "head", var_95_cvector);
	return 4;
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_5323(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_6137(var_67_bool)
{
	var_69_int = 0; var_70_string = "";
	func_5724(var_69_int, "branch");
	var_74_bool = var_69_int == (int)2;
	if(var_74_bool != 0) {
		var_67_bool = 1;
		return 0;
	}
	var_67_bool = 0;
	return 0;
}


func_5626()
{
	var_25_bool = 0;
	func_6563(var_25_bool);
	if(var_25_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


