// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,GetDirection/1,StopAsync/0,UnlookAsync/1,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,GetScene/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,AddItem/3,AddItem/4,self/1,GetVariable/2,GetGameTime/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,CanSee/2,WorkWithCorpse/1,Barter/1,ClearSubContainer/1,SetProperty/2
// @STRINGS: W:Neutral|W:all|W:idle|W:head|W:attack_on|W:attack_stay|W:attack_off|A:GetPosition|W:Can't retreat, distance: |A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:Can't find lsh animation : |W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|A:SetReturnValue|W:branch|W:d1q01FirstGeorgVisit|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:lockpick|W:alpha_pills|W:meradorm|W:powder|W:beta_pills|W:gamma_pills|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:ToDie
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
// @EVENT_11: op=0x81d vars=int,int
// @STANDALONE_EVENT_16: op=0xceb vars=object,string
// @STANDALONE_EVENT_41: op=0xced vars=object
// @STANDALONE_EVENT_22: op=0xcef vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xcf1 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1a,0xc1,0xcf,0xe2,0xe8,0xf4,0x10b,0x17c,0x21a,0x228,0x22f,0x34c,0x365,0x391,0x398,0x3a6,0x3c2,0x46b,0x526,0x53f,0x5e8,0x601,0x6aa,0x70d,0x807,0x81d,0xc0c,0xc44,0xca9,0xcb1,0xcba,0xcc4,0xceb,0xced,0xcef,0xcf1,0xcf3,0xd13,0xd43,0xd49,0xd8b,0xd94,0xd9c,0xda6,0xdae,0xdb8,0xe02,0xe05,0xe0c,0xe0f,0xe11,0xe14,0xe1b,0xe32,0xe3a,0xe41,0xe47,0xe4a,0xe4c,0xe51,0xe5d,0xe69,0xe75,0xe7f,0xe89,0xe93,0xe9d,0xea7,0xeb1,0xebb,0xec5,0xecf,0xed9,0xee0,0xee7,0xeee,0xef5,0xefc,0xf03,0xf0a,0xf11,0xf26,0xf48,0xfdd

task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0;
	func_4009(var_23_bool);
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
	func_3586(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_32_object = Obj();
		var_22_bool = var_32_object;
		func_3589(var_32_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3401(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3484(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_251(var_24_int);
		}
		var_75_object = Obj();
		var_22_bool = var_75_object;
		func_3494(var_75_object);
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
	func_4061(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_76_int = 0; var_77_object = Obj(); var_78_bool = 0;
		var_22_object = var_77_object;
		var_24_bool = var_78_bool;
		func_3502(var_77_object, var_78_bool);
		var_76_int = var_26_int;
		var_108_bool = var_26_int > (int)0;
		if(var_108_bool != 0) {
			var_110_bool = var_26_int > (int)1;
			if(var_110_bool != 0) {
				func_251(var_26_int);
			}
			var_112_object = Obj();
			var_22_object = var_112_object;
			func_3512(var_112_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_3596(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_251(var_24_int);
		}
		var_22_bool = Obj();
		func_3599();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_3315(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_251(var_25_int);
		var_59_object = Obj(); var_60_string = "";
		var_22_string = var_59_object;
		var_23_bool = var_60_string;
		func_3347(var_59_object, var_60_string);
	} else {
		var_208_int = 0; var_209_string = ""; var_210_object = Obj();
		var_23_bool = var_209_string;
		var_22_string = var_210_object;
		func_3601(var_210_object);
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
		func_3604();
	}
Label_192:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3414(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_33_string = "";
		var_22_bool = var_33_string;
		func_3430(var_33_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3372(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_251(var_22_bool);
		var_38_object = Obj();
		var_22_bool = var_38_object;
		func_3395(var_38_object);
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
	func_3595();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_251(var_22_bool);
	var_22_bool = Obj();
	func_3309();
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
	func_3586(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_31_object = Obj();
		var_22_bool = var_31_object;
		func_3589(var_31_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3401(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3484(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_654();
		}
		var_74_object = Obj();
		var_22_bool = var_74_object;
		func_3494(var_74_object);
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
	func_4061(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_76_int = 0; var_77_object = Obj(); var_78_bool = 0;
		var_22_object = var_77_object;
		var_24_bool = var_78_bool;
		func_3502(var_77_object, var_78_bool);
		var_76_int = var_26_int;
		var_108_bool = var_26_int > (int)0;
		if(var_108_bool != 0) {
			var_110_bool = var_26_int > (int)1;
			if(var_110_bool != 0) {
				func_654();
			}
			var_111_object = Obj();
			var_22_object = var_111_object;
			func_3512(var_111_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_3596(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_654();
		}
		var_22_bool = Obj();
		func_3599();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_3315(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_654();
		var_58_object = Obj(); var_59_string = "";
		var_22_string = var_58_object;
		var_23_bool = var_59_string;
		func_3347(var_58_object, var_59_string);
	} else {
		var_207_int = 0; var_208_string = ""; var_209_object = Obj();
		var_23_bool = var_208_string;
		var_22_string = var_209_object;
		func_3601(var_209_object);
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
		func_3604();
	}
Label_537:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3414(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_654();
		var_32_string = "";
		var_22_bool = var_32_string;
		func_3430(var_32_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_654();
	func_3595();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3372(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_654();
		var_37_object = Obj();
		var_22_bool = var_37_object;
		func_3395(var_37_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_3586(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_33_object = Obj();
		var_22_bool = var_33_object;
		func_3589(var_33_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_object = Obj();
	var_22_bool = var_25_object;
	func_3401(var_25_object);
	var_34_int = 0; var_35_object = Obj();
	var_22_bool = var_35_object;
	func_3484(var_34_int, var_35_object);
	var_34_int = var_24_int;
	var_71_bool = var_24_int > (int)0;
	if(var_71_bool != 0) {
		var_73_bool = var_24_int > (int)1;
		if(var_73_bool != 0) {
			func_858();
		}
		var_76_object = Obj();
		var_22_bool = var_76_object;
		func_3494(var_76_object);
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
	func_4061(var_28_object, var_29_object, var_30_bool);
	if(var_27_bool != 0) {
		var_76_int = 0; var_77_object = Obj(); var_78_bool = 0;
		var_22_object = var_77_object;
		var_24_bool = var_78_bool;
		func_3502(var_77_object, var_78_bool);
		var_76_int = var_26_int;
		var_108_bool = var_26_int > (int)0;
		if(var_108_bool != 0) {
			var_110_bool = var_26_int > (int)1;
			if(var_110_bool != 0) {
				func_858();
			}
			var_113_object = Obj();
			var_22_object = var_113_object;
			func_3512(var_113_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	var_25_int = 0; var_26_object = Obj();
	var_22_bool = var_26_object;
	func_3596(var_26_object);
	var_25_int = var_24_int;
	var_28_bool = var_24_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_24_int > (int)1;
		if(var_30_bool != 0) {
			func_858();
		}
		var_22_bool = Obj();
		func_3599();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_object, var_22_string, var_23_bool)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_22_string = var_27_object;
	var_23_bool = var_28_string;
	func_3315(var_26_bool, var_27_object, var_28_string);
	if(var_26_bool != 0) {
		func_858();
		var_60_object = Obj(); var_61_string = "";
		var_22_string = var_60_object;
		var_23_bool = var_61_string;
		func_3347(var_60_object, var_61_string);
	} else {
		var_209_int = 0; var_210_string = ""; var_211_object = Obj();
		var_23_bool = var_210_string;
		var_22_string = var_211_object;
		func_3601(var_211_object);
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
		func_3604();
	}
Label_843:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_string = "";
	var_22_bool = var_24_string;
	func_3414(var_23_bool, var_24_string);
	if(var_23_bool != 0) {
		func_858();
		var_34_string = "";
		var_22_bool = var_34_string;
		func_3430(var_34_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_858();
	var_22_bool = Obj();
	func_3309();
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
	func_2957(var_29_bool, var_30_object);
	var_63_bool = var_29_bool == 0; //@nz
	if(var_63_bool != 0) {
		func_858();
		return 4;
	}
	GetDirection(var_25_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_2884(var_66_cvector, var_67_object);
	var_66_cvector = var_26_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_25_cvector = var_73_cvector;
	var_26_cvector = var_74_cvector;
	func_3268(var_72_float, var_73_cvector, var_74_cvector);
	var_97_bool = var_72_float < (float)0.4999999701976776;
	if(var_97_bool != 0) {
		var_98_object = Obj();
		var_98_object = var_0_bool;
		func_2981(var_98_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_858();
	func_3595();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_bool = var_24_object;
	func_3372(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		func_858();
		var_39_object = Obj();
		var_22_bool = var_39_object;
		func_3395(var_39_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1124(var_21_bool);
	func_3595();
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
		func_2879(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1123:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1124(var_22_bool);
	var_22_bool = Obj();
	func_3309();
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
		func_2879(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1310:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1311(var_22_bool);
	var_22_bool = Obj();
	func_3309();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1505(var_21_bool);
	func_3595();
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
		func_2879(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1504:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1505(var_22_bool);
	var_22_bool = Obj();
	func_3309();
	return 0;
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	func_1699(var_21_bool);
	func_3595();
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
		func_2879(var_94_cvector);
		var_1_bool = var_94_cvector + var_29_cvector;
	}
Label_1698:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool)
{
	func_1699(var_22_bool);
	var_22_bool = Obj();
	func_3309();
	return 0;
}


task_9_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_int)
{
	if((int)1 != 0) {
		func_3187();
		var_27_bool = var_23_int == (int)45744;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_bool;
			var_29_object = var_0_bool;
			func_3660(var_29_object);
		}
		var_32_bool = var_23_int == (int)39574;
		if(var_32_bool != 0) {
			var_33_object = Obj(); var_34_object = Obj();
			var_33_object = var_1_bool;
			var_34_object = var_0_bool;
			func_3660(var_34_object);
		}
		var_36_bool = var_23_int == (int)39576;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_bool;
			var_38_object = var_0_bool;
			func_3660(var_38_object);
		}
		var_40_bool = var_22_int == (int)45743;
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_object = Obj();
			var_42_object = var_1_bool;
			func_3677(var_42_object);
			if(var_41_bool != 0) {
				var_49_string = "";
				func_2055(var_23_int, "Neutral");
				@@@var_0_bool:SetMessage((int)543287);
				@@@var_0_bool:ClearReplies();
				var_67_bool = 0;
				var_67_bool = 1;
				var_68_bool = 0;
				var_68_bool = 1;
				var_69_bool = 0; var_70_object = Obj();
				var_70_object = var_1_bool;
				func_3721(var_69_bool, var_70_object);
				if(var_69_bool != 1) {
					var_80_bool = 0; var_81_object = Obj();
					var_81_object = var_1_bool;
					func_3731(var_80_bool, var_81_object);
					if(var_80_bool != 1) {
						var_68_bool = 0;
					}
				}
				if(var_68_bool != 1) {
					var_86_bool = 0; var_87_object = Obj();
					var_87_object = var_1_bool;
					func_3741(var_86_bool, var_87_object);
					if(var_86_bool != 1) {
						var_67_bool = 0;
					}
				}
				if(var_67_bool != 0) {
					@@@var_0_bool:AddReply((int)543290, (int)45747, (int)45746);
				}
				var_95_bool = 0;
				var_95_bool = 1;
				var_96_bool = 0;
				var_96_bool = 1;
				var_97_bool = 0; var_98_object = Obj();
				var_98_object = var_1_bool;
				func_3711(var_97_bool, var_98_object);
				if(var_97_bool != 1) {
					var_103_bool = 0; var_104_object = Obj();
					var_104_object = var_1_bool;
					func_3751(var_103_bool, var_104_object);
					if(var_103_bool != 1) {
						var_96_bool = 0;
					}
				}
				if(var_96_bool != 1) {
					var_109_bool = 0; var_110_object = Obj();
					var_110_object = var_1_bool;
					func_3771(var_109_bool, var_110_object);
					if(var_109_bool != 1) {
						var_95_bool = 0;
					}
				}
				if(var_95_bool != 0) {
					@@@var_0_bool:AddReply((int)543294, (int)45752, (int)45750);
				}
				var_118_bool = 0; var_119_object = Obj();
				var_119_object = var_1_bool;
				func_3761(var_118_bool, var_119_object);
				if(var_118_bool != 0) {
					@@@var_0_bool:AddReply((int)543295, (int)45761, (int)45751);
				}
				@@@var_0_bool:AddReply((int)543288, (int)-1, (int)45744);
				@@@var_0_bool:AddReply((int)543289, (int)-1, (int)45745);
				@@@var_0_bool:AddReply((int)543304, (int)-1, (int)45760);
				return 0;
			}
			var_136_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537723);
			@@@var_0_bool:ClearReplies();
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_bool;
			func_3665(var_139_object);
			if(var_138_bool != 0) {
				@@@var_0_bool:AddReply((int)537724, (int)39573, (int)39572);
			}
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_bool;
			func_3665(var_148_object);
			var_149_bool = var_147_bool == 0; //@nz
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)537728, (int)-1, (int)39576);
			}
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0;
			var_154_bool = 0;
			var_155_bool = 0;
			var_155_bool = 0;
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_bool;
			func_3665(var_157_object);
			if(var_156_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_bool;
				func_3701(var_158_bool, var_159_object);
				if(var_158_bool != 0) {
					var_155_bool = 1;
				}
			}
			if(var_155_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_bool;
				func_3781(var_164_bool, var_165_object);
				if(var_164_bool != 0) {
					var_154_bool = 1;
				}
			}
			if(var_154_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_bool;
				func_3689(var_180_object);
				if(var_179_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				@@@var_0_bool:AddReply((int)537729, (int)39578, (int)39577);
			}
			var_188_bool = 0;
			var_188_bool = 0;
			var_189_bool = 0;
			var_189_bool = 0;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_bool;
			func_3665(var_191_object);
			if(var_190_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_bool;
				func_3701(var_192_bool, var_193_object);
				if(var_192_bool != 0) {
					var_189_bool = 1;
				}
			}
			if(var_189_bool != 0) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_bool;
				func_3791(var_194_bool, var_195_object);
				if(var_194_bool != 0) {
					var_188_bool = 1;
				}
			}
			if(var_188_bool != 0) {
				@@@var_0_bool:AddReply((int)537740, (int)39589, (int)39588);
			}
			var_204_bool = 0; var_205_object = Obj();
			var_205_object = var_1_bool;
			func_3741(var_204_bool, var_205_object);
			if(var_204_bool != 0) {
				@@@var_0_bool:AddReply((int)537755, (int)39604, (int)39603);
			}
			@@@var_0_bool:AddReply((int)537783, (int)-1, (int)39634);
			@@@var_0_bool:AddReply((int)537784, (int)-1, (int)39635);
			return 0;
		}
		var_216_bool = var_22_int == (int)39604;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537756);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537757, (int)39606, (int)39605);
			@@@var_0_bool:AddReply((int)537766, (int)39615, (int)39614);
			@@@var_0_bool:AddReply((int)537782, (int)-1, (int)39633);
			return 0;
		}
		var_229_bool = var_22_int == (int)39615;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537767);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537768, (int)39617, (int)39616);
			@@@var_0_bool:AddReply((int)537781, (int)-1, (int)39632);
			return 0;
		}
		var_239_bool = var_22_int == (int)39617;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537769);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537770, (int)39608, (int)39618);
			@@@var_0_bool:AddReply((int)537771, (int)39621, (int)39620);
			return 0;
		}
		var_249_bool = var_22_int == (int)39621;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537772);
			@@@var_0_bool:ClearReplies();
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_bool;
			func_3665(var_253_object);
			if(var_252_bool != 0) {
				@@@var_0_bool:AddReply((int)537773, (int)39623, (int)39622);
			}
			@@@var_0_bool:AddReply((int)537777, (int)39628, (int)39627);
			return 0;
		}
		var_261_bool = var_22_int == (int)39628;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537778);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537779, (int)39608, (int)39629);
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_bool;
			func_3665(var_268_object);
			if(var_267_bool != 0) {
				@@@var_0_bool:AddReply((int)537780, (int)-1, (int)39631);
			}
			return 0;
		}
		var_273_bool = var_22_int == (int)39623;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537774);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537775, (int)39608, (int)39624);
			@@@var_0_bool:AddReply((int)537776, (int)-1, (int)39626);
			return 0;
		}
		var_283_bool = var_22_int == (int)39606;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537758);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537759, (int)39608, (int)39607);
			return 0;
		}
		var_290_bool = var_22_int == (int)39608;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537760);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537761, (int)39610, (int)39609);
			@@@var_0_bool:AddReply((int)537765, (int)-1, (int)39613);
			return 0;
		}
		var_300_bool = var_22_int == (int)39610;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537762);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537763, (int)-1, (int)39611);
			@@@var_0_bool:AddReply((int)537764, (int)-1, (int)39612);
			return 0;
		}
		var_310_bool = var_22_int == (int)39589;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537741);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537742, (int)39591, (int)39590);
			@@@var_0_bool:AddReply((int)537747, (int)39596, (int)39595);
			@@@var_0_bool:AddReply((int)537754, (int)-1, (int)39602);
			return 0;
		}
		var_323_bool = var_22_int == (int)39596;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537748);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537749, (int)39598, (int)39597);
			@@@var_0_bool:AddReply((int)537753, (int)-1, (int)39601);
			return 0;
		}
		var_333_bool = var_22_int == (int)39598;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537750);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537751, (int)-1, (int)39599);
			@@@var_0_bool:AddReply((int)537752, (int)-1, (int)39600);
			return 0;
		}
		var_343_bool = var_22_int == (int)39591;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537743);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537744, (int)-1, (int)39592);
			@@@var_0_bool:AddReply((int)537745, (int)-1, (int)39593);
			@@@var_0_bool:AddReply((int)537746, (int)-1, (int)39594);
			return 0;
		}
		var_356_bool = var_22_int == (int)39578;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537730);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537731, (int)39580, (int)39579);
			@@@var_0_bool:AddReply((int)537738, (int)-1, (int)39586);
			return 0;
		}
		var_366_bool = var_22_int == (int)39580;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537732);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537733, (int)39582, (int)39581);
			@@@var_0_bool:AddReply((int)537737, (int)-1, (int)39585);
			return 0;
		}
		var_376_bool = var_22_int == (int)39582;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537734);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537735, (int)-1, (int)39583);
			@@@var_0_bool:AddReply((int)537736, (int)-1, (int)39584);
			return 0;
		}
		var_386_bool = var_22_int == (int)39573;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)537725);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)537726, (int)-1, (int)39574);
			@@@var_0_bool:AddReply((int)537727, (int)-1, (int)39575);
			return 0;
		}
		var_396_bool = var_22_int == (int)45761;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543305);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543306, (int)-1, (int)45762);
			@@@var_0_bool:AddReply((int)543307, (int)45766, (int)45763);
			return 0;
		}
		var_406_bool = var_22_int == (int)45766;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543310);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543312, (int)-1, (int)45768);
			@@@var_0_bool:AddReply((int)543311, (int)-1, (int)45767);
			return 0;
		}
		var_416_bool = var_22_int == (int)45752;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543296);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543297, (int)45755, (int)45753);
			@@@var_0_bool:AddReply((int)543298, (int)45756, (int)45754);
			return 0;
		}
		var_426_bool = var_22_int == (int)45756;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543300);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543302, (int)-1, (int)45758);
			@@@var_0_bool:AddReply((int)543303, (int)-1, (int)45759);
			return 0;
		}
		var_436_bool = var_22_int == (int)45755;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543299);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543301, (int)-1, (int)45757);
			return 0;
		}
		var_443_bool = var_22_int == (int)45747;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_2055(var_23_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543291);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543292, (int)-1, (int)45748);
			@@@var_0_bool:AddReply((int)543293, (int)-1, (int)45749);
			return 0;
		}
		var_3_bool = true;
		var_452_bool = 0;
		func_4009(var_452_bool);
		if(var_452_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x81e";
	
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
	func_4011();
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
	var_363_bool = 0;
	func_4009(var_363_bool);
	if(var_363_bool != 0) {
		var_364_string = "";
		func_3145("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_365_bool = var_0_bool;
	if(var_365_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_3586(var_25_int)
{
	var_25_int = 2;
	return 0;
}


func_3589(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_4019(var_33_object, var_34_object);
	return 0;
}


func_2055(var_2_bool, var_49_string)
{
	var_50_bool = 0;
	func_4009(var_50_bool);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_bool = var_49_string == var_2_bool;
	if(var_52_bool != 0) {
		return 0;
	}
	var_53_string = ""; var_54_bool = 0;
	var_49_string = var_53_string;
	var_56_bool = var_49_string == "";
	if(var_56_bool != 0) {
		var_54_bool = 0;
	} else {
		var_54_bool = 1;
	}
	func_3161(var_53_string, var_54_bool);
	var_2_bool = var_49_string;
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
	func_3226(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3226(var_50_cvector, var_51_cvector);
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


func_3595()
{
	return 0;
}


func_3596(var_25_int)
{
	var_25_int = 0;
	return 0;
}


func_3084(var_328_bool, var_329_object)
{
	var_330_bool = 0; var_331_object = Obj(); var_332_float = 0;
	var_329_object = var_331_object;
	func_3092(var_330_bool, var_331_object, (float)70);
	var_330_bool = var_328_bool;
	return 0;
}


func_3599()
{
	return 0;
}


func_3601(var_209_int)
{
	var_209_int = 0;
	return 0;
}


func_3604()
{
	return 0;
}


func_3092(var_330_bool, var_331_object, var_332_float)
{
	var_333_float = 0; var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_bool = 0; var_341_float = 0; var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_bool = 0;
	@@var_331_object:GetPosition(var_342_cvector);
	@@var_331_object:GetEyesHeight(var_341_float);
	var_349_float = GetByIndex(var_342_cvector, 1);
	var_349_float = var_349_float + var_341_float;
	SetByIndex(var_342_cvector, 1) = var_349_float;
	GetPosition(var_343_cvector);
	GetEyesHeight(var_341_float);
	var_350_float = GetByIndex(var_343_cvector, 1);
	var_350_float = var_350_float + var_341_float;
	SetByIndex(var_343_cvector, 1) = var_350_float;
	var_344_cvector = var_342_cvector - var_343_cvector;
	var_351_float = GetByIndex(var_344_cvector, 1);
	SetByIndex(var_344_cvector, 1) = (float)0;
	var_352_int = var_344_cvector | var_344_cvector;
	var_353_float = sqrt(var_352_int);
	var_344_cvector = var_344_cvector / var_353_float;
	var_345_cvector = -var_344_cvector;
	var_354_float = var_344_cvector * var_332_float;
	var_346_cvector = var_354_float - CVector(0.0, 10.0, 0.0);
	var_347_cvector = var_343_cvector + var_346_cvector;
	IsOverrideActive(var_348_bool);
	var_356_bool = var_348_bool;
	if(var_356_bool != 0) {
		var_330_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_347_cvector, var_345_cvector, (bool)1);
	var_358_float = GetByIndex(var_346_cvector, 0);
	var_359_float = GetByIndex(var_346_cvector, 2);
	Rotate(var_358_float, var_359_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_330_bool = 1;
	return 16;
}


func_3606(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
	return 2;
}


func_3611(var_40_object)
{
	var_41_object = Obj();
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
	return 0;
}


func_3619(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	CanSee(var_40_bool, var_38_object);
	var_37_bool = 1;
	var_41_bool = var_40_bool;
	if(var_41_bool != 1) {
		var_42_float = 0; var_43_object = Obj();
		var_38_object = var_43_object;
		func_2891(var_42_float, var_43_object);
		var_51_bool = var_42_float <= (int)4000000;
		if(var_51_bool != 1) {
			var_37_bool = 0;
		}
	}
	return 2;
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
	func_2879(var_191_cvector);
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
			func_2879(var_201_cvector);
			var_1_bool = var_201_cvector + var_152_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1646;
		}
	}
	var_204_bool = var_2_bool == 0; //@nz
	if(var_204_bool == 1) goto Label_1616;
	
}


func_3634(var_139_object)
{
	var_140_object = Obj();
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
	return 0;
}


func_55()
{
	var_88_bool = 0;
	func_2992(var_88_bool);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		func_3595();
	}
	return 0;
}


func_3642(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj();
	var_55_object = var_57_object;
	func_3619(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
	return 0;
}


func_573()
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_float = 0; var_125_bool = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; var_131_float = 0; var_132_bool = 0;
	WaitForAnimEnd();
	var_133_bool = 0;
	func_2992(var_133_bool);
	var_134_bool = var_133_bool == 0; //@nz
	if(var_134_bool != 0) {
		return 14;
	}
	func_3450((int)0);
	var_135_int = var_126_int;
	var_127_int = 0;
	
Label_587:
	var_148_bool = 0;
	var_148_bool = 0;
	var_150_bool = var_127_int < (int)5;
	if(var_150_bool != 0) {
		var_151_bool = 0;
		func_2992(var_151_bool);
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
			func_3443(var_157_string, var_158_int);
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


func_3649(var_207_object)
{
	var_208_object = Obj();
	var_207_object = var_208_object;
	func_3634(var_208_object);
	return 0;
}


func_3140()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_3655(var_30_bool)
{
	var_30_bool = 0;
	return 0;
}


func_3145(var_223_string)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0;
	lshHasAnimation(var_227_bool, var_223_string);
	var_230_bool = var_227_bool;
	if(var_230_bool != 0) {
		lshGetAnimTimes(var_223_string, var_228_float, var_229_float);
		lshPlayAnimation(var_228_float, var_229_float, (bool)0);
	} else {
		var_233_int = "Can't find lsh animation : " + var_223_string;
		Trace(var_233_int);
	}
	return 6;
	
}


func_3658()
{
	return 0;
}


func_3660(var_29_object)
{
	@@var_29_object:SetReturnValue((int)1000);
	return 0;
}


func_3665(var_138_bool)
{
	var_140_int = 0; var_141_string = "";
	func_3285(var_140_int, "branch");
	var_143_bool = var_140_int == (int)0;
	if(var_143_bool != 0) {
		var_138_bool = 1;
		return 0;
	}
	var_138_bool = 0;
	return 0;
}


func_3161(var_53_string, var_54_bool)
{
	var_57_bool = 0; var_58_float = 0; var_59_float = 0; var_60_bool = 0; var_61_float = 0; var_62_float = 0;
	lshHasAnimation(var_60_bool, var_53_string);
	var_63_bool = var_60_bool;
	if(var_63_bool != 0) {
		lshGetAnimTimes(var_53_string, var_61_float, var_62_float);
		lshPlayAnimation(var_61_float, var_62_float, var_54_bool);
	} else {
		var_65_int = "Can't find lsh animation : " + var_53_string;
		Trace(var_65_int);
	}
	return 6;
	
}


func_3677(var_41_bool)
{
	var_43_int = 0; var_44_string = "";
	func_3285(var_43_int, "branch");
	var_48_bool = var_43_int == (int)2;
	if(var_48_bool != 0) {
		var_41_bool = 1;
		return 0;
	}
	var_41_bool = 0;
	return 0;
}


func_1124(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_3176(var_82_object)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0);
	@@var_82_object:GetEyesHeight(var_85_float);
	var_86_cvector = CVector(0.0, 0.0, 0.0);
	var_87_float = GetByIndex(var_86_cvector, 1);
	var_85_float = var_87_float;
	SetByIndex(var_86_cvector, 1) = var_87_float;
	LookAsync(var_82_object, "head", var_86_cvector);
	return 4;
}


func_3689(var_179_bool)
{
	var_181_int = 0; var_182_string = "";
	func_3285(var_181_int, "d1q01FirstGeorgVisit");
	var_184_bool = var_181_int == (int)1;
	if(var_184_bool != 0) {
		var_179_bool = 1;
		return 0;
	}
	var_179_bool = 0;
	return 0;
}


func_3187()
{
	var_25_bool = 0;
	func_4009(var_25_bool);
	if(var_25_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1140(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2884(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3701(var_158_bool, var_159_object)
{
	var_160_bool = 0; var_161_object = Obj();
	var_159_object = var_161_object;
	func_3801(var_161_object);
	if(var_160_bool != 0) {
		var_158_bool = 1;
		return 0;
	}
	var_158_bool = 0;
	return 0;
}


func_3194(var_53_string, var_54_int, var_55_int)
{
	var_56_bool = 0; var_57_bool = 0;
	var_58_bool = 0; var_59_int = 0; var_60_int = 0;
	var_54_int = var_59_int;
	var_55_int = var_60_int;
	func_3236(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0) {
		AddItem(var_57_bool, var_53_string, (int)0);
	}
	return 2;
}


func_3711(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj();
	var_98_object = var_100_object;
	func_3808(var_100_object);
	if(var_99_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
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
	func_3226(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3226(var_50_cvector, var_51_cvector);
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


func_3205(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_37_bool = 0; var_38_int = 0; var_39_int = 0;
	var_30_int = var_38_int;
	var_31_int = var_39_int;
	func_3236(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		irand(var_35_int, var_32_int);
		var_44_int = var_35_int + (int)1;
		AddItem(var_36_bool, var_29_string, (int)0, var_44_int);
	}
	return 4;
}


func_3721(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_object = Obj();
	var_70_object = var_72_object;
	func_3815(var_72_object);
	if(var_71_bool != 0) {
		var_69_bool = 1;
		return 0;
	}
	var_69_bool = 0;
	return 0;
}


func_652(var_160_bool)
{
	var_160_bool = 1;
	return 0;
}


func_654()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3731(var_80_bool, var_81_object)
{
	var_82_bool = 0; var_83_object = Obj();
	var_81_object = var_83_object;
	func_3822(var_83_object);
	if(var_82_bool != 0) {
		var_80_bool = 1;
		return 0;
	}
	var_80_bool = 0;
	return 0;
}


func_3220(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_659(var_0_bool, var_74_object)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0;
	var_0_bool = var_74_object;
	func_710(var_81_bool);
	GetDirection(var_79_cvector);
	var_89_cvector = CVector(0,0,0); var_90_object = Obj();
	var_90_object = var_0_bool;
	func_2884(var_89_cvector, var_90_object);
	var_89_cvector = var_80_cvector;
	var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0);
	var_79_cvector = var_96_cvector;
	var_80_cvector = var_97_cvector;
	func_3268(var_95_float, var_96_cvector, var_97_cvector);
	var_120_bool = var_95_float < (int)0;
	if(var_120_bool != 0) {
		var_121_object = Obj();
		var_121_object = var_0_bool;
		func_2981(var_121_object);
		var_81_bool = 1;
	} else {
		Sleep((float)1.5, var_81_bool);
	}
	var_130_bool = var_81_bool;
	if(var_130_bool != 0) {
		var_131_object = Obj();
		var_131_object = var_0_bool;
		func_2981(var_131_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_3226(var_52_cvector, var_53_cvector)
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


func_3741(var_86_bool, var_87_object)
{
	var_88_bool = 0; var_89_object = Obj();
	var_87_object = var_89_object;
	func_3829(var_89_object);
	if(var_88_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_1186(var_0_bool, var_1_bool, var_2_bool, var_114_object)
{
	var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0; var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_float = 0;
	var_0_bool = var_114_object;
	var_128_cvector = CVector(0,0,0); var_129_float = 0;
	func_1156(var_127_float, var_128_cvector, (float)1.7453293800354004);
	var_128_cvector = var_123_cvector;
	var_124_float = var_123_cvector | var_123_cvector;
	var_159_bool = var_124_float < (float)2500.0;
	if(var_159_bool != 0) {
		var_160_cvector = CVector(0,0,0); var_161_float = 0;
		func_1156(var_127_float, var_160_cvector, (float)2.6179938316345215);
		var_160_cvector = var_123_cvector;
		var_124_float = var_123_cvector | var_123_cvector;
		var_163_bool = var_124_float < (float)2500.0;
		if(var_163_bool != 0) {
			var_165_float = sqrt(var_124_float);
			var_166_int = "Can't retreat, distance: " + var_165_float;
			Trace(var_166_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_168_float = GetByIndex(var_123_cvector, 0);
	var_169_float = GetByIndex(var_123_cvector, 2);
	Rotate(var_168_float, var_169_float);
	var_170_cvector = CVector(0,0,0);
	func_2879(var_170_cvector);
	var_1_bool = var_170_cvector + var_123_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1228:
	MovePoint(var_1_bool, (int)1, var_125_bool);
	var_176_bool = var_125_bool;
	if(var_176_bool != 0) {
		var_177_bool = var_0_bool == 0; //@ne
		if(var_177_bool != 0) {
			goto Label_1258;
		EMIT "GOTO 0x4e8";

		Label_1258:
			return 10;
		}
		var_178_cvector = CVector(0,0,0); var_179_float = 0;
		func_1156(var_127_float, var_178_cvector, (float)2.6179938316345215);
		var_178_cvector = var_126_cvector;
		var_127_float = var_126_cvector | var_126_cvector;
		var_181_bool = var_127_float >= (float)2500.0;
		if(var_181_bool != 0) {
			var_182_cvector = CVector(0,0,0);
			func_2879(var_182_cvector);
			var_1_bool = var_182_cvector + var_126_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1258;
		}
	}
	var_185_bool = var_2_bool == 0; //@nz
	if(var_185_bool == 1) goto Label_1228;
	
}


func_1699(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_3236(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0;
	irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
	return 2;
}


func_3751(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_object = Obj();
	var_104_object = var_106_object;
	func_3836(var_106_object);
	if(var_105_bool != 0) {
		var_103_bool = 1;
		return 0;
	}
	var_103_bool = 0;
	return 0;
}


func_3241(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector;
	var_89_int = var_86_cvector | var_86_cvector;
	var_90_int = var_87_cvector | var_87_cvector;
	var_91_float = var_89_int * var_90_int;
	var_92_float = sqrt(var_91_float);
	var_85_float = var_88_int / var_92_float;
	return 0;
}


func_3761(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj();
	var_119_object = var_121_object;
	func_3843(var_121_object);
	if(var_120_bool != 0) {
		var_118_bool = 1;
		return 0;
	}
	var_118_bool = 0;
	return 0;
}


func_3249(var_75_float, var_76_cvector, var_77_cvector)
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


func_1715(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2884(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3258(var_84_float, var_85_cvector)
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


func_3771(var_109_bool, var_110_object)
{
	var_111_bool = 0; var_112_object = Obj();
	var_110_object = var_112_object;
	func_3850(var_112_object);
	if(var_111_bool != 0) {
		var_109_bool = 1;
		return 0;
	}
	var_109_bool = 0;
	return 0;
}


func_1731(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_0_bool = var_48_object;
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0;
	var_48_object = var_59_object;
	func_2997(var_58_bool, var_59_object, (float)70.0);
	var_105_bool = var_58_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	CreateDialog(var_54_object);
	var_106_int = 0;
	func_4003(var_106_int);
	@@var_54_object:SetNPCName(var_106_int);
	var_107_int = 0;
	func_4001(var_107_int);
	@@var_54_object:SetNPCDescription(var_107_int);
	var_108_string = "";
	func_4005(var_108_string);
	@@var_54_object:SetPhoto(var_108_string);
	var_109_string = "";
	func_4007(var_109_string);
	@@var_54_object:SetPhoto2(var_109_string);
	var_110_int = 0;
	func_3889(var_110_int);
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
	var_318_bool = var_57_bool == 0; //@nz
	if(var_318_bool != 0) {
		sync();
		@@var_54_object:IsDialogEnd(var_57_bool);
		goto Label_1787;
	}
	var_48_object = Obj();
	func_3066();
	StopDialog(var_54_object);
	@@var_54_object:GetReturnValue((int)-1);
	var_56_int = var_47_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3268(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0);
	var_73_cvector = var_76_cvector;
	var_74_cvector = var_77_cvector;
	func_3249(var_75_float, var_76_cvector, var_77_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_73_cvector = var_85_cvector;
	func_3258(var_84_float, var_85_cvector);
	var_93_float = 0; var_94_cvector = CVector(0,0,0);
	var_74_cvector = var_94_cvector;
	func_3258(var_93_float, var_94_cvector);
	var_95_float = var_84_float * var_93_float;
	var_72_float = var_75_float / var_95_float;
	return 0;
}


func_3781(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj();
	var_165_object = var_167_object;
	func_3857(var_167_object);
	if(var_166_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_710(var_0_bool)
{
	var_82_object = Obj();
	var_82_object = var_0_bool;
	func_3176(var_82_object);
	return 0;
}


func_3791(var_194_bool, var_195_object)
{
	var_196_bool = 0; var_197_object = Obj();
	var_195_object = var_197_object;
	func_3878(var_197_object);
	if(var_196_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_3285(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0;
	GetVariable(var_44_string, var_46_int);
	var_46_int = var_43_int;
	return 2;
}


func_3801(var_160_bool)
{
	var_162_int = 0;
	func_3290(var_162_int);
	var_160_bool = var_162_int == (int)1;
	return 0;
}


func_3290(var_72_int)
{
	var_73_float = 0; var_74_float = 0;
	GetGameTime(var_74_float);
	var_76_int = 0;
	var_76_int = var_74_float / (int)24;
	var_72_int = (int)1 + var_76_int;
	return 2;
}


func_3808(var_99_bool)
{
	var_101_int = 0;
	func_3290(var_101_int);
	var_99_bool = var_101_int == (int)2;
	return 0;
}


func_3299(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_172_int = 0;
	var_171_float = var_172_int;
	var_169_int = var_172_int % (int)24;
	return 2;
}


func_3815(var_71_bool)
{
	var_73_int = 0;
	func_3290(var_73_int);
	var_71_bool = var_73_int == (int)3;
	return 0;
}


func_3822(var_82_bool)
{
	var_84_int = 0;
	func_3290(var_84_int);
	var_82_bool = var_84_int == (int)4;
	return 0;
}


func_3315(var_26_bool, var_27_object, var_28_string)
{
	var_30_bool = var_28_string == "unholster";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_3606(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xd11";
	}
	var_36_bool = var_28_string == "player_shot";
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_3619(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xd11";
	}
	var_53_bool = var_28_string == "battle";
	if(var_53_bool != 0) {
		var_54_bool = 0; var_55_object = Obj();
		var_27_object = var_55_object;
		func_3642(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = 0;
	return 0;
}


func_3829(var_88_bool)
{
	var_90_int = 0;
	func_3290(var_90_int);
	var_88_bool = var_90_int == (int)5;
	return 0;
}


func_251(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
	return 0;
}


func_3836(var_105_bool)
{
	var_107_int = 0;
	func_3290(var_107_int);
	var_105_bool = var_107_int == (int)6;
	return 0;
}


func_259(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
	return 0;
}


func_3843(var_120_bool)
{
	var_122_int = 0;
	func_3290(var_122_int);
	var_120_bool = var_122_int == (int)8;
	return 0;
}


func_3850(var_111_bool)
{
	var_113_int = 0;
	func_3290(var_113_int);
	var_111_bool = var_113_int == (int)10;
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
		func_3677(var_127_object);
		if(var_126_bool != 0) {
			var_134_string = "";
			func_2055(var_120_object, "Neutral");
			@@@var_0_bool:SetMessage((int)543287);
			@@@var_0_bool:ClearReplies();
			var_152_bool = 0;
			var_152_bool = 1;
			var_153_bool = 0;
			var_153_bool = 1;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_bool;
			func_3721(var_154_bool, var_155_object);
			if(var_154_bool != 1) {
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_bool;
				func_3731(var_165_bool, var_166_object);
				if(var_165_bool != 1) {
					var_153_bool = 0;
				}
			}
			if(var_153_bool != 1) {
				var_171_bool = 0; var_172_object = Obj();
				var_172_object = var_1_bool;
				func_3741(var_171_bool, var_172_object);
				if(var_171_bool != 1) {
					var_152_bool = 0;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_bool:AddReply((int)543290, (int)45747, (int)45746);
			}
			var_180_bool = 0;
			var_180_bool = 1;
			var_181_bool = 0;
			var_181_bool = 1;
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_bool;
			func_3711(var_182_bool, var_183_object);
			if(var_182_bool != 1) {
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_bool;
				func_3751(var_188_bool, var_189_object);
				if(var_188_bool != 1) {
					var_181_bool = 0;
				}
			}
			if(var_181_bool != 1) {
				var_194_bool = 0; var_195_object = Obj();
				var_195_object = var_1_bool;
				func_3771(var_194_bool, var_195_object);
				if(var_194_bool != 1) {
					var_180_bool = 0;
				}
			}
			if(var_180_bool != 0) {
				@@@var_0_bool:AddReply((int)543294, (int)45752, (int)45750);
			}
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_bool;
			func_3761(var_203_bool, var_204_object);
			if(var_203_bool != 0) {
				@@@var_0_bool:AddReply((int)543295, (int)45761, (int)45751);
			}
			@@@var_0_bool:AddReply((int)543288, (int)-1, (int)45744);
			@@@var_0_bool:AddReply((int)543289, (int)-1, (int)45745);
			@@@var_0_bool:AddReply((int)543304, (int)-1, (int)45760);
		} else {
				var_239_string = "";
				func_2055(var_120_object, "Neutral");
				@@@var_0_bool:SetMessage((int)537723);
				@@@var_0_bool:ClearReplies();
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_bool;
				func_3665(var_242_object);
				if(var_241_bool != 0) {
					@@@var_0_bool:AddReply((int)537724, (int)39573, (int)39572);
				}
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_bool;
				func_3665(var_251_object);
				var_252_bool = var_250_bool == 0; //@nz
				if(var_252_bool != 0) {
					@@@var_0_bool:AddReply((int)537728, (int)-1, (int)39576);
				}
				var_256_bool = 0;
				var_256_bool = 0;
				var_257_bool = 0;
				var_257_bool = 0;
				var_258_bool = 0;
				var_258_bool = 0;
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_bool;
				func_3665(var_260_object);
				if(var_259_bool != 0) {
					var_261_bool = 0; var_262_object = Obj();
					var_262_object = var_1_bool;
					func_3701(var_261_bool, var_262_object);
					if(var_261_bool != 0) {
						var_258_bool = 1;
					}
				}
				if(var_258_bool != 0) {
					var_267_bool = 0; var_268_object = Obj();
					var_268_object = var_1_bool;
					func_3781(var_267_bool, var_268_object);
					if(var_267_bool != 0) {
						var_257_bool = 1;
					}
				}
				if(var_257_bool != 0) {
					var_282_bool = 0; var_283_object = Obj();
					var_283_object = var_1_bool;
					func_3689(var_283_object);
					if(var_282_bool != 0) {
						var_256_bool = 1;
					}
				}
				if(var_256_bool != 0) {
					@@@var_0_bool:AddReply((int)537729, (int)39578, (int)39577);
				}
				var_291_bool = 0;
				var_291_bool = 0;
				var_292_bool = 0;
				var_292_bool = 0;
				var_293_bool = 0; var_294_object = Obj();
				var_294_object = var_1_bool;
				func_3665(var_294_object);
				if(var_293_bool != 0) {
					var_295_bool = 0; var_296_object = Obj();
					var_296_object = var_1_bool;
					func_3701(var_295_bool, var_296_object);
					if(var_295_bool != 0) {
						var_292_bool = 1;
					}
				}
				if(var_292_bool != 0) {
					var_297_bool = 0; var_298_object = Obj();
					var_298_object = var_1_bool;
					func_3791(var_297_bool, var_298_object);
					if(var_297_bool != 0) {
						var_291_bool = 1;
					}
				}
				if(var_291_bool != 0) {
					@@@var_0_bool:AddReply((int)537740, (int)39589, (int)39588);
				}
				var_307_bool = 0; var_308_object = Obj();
				var_308_object = var_1_bool;
				func_3741(var_307_bool, var_308_object);
				if(var_307_bool != 0) {
					@@@var_0_bool:AddReply((int)537755, (int)39604, (int)39603);
				}
				@@@var_0_bool:AddReply((int)537783, (int)-1, (int)39634);
				@@@var_0_bool:AddReply((int)537784, (int)-1, (int)39635);
				goto Label_2025;
		}
	}
Label_2025:
	var_221_bool = 0;
	func_4009(var_221_bool);
	if(var_221_bool != 0) {

	Label_2029:
		lshWaitForAnimEnd();
		var_222_bool = var_3_bool;
		if(var_222_bool != 0) {
		} else {
			var_223_string = "";
			var_223_string = var_2_bool;
			func_3145(var_223_string);
			goto Label_2029;
	}
		PlayAnimation("all", "idle");

	Label_2044:
		WaitForAnimEnd();
		var_236_bool = var_3_bool;
		if(var_236_bool != 0) {
			goto Label_2054;
		}
		PlayAnimation("all", "idle");
		goto Label_2044;

	}
	goto Label_2054;
	
Label_2054:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


func_3857(var_166_bool)
{
	var_168_bool = 0;
	var_168_bool = 0;
	var_169_int = 0;
	func_3299(var_169_int);
	var_175_bool = var_169_int >= (int)0;
	if(var_175_bool != 0) {
		var_176_int = 0;
		func_3299(var_176_int);
		var_178_bool = var_176_int < (int)12;
		if(var_178_bool != 0) {
			var_168_bool = 1;
		}
	}
	if(var_168_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_3347(var_60_object, var_61_string)
{
	var_63_bool = var_61_string == "unholster";
	if(var_63_bool != 0) {
		var_64_object = Obj();
		var_60_object = var_64_object;
		func_3611(var_64_object);
	} else {
		var_138_bool = var_61_string == "player_shot";
		if(var_138_bool != 0) {
			var_139_object = Obj();
			var_60_object = var_139_object;
			func_3634(var_139_object);
			goto Label_3371;
		}
		var_206_bool = var_61_string == "battle";
		if(var_206_bool == 0) goto Label_3371;
		var_207_object = Obj();
		var_60_object = var_207_object;
		func_3649(var_207_object);
	}
Label_3371:
	return 0;
	
}


func_276(var_2_bool, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_23_object = var_29_object;
	func_2957(var_28_bool, var_29_object);
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
	func_3467(var_66_object);
	var_65_int = var_27_int;
	var_69_bool = var_27_int > (int)0;
	if(var_69_bool != 0) {
		var_71_bool = var_27_int > (int)1;
		if(var_71_bool != 0) {
			func_259(var_27_int);
		}
		var_73_object = Obj();
		var_23_object = var_73_object;
		func_3476(var_73_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1311(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_3878(var_196_bool)
{
	var_198_int = 0;
	func_3299(var_198_int);
	var_200_bool = var_198_int >= (int)12;
	if(var_200_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_3372(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_24_object = var_29_object;
	func_3606(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_24_object = var_33_object;
		func_2899(var_32_bool, var_33_object);
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


func_1327(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2884(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3889(var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	GetVariable("branch", var_112_int);
	var_115_bool = var_112_int == (int)0;
	if(var_115_bool != 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0xf40";
	}
	var_117_bool = var_112_int == (int)1;
	if(var_117_bool != 0) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
	return 2;
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


func_2879(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
	return 2;
}


func_3906(var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
	return 2;
}


func_3395(var_39_object)
{
	var_40_object = Obj();
	var_39_object = var_40_object;
	func_3611(var_40_object);
	return 0;
}


func_2884(var_79_cvector, var_80_object)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_83_cvector);
	@@var_80_object:GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
	return 4;
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
	func_3226(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3226(var_50_cvector, var_51_cvector);
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


func_3912(var_39_object)
{
	var_40_int = 0;
	func_3906(var_40_int);
	var_45_bool = var_40_int == (int)1;
	if(var_45_bool != 0) {
		WorkWithCorpse(var_39_object);
	} else {
		Barter(var_39_object);
	}
	return 0;
	
}


func_3401(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_2899(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_30_object = Obj();
		func_3220(var_30_object);
		ReportReputationChange(var_25_object, var_30_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_2891(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_2899(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_3925(var_24_bool)
{
	var_25_int = 0; var_26_int = 0;
	ClearSubContainer((int)0);
	var_28_bool = var_24_bool;
	if(var_28_bool != 0) {
		var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0;
		func_3205("rifle_ammo", (int)1, (int)2, (int)2);
		var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0;
		func_3205("revolver_ammo", (int)1, (int)2, (int)2);
		var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0;
		func_3205("samopal_ammo", (int)2, (int)2, (int)2);
	} else {
		var_53_string = ""; var_54_int = 0; var_55_int = 0;
		func_3194("lockpick", (int)1, (int)4);
		var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
		func_3205("alpha_pills", (int)1, (int)2, (int)3);
		var_66_string = ""; var_67_int = 0; var_68_int = 0;
		func_3194("meradorm", (int)1, (int)2);
		var_69_string = ""; var_70_int = 0; var_71_int = 0;
		func_3194("powder", (int)1, (int)15);
		func_3290((int)0);
		var_72_int = var_26_int;
		var_79_bool = var_26_int >= (int)4;
		if(var_79_bool != 0) {
			var_80_string = ""; var_81_int = 0; var_82_int = 0;
			func_3194("beta_pills", (int)1, (int)2);
		}
		var_84_bool = var_26_int >= (int)6;
		if(var_84_bool == 0) goto Label_4000;
		var_85_string = ""; var_86_int = 0; var_87_int = 0;
		func_3194("gamma_pills", (int)1, (int)7);
	}
Label_4000:
	return 2;
	
}


func_3414(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_3655(var_31_object);
		var_30_bool = var_23_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = 0;
	return 2;
}


func_2904(var_51_bool, var_52_object, var_53_string)
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


func_858()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2916(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
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
	func_2879(var_97_cvector);
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
			func_2879(var_109_cvector);
			var_1_bool = var_109_cvector + var_53_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1452;
		}
	}
	var_112_bool = var_2_bool == 0; //@nz
	if(var_112_bool == 1) goto Label_1422;
	
}


func_3430(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj();
	var_38_bool = var_34_string == "heal";
	if(var_38_bool != 0) {
		FindActor(var_36_object, "player");
		var_36_object = Obj();
		func_3658();
		var_36_object = 0;
	}
	return 2;
}


func_2921(var_33_bool, var_34_object)
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
		func_2916(var_44_bool, var_45_object);
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


func_3443(var_141_string, var_142_int)
{
	var_143_string = ""; var_144_string = "";
	var_145_int = var_142_int;
	if(var_145_int != 0) {
		"idle" = "idle" + var_142_int;
	}
	var_144_string = var_141_string;
	return 2;
}


func_375(var_107_float)
{
	var_108_float = 0; var_109_float = 0;
	GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
	return 2;
}


func_3450(var_135_int)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_bool = 0;
	var_138_int = 0;
	
Label_3452:
	var_141_string = ""; var_142_int = 0;
	var_138_int = var_142_int;
	func_3443(var_141_string, var_142_int);
	HasAnimation(var_139_bool, "all", var_141_string);
	var_146_bool = var_139_bool == 0; //@nz
	if(var_146_bool != 0) {
	} else {
		var_138_int = var_138_int + (int)1;
		goto Label_3452;
	}
	var_138_int = var_135_int;
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


func_394(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_3467(var_65_int)
{
	var_67_bool = 0;
	func_4059(var_67_bool);
	if(var_67_bool != 0) {
		var_65_int = 2;
	} else {
		var_65_int = 0;
	}
	return 0;
	
}


func_2957(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_2921(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_2904(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_401(var_117_bool)
{
	var_117_bool = 0;
	return 0;
}


func_403(var_111_object, var_112_cvector)
{
	var_113_object = Obj(); var_114_object = Obj();
	FindShiftedPathTo(var_114_object, var_112_cvector);
	var_114_object = var_111_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3476(var_73_object)
{
	var_74_object = Obj();
	var_73_object = var_74_object;
	TaskCall(3);
	func_659(var_75_object, var_74_object);
	TaskReturn();
	return 0;
}


func_3484(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_object = var_37_object;
	func_2957(var_36_bool, var_37_object);
	if(var_36_bool != 0) {
		var_34_int = 2;
	} else {
		var_34_int = 0;
	}
	return 0;
	
}


func_4001(var_107_int)
{
	var_107_int = 515561;
	return 0;
}


func_4003(var_106_int)
{
	var_106_int = 503346;
	return 0;
}


func_2981(var_98_object)
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


func_3494(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
	return 0;
}


func_4005(var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_4007(var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_4009(var_25_bool)
{
	var_25_bool = 0;
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


func_4011()
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_24_bool = 0;
	func_3925((bool)0);
	return 0;
}


func_3502(var_76_int, var_77_object)
{
	var_79_bool = 0; var_80_object = Obj();
	var_77_object = var_80_object;
	func_2957(var_79_bool, var_80_object);
	if(var_79_bool != 0) {
		var_76_int = 2;
	} else {
		var_76_int = 0;
	}
	return 0;
	
}


func_2992(var_88_bool)
{
	var_89_bool = 0; var_90_bool = 0;
	IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
	return 2;
}


func_4019(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		IsOverrideActive(var_36_bool);
		var_38_bool = var_36_bool == 0; //@nz
		if(var_38_bool != 0) {
			var_39_object = Obj();
			var_34_object = var_39_object;
			func_3912(var_39_object);
		}
		return 2;
	EMIT "GOTO 0xfda";
	}
	var_47_int = 0; var_48_object = Obj();
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	var_327_bool = (int)1000 == var_49_object;
	if(var_327_bool != 0) {
		var_328_bool = 0; var_329_object = Obj();
		var_34_object = var_329_object;
		func_3084(var_328_bool, var_329_object);
		var_360_bool = var_328_bool == 0; //@nz
		if(var_360_bool != 0) {
			return 2;
		}
		var_361_object = Obj();
		var_34_object = var_361_object;
		TaskCall(0);
		func_0(var_361_object);
		TaskReturn();
		var_34_object = Obj();
		func_3140();
	}
	return 2;
}


func_2997(var_58_bool, var_59_object, var_60_float)
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
	func_3226(var_85_cvector, var_86_cvector);
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
	func_4009(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		HasAnimationTrack(var_78_bool, "head");
		var_103_bool = var_78_bool;
		if(var_103_bool == 0) goto Label_3060;
		LookAsyncCamera("head");
	}
Label_3060:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_58_bool = 1;
	return 18;
	
}


func_3512(var_113_object)
{
	var_114_object = Obj();
	var_113_object = var_114_object;
	TaskCall(5);
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object);
	TaskReturn();
	return 0;
}


func_3520(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0;
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_33_object = var_40_object;
	func_2904(var_39_bool, var_40_object, "class");
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
	EMIT "GOTO 0xdde";
	}
	var_53_bool = var_37_string == "rat_big";
	if(var_53_bool != 0) {
		var_31_bool = 0;
		return 4;
	EMIT "GOTO 0xdde";
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
		func_2891(var_58_float, var_59_object);
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
		func_2891(var_70_float, var_71_object);
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


func_969(var_0_bool, var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0;
	GetPosition(var_44_cvector);
	@@@var_0_bool:GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_44_cvector - var_45_cvector;
	func_3226(var_52_cvector, var_53_cvector);
	var_60_float = var_46_cvector * (float)0.75;
	var_51_cvector = var_52_cvector + var_60_float;
	func_3226(var_50_cvector, var_51_cvector);
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


func_4059(var_67_bool)
{
	var_67_bool = 1;
	return 0;
}


func_4061(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0;
	var_28_object = var_32_object;
	var_29_object = var_33_object;
	func_3520(var_31_bool, var_32_object, var_33_object, (float)500.0);
	if(var_31_bool != 0) {
		SetProperty("ToDie", (bool)1);
		var_27_bool = 1;
		return 0;
	}
	var_27_bool = 0;
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
	func_2879(var_140_cvector);
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
			func_2879(var_152_cvector);
			var_1_bool = var_152_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1071;
		}
	}
	var_155_bool = var_2_bool == 0; //@nz
	if(var_155_bool == 1) goto Label_1041;
	
}


func_1521(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetDirection(var_77_cvector);
	var_79_cvector = CVector(0,0,0); var_80_object = Obj();
	var_80_object = var_0_bool;
	func_2884(var_79_cvector, var_80_object);
	var_79_cvector = var_78_cvector;
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= (float)-0.3420201241970062;
	return 4;
}


func_3066()
{
	var_320_bool = 0; var_321_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_323_bool = 0;
	func_4009(var_323_bool);
	if(var_323_bool != 0) {
	} else {
		HasAnimationTrack(var_321_bool, "head");
		var_325_bool = var_321_bool;
		if(var_325_bool == 0) goto Label_3083;
		UnlookAsync("head");
	}
Label_3083:
	return 2;
	
}


