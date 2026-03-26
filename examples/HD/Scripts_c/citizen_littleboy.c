// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,GetDirection/1,StopAsync/0,UnlookAsync/1,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,GetScene/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,AddItem/3,AddItem/4,self/1,GetVariable/2,GetGameTime/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,CanSee/2,WorkWithCorpse/1,Barter/1,ClearSubContainer/1
// @STRINGS: W:Neutral|W:all|W:idle|W:head|W:attack_on|W:attack_stay|W:attack_off|A:GetPosition|W:Can't retreat, distance: |A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:Can't find lsh animation : |W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|A:SetReturnValue|W:branch|W:reputation|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:lockpick|W:alpha_pills|W:meradorm|W:powder|W:beta_pills|W:gamma_pills|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
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
// @EVENT_11: op=0x9d1 vars=int,int
// @STANDALONE_EVENT_16: op=0x1527 vars=object,string
// @STANDALONE_EVENT_41: op=0x1529 vars=object
// @STANDALONE_EVENT_22: op=0x152b vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x152d vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0xc1,0xcf,0xe2,0xe8,0xf4,0x10b,0x17c,0x21a,0x228,0x22f,0x34c,0x365,0x391,0x398,0x3a6,0x3c2,0x46b,0x526,0x53f,0x5e8,0x601,0x6aa,0x70d,0x9bb,0x9d1,0x1448,0x1480,0x14e5,0x14ed,0x14f6,0x1500,0x1527,0x1529,0x152b,0x152d,0x152f,0x154f,0x157f,0x1585,0x15c7,0x15d0,0x15d8,0x15e2,0x15ea,0x15f4,0x163e,0x1641,0x1643,0x1646,0x1648,0x164b,0x1657,0x166e,0x1676,0x167d,0x1683,0x1686,0x1688,0x168d,0x1699,0x16a5,0x16af,0x16b9,0x16c3,0x16cd,0x16d7,0x16e1,0x16eb,0x16f5,0x16ff,0x1709,0x1713,0x171d,0x1727,0x1731,0x1738,0x173f,0x1746,0x174d,0x1754,0x175b,0x1762,0x1769,0x1770,0x1777,0x177e,0x1785,0x179a,0x17ca,0x1863

task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0;
	func_6187(var_23_bool);
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
	func_5704(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_32_object = Obj();
		var_22_bool = var_32_object;
		func_5707(var_32_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5509(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5592(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_251(var_24_int);
		}
		var_75_object = Obj();
		var_22_bool = var_75_object;
		func_5602(var_75_object);
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
	func_6243(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5610(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_251(var_26_int);
			}
			var_110_object = Obj();
			var_22_object = var_110_object;
			func_5620(var_110_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_5694(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_22_bool = Obj();
		func_5697();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5423(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_251(var_25_int);
		var_59_object = Obj(); var_60_string = "";
		var_22_string = var_59_object;
		var_23_bool = var_60_string;
		func_5455(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_23_bool = var_209_string;
		var_22_string = var_210_object;
		func_5699(var_210_object);
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
		func_5702();
	}
Label_192:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5522(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_33_string = "";
		var_22_bool = var_33_string;
		func_5538(var_33_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5480(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_38_object = Obj();
		var_22_bool = var_38_object;
		func_5503(var_38_object);
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
	func_5713();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool);
	var_22_bool = Obj();
	func_5417();
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
	func_5704(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_31_object = Obj();
		var_22_bool = var_31_object;
		func_5707(var_31_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5509(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5592(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_654();
		}
		var_74_object = Obj();
		var_22_bool = var_74_object;
		func_5602(var_74_object);
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
	func_6243(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5610(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_654();
			}
			var_109_object = Obj();
			var_22_object = var_109_object;
			func_5620(var_109_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_5694(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_22_bool = Obj();
		func_5697();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5423(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_654();
		var_58_object = Obj(); var_59_string = "";
		var_22_string = var_58_object;
		var_23_bool = var_59_string;
		func_5455(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_23_bool = var_208_string;
		var_22_string = var_209_object;
		func_5699(var_209_object);
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
		func_5702();
	}
Label_537:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5522(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_654();
		var_32_string = "";
		var_22_bool = var_32_string;
		func_5538(var_32_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654();
	func_5713();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5480(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_654();
		var_37_object = Obj();
		var_22_bool = var_37_object;
		func_5503(var_37_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_5704(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_33_object = Obj();
		var_22_bool = var_33_object;
		func_5707(var_33_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_5509(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_5592(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_858();
		}
		var_76_object = Obj();
		var_22_bool = var_76_object;
		func_5602(var_76_object);
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
	func_6243(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_74_int = 0; var_75_object = Obj(); var_76_bool = 0;
		var_22_object = var_75_object;
		var_24_bool = var_76_bool;
		func_5610(var_75_object, var_76_bool);
		var_74_int = var_26_int;
		var_106_bool = var_26_int > (int)0;
		if(var_106_bool != 0) {
			var_108_bool = var_26_int > (int)1;
			if(var_108_bool != 0) {
				func_858();
			}
			var_111_object = Obj();
			var_22_object = var_111_object;
			func_5620(var_111_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_5694(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_22_bool = Obj();
		func_5697();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_5423(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_858();
		var_60_object = Obj(); var_61_string = "";
		var_22_string = var_60_object;
		var_23_bool = var_61_string;
		func_5455(var_60_object, var_61_string);
	} else {
		var_209_int = 0; var_210_string = ""; var_211_object = Obj();
		var_23_bool = var_210_string;
		var_22_string = var_211_object;
		func_5699(var_211_object);
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
		func_5702();
	}
Label_843:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_5522(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_858();
		var_34_string = "";
		var_22_bool = var_34_string;
		func_5538(var_34_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858();
	var_22_bool = Obj();
	func_5417();
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
	func_5065(var_29_bool, var_30_object);
	var_63_bool = var_29_bool == 0; //@nz
	if(var_63_bool != 0) {
		func_858();
		return 4;
	}
	GetDirection(var_25_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_4992(var_66_cvector, var_67_object);
	var_66_cvector = var_26_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_25_cvector = var_73_cvector;
	var_26_cvector = var_74_cvector;
	func_5376(var_72_float, var_73_cvector, var_74_cvector);
	var_97_bool = var_72_float < (float)0.4999999701976776;
	if(var_97_bool != 0) {
		var_98_object = Obj();
		var_98_object = var_0_bool;
		func_5089(var_98_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858();
	func_5713();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_5480(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_858();
		var_39_object = Obj();
		var_22_bool = var_39_object;
		func_5503(var_39_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool);
	func_5713();
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
		func_4987(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1123:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool);
	var_22_bool = Obj();
	func_5417();
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
		func_4987(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1310:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool);
	var_22_bool = Obj();
	func_5417();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool);
	func_5713();
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
		func_4987(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1504:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool);
	var_22_bool = Obj();
	func_5417();
	return 0;
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool);
	func_5713();
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
		func_4987(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1698:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool);
	var_22_bool = Obj();
	func_5417();
	return 0;
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	if((int)1 != 0) {
		func_5295();
		var_27_bool = var_23_int == (int)45706;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_bool;
			var_29_object = var_0_bool;
			func_5768(var_29_object);
		}
		var_32_bool = var_23_int == (int)45718;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_bool;
			var_34_object = var_0_bool;
			func_5768(var_34_object);
		}
		var_36_bool = var_23_int == (int)45732;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_bool;
			var_38_object = var_0_bool;
			func_5768(var_38_object);
		}
		var_40_bool = var_23_int == (int)39354;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_bool;
			var_42_object = var_0_bool;
			func_5768(var_42_object);
		}
		var_44_bool = var_22_int == (int)45703;
		if(var_44_bool != 0) {
			var_45_bool = 0; var_46_object = Obj();
			var_46_object = var_1_bool;
			func_5785(var_46_object);
			if(var_45_bool != 0) {
				var_53_string = "";
				func_2491(var_23_int, "Neutral");
				@@@var_0_bool:SetMessage((int)543247);
				@@@var_0_bool:ClearReplies();
				var_71_bool = 0;
				var_71_bool = 1;
				var_72_bool = 0;
				var_72_bool = 1;
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_bool;
				func_5807(var_73_bool, var_74_object);
				if(var_73_bool != 1) {
					var_84_bool = 0; var_85_object = Obj();
					var_85_object = var_1_bool;
					func_5857(var_84_bool, var_85_object);
					if(var_84_bool != 1) {
						var_72_bool = 0;
					}
				}
				if(var_72_bool != 1) {
					var_90_bool = 0; var_91_object = Obj();
					var_91_object = var_1_bool;
					func_5887(var_90_bool, var_91_object);
					if(var_90_bool != 1) {
						var_71_bool = 0;
					}
				}
				if(var_71_bool != 0) {
					@@@var_0_bool:AddReply((int)543249, (int)45709, (int)45705);
				}
				var_99_bool = 0; var_100_object = Obj();
				var_100_object = var_1_bool;
				func_5837(var_99_bool, var_100_object);
				if(var_99_bool != 0) {
					@@@var_0_bool:AddReply((int)543251, (int)45719, (int)45707);
				}
				var_108_bool = 0;
				var_108_bool = 1;
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_bool;
				func_5837(var_109_bool, var_110_object);
				if(var_109_bool != 1) {
					var_111_bool = 0; var_112_object = Obj();
					var_112_object = var_1_bool;
					func_5847(var_111_bool, var_112_object);
					if(var_111_bool != 1) {
						var_108_bool = 0;
					}
				}
				if(var_108_bool != 0) {
					@@@var_0_bool:AddReply((int)543277, (int)45734, (int)45733);
				}
				var_120_bool = 0;
				var_120_bool = 1;
				var_121_bool = 0; var_122_object = Obj();
				var_122_object = var_1_bool;
				func_5867(var_121_bool, var_122_object);
				if(var_121_bool != 1) {
					var_127_bool = 0; var_128_object = Obj();
					var_128_object = var_1_bool;
					func_5877(var_127_bool, var_128_object);
					if(var_127_bool != 1) {
						var_120_bool = 0;
					}
				}
				if(var_120_bool != 0) {
					@@@var_0_bool:AddReply((int)543282, (int)45739, (int)45738);
				}
				var_136_bool = 0;
				var_136_bool = 1;
				var_137_bool = 0;
				var_137_bool = 1;
				var_138_bool = 0;
				var_138_bool = 1;
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_bool;
				func_5797(var_139_bool, var_140_object);
				if(var_139_bool != 1) {
					var_145_bool = 0; var_146_object = Obj();
					var_146_object = var_1_bool;
					func_5807(var_145_bool, var_146_object);
					if(var_145_bool != 1) {
						var_138_bool = 0;
					}
				}
				if(var_138_bool != 1) {
					var_147_bool = 0; var_148_object = Obj();
					var_148_object = var_1_bool;
					func_5817(var_147_bool, var_148_object);
					if(var_147_bool != 1) {
						var_137_bool = 0;
					}
				}
				if(var_137_bool != 1) {
					var_153_bool = 0; var_154_object = Obj();
					var_154_object = var_1_bool;
					func_5827(var_153_bool, var_154_object);
					if(var_153_bool != 1) {
						var_136_bool = 0;
					}
				}
				if(var_136_bool != 0) {
					@@@var_0_bool:AddReply((int)543250, (int)-1, (int)45706);
				}
				var_162_bool = 0;
				var_162_bool = 1;
				var_163_bool = 0;
				var_163_bool = 1;
				var_164_bool = 0;
				var_164_bool = 1;
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_bool;
				func_5837(var_165_bool, var_166_object);
				if(var_165_bool != 1) {
					var_167_bool = 0; var_168_object = Obj();
					var_168_object = var_1_bool;
					func_5847(var_167_bool, var_168_object);
					if(var_167_bool != 1) {
						var_164_bool = 0;
					}
				}
				if(var_164_bool != 1) {
					var_169_bool = 0; var_170_object = Obj();
					var_170_object = var_1_bool;
					func_5857(var_169_bool, var_170_object);
					if(var_169_bool != 1) {
						var_163_bool = 0;
					}
				}
				if(var_163_bool != 1) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_bool;
					func_5867(var_171_bool, var_172_object);
					if(var_171_bool != 1) {
						var_162_bool = 0;
					}
				}
				if(var_162_bool != 0) {
					@@@var_0_bool:AddReply((int)543262, (int)-1, (int)45718);
				}
				var_176_bool = 0;
				var_176_bool = 1;
				var_177_bool = 0;
				var_177_bool = 1;
				var_178_bool = 0;
				var_178_bool = 1;
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_bool;
				func_5877(var_179_bool, var_180_object);
				if(var_179_bool != 1) {
					var_181_bool = 0; var_182_object = Obj();
					var_182_object = var_1_bool;
					func_5887(var_181_bool, var_182_object);
					if(var_181_bool != 1) {
						var_178_bool = 0;
					}
				}
				if(var_178_bool != 1) {
					var_183_bool = 0; var_184_object = Obj();
					var_184_object = var_1_bool;
					func_5897(var_183_bool, var_184_object);
					if(var_183_bool != 1) {
						var_177_bool = 0;
					}
				}
				if(var_177_bool != 1) {
					var_189_bool = 0; var_190_object = Obj();
					var_190_object = var_1_bool;
					func_5907(var_189_bool, var_190_object);
					if(var_189_bool != 1) {
						var_176_bool = 0;
					}
				}
				if(var_176_bool != 0) {
					@@@var_0_bool:AddReply((int)543276, (int)-1, (int)45732);
				}
				var_198_bool = 0;
				var_198_bool = 1;
				var_199_bool = 0;
				var_199_bool = 1;
				var_200_bool = 0;
				var_200_bool = 1;
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_bool;
				func_5797(var_201_bool, var_202_object);
				if(var_201_bool != 1) {
					var_203_bool = 0; var_204_object = Obj();
					var_204_object = var_1_bool;
					func_5817(var_203_bool, var_204_object);
					if(var_203_bool != 1) {
						var_200_bool = 0;
					}
				}
				if(var_200_bool != 1) {
					var_205_bool = 0; var_206_object = Obj();
					var_206_object = var_1_bool;
					func_5827(var_205_bool, var_206_object);
					if(var_205_bool != 1) {
						var_199_bool = 0;
					}
				}
				if(var_199_bool != 1) {
					var_207_bool = 0; var_208_object = Obj();
					var_208_object = var_1_bool;
					func_5857(var_207_bool, var_208_object);
					if(var_207_bool != 1) {
						var_198_bool = 0;
					}
				}
				if(var_198_bool != 0) {
					@@@var_0_bool:AddReply((int)543248, (int)-1, (int)45704);
				}
				var_212_bool = 0;
				var_212_bool = 1;
				var_213_bool = 0;
				var_213_bool = 1;
				var_214_bool = 0;
				var_214_bool = 1;
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_bool;
				func_5847(var_215_bool, var_216_object);
				if(var_215_bool != 1) {
					var_217_bool = 0; var_218_object = Obj();
					var_218_object = var_1_bool;
					func_5837(var_217_bool, var_218_object);
					if(var_217_bool != 1) {
						var_214_bool = 0;
					}
				}
				if(var_214_bool != 1) {
					var_219_bool = 0; var_220_object = Obj();
					var_220_object = var_1_bool;
					func_5867(var_219_bool, var_220_object);
					if(var_219_bool != 1) {
						var_213_bool = 0;
					}
				}
				if(var_213_bool != 1) {
					var_221_bool = 0; var_222_object = Obj();
					var_222_object = var_1_bool;
					func_5807(var_221_bool, var_222_object);
					if(var_221_bool != 1) {
						var_212_bool = 0;
					}
				}
				if(var_212_bool != 0) {
					@@@var_0_bool:AddReply((int)543252, (int)-1, (int)45708);
				}
				var_226_bool = 0;
				var_226_bool = 1;
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_bool;
				func_5897(var_227_bool, var_228_object);
				if(var_227_bool != 1) {
					var_229_bool = 0; var_230_object = Obj();
					var_230_object = var_1_bool;
					func_5907(var_229_bool, var_230_object);
					if(var_229_bool != 1) {
						var_226_bool = 0;
					}
				}
				if(var_226_bool != 0) {
					@@@var_0_bool:AddReply((int)543281, (int)-1, (int)45737);
				}
				var_234_bool = 0;
				var_234_bool = 1;
				var_235_bool = 0; var_236_object = Obj();
				var_236_object = var_1_bool;
				func_5877(var_235_bool, var_236_object);
				if(var_235_bool != 1) {
					var_237_bool = 0; var_238_object = Obj();
					var_238_object = var_1_bool;
					func_5887(var_237_bool, var_238_object);
					if(var_237_bool != 1) {
						var_234_bool = 0;
					}
				}
				if(var_234_bool != 0) {
					@@@var_0_bool:AddReply((int)543275, (int)-1, (int)45731);
				}
				return 0;
			}
			var_242_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537506);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537507, (int)-1, (int)39354);
			var_247_bool = 0;
			var_247_bool = 0;
			var_248_bool = 0;
			var_248_bool = 0;
			var_249_bool = 0; var_250_object = Obj();
			var_250_object = var_1_bool;
			func_5773(var_250_object);
			if(var_249_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_bool;
				func_5797(var_255_bool, var_256_object);
				if(var_255_bool != 0) {
					var_248_bool = 1;
				}
			}
			if(var_248_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_bool;
				func_5917(var_257_bool, var_258_object);
				if(var_257_bool != 0) {
					var_247_bool = 1;
				}
			}
			if(var_247_bool != 0) {
				@@@var_0_bool:AddReply((int)537508, (int)39356, (int)39355);
			}
			var_275_bool = 0;
			var_275_bool = 0;
			var_276_bool = 0;
			var_276_bool = 0;
			var_277_bool = 0; var_278_object = Obj();
			var_278_object = var_1_bool;
			func_5773(var_278_object);
			if(var_277_bool != 0) {
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_bool;
				func_5797(var_279_bool, var_280_object);
				if(var_279_bool != 0) {
					var_276_bool = 1;
				}
			}
			if(var_276_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_bool;
				func_5927(var_281_bool, var_282_object);
				if(var_281_bool != 0) {
					var_275_bool = 1;
				}
			}
			if(var_275_bool != 0) {
				@@@var_0_bool:AddReply((int)537524, (int)39372, (int)39371);
			}
			var_291_bool = 0;
			var_291_bool = 0;
			var_292_bool = 0; var_293_object = Obj();
			var_293_object = var_1_bool;
			func_5773(var_293_object);
			if(var_292_bool != 0) {
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_bool;
				func_5807(var_294_bool, var_295_object);
				if(var_294_bool != 0) {
					var_291_bool = 1;
				}
			}
			if(var_291_bool != 0) {
				@@@var_0_bool:AddReply((int)537534, (int)39382, (int)39381);
			}
			var_299_bool = 0;
			var_299_bool = 0;
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_bool;
			func_5773(var_301_object);
			if(var_300_bool != 0) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_bool;
				func_5817(var_302_bool, var_303_object);
				if(var_302_bool != 0) {
					var_299_bool = 1;
				}
			}
			if(var_299_bool != 0) {
				@@@var_0_bool:AddReply((int)537549, (int)39397, (int)39396);
			}
			var_307_bool = 0;
			var_307_bool = 0;
			var_308_bool = 0; var_309_object = Obj();
			var_309_object = var_1_bool;
			func_5773(var_309_object);
			if(var_308_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_bool;
				func_5827(var_310_bool, var_311_object);
				if(var_310_bool != 0) {
					var_307_bool = 1;
				}
			}
			if(var_307_bool != 0) {
				@@@var_0_bool:AddReply((int)537559, (int)39407, (int)39406);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_bool;
			func_5773(var_317_object);
			if(var_316_bool != 0) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_bool;
				func_5837(var_318_bool, var_319_object);
				if(var_318_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_bool:AddReply((int)537571, (int)39419, (int)39418);
			}
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_bool;
			func_5773(var_325_object);
			if(var_324_bool != 0) {
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_bool;
				func_5847(var_326_bool, var_327_object);
				if(var_326_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				@@@var_0_bool:AddReply((int)537593, (int)39442, (int)39441);
			}
			var_331_bool = 0;
			var_331_bool = 0;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_bool;
			func_5773(var_333_object);
			if(var_332_bool != 0) {
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_bool;
				func_5857(var_334_bool, var_335_object);
				if(var_334_bool != 0) {
					var_331_bool = 1;
				}
			}
			if(var_331_bool != 0) {
				@@@var_0_bool:AddReply((int)537603, (int)39452, (int)39451);
			}
			var_339_bool = 0;
			var_339_bool = 0;
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_bool;
			func_5773(var_341_object);
			if(var_340_bool != 0) {
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_bool;
				func_5867(var_342_bool, var_343_object);
				if(var_342_bool != 0) {
					var_339_bool = 1;
				}
			}
			if(var_339_bool != 0) {
				@@@var_0_bool:AddReply((int)537621, (int)39470, (int)39469);
			}
			var_347_bool = 0; var_348_object = Obj();
			var_348_object = var_1_bool;
			func_5877(var_347_bool, var_348_object);
			if(var_347_bool != 0) {
				@@@var_0_bool:AddReply((int)537633, (int)39482, (int)39481);
			}
			var_352_bool = 0; var_353_object = Obj();
			var_353_object = var_1_bool;
			func_5887(var_352_bool, var_353_object);
			if(var_352_bool != 0) {
				@@@var_0_bool:AddReply((int)537640, (int)39489, (int)39488);
			}
			var_357_bool = 0;
			var_357_bool = 0;
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_bool;
			func_5773(var_359_object);
			if(var_358_bool != 0) {
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_bool;
				func_5897(var_360_bool, var_361_object);
				if(var_360_bool != 0) {
					var_357_bool = 1;
				}
			}
			if(var_357_bool != 0) {
				@@@var_0_bool:AddReply((int)537647, (int)39496, (int)39495);
			}
			var_365_bool = 0;
			var_365_bool = 0;
			var_366_bool = 0;
			var_366_bool = 0;
			var_367_bool = 0; var_368_object = Obj();
			var_368_object = var_1_bool;
			func_5773(var_368_object);
			if(var_367_bool != 0) {
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_bool;
				func_5927(var_369_bool, var_370_object);
				if(var_369_bool != 0) {
					var_366_bool = 1;
				}
			}
			if(var_366_bool != 0) {
				var_371_bool = 0; var_372_object = Obj();
				var_372_object = var_1_bool;
				func_5797(var_371_bool, var_372_object);
				if(var_371_bool != 0) {
					var_365_bool = 1;
				}
			}
			if(var_365_bool != 0) {
				@@@var_0_bool:AddReply((int)537659, (int)39508, (int)39507);
			}
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_bool;
			func_5797(var_376_bool, var_377_object);
			if(var_376_bool != 0) {
				@@@var_0_bool:AddReply((int)537665, (int)39514, (int)39513);
			}
			var_381_bool = 0; var_382_object = Obj();
			var_382_object = var_1_bool;
			func_5797(var_381_bool, var_382_object);
			if(var_381_bool != 0) {
				@@@var_0_bool:AddReply((int)537671, (int)39520, (int)39519);
			}
			var_386_bool = 0;
			var_386_bool = 0;
			var_387_bool = 0; var_388_object = Obj();
			var_388_object = var_1_bool;
			func_5797(var_387_bool, var_388_object);
			if(var_387_bool != 0) {
				var_389_bool = 0; var_390_object = Obj();
				var_390_object = var_1_bool;
				func_5917(var_389_bool, var_390_object);
				if(var_389_bool != 0) {
					var_386_bool = 1;
				}
			}
			if(var_386_bool != 0) {
				@@@var_0_bool:AddReply((int)537689, (int)39538, (int)39537);
			}
			var_394_bool = 0;
			var_394_bool = 0;
			var_395_bool = 0; var_396_object = Obj();
			var_396_object = var_1_bool;
			func_5797(var_395_bool, var_396_object);
			if(var_395_bool != 0) {
				var_397_bool = 0; var_398_object = Obj();
				var_398_object = var_1_bool;
				func_5917(var_397_bool, var_398_object);
				if(var_397_bool != 0) {
					var_394_bool = 1;
				}
			}
			if(var_394_bool != 0) {
				@@@var_0_bool:AddReply((int)537702, (int)39551, (int)39550);
			}
			@@@var_0_bool:AddReply((int)537721, (int)-1, (int)39569);
			return 0;
		}
		var_406_bool = var_22_int == (int)39551;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537704, (int)39553, (int)39552);
			return 0;
		}
		var_413_bool = var_22_int == (int)39553;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537705);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537706, (int)39555, (int)39554);
			@@@var_0_bool:AddReply((int)537717, (int)39566, (int)39565);
			return 0;
		}
		var_423_bool = var_22_int == (int)39566;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537718);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537719, (int)-1, (int)39567);
			var_429_bool = 0; var_430_object = Obj();
			var_430_object = var_1_bool;
			func_5773(var_430_object);
			if(var_429_bool != 0) {
				@@@var_0_bool:AddReply((int)537720, (int)-1, (int)39568);
			}
			return 0;
		}
		var_435_bool = var_22_int == (int)39555;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537707);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537708, (int)39557, (int)39556);
			@@@var_0_bool:AddReply((int)537711, (int)39560, (int)39559);
			return 0;
		}
		var_445_bool = var_22_int == (int)39560;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537712);
			@@@var_0_bool:ClearReplies();
			var_448_bool = 0; var_449_object = Obj();
			var_449_object = var_1_bool;
			func_5773(var_449_object);
			if(var_448_bool != 0) {
				@@@var_0_bool:AddReply((int)537713, (int)-1, (int)39561);
			}
			@@@var_0_bool:AddReply((int)537714, (int)39563, (int)39562);
			return 0;
		}
		var_457_bool = var_22_int == (int)39563;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537715);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537716, (int)-1, (int)39564);
			return 0;
		}
		var_464_bool = var_22_int == (int)39557;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537709);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537710, (int)-1, (int)39558);
			return 0;
		}
		var_471_bool = var_22_int == (int)39538;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537690);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537691, (int)39540, (int)39539);
			@@@var_0_bool:AddReply((int)537701, (int)-1, (int)39549);
			return 0;
		}
		var_481_bool = var_22_int == (int)39540;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537692);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537693, (int)39542, (int)39541);
			@@@var_0_bool:AddReply((int)537696, (int)39545, (int)39544);
			return 0;
		}
		var_491_bool = var_22_int == (int)39545;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537697);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537698, (int)39547, (int)39546);
			return 0;
		}
		var_498_bool = var_22_int == (int)39547;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537699);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537700, (int)-1, (int)39548);
			return 0;
		}
		var_505_bool = var_22_int == (int)39542;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537694);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537695, (int)-1, (int)39543);
			return 0;
		}
		var_512_bool = var_22_int == (int)39520;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537672);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537673, (int)39522, (int)39521);
			@@@var_0_bool:AddReply((int)537678, (int)39527, (int)39526);
			return 0;
		}
		var_522_bool = var_22_int == (int)39527;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537679);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537680, (int)39529, (int)39528);
			return 0;
		}
		var_529_bool = var_22_int == (int)39529;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537681);
			@@@var_0_bool:ClearReplies();
			var_532_bool = 0; var_533_object = Obj();
			var_533_object = var_1_bool;
			func_5773(var_533_object);
			if(var_532_bool != 0) {
				@@@var_0_bool:AddReply((int)537682, (int)39531, (int)39530);
			}
			@@@var_0_bool:AddReply((int)537688, (int)-1, (int)39536);
			return 0;
		}
		var_541_bool = var_22_int == (int)39531;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537683);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537684, (int)39533, (int)39532);
			@@@var_0_bool:AddReply((int)537687, (int)-1, (int)39535);
			return 0;
		}
		var_551_bool = var_22_int == (int)39533;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537685);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537686, (int)-1, (int)39534);
			return 0;
		}
		var_558_bool = var_22_int == (int)39522;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537674);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537675, (int)39524, (int)39523);
			return 0;
		}
		var_565_bool = var_22_int == (int)39524;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537676);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537677, (int)-1, (int)39525);
			return 0;
		}
		var_572_bool = var_22_int == (int)39514;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537666);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537667, (int)39516, (int)39515);
			@@@var_0_bool:AddReply((int)537670, (int)-1, (int)39518);
			return 0;
		}
		var_582_bool = var_22_int == (int)39516;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537668);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537669, (int)-1, (int)39517);
			return 0;
		}
		var_589_bool = var_22_int == (int)39508;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537660);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537661, (int)39510, (int)39509);
			@@@var_0_bool:AddReply((int)537664, (int)-1, (int)39512);
			return 0;
		}
		var_599_bool = var_22_int == (int)39510;
		if(var_599_bool != 0) {
			var_600_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537662);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537663, (int)-1, (int)39511);
			return 0;
		}
		var_606_bool = var_22_int == (int)39496;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537648);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537649, (int)39498, (int)39497);
			@@@var_0_bool:AddReply((int)537658, (int)-1, (int)39506);
			return 0;
		}
		var_616_bool = var_22_int == (int)39498;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537650);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537651, (int)39500, (int)39499);
			@@@var_0_bool:AddReply((int)537657, (int)-1, (int)39505);
			return 0;
		}
		var_626_bool = var_22_int == (int)39500;
		if(var_626_bool != 0) {
			var_627_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537652);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537653, (int)-1, (int)39501);
			@@@var_0_bool:AddReply((int)537654, (int)39503, (int)39502);
			return 0;
		}
		var_636_bool = var_22_int == (int)39503;
		if(var_636_bool != 0) {
			var_637_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537655);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537656, (int)-1, (int)39504);
			return 0;
		}
		var_643_bool = var_22_int == (int)39489;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537641);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537642, (int)39491, (int)39490);
			@@@var_0_bool:AddReply((int)537646, (int)-1, (int)39494);
			return 0;
		}
		var_653_bool = var_22_int == (int)39491;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537643);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537644, (int)-1, (int)39492);
			var_659_bool = 0; var_660_object = Obj();
			var_660_object = var_1_bool;
			func_5773(var_660_object);
			if(var_659_bool != 0) {
				@@@var_0_bool:AddReply((int)537645, (int)-1, (int)39493);
			}
			return 0;
		}
		var_665_bool = var_22_int == (int)39482;
		if(var_665_bool != 0) {
			var_666_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537634);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537635, (int)39484, (int)39483);
			@@@var_0_bool:AddReply((int)537639, (int)-1, (int)39487);
			return 0;
		}
		var_675_bool = var_22_int == (int)39484;
		if(var_675_bool != 0) {
			var_676_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537636);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537637, (int)-1, (int)39485);
			@@@var_0_bool:AddReply((int)537638, (int)-1, (int)39486);
			return 0;
		}
		var_685_bool = var_22_int == (int)39470;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537622);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537623, (int)39472, (int)39471);
			@@@var_0_bool:AddReply((int)537632, (int)-1, (int)39480);
			return 0;
		}
		var_695_bool = var_22_int == (int)39472;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537624);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537625, (int)39474, (int)39473);
			return 0;
		}
		var_702_bool = var_22_int == (int)39474;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537626);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537627, (int)-1, (int)39475);
			@@@var_0_bool:AddReply((int)537628, (int)39477, (int)39476);
			return 0;
		}
		var_712_bool = var_22_int == (int)39477;
		if(var_712_bool != 0) {
			var_713_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537629);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537630, (int)-1, (int)39478);
			@@@var_0_bool:AddReply((int)537631, (int)-1, (int)39479);
			return 0;
		}
		var_722_bool = var_22_int == (int)39452;
		if(var_722_bool != 0) {
			var_723_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537604);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537605, (int)39454, (int)39453);
			@@@var_0_bool:AddReply((int)537612, (int)39461, (int)39460);
			return 0;
		}
		var_732_bool = var_22_int == (int)39461;
		if(var_732_bool != 0) {
			var_733_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537613);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537614, (int)39463, (int)39462);
			@@@var_0_bool:AddReply((int)537620, (int)-1, (int)39468);
			return 0;
		}
		var_742_bool = var_22_int == (int)39463;
		if(var_742_bool != 0) {
			var_743_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537615);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537616, (int)39465, (int)39464);
			return 0;
		}
		var_749_bool = var_22_int == (int)39465;
		if(var_749_bool != 0) {
			var_750_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537617);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537618, (int)-1, (int)39466);
			@@@var_0_bool:AddReply((int)537619, (int)-1, (int)39467);
			return 0;
		}
		var_759_bool = var_22_int == (int)39454;
		if(var_759_bool != 0) {
			var_760_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537606);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537607, (int)39456, (int)39455);
			@@@var_0_bool:AddReply((int)537611, (int)-1, (int)39459);
			return 0;
		}
		var_769_bool = var_22_int == (int)39456;
		if(var_769_bool != 0) {
			var_770_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537608);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537609, (int)-1, (int)39457);
			@@@var_0_bool:AddReply((int)537610, (int)-1, (int)39458);
			return 0;
		}
		var_779_bool = var_22_int == (int)39442;
		if(var_779_bool != 0) {
			var_780_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537594);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537595, (int)39444, (int)39443);
			@@@var_0_bool:AddReply((int)537602, (int)-1, (int)39450);
			return 0;
		}
		var_789_bool = var_22_int == (int)39444;
		if(var_789_bool != 0) {
			var_790_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537596);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537597, (int)39446, (int)39445);
			@@@var_0_bool:AddReply((int)537601, (int)-1, (int)39449);
			return 0;
		}
		var_799_bool = var_22_int == (int)39446;
		if(var_799_bool != 0) {
			var_800_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537598);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537599, (int)-1, (int)39447);
			@@@var_0_bool:AddReply((int)537600, (int)-1, (int)39448);
			return 0;
		}
		var_809_bool = var_22_int == (int)39419;
		if(var_809_bool != 0) {
			var_810_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537572);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537573, (int)39421, (int)39420);
			@@@var_0_bool:AddReply((int)537578, (int)39426, (int)39425);
			@@@var_0_bool:AddReply((int)537588, (int)39437, (int)39436);
			@@@var_0_bool:AddReply((int)537592, (int)-1, (int)39440);
			return 0;
		}
		var_825_bool = var_22_int == (int)39437;
		if(var_825_bool != 0) {
			var_826_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537589);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537590, (int)-1, (int)39438);
			@@@var_0_bool:AddReply((int)537591, (int)-1, (int)39439);
			return 0;
		}
		var_835_bool = var_22_int == (int)39426;
		if(var_835_bool != 0) {
			var_836_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537579);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537580, (int)39421, (int)39427);
			@@@var_0_bool:AddReply((int)537581, (int)39430, (int)39429);
			return 0;
		}
		var_845_bool = var_22_int == (int)39430;
		if(var_845_bool != 0) {
			var_846_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537582);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537583, (int)39432, (int)39431);
			@@@var_0_bool:AddReply((int)537587, (int)-1, (int)39435);
			return 0;
		}
		var_855_bool = var_22_int == (int)39432;
		if(var_855_bool != 0) {
			var_856_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537584);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537585, (int)-1, (int)39433);
			@@@var_0_bool:AddReply((int)537586, (int)-1, (int)39434);
			return 0;
		}
		var_865_bool = var_22_int == (int)39421;
		if(var_865_bool != 0) {
			var_866_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537574);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537575, (int)39423, (int)39422);
			return 0;
		}
		var_872_bool = var_22_int == (int)39423;
		if(var_872_bool != 0) {
			var_873_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537576);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537577, (int)-1, (int)39424);
			return 0;
		}
		var_879_bool = var_22_int == (int)39407;
		if(var_879_bool != 0) {
			var_880_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537560);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537561, (int)39409, (int)39408);
			@@@var_0_bool:AddReply((int)537570, (int)-1, (int)39417);
			return 0;
		}
		var_889_bool = var_22_int == (int)39409;
		if(var_889_bool != 0) {
			var_890_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537562);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537563, (int)39411, (int)39410);
			@@@var_0_bool:AddReply((int)537567, (int)39415, (int)39414);
			return 0;
		}
		var_899_bool = var_22_int == (int)39415;
		if(var_899_bool != 0) {
			var_900_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537568);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537569, (int)-1, (int)39416);
			return 0;
		}
		var_906_bool = var_22_int == (int)39411;
		if(var_906_bool != 0) {
			var_907_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537564);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537565, (int)-1, (int)39412);
			@@@var_0_bool:AddReply((int)537566, (int)-1, (int)39413);
			return 0;
		}
		var_916_bool = var_22_int == (int)39397;
		if(var_916_bool != 0) {
			var_917_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537550);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537551, (int)39399, (int)39398);
			@@@var_0_bool:AddReply((int)537558, (int)-1, (int)39405);
			return 0;
		}
		var_926_bool = var_22_int == (int)39399;
		if(var_926_bool != 0) {
			var_927_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537552);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537553, (int)39401, (int)39400);
			@@@var_0_bool:AddReply((int)537557, (int)-1, (int)39404);
			return 0;
		}
		var_936_bool = var_22_int == (int)39401;
		if(var_936_bool != 0) {
			var_937_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537554);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537555, (int)-1, (int)39402);
			@@@var_0_bool:AddReply((int)537556, (int)-1, (int)39403);
			return 0;
		}
		var_946_bool = var_22_int == (int)39382;
		if(var_946_bool != 0) {
			var_947_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537535);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537536, (int)39384, (int)39383);
			return 0;
		}
		var_953_bool = var_22_int == (int)39384;
		if(var_953_bool != 0) {
			var_954_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537537);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537538, (int)39386, (int)39385);
			@@@var_0_bool:AddReply((int)537548, (int)-1, (int)39395);
			return 0;
		}
		var_963_bool = var_22_int == (int)39386;
		if(var_963_bool != 0) {
			var_964_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537539);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537540, (int)39388, (int)39387);
			@@@var_0_bool:AddReply((int)537543, (int)-1, (int)39390);
			@@@var_0_bool:AddReply((int)537544, (int)39392, (int)39391);
			return 0;
		}
		var_976_bool = var_22_int == (int)39392;
		if(var_976_bool != 0) {
			var_977_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537545);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537546, (int)-1, (int)39393);
			@@@var_0_bool:AddReply((int)537547, (int)-1, (int)39394);
			return 0;
		}
		var_986_bool = var_22_int == (int)39388;
		if(var_986_bool != 0) {
			var_987_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537541);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537542, (int)-1, (int)39389);
			return 0;
		}
		var_993_bool = var_22_int == (int)39372;
		if(var_993_bool != 0) {
			var_994_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537525);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537526, (int)39374, (int)39373);
			@@@var_0_bool:AddReply((int)537533, (int)-1, (int)39380);
			return 0;
		}
		var_1003_bool = var_22_int == (int)39374;
		if(var_1003_bool != 0) {
			var_1004_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537527);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537528, (int)39376, (int)39375);
			@@@var_0_bool:AddReply((int)537532, (int)-1, (int)39379);
			return 0;
		}
		var_1013_bool = var_22_int == (int)39376;
		if(var_1013_bool != 0) {
			var_1014_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537529);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537530, (int)-1, (int)39377);
			@@@var_0_bool:AddReply((int)537531, (int)-1, (int)39378);
			return 0;
		}
		var_1023_bool = var_22_int == (int)39356;
		if(var_1023_bool != 0) {
			var_1024_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537509);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537510, (int)39358, (int)39357);
			@@@var_0_bool:AddReply((int)537520, (int)39368, (int)39367);
			return 0;
		}
		var_1033_bool = var_22_int == (int)39368;
		if(var_1033_bool != 0) {
			var_1034_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537521);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537522, (int)-1, (int)39369);
			@@@var_0_bool:AddReply((int)537523, (int)-1, (int)39370);
			return 0;
		}
		var_1043_bool = var_22_int == (int)39358;
		if(var_1043_bool != 0) {
			var_1044_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537511);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537512, (int)39360, (int)39359);
			@@@var_0_bool:AddReply((int)537519, (int)-1, (int)39366);
			return 0;
		}
		var_1053_bool = var_22_int == (int)39360;
		if(var_1053_bool != 0) {
			var_1054_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537513);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537514, (int)39362, (int)39361);
			@@@var_0_bool:AddReply((int)537518, (int)-1, (int)39365);
			return 0;
		}
		var_1063_bool = var_22_int == (int)39362;
		if(var_1063_bool != 0) {
			var_1064_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537515);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537516, (int)-1, (int)39363);
			@@@var_0_bool:AddReply((int)537517, (int)-1, (int)39364);
			return 0;
		}
		var_1073_bool = var_22_int == (int)45739;
		if(var_1073_bool != 0) {
			var_1074_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543283);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543284, (int)-1, (int)45740);
			@@@var_0_bool:AddReply((int)543285, (int)-1, (int)45741);
			@@@var_0_bool:AddReply((int)543286, (int)-1, (int)45742);
			return 0;
		}
		var_1086_bool = var_22_int == (int)45734;
		if(var_1086_bool != 0) {
			var_1087_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543278);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543279, (int)-1, (int)45735);
			@@@var_0_bool:AddReply((int)543280, (int)-1, (int)45736);
			return 0;
		}
		var_1096_bool = var_22_int == (int)45719;
		if(var_1096_bool != 0) {
			var_1097_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543263);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543264, (int)45723, (int)45720);
			@@@var_0_bool:AddReply((int)543265, (int)-1, (int)45721);
			@@@var_0_bool:AddReply((int)543266, (int)-1, (int)45722);
			return 0;
		}
		var_1109_bool = var_22_int == (int)45723;
		if(var_1109_bool != 0) {
			var_1110_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543267);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543268, (int)45727, (int)45724);
			@@@var_0_bool:AddReply((int)543269, (int)-1, (int)45725);
			@@@var_0_bool:AddReply((int)543270, (int)-1, (int)45726);
			return 0;
		}
		var_1122_bool = var_22_int == (int)45727;
		if(var_1122_bool != 0) {
			var_1123_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543271);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543272, (int)-1, (int)45728);
			@@@var_0_bool:AddReply((int)543273, (int)-1, (int)45729);
			@@@var_0_bool:AddReply((int)543274, (int)-1, (int)45730);
			return 0;
		}
		var_1135_bool = var_22_int == (int)45709;
		if(var_1135_bool != 0) {
			var_1136_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543253);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543254, (int)45714, (int)45710);
			@@@var_0_bool:AddReply((int)543255, (int)45716, (int)45711);
			@@@var_0_bool:AddReply((int)543256, (int)-1, (int)45712);
			@@@var_0_bool:AddReply((int)543257, (int)-1, (int)45713);
			return 0;
		}
		var_1151_bool = var_22_int == (int)45716;
		if(var_1151_bool != 0) {
			var_1152_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543260);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543261, (int)-1, (int)45717);
			return 0;
		}
		var_1158_bool = var_22_int == (int)45714;
		if(var_1158_bool != 0) {
			var_1159_string = "";
			func_2491(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543258);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543259, (int)-1, (int)45715);
			return 0;
		}
		var_3_bool = true;
		var_1164_bool = 0;
		func_6187(var_1164_bool);
		if(var_1164_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9d2";
	
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
	func_6189();
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
	var_549_bool = 0;
	func_6187(var_549_bool);
	if(var_549_bool != 0) {
		var_550_string = "";
		func_5253("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_551_bool = var_0_bool;
	if(var_551_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_1544(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_5334(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5334(var_50_cvector, var_51_cvector);
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


func_6179(var_107_int)
{
	var_107_int = 515560;
	return 0;
}


func_6181(var_106_int)
{
	var_106_int = 503345;
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
	func_4987(var_191_cvector);
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
			func_4987(var_201_cvector);
			var_1_bool = var_201_cvector + var_152_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1646;
		}
	}
	var_204_bool = var_2_bool == 0; //@nz
	if(var_204_bool == 1) goto Label_1616;
	
}


func_6183(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_6185(var_109_string)
{
	var_109_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_6187(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_6189()
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_24_bool = 0;
	func_6103((bool)1);
	return 0;
}


func_6197(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		IsOverrideActive(var_36_bool);
		var_38_bool = var_36_bool == 0; //@nz
		if(var_38_bool != 0) {
			var_39_object = Obj();
			var_34_object = var_39_object;
			func_6090(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x185c";
	}
	var_47_int = 0; var_48_object = Obj();
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	var_513_bool = (int)1000 == var_49_object;
	if(var_513_bool != 0) {
		var_514_bool = 0; var_515_object = Obj();
		var_34_object = var_515_object;
		func_5192(var_514_bool, var_515_object);
		var_546_bool = var_514_bool == 0; //@nz
		if(var_546_bool != 0) {
			return 2;
		}
		var_547_object = Obj();
		var_34_object = var_547_object;
		TaskCall(0);
		func_0(var_547_object);
		TaskReturn();
		var_34_object = Obj();
		func_5248();
	}
	return 2;
}


func_5174()
{
	var_506_bool = 0; var_507_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_509_bool = 0;
	func_6187(var_509_bool);
	if(var_509_bool != 0) {
	} else {
		HasAnimationTrack(var_507_bool, "head");
		var_511_bool = var_507_bool;
		if(var_511_bool == 0) goto Label_5191;
		UnlookAsync("head");
	}
Label_5191:
	return 2;
	
}


func_55()
{
	var_88_bool = 0;
	func_5100(var_88_bool);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		func_5713();
	}
	return 0;
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0;
	WaitForAnimEnd();
	var_133_bool = 0;
	func_5100(var_133_bool);
	var_134_bool = var_133_bool == 0; //@nz
	if(var_134_bool != 0) {
		return 14;
	}
	func_5558((int)0);
	var_135_int = var_126_int;
	var_127_int = 0;
	
Label_587:
	var_148_bool = 0;
	var_148_bool = 0;
	var_150_bool = var_127_int < (int)5;
	if(var_150_bool != 0) {
		var_151_bool = 0;
		func_5100(var_151_bool);
		if(var_151_bool != 0) {
			var_148_bool = 1;
		}
	}
	if(var_148_bool != 0) {
		irand(var_128_int, (int)3);
		var_154_bool = var_128_int == (int)0;
		if(var_154_bool != 0) {
			var_155_int = var_126_int;
			if(var_155_int == 0) goto Label_620;
			irand(var_129_int, var_126_int);
			var_157_string = ""; var_158_int = 0;
			var_129_int = var_158_int;
			func_5551(var_157_string, var_158_int);
			PlayAnimation("all", var_157_string);
			WaitForAnimEnd(var_130_bool);
			var_159_bool = var_130_bool == 0; //@nz
			if(var_159_bool != 0) {
			} else {
		} else {
				var_164_bool = var_128_int == (int)1;
				if(var_164_bool != 0) {
					rand(var_131_float, (int)4);
					var_167_int = var_131_float + (int)1;
					Sleep(var_167_int, var_132_bool);
					var_168_bool = var_132_bool == 0; //@nz
					if(var_168_bool != 0) {
						goto Label_649;
					}
					goto Label_638;
				}
				var_169_int = var_127_int;
				if(var_169_int == 0) goto Label_638;
				goto Label_649;
		}
		Label_638:
			var_160_bool = 0;
			func_652(var_160_bool);
			var_161_bool = var_160_bool == 0; //@nz
			if(var_161_bool != 0) {
				goto Label_649;
			}
			ResetAAS();
			var_127_int = var_127_int + (int)1;
			goto Label_587;

		}
	}
Label_649:
	ResetAAS();
	return 14;
	
}


func_5694(var_25_int)
{
	var_25_int = 0;
	return 0;
}


func_5697()
{
	return 0;
}


func_5699(var_209_int)
{
	var_209_int = 0;
	return 0;
}


func_5702()
{
	return 0;
}


func_5704(var_25_int)
{
	var_25_int = 2;
	return 0;
}


func_5192(var_514_bool, var_515_object)
{
	var_516_bool = 0; var_517_object = Obj(); var_518_float = 0;
	var_515_object = var_517_object;
	func_5200(var_516_bool, var_517_object, (float)70);
	var_516_bool = var_514_bool;
	return 0;
}


func_5707(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_6197(var_33_object, var_34_object);
	return 0;
}


func_5200(var_516_bool, var_517_object, var_518_float)
{
	var_519_float = 0; var_520_cvector = CVector(0,0,0); var_521_cvector = CVector(0,0,0); var_522_cvector = CVector(0,0,0); var_523_cvector = CVector(0,0,0); var_524_cvector = CVector(0,0,0); var_525_cvector = CVector(0,0,0); var_526_bool = 0; var_527_float = 0; var_528_cvector = CVector(0,0,0); var_529_cvector = CVector(0,0,0); var_530_cvector = CVector(0,0,0); var_531_cvector = CVector(0,0,0); var_532_cvector = CVector(0,0,0); var_533_cvector = CVector(0,0,0); var_534_bool = 0;
	@@var_517_object:GetPosition(var_528_cvector);
	@@var_517_object:GetEyesHeight(var_527_float);
	var_535_float = GetByIndex(var_528_cvector, 1);
	var_535_float = var_535_float + var_527_float;
	SetByIndex(var_528_cvector, 1) = var_535_float;
	GetPosition(var_529_cvector);
	GetEyesHeight(var_527_float);
	var_536_float = GetByIndex(var_529_cvector, 1);
	var_536_float = var_536_float + var_527_float;
	SetByIndex(var_529_cvector, 1) = var_536_float;
	var_530_cvector = var_528_cvector - var_529_cvector;
	var_537_float = GetByIndex(var_530_cvector, 1);
	SetByIndex(var_530_cvector, 1) = (float)0;
	var_538_int = var_530_cvector | var_530_cvector;
	var_539_float = sqrt(var_538_int);
	var_530_cvector = var_530_cvector / var_539_float;
	var_531_cvector = -var_530_cvector;
	var_540_float = var_530_cvector * var_518_float;
	var_532_cvector = var_540_float - CVector(0.0, 10.0, 0.0);
	var_533_cvector = var_529_cvector + var_532_cvector;
	IsOverrideActive(var_534_bool);
	var_542_bool = var_534_bool;
	if(var_542_bool != 0) {
		var_516_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_533_cvector, var_531_cvector, (bool)1);
	var_544_float = GetByIndex(var_532_cvector, 0);
	var_545_float = GetByIndex(var_532_cvector, 2);
	Rotate(var_544_float, var_545_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_516_bool = 1;
	return 16;
}


func_5713()
{
	return 0;
}


func_5714(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
	return 2;
}


func_5719(var_40_object)
{
	var_41_object = Obj();
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
	return 0;
}


func_6237(var_67_bool)
{
	var_68_float = 0;
	func_6076(var_68_float);
	var_67_bool = var_68_float > (float)0.4000000059604645;
	return 0;
}


func_5727(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	CanSee(var_40_bool, var_38_object);
	var_37_bool = 1;
	var_41_bool = var_40_bool;
	if(var_41_bool != 1) {
		var_42_float = 0; var_43_object = Obj();
		var_38_object = var_43_object;
		func_4999(var_42_float, var_43_object);
		var_51_bool = var_42_float <= (int)4000000;
		if(var_51_bool != 1) {
			var_37_bool = 0;
		}
	}
	return 2;
}


func_6243(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0;
	var_28_object = var_32_object;
	var_29_object = var_33_object;
	func_5628(var_31_bool, var_32_object, var_33_object, (float)700.0);
	var_31_bool = var_27_bool;
	return 0;
}


func_1124(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_5742(var_139_object)
{
	var_140_object = Obj();
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
	return 0;
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_4992(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5750(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj();
	var_55_object = var_57_object;
	func_5727(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
	return 0;
}


func_5757(var_207_object)
{
	var_208_object = Obj();
	var_207_object = var_208_object;
	func_5742(var_208_object);
	return 0;
}


func_5248()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_5763(var_30_bool)
{
	var_30_bool = 0;
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
	func_5334(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5334(var_50_cvector, var_51_cvector);
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


func_5253(var_325_string)
{
	var_326_bool = 0; var_327_float = 0; var_328_float = 0; var_329_bool = 0; var_330_float = 0; var_331_float = 0;
	lshHasAnimation(var_329_bool, var_325_string);
	var_332_bool = var_329_bool;
	if(var_332_bool != 0) {
		lshGetAnimTimes(var_325_string, var_330_float, var_331_float);
		lshPlayAnimation(var_330_float, var_331_float, (bool)0);
	} else {
		var_335_int = "Can't find lsh animation : " + var_325_string;
		Trace(var_335_int);
	}
	return 6;
	
}


func_5766()
{
	return 0;
}


func_5768(var_29_object)
{
	@@var_29_object:SetReturnValue((int)1000);
	return 0;
}


func_652(var_160_bool)
{
	var_160_bool = 1;
	return 0;
}


func_5773(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_5393(var_251_int, "branch");
	var_254_bool = var_251_int == (int)0;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_654()
{
	StopAnimation();
	StopGroup0();
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
	func_4992(var_98_cvector, var_99_object);
	var_98_cvector = var_89_cvector;
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_5376(var_104_float, var_105_cvector, var_106_cvector);
	var_129_bool = var_104_float < (int)0;
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_130_object = var_0_bool;
		func_5089(var_130_object);
		var_90_bool = 1;
	} else {
		Sleep((float)1.5, var_90_bool);
	}
	var_139_bool = var_90_bool;
	if(var_139_bool != 0) {
		var_140_object = Obj();
		var_140_object = var_0_bool;
		func_5089(var_140_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_5269(var_57_string, var_58_bool)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0;
	lshHasAnimation(var_64_bool, var_57_string);
	var_67_bool = var_64_bool;
	if(var_67_bool != 0) {
		lshGetAnimTimes(var_57_string, var_65_float, var_66_float);
		lshPlayAnimation(var_65_float, var_66_float, var_58_bool);
	} else {
		var_69_int = "Can't find lsh animation : " + var_57_string;
		Trace(var_69_int);
	}
	return 6;
	
}


func_5785(var_45_bool)
{
	var_47_int = 0; var_48_string = "";
	func_5393(var_47_int, "branch");
	var_52_bool = var_47_int == (int)2;
	if(var_52_bool != 0) {
		var_45_bool = 1;
		return 0;
	}
	var_45_bool = 0;
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
	func_4987(var_168_cvector);
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
			func_4987(var_180_cvector);
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


func_5284(var_91_object)
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


func_5797(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_object = Obj();
	var_140_object = var_142_object;
	func_5937(var_142_object);
	if(var_141_bool != 0) {
		var_139_bool = 1;
		return 0;
	}
	var_139_bool = 0;
	return 0;
}


func_5807(var_73_bool, var_74_object)
{
	var_75_bool = 0; var_76_object = Obj();
	var_74_object = var_76_object;
	func_5944(var_76_object);
	if(var_75_bool != 0) {
		var_73_bool = 1;
		return 0;
	}
	var_73_bool = 0;
	return 0;
}


func_5295()
{
	var_25_bool = 0;
	func_6187(var_25_bool);
	if(var_25_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_4992(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5302(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0;
	var_58_bool = 0; var_59_int = 0; var_60_int = 0;
	var_54_int = var_59_int;
	var_55_int = var_60_int;
	func_5344(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0) {
		AddItem(var_57_bool, var_53_string, (int)0);
	}
	return 2;
}


func_5817(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj();
	var_148_object = var_150_object;
	func_5951(var_150_object);
	if(var_149_bool != 0) {
		var_147_bool = 1;
		return 0;
	}
	var_147_bool = 0;
	return 0;
}


func_5313(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_37_bool = 0; var_38_int = 0; var_39_int = 0;
	var_30_int = var_38_int;
	var_31_int = var_39_int;
	func_5344(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		irand(var_35_int, var_32_int);
		var_44_int = var_35_int + (int)1;
		AddItem(var_36_bool, var_29_string, (int)0, var_44_int);
	}
	return 4;
}


func_5827(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj();
	var_154_object = var_156_object;
	func_5958(var_156_object);
	if(var_155_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_bool = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_5105(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_6181(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_6179(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_6183(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_6185(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_6053(var_110_int);
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
	var_504_bool = var_57_bool == 0; //@nz
	if(var_504_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_1787;
	}
	var_48_object = Obj();
	func_5174();
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
	func_5284(var_91_object);
	return 0;
}


func_5837(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_5965(var_102_object);
	if(var_101_bool != 0) {
		var_99_bool = 1;
		return 0;
	}
	var_99_bool = 0;
	return 0;
}


func_5328(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5334(var_52_cvector, var_53_cvector)
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


func_5847(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj();
	var_112_object = var_114_object;
	func_5972(var_114_object);
	if(var_113_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_5344(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0;
	irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
	return 2;
}


func_5857(var_84_bool, var_85_object)
{
	var_86_bool = 0; var_87_object = Obj();
	var_85_object = var_87_object;
	func_5979(var_87_object);
	if(var_86_bool != 0) {
		var_84_bool = 1;
		return 0;
	}
	var_84_bool = 0;
	return 0;
}


func_5349(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_int = var_87_cvector | var_87_cvector;
	var_91_float = var_89_int * var_90_int;
	var_92_float = sqrt(var_91_float);
	var_85_float = var_88_int / var_92_float;
	return 0;
}


func_5867(var_121_bool, var_122_object)
{
	var_123_bool = 0; var_124_object = Obj();
	var_122_object = var_124_object;
	func_5986(var_124_object);
	if(var_123_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_5357(var_75_float, var_76_cvector, var_77_cvector)
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


func_5877(var_127_bool, var_128_object)
{
	var_129_bool = 0; var_130_object = Obj();
	var_128_object = var_130_object;
	func_5993(var_130_object);
	if(var_129_bool != 0) {
		var_127_bool = 1;
		return 0;
	}
	var_127_bool = 0;
	return 0;
}


func_5366(var_84_float, var_85_cvector)
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


func_251(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
	return 0;
}


func_5887(var_90_bool, var_91_object)
{
	var_92_bool = 0; var_93_object = Obj();
	var_91_object = var_93_object;
	func_6000(var_93_object);
	if(var_92_bool != 0) {
		var_90_bool = 1;
		return 0;
	}
	var_90_bool = 0;
	return 0;
}


func_5376(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	var_73_cvector = var_76_cvector;
	var_74_cvector = var_77_cvector;
	func_5357(var_75_float, var_76_cvector, var_77_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_73_cvector = var_85_cvector;
	func_5366(var_84_float, var_85_cvector);
	var_93_float = 0; var_94_cvector = CVector(0,0,0);
	var_74_cvector = var_94_cvector;
	func_5366(var_93_float, var_94_cvector);
	var_95_float = var_84_float * var_93_float;
	var_72_float = var_75_float / var_95_float;
	return 0;
}


func_259(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
	return 0;
}


func_5897(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj();
	var_184_object = var_186_object;
	func_6007(var_186_object);
	if(var_185_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_1805(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_119_object, var_120_object)
{
	var_0_bool = var_120_object;
	var_1_bool = var_119_object;
	var_3_bool = false;
	if((int)1 != 0) {
		var_126_bool = 0; var_127_object = Obj();
		var_127_object = var_1_bool;
		func_5785(var_127_object);
		if(var_126_bool != 0) {
			var_134_string = "";
			func_2491(var_120_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543247);
			@@@var_0_bool:ClearReplies();
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0;
			var_153_bool = 1;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_bool;
			func_5807(var_154_bool, var_155_object);
			if(var_154_bool != 1) {
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_bool;
				func_5857(var_165_bool, var_166_object);
				if(var_165_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 1) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_bool;
				func_5887(var_171_bool, var_172_object);
				if(var_171_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_bool:AddReply((int)543249, (int)45709, (int)45705);
			}
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_bool;
			func_5837(var_180_bool, var_181_object);
			if(var_180_bool != 0) {
				@@@var_0_bool:AddReply((int)543251, (int)45719, (int)45707);
			}
			var_189_bool = 0;
			var_189_bool = 1;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_bool;
			func_5837(var_190_bool, var_191_object);
			if(var_190_bool != 1) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_bool;
				func_5847(var_192_bool, var_193_object);
				if(var_192_bool != 1) {
					var_189_bool = 0;
				}
			}
			if(var_189_bool != 0) {
				@@@var_0_bool:AddReply((int)543277, (int)45734, (int)45733);
			}
			var_201_bool = 0;
			var_201_bool = 1;
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_bool;
			func_5867(var_202_bool, var_203_object);
			if(var_202_bool != 1) {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_bool;
				func_5877(var_208_bool, var_209_object);
				if(var_208_bool != 1) {
					var_201_bool = 0;
				}
			}
			if(var_201_bool != 0) {
				@@@var_0_bool:AddReply((int)543282, (int)45739, (int)45738);
			}
			var_217_bool = 0;
			var_217_bool = 1;
			var_218_bool = 0;
			var_218_bool = 1;
			var_219_bool = 0;
			var_219_bool = 1;
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_bool;
			func_5797(var_220_bool, var_221_object);
			if(var_220_bool != 1) {
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_1_bool;
				func_5807(var_226_bool, var_227_object);
				if(var_226_bool != 1) {
					var_219_bool = 0;
				}
			}
			if(var_219_bool != 1) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_bool;
				func_5817(var_228_bool, var_229_object);
				if(var_228_bool != 1) {
					var_218_bool = 0;
				}
			}
			if(var_218_bool != 1) {
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_bool;
				func_5827(var_234_bool, var_235_object);
				if(var_234_bool != 1) {
					var_217_bool = 0;
				}
			}
			if(var_217_bool != 0) {
				@@@var_0_bool:AddReply((int)543250, (int)-1, (int)45706);
			}
			var_243_bool = 0;
			var_243_bool = 1;
			var_244_bool = 0;
			var_244_bool = 1;
			var_245_bool = 0;
			var_245_bool = 1;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_bool;
			func_5837(var_246_bool, var_247_object);
			if(var_246_bool != 1) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_bool;
				func_5847(var_248_bool, var_249_object);
				if(var_248_bool != 1) {
					var_245_bool = 0;
				}
			}
			if(var_245_bool != 1) {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_bool;
				func_5857(var_250_bool, var_251_object);
				if(var_250_bool != 1) {
					var_244_bool = 0;
				}
			}
			if(var_244_bool != 1) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_bool;
				func_5867(var_252_bool, var_253_object);
				if(var_252_bool != 1) {
					var_243_bool = 0;
				}
			}
			if(var_243_bool != 0) {
				@@@var_0_bool:AddReply((int)543262, (int)-1, (int)45718);
			}
			var_257_bool = 0;
			var_257_bool = 1;
			var_258_bool = 0;
			var_258_bool = 1;
			var_259_bool = 0;
			var_259_bool = 1;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_bool;
			func_5877(var_260_bool, var_261_object);
			if(var_260_bool != 1) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_bool;
				func_5887(var_262_bool, var_263_object);
				if(var_262_bool != 1) {
					var_259_bool = 0;
				}
			}
			if(var_259_bool != 1) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_bool;
				func_5897(var_264_bool, var_265_object);
				if(var_264_bool != 1) {
					var_258_bool = 0;
				}
			}
			if(var_258_bool != 1) {
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_bool;
				func_5907(var_270_bool, var_271_object);
				if(var_270_bool != 1) {
					var_257_bool = 0;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_bool:AddReply((int)543276, (int)-1, (int)45732);
			}
			var_279_bool = 0;
			var_279_bool = 1;
			var_280_bool = 0;
			var_280_bool = 1;
			var_281_bool = 0;
			var_281_bool = 1;
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_bool;
			func_5797(var_282_bool, var_283_object);
			if(var_282_bool != 1) {
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_bool;
				func_5817(var_284_bool, var_285_object);
				if(var_284_bool != 1) {
					var_281_bool = 0;
				}
			}
			if(var_281_bool != 1) {
				var_286_bool = 0; var_287_object = Obj();
				var_287_object = var_1_bool;
				func_5827(var_286_bool, var_287_object);
				if(var_286_bool != 1) {
					var_280_bool = 0;
				}
			}
			if(var_280_bool != 1) {
				var_288_bool = 0; var_289_object = Obj();
				var_289_object = var_1_bool;
				func_5857(var_288_bool, var_289_object);
				if(var_288_bool != 1) {
					var_279_bool = 0;
				}
			}
			if(var_279_bool != 0) {
				@@@var_0_bool:AddReply((int)543248, (int)-1, (int)45704);
			}
			var_293_bool = 0;
			var_293_bool = 1;
			var_294_bool = 0;
			var_294_bool = 1;
			var_295_bool = 0;
			var_295_bool = 1;
			var_296_bool = 0; var_297_object = Obj();
			var_297_object = var_1_bool;
			func_5847(var_296_bool, var_297_object);
			if(var_296_bool != 1) {
				var_298_bool = 0; var_299_object = Obj();
				var_299_object = var_1_bool;
				func_5837(var_298_bool, var_299_object);
				if(var_298_bool != 1) {
					var_295_bool = 0;
				}
			}
			if(var_295_bool != 1) {
				var_300_bool = 0; var_301_object = Obj();
				var_301_object = var_1_bool;
				func_5867(var_300_bool, var_301_object);
				if(var_300_bool != 1) {
					var_294_bool = 0;
				}
			}
			if(var_294_bool != 1) {
				var_302_bool = 0; var_303_object = Obj();
				var_303_object = var_1_bool;
				func_5807(var_302_bool, var_303_object);
				if(var_302_bool != 1) {
					var_293_bool = 0;
				}
			}
			if(var_293_bool != 0) {
				@@@var_0_bool:AddReply((int)543252, (int)-1, (int)45708);
			}
			var_307_bool = 0;
			var_307_bool = 1;
			var_308_bool = 0; var_309_object = Obj();
			var_309_object = var_1_bool;
			func_5897(var_308_bool, var_309_object);
			if(var_308_bool != 1) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_bool;
				func_5907(var_310_bool, var_311_object);
				if(var_310_bool != 1) {
					var_307_bool = 0;
				}
			}
			if(var_307_bool != 0) {
				@@@var_0_bool:AddReply((int)543281, (int)-1, (int)45737);
			}
			var_315_bool = 0;
			var_315_bool = 1;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_bool;
			func_5877(var_316_bool, var_317_object);
			if(var_316_bool != 1) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_bool;
				func_5887(var_318_bool, var_319_object);
				if(var_318_bool != 1) {
					var_315_bool = 0;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_bool:AddReply((int)543275, (int)-1, (int)45731);
			}
		} else {
				var_341_string = "";
				func_2491(var_120_object, "Neutral");
				@@@var_0_bool:SetMessage((int)537506);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)537507, (int)-1, (int)39354);
				var_346_bool = 0;
				var_346_bool = 0;
				var_347_bool = 0;
				var_347_bool = 0;
				var_348_bool = 0; var_349_object = Obj();
				var_349_object = var_1_bool;
				func_5773(var_349_object);
				if(var_348_bool != 0) {
					var_354_bool = 0; var_355_object = Obj();
					var_355_object = var_1_bool;
					func_5797(var_354_bool, var_355_object);
					if(var_354_bool != 0) {
						var_347_bool = 1;
					}
				}
				if(var_347_bool != 0) {
					var_356_bool = 0; var_357_object = Obj();
					var_357_object = var_1_bool;
					func_5917(var_356_bool, var_357_object);
					if(var_356_bool != 0) {
						var_346_bool = 1;
					}
				}
				if(var_346_bool != 0) {
					@@@var_0_bool:AddReply((int)537508, (int)39356, (int)39355);
				}
				var_374_bool = 0;
				var_374_bool = 0;
				var_375_bool = 0;
				var_375_bool = 0;
				var_376_bool = 0; var_377_object = Obj();
				var_377_object = var_1_bool;
				func_5773(var_377_object);
				if(var_376_bool != 0) {
					var_378_bool = 0; var_379_object = Obj();
					var_379_object = var_1_bool;
					func_5797(var_378_bool, var_379_object);
					if(var_378_bool != 0) {
						var_375_bool = 1;
					}
				}
				if(var_375_bool != 0) {
					var_380_bool = 0; var_381_object = Obj();
					var_381_object = var_1_bool;
					func_5927(var_380_bool, var_381_object);
					if(var_380_bool != 0) {
						var_374_bool = 1;
					}
				}
				if(var_374_bool != 0) {
					@@@var_0_bool:AddReply((int)537524, (int)39372, (int)39371);
				}
				var_390_bool = 0;
				var_390_bool = 0;
				var_391_bool = 0; var_392_object = Obj();
				var_392_object = var_1_bool;
				func_5773(var_392_object);
				if(var_391_bool != 0) {
					var_393_bool = 0; var_394_object = Obj();
					var_394_object = var_1_bool;
					func_5807(var_393_bool, var_394_object);
					if(var_393_bool != 0) {
						var_390_bool = 1;
					}
				}
				if(var_390_bool != 0) {
					@@@var_0_bool:AddReply((int)537534, (int)39382, (int)39381);
				}
				var_398_bool = 0;
				var_398_bool = 0;
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_bool;
				func_5773(var_400_object);
				if(var_399_bool != 0) {
					var_401_bool = 0; var_402_object = Obj();
					var_402_object = var_1_bool;
					func_5817(var_401_bool, var_402_object);
					if(var_401_bool != 0) {
						var_398_bool = 1;
					}
				}
				if(var_398_bool != 0) {
					@@@var_0_bool:AddReply((int)537549, (int)39397, (int)39396);
				}
				var_406_bool = 0;
				var_406_bool = 0;
				var_407_bool = 0; var_408_object = Obj();
				var_408_object = var_1_bool;
				func_5773(var_408_object);
				if(var_407_bool != 0) {
					var_409_bool = 0; var_410_object = Obj();
					var_410_object = var_1_bool;
					func_5827(var_409_bool, var_410_object);
					if(var_409_bool != 0) {
						var_406_bool = 1;
					}
				}
				if(var_406_bool != 0) {
					@@@var_0_bool:AddReply((int)537559, (int)39407, (int)39406);
				}
				var_414_bool = 0;
				var_414_bool = 0;
				var_415_bool = 0; var_416_object = Obj();
				var_416_object = var_1_bool;
				func_5773(var_416_object);
				if(var_415_bool != 0) {
					var_417_bool = 0; var_418_object = Obj();
					var_418_object = var_1_bool;
					func_5837(var_417_bool, var_418_object);
					if(var_417_bool != 0) {
						var_414_bool = 1;
					}
				}
				if(var_414_bool != 0) {
					@@@var_0_bool:AddReply((int)537571, (int)39419, (int)39418);
				}
				var_422_bool = 0;
				var_422_bool = 0;
				var_423_bool = 0; var_424_object = Obj();
				var_424_object = var_1_bool;
				func_5773(var_424_object);
				if(var_423_bool != 0) {
					var_425_bool = 0; var_426_object = Obj();
					var_426_object = var_1_bool;
					func_5847(var_425_bool, var_426_object);
					if(var_425_bool != 0) {
						var_422_bool = 1;
					}
				}
				if(var_422_bool != 0) {
					@@@var_0_bool:AddReply((int)537593, (int)39442, (int)39441);
				}
				var_430_bool = 0;
				var_430_bool = 0;
				var_431_bool = 0; var_432_object = Obj();
				var_432_object = var_1_bool;
				func_5773(var_432_object);
				if(var_431_bool != 0) {
					var_433_bool = 0; var_434_object = Obj();
					var_434_object = var_1_bool;
					func_5857(var_433_bool, var_434_object);
					if(var_433_bool != 0) {
						var_430_bool = 1;
					}
				}
				if(var_430_bool != 0) {
					@@@var_0_bool:AddReply((int)537603, (int)39452, (int)39451);
				}
				var_438_bool = 0;
				var_438_bool = 0;
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_bool;
				func_5773(var_440_object);
				if(var_439_bool != 0) {
					var_441_bool = 0; var_442_object = Obj();
					var_442_object = var_1_bool;
					func_5867(var_441_bool, var_442_object);
					if(var_441_bool != 0) {
						var_438_bool = 1;
					}
				}
				if(var_438_bool != 0) {
					@@@var_0_bool:AddReply((int)537621, (int)39470, (int)39469);
				}
				var_446_bool = 0; var_447_object = Obj();
				var_447_object = var_1_bool;
				func_5877(var_446_bool, var_447_object);
				if(var_446_bool != 0) {
					@@@var_0_bool:AddReply((int)537633, (int)39482, (int)39481);
				}
				var_451_bool = 0; var_452_object = Obj();
				var_452_object = var_1_bool;
				func_5887(var_451_bool, var_452_object);
				if(var_451_bool != 0) {
					@@@var_0_bool:AddReply((int)537640, (int)39489, (int)39488);
				}
				var_456_bool = 0;
				var_456_bool = 0;
				var_457_bool = 0; var_458_object = Obj();
				var_458_object = var_1_bool;
				func_5773(var_458_object);
				if(var_457_bool != 0) {
					var_459_bool = 0; var_460_object = Obj();
					var_460_object = var_1_bool;
					func_5897(var_459_bool, var_460_object);
					if(var_459_bool != 0) {
						var_456_bool = 1;
					}
				}
				if(var_456_bool != 0) {
					@@@var_0_bool:AddReply((int)537647, (int)39496, (int)39495);
				}
				var_464_bool = 0;
				var_464_bool = 0;
				var_465_bool = 0;
				var_465_bool = 0;
				var_466_bool = 0; var_467_object = Obj();
				var_467_object = var_1_bool;
				func_5773(var_467_object);
				if(var_466_bool != 0) {
					var_468_bool = 0; var_469_object = Obj();
					var_469_object = var_1_bool;
					func_5927(var_468_bool, var_469_object);
					if(var_468_bool != 0) {
						var_465_bool = 1;
					}
				}
				if(var_465_bool != 0) {
					var_470_bool = 0; var_471_object = Obj();
					var_471_object = var_1_bool;
					func_5797(var_470_bool, var_471_object);
					if(var_470_bool != 0) {
						var_464_bool = 1;
					}
				}
				if(var_464_bool != 0) {
					@@@var_0_bool:AddReply((int)537659, (int)39508, (int)39507);
				}
				var_475_bool = 0; var_476_object = Obj();
				var_476_object = var_1_bool;
				func_5797(var_475_bool, var_476_object);
				if(var_475_bool != 0) {
					@@@var_0_bool:AddReply((int)537665, (int)39514, (int)39513);
				}
				var_480_bool = 0; var_481_object = Obj();
				var_481_object = var_1_bool;
				func_5797(var_480_bool, var_481_object);
				if(var_480_bool != 0) {
					@@@var_0_bool:AddReply((int)537671, (int)39520, (int)39519);
				}
				var_485_bool = 0;
				var_485_bool = 0;
				var_486_bool = 0; var_487_object = Obj();
				var_487_object = var_1_bool;
				func_5797(var_486_bool, var_487_object);
				if(var_486_bool != 0) {
					var_488_bool = 0; var_489_object = Obj();
					var_489_object = var_1_bool;
					func_5917(var_488_bool, var_489_object);
					if(var_488_bool != 0) {
						var_485_bool = 1;
					}
				}
				if(var_485_bool != 0) {
					@@@var_0_bool:AddReply((int)537689, (int)39538, (int)39537);
				}
				var_493_bool = 0;
				var_493_bool = 0;
				var_494_bool = 0; var_495_object = Obj();
				var_495_object = var_1_bool;
				func_5797(var_494_bool, var_495_object);
				if(var_494_bool != 0) {
					var_496_bool = 0; var_497_object = Obj();
					var_497_object = var_1_bool;
					func_5917(var_496_bool, var_497_object);
					if(var_496_bool != 0) {
						var_493_bool = 1;
					}
				}
				if(var_493_bool != 0) {
					@@@var_0_bool:AddReply((int)537702, (int)39551, (int)39550);
				}
				@@@var_0_bool:AddReply((int)537721, (int)-1, (int)39569);
				goto Label_2461;
		}
	}
Label_2461:
	var_323_bool = 0;
	func_6187(var_323_bool);
	if(var_323_bool != 0) {

	Label_2465:
		lshWaitForAnimEnd();
		var_324_bool = var_3_bool;
		if(var_324_bool != 0) {
		} else {
			var_325_string = "";
			var_325_string = var_2_bool;
			func_5253(var_325_string);
			goto Label_2465;
	}
		PlayAnimation("all", "idle");

	Label_2480:
		WaitForAnimEnd();
		var_338_bool = var_3_bool;
		if(var_338_bool != 0) {
			goto Label_2490;
		}
		PlayAnimation("all", "idle");
		goto Label_2480;

	}
	goto Label_2490;
	
Label_2490:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


func_5393(var_47_int, var_48_string)
{
	var_49_int = 0; var_50_int = 0;
	GetVariable(var_48_string, var_50_int);
	var_50_int = var_47_int;
	return 2;
}


func_5907(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj();
	var_190_object = var_192_object;
	func_6014(var_192_object);
	if(var_191_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_23_object = var_29_object;
	func_5065(var_28_bool, var_29_object);
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
	func_5575(var_66_object);
	var_65_int = var_27_int;
	var_78_bool = var_27_int > (int)0;
	if(var_78_bool != 0) {
		var_80_bool = var_27_int > (int)1;
		if(var_80_bool != 0) {
			func_259(var_27_int);
		}
		var_82_object = Obj();
		var_23_object = var_82_object;
		func_5584(var_82_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_5398(var_72_int)
{
	var_73_float = 0; var_74_float = 0;
	GetGameTime(var_74_float);
	var_76_int = 0;
	var_76_int = var_74_float / (int)24;
	var_72_int = (int)1 + var_76_int;
	return 2;
}


func_5917(var_257_bool, var_258_object)
{
	var_259_bool = 0; var_260_object = Obj();
	var_258_object = var_260_object;
	func_6021(var_260_object);
	if(var_259_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_1311(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_5407(var_262_int)
{
	var_263_float = 0; var_264_float = 0;
	GetGameTime(var_264_float);
	var_265_int = 0;
	var_264_float = var_265_int;
	var_262_int = var_265_int % (int)24;
	return 2;
}


func_5927(var_281_bool, var_282_object)
{
	var_283_bool = 0; var_284_object = Obj();
	var_282_object = var_284_object;
	func_6042(var_284_object);
	if(var_283_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_5423(var_26_bool, var_27_object, var_28_string)
{
	var_30_bool = var_28_string == "unholster";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_5714(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x154d";
	}
	var_36_bool = var_28_string == "player_shot";
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_5727(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x154d";
	}
	var_53_bool = var_28_string == "battle";
	if(var_53_bool != 0) {
		var_54_bool = 0; var_55_object = Obj();
		var_27_object = var_55_object;
		func_5750(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = 0;
	return 0;
}


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_4992(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5937(var_141_bool)
{
	var_143_int = 0;
	func_5398(var_143_int);
	var_141_bool = var_143_int == (int)1;
	return 0;
}


func_5944(var_75_bool)
{
	var_77_int = 0;
	func_5398(var_77_int);
	var_75_bool = var_77_int == (int)2;
	return 0;
}


func_316(var_0_bool, var_1_bool)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_object = Obj(); var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_98_float, (float)0.5);
	Sleep(var_98_float);
	
Label_324:
	var_105_bool = var_0_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_106_bool = var_1_bool == 0; //@nz
		if(var_106_bool != 0) {

		Label_328:
			GetPosition(var_100_cvector);
			var_107_float = 0;
			func_375(var_107_float);
			GetRandomPFPointInCircle(var_99_cvector, var_100_cvector, var_107_float, var_101_bool);
			var_110_bool = var_101_bool;
			if(var_110_bool != 0) {
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
	var_111_object = Obj(); var_112_cvector = CVector(0,0,0);
	var_99_cvector = var_112_cvector;
	func_403(var_111_object, var_112_cvector);
	var_111_object = var_102_object;
	var_115_bool = var_102_object != 0; //@nn
	if(var_115_bool != 0) {
		RotatePath(var_102_object, var_103_bool);
		var_116_bool = var_103_bool;
		if(var_116_bool != 0) {
			var_117_bool = 0;
			func_401(var_117_bool);
			FollowPath(var_102_object, var_117_bool, var_103_bool);
			var_102_object = 0;
			var_118_bool = var_103_bool;
			if(var_118_bool != 0) {
				TaskCall(2);
				func_573();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_102_object = 0;
	goto Label_324;
	
}


func_5951(var_149_bool)
{
	var_151_int = 0;
	func_5398(var_151_int);
	var_149_bool = var_151_int == (int)3;
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
	func_5334(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5334(var_50_cvector, var_51_cvector);
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


func_5958(var_155_bool)
{
	var_157_int = 0;
	func_5398(var_157_int);
	var_155_bool = var_157_int == (int)4;
	return 0;
}


func_5965(var_101_bool)
{
	var_103_int = 0;
	func_5398(var_103_int);
	var_101_bool = var_103_int == (int)5;
	return 0;
}


func_5455(var_60_object, var_61_string)
{
	var_63_bool = var_61_string == "unholster";
	if(var_63_bool != 0) {
		var_64_object = Obj();
		var_60_object = var_64_object;
		func_5719(var_64_object);
	} else {
		var_138_bool = var_61_string == "player_shot";
		if(var_138_bool != 0) {
			var_139_object = Obj();
			var_60_object = var_139_object;
			func_5742(var_139_object);
			goto Label_5479;
		}
		var_206_bool = var_61_string == "battle";
		if(var_206_bool == 0) goto Label_5479;
		var_207_object = Obj();
		var_60_object = var_207_object;
		func_5757(var_207_object);
	}
Label_5479:
	return 0;
	
}


func_5972(var_113_bool)
{
	var_115_int = 0;
	func_5398(var_115_int);
	var_113_bool = var_115_int == (int)6;
	return 0;
}


func_858()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_5979(var_86_bool)
{
	var_88_int = 0;
	func_5398(var_88_int);
	var_86_bool = var_88_int == (int)7;
	return 0;
}


func_5986(var_123_bool)
{
	var_125_int = 0;
	func_5398(var_125_int);
	var_123_bool = var_125_int == (int)8;
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
	func_4987(var_97_cvector);
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
			func_4987(var_109_cvector);
			var_1_bool = var_109_cvector + var_53_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1452;
		}
	}
	var_112_bool = var_2_bool == 0; //@nz
	if(var_112_bool == 1) goto Label_1422;
	
}


func_5480(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_24_object = var_29_object;
	func_5714(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_5007(var_32_bool, var_33_object);
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


func_5993(var_129_bool)
{
	var_131_int = 0;
	func_5398(var_131_int);
	var_129_bool = var_131_int == (int)9;
	return 0;
}


func_6000(var_92_bool)
{
	var_94_int = 0;
	func_5398(var_94_int);
	var_92_bool = var_94_int == (int)10;
	return 0;
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0;
	GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
	return 2;
}


func_6007(var_185_bool)
{
	var_187_int = 0;
	func_5398(var_187_int);
	var_185_bool = var_187_int == (int)11;
	return 0;
}


func_4987(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
	return 2;
}


func_6014(var_191_bool)
{
	var_193_int = 0;
	func_5398(var_193_int);
	var_191_bool = var_193_int == (int)12;
	return 0;
}


func_5503(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	func_5719(var_40_object);
	return 0;
}


func_4992(var_79_cvector, var_80_object)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_83_cvector);
	@@var_80_object:GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
	return 4;
}


func_387(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_5509(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_5007(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_object = Obj();
		func_5328(var_30_object);
		ReportReputationChange(var_25_object, var_30_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_6021(var_259_bool)
{
	var_261_bool = 0;
	var_261_bool = 0;
	var_262_int = 0;
	func_5407(var_262_int);
	var_268_bool = var_262_int >= (int)0;
	if(var_268_bool != 0) {
		var_269_int = 0;
		func_5407(var_269_int);
		var_271_bool = var_269_int < (int)12;
		if(var_271_bool != 0) {
			var_261_bool = 1;
		}
	}
	if(var_261_bool != 0) {
		var_259_bool = 1;
		return 0;
	}
	var_259_bool = 0;
	return 0;
}


func_4999(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_5007(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_401(var_117_bool)
{
	var_117_bool = 0;
	return 0;
}


func_5522(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_5763(var_31_object);
		var_30_bool = var_23_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = 0;
	return 2;
}


func_403(var_111_object, var_112_cvector)
{
	var_113_object = Obj(); var_114_object = Obj();
	FindShiftedPathTo(var_114_object, var_112_cvector);
	var_114_object = var_111_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5012(var_51_bool, var_52_object, var_53_string)
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


func_6042(var_283_bool)
{
	var_285_int = 0;
	func_5407(var_285_int);
	var_287_bool = var_285_int >= (int)12;
	if(var_287_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_5024(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_5538(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj();
	var_38_bool = var_34_string == "heal";
	if(var_38_bool != 0) {
		FindActor(var_36_object, "player");
		var_36_object = Obj();
		func_5766();
		var_36_object = 0;
	}
	return 2;
}


func_6053(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x17b4";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
}


func_5029(var_33_bool, var_34_object)
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
		func_5024(var_44_bool, var_45_object);
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


func_5551(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = "";
	var_145_int = var_142_int;
	if(var_145_int != 0) {
		"idle" = "idle" + var_142_int;
	}
	var_144_string = var_141_string;
	return 2;
}


func_5558(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0;
	var_138_int = 0;
	
Label_5560:
	var_141_string = ""; var_142_int = 0;
	var_138_int = var_142_int;
	func_5551(var_141_string, var_142_int);
	HasAnimation(var_139_bool, "all", var_141_string);
	var_146_bool = var_139_bool == 0; //@nz
	if(var_146_bool != 0) {
	} else {
		var_138_int = var_138_int + (int)1;
		goto Label_5560;
	}
	var_138_int = var_135_int;
	return 4;
	
}


func_6070(var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
	return 2;
}


func_2491(var_2_bool, var_53_string)
{
	var_54_bool = 0;
	func_6187(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 0;
	}
	var_56_bool = var_53_string == var_2_bool;
	if(var_56_bool != 0) {
		return 0;
	}
	var_57_string = ""; var_58_bool = 0;
	var_53_string = var_57_string;
	var_60_bool = var_53_string == "";
	if(var_60_bool != 0) {
		var_58_bool = 0;
	} else {
		var_58_bool = 1;
	}
	func_5269(var_57_string, var_58_bool);
	var_2_bool = var_53_string;
	return 0;
	
}


func_6076(var_68_float)
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


func_5575(var_65_int)
{
	var_67_bool = 0;
	func_6237(var_67_bool);
	if(var_67_bool != 0) {
		var_65_int = 2;
	} else {
		var_65_int = 0;
	}
	return 0;
	
}


func_5065(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_5029(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_5012(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
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
	func_5334(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_5334(var_50_cvector, var_51_cvector);
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


func_6090(var_39_object)
{
	var_40_int = 0;
	func_6070(var_40_int);
	var_45_bool = var_40_int == (int)1;
	if(var_45_bool != 0) {
		WorkWithCorpse(var_39_object);
	} else {
		Barter(var_39_object);
	}
	return 0;
	
}


func_5584(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	TaskCall(3);
	func_659(var_84_object, var_83_object);
	TaskReturn();
	return 0;
}


func_6103(var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	ClearSubContainer((int)0);
	var_28_bool = var_24_bool;
	if(var_28_bool != 0) {
		var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0;
		func_5313("rifle_ammo", (int)1, (int)2, (int)2);
		var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0;
		func_5313("revolver_ammo", (int)1, (int)2, (int)2);
		var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0;
		func_5313("samopal_ammo", (int)2, (int)2, (int)2);
	} else {
		var_53_string = ""; var_54_int = 0; var_55_int = 0;
		func_5302("lockpick", (int)1, (int)4);
		var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
		func_5313("alpha_pills", (int)1, (int)2, (int)3);
		var_66_string = ""; var_67_int = 0; var_68_int = 0;
		func_5302("meradorm", (int)1, (int)2);
		var_69_string = ""; var_70_int = 0; var_71_int = 0;
		func_5302("powder", (int)1, (int)15);
		func_5398((int)0);
		var_72_int = var_26_int;
		var_79_bool = var_26_int >= (int)4;
		if(var_79_bool != 0) {
			var_80_string = ""; var_81_int = 0; var_82_int = 0;
			func_5302("beta_pills", (int)1, (int)2);
		}
		var_84_bool = var_26_int >= (int)6;
		if(var_84_bool == 0) goto Label_6178;
		var_85_string = ""; var_86_int = 0; var_87_int = 0;
		func_5302("gamma_pills", (int)1, (int)7);
	}
Label_6178:
	return 2;
	
}


func_5592(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_object = var_37_object;
	func_5065(var_36_bool, var_37_object);
	if(var_36_bool != 0) {
		var_34_int = 2;
	} else {
		var_34_int = 0;
	}
	return 0;
	
}


func_5089(var_98_object)
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


func_5602(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
	return 0;
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
	func_4987(var_140_cvector);
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
			func_4987(var_152_cvector);
			var_1_bool = var_152_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1071;
		}
	}
	var_155_bool = var_2_bool == 0; //@nz
	if(var_155_bool == 1) goto Label_1041;
	
}


func_5610(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj();
	var_75_object = var_78_object;
	func_5065(var_77_bool, var_78_object);
	if(var_77_bool != 0) {
		var_74_int = 2;
	} else {
		var_74_int = 0;
	}
	return 0;
	
}


func_5100(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0;
	IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
	return 2;
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_4992(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_5105(var_58_bool, var_59_object, var_60_float)
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
	func_5334(var_85_cvector, var_86_cvector);
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
	func_6187(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_5168;
		LookAsyncCamera("head");
	}
Label_5168:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_5620(var_111_object)
{
	var_112_object = Obj();
	var_111_object = var_112_object;
	TaskCall(5);
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
	return 0;
}


func_5628(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_33_object = var_40_object;
	func_5012(var_39_bool, var_40_object, "class");
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
	EMIT "GOTO 0x161a";
	}
	var_53_bool = var_37_string == "rat_big";
	if(var_53_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0x161a";
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
		func_4999(var_58_float, var_59_object);
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
		func_4999(var_70_float, var_71_object);
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


