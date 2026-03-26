// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,GetGameTime/1,GetVariable/2,FindActor/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,HasAnimation/3,CanSee/2,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:branch|W:player|W:reputation|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:idle|W:class|W:rat|W:rat_big|W:dog
// @GLOBALS: 0:bool:
// @RUN_OP: 0x9c
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x96 vars=object,int,float,float
// @EVENT_16: op=0x98 vars=object,string
// @EVENT_41: op=0x9a vars=object
// @TASK_1: vars=bool,bool,bool params=0
// @EVENT_0: op=0xb4 vars=object
// @EVENT_17: op=0xc8 vars=object
// @EVENT_30: op=0xe0 vars=object,object,bool
// @EVENT_40: op=0xfc vars=object
// @EVENT_42: op=0x110 vars=object,string
// @EVENT_26: op=0x135 vars=string
// @EVENT_1: op=0x143 vars=object
// @EVENT_3: op=0x156 vars=object
// @EVENT_7: op=0x15c vars=int
// @EVENT_6: op=0x168 vars=
// @EVENT_41: op=0x17f vars=object
// @EVENT_10: op=0x1f0 vars=object
// @EVENT_28: op=0x1f4 vars=
// @TASK_2: vars= params=0
// @EVENT_0: op=0x20d vars=object
// @EVENT_17: op=0x221 vars=object
// @EVENT_30: op=0x239 vars=object,object,bool
// @EVENT_40: op=0x255 vars=object
// @EVENT_42: op=0x269 vars=object,string
// @EVENT_26: op=0x28e vars=string
// @EVENT_6: op=0x29c vars=
// @EVENT_1: op=0x2a3 vars=object
// @TASK_3: vars=object params=1
// @EVENT_0: op=0x33f vars=object
// @EVENT_17: op=0x353 vars=object
// @EVENT_30: op=0x36b vars=object,object,bool
// @EVENT_40: op=0x387 vars=object
// @EVENT_42: op=0x39b vars=object,string
// @EVENT_26: op=0x3c0 vars=string
// @EVENT_41: op=0x3d9 vars=object
// @EVENT_7: op=0x3e2 vars=int
// @EVENT_6: op=0x405 vars=
// @EVENT_1: op=0x40c vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_6: op=0x41a vars=
// @EVENT_7: op=0x488 vars=int
// @EVENT_41: op=0x4c3 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x543 vars=int
// @EVENT_41: op=0x57e vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x597 vars=
// @EVENT_7: op=0x605 vars=int
// @EVENT_41: op=0x640 vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_6: op=0x659 vars=
// @EVENT_7: op=0x6c7 vars=int
// @EVENT_41: op=0x702 vars=object
// @STANDALONE_EVENT_16: op=0x9ad vars=object,string
// @STANDALONE_EVENT_41: op=0x9ba vars=object
// @STANDALONE_EVENT_22: op=0x9c0 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x9c8 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x3c0,0x3d9,0x405,0x40c,0x41a,0x4c3,0x57e,0x597,0x640,0x659,0x702,0x853,0x85b,0x864,0x86e,0x89c,0x9a5,0x9ba,0x9c0,0x9c8,0x9d2,0x9f2,0xa22,0xa28,0xa6a,0xa73,0xa7b,0xa85,0xa8d,0xa97,0xae1,0xae4,0xae6,0xae9,0xaeb,0xaee,0xafa,0xb11,0xb19,0xb20,0xb26,0xb29,0xb43,0xb4c

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2795(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_23_object = Obj();
		var_16_bool = var_23_object;
		func_2798(var_23_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_2804();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2795(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_367(var_18_int);
		}
		var_26_object = Obj();
		var_16_bool = var_26_object;
		func_2798(var_26_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2600(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2683(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_367(var_18_int);
		}
		var_69_object = Obj();
		var_16_bool = var_69_object;
		func_2693(var_69_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2883(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2701(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_367(var_20_int);
			}
			var_104_object = Obj();
			var_16_object = var_104_object;
			func_2711(var_104_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2785(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_367(var_18_int);
		}
		var_16_bool = Obj();
		func_2788();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2514(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_367(var_19_int);
		var_53_object = Obj(); var_54_string = "";
		var_16_cvector = var_53_object;
		var_17_bool = var_54_string;
		func_2546(var_53_object, var_54_string);
	} else {
		var_202_int = 0; var_203_string = ""; var_204_object = Obj();
		var_17_bool = var_203_string;
		var_16_cvector = var_204_object;
		func_2790(var_204_object);
		var_202_int = var_19_int;
		var_206_bool = var_19_int > (int)0;
		if(var_206_bool == 0) goto Label_308;
		var_208_bool = var_19_int > (int)1;
		if(var_208_bool != 0) {
			func_367(var_19_int);
		}
		var_209_string = ""; var_210_object = Obj();
		var_17_bool = var_209_string;
		var_16_cvector = var_210_object;
		func_2793();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2613(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_367(var_16_bool);
		var_27_string = "";
		var_16_bool = var_27_string;
		func_2629(var_27_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2571(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_367(var_16_bool);
		var_32_object = Obj();
		var_16_bool = var_32_object;
		func_2594(var_32_object);
	} else {
		var_106_object = Obj();
		var_16_bool = var_106_object;
		func_392(var_16_bool, var_106_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_object = Obj();
	var_16_bool = var_17_object;
	func_392(var_16_bool, var_17_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_18_bool = var_16_bool != (int)110;
	if(var_18_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_367(var_15_bool);
	func_2804();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_367(var_16_bool);
	var_16_bool = Obj();
	func_2490();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2795(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_770();
		}
		var_25_object = Obj();
		var_16_bool = var_25_object;
		func_2798(var_25_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2600(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2683(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_770();
		}
		var_68_object = Obj();
		var_16_bool = var_68_object;
		func_2693(var_68_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2883(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2701(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_770();
			}
			var_103_object = Obj();
			var_16_object = var_103_object;
			func_2711(var_103_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2785(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_770();
		}
		var_16_bool = Obj();
		func_2788();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2514(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_770();
		var_52_object = Obj(); var_53_string = "";
		var_16_cvector = var_52_object;
		var_17_bool = var_53_string;
		func_2546(var_52_object, var_53_string);
	} else {
		var_201_int = 0; var_202_string = ""; var_203_object = Obj();
		var_17_bool = var_202_string;
		var_16_cvector = var_203_object;
		func_2790(var_203_object);
		var_201_int = var_19_int;
		var_205_bool = var_19_int > (int)0;
		if(var_205_bool == 0) goto Label_653;
		var_207_bool = var_19_int > (int)1;
		if(var_207_bool != 0) {
			func_770();
		}
		var_208_string = ""; var_209_object = Obj();
		var_17_bool = var_208_string;
		var_16_cvector = var_209_object;
		func_2793();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2613(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_770();
		var_26_string = "";
		var_16_bool = var_26_string;
		func_2629(var_26_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_770();
	func_2804();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2571(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_770();
		var_31_object = Obj();
		var_16_bool = var_31_object;
		func_2594(var_31_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2795(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_974();
		}
		var_27_object = Obj();
		var_16_bool = var_27_object;
		func_2798(var_27_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_object = Obj();
	var_16_bool = var_19_object;
	func_2600(var_19_object);
	var_28_int = 0; var_29_object = Obj();
	var_16_bool = var_29_object;
	func_2683(var_28_int, var_29_object);
	var_28_int = var_18_int;
	var_65_bool = var_18_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_18_int > (int)1;
		if(var_67_bool != 0) {
			func_974();
		}
		var_70_object = Obj();
		var_16_bool = var_70_object;
		func_2693(var_70_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	var_16_object = var_22_object;
	var_17_cvector = var_23_object;
	var_18_bool = var_24_bool;
	func_2883(var_22_object, var_23_object, var_24_bool);
	if(var_21_bool != 0) {
		var_68_int = 0; var_69_object = Obj(); var_70_bool = 0;
		var_16_object = var_69_object;
		var_18_bool = var_70_bool;
		func_2701(var_69_object, var_70_bool);
		var_68_int = var_20_int;
		var_100_bool = var_20_int > (int)0;
		if(var_100_bool != 0) {
			var_102_bool = var_20_int > (int)1;
			if(var_102_bool != 0) {
				func_974();
			}
			var_105_object = Obj();
			var_16_object = var_105_object;
			func_2711(var_105_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	func_2785(var_20_object);
	var_19_int = var_18_int;
	var_22_bool = var_18_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_18_int > (int)1;
		if(var_24_bool != 0) {
			func_974();
		}
		var_16_bool = Obj();
		func_2788();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_16_cvector = var_21_object;
	var_17_bool = var_22_string;
	func_2514(var_20_bool, var_21_object, var_22_string);
	if(var_20_bool != 0) {
		func_974();
		var_54_object = Obj(); var_55_string = "";
		var_16_cvector = var_54_object;
		var_17_bool = var_55_string;
		func_2546(var_54_object, var_55_string);
	} else {
		var_203_int = 0; var_204_string = ""; var_205_object = Obj();
		var_17_bool = var_204_string;
		var_16_cvector = var_205_object;
		func_2790(var_205_object);
		var_203_int = var_19_int;
		var_207_bool = var_19_int > (int)0;
		if(var_207_bool == 0) goto Label_959;
		var_209_bool = var_19_int > (int)1;
		if(var_209_bool != 0) {
			func_974();
		}
		var_210_string = ""; var_211_object = Obj();
		var_17_bool = var_210_string;
		var_16_cvector = var_211_object;
		func_2793();
	}
Label_959:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = "";
	var_16_bool = var_18_string;
	func_2613(var_17_bool, var_18_string);
	if(var_17_bool != 0) {
		func_974();
		var_28_string = "";
		var_16_bool = var_28_string;
		func_2629(var_28_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_974();
	var_16_bool = Obj();
	func_2490();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_22_bool = var_16_bool != (int)111;
	if(var_22_bool != 0) {
		return 4;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_0_bool;
	func_1897(var_23_bool, var_24_object);
	var_57_bool = var_23_bool == 0; //@nz
	if(var_57_bool != 0) {
		func_974();
		return 4;
	}
	GetDirection(var_19_cvector);
	var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	var_61_object = var_0_bool;
	func_1824(var_60_cvector, var_61_object);
	var_60_cvector = var_20_cvector;
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_19_cvector = var_67_cvector;
	var_20_cvector = var_68_cvector;
	func_2158(var_66_float, var_67_cvector, var_68_cvector);
	var_91_bool = var_66_float < (float)0.4999999701976776;
	if(var_91_bool != 0) {
		var_92_object = Obj();
		var_92_object = var_0_bool;
		func_2047(var_92_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_974();
	func_2804();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	func_2571(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_974();
		var_33_object = Obj();
		var_16_bool = var_33_object;
		func_2594(var_33_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1212(var_15_bool);
	func_2804();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1057(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1228((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1211;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1819(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1211:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1212(var_16_bool);
	var_16_bool = Obj();
	func_2490();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1244(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1415((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1398;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1819(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1398:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1399(var_16_bool);
	var_16_bool = Obj();
	func_2490();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1593(var_15_bool);
	func_2804();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_bool != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1438(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1609((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1592;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1819(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1592:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	func_1593(var_16_bool);
	var_16_bool = Obj();
	func_2490();
	return 0;
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1787(var_15_bool);
	func_2804();
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0;
	var_26_bool = var_16_int != (int)120;
	if(var_26_bool != 0) {
		return 8;
	}
	var_27_bool = var_0_bool == 0; //@ne
	if(var_27_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_21_cvector);
		FindDirLength(var_22_float, var_21_cvector, (float)7000.0);
		var_30_cvector = CVector(0,0,0); var_31_float = 0;
		func_1632(var_24_float, var_30_cvector, (float)1.7453293800354004);
		var_30_cvector = var_23_cvector;
		var_24_float = var_23_cvector | var_23_cvector;
		var_60_bool = 0;
		var_60_bool = 0;
		var_62_bool = var_24_float >= (float)2500.0;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_64_float = var_22_float * var_22_float;
			var_66_float = var_64_float * (float)2.25;
			var_67_bool = var_24_float >= var_66_float;
			if(var_67_bool != 1) {
				var_68_bool = 0;
				func_1803((bool)1, var_68_bool);
				if(var_68_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool == 0) goto Label_1786;
		Stop();
		var_88_cvector = CVector(0,0,0);
		func_1819(var_88_cvector);
		var_1_bool = var_88_cvector + var_23_cvector;
	}
Label_1786:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	func_1787(var_16_object);
	var_16_object = Obj();
	func_2490();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2469(var_17_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_1965(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_2033(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	SensePlayerOnly((bool)1);
	func_2859();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_14_cvector, var_15_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_18_object)
{
	EventDisable(0);
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_33(var_19_object);
	var_99_object = Obj();
	var_18_object = var_99_object;
	func_2892(var_99_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_517(var_47_bool)
{
	var_47_bool = 0;
	return 0;
}


func_519(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2058(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0;
	IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
	return 2;
}


func_2571(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	var_21_bool = 0;
	var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_2805(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_1839(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		@@var_18_object:IsWeaponHolstered(var_20_bool);
		var_30_bool = var_20_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_17_bool = 1;
			return 2;
		}
	}
	var_17_bool = 0;
	return 2;
}


func_2063(var_85_object)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0);
	@@var_85_object:GetEyesHeight(var_88_float);
	var_89_cvector = CVector(0.0, 0.0, 0.0);
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	LookAsync(var_85_object, "head", var_89_cvector);
	return 4;
}


func_2074(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	IsExisting3DSound(var_51_bool, var_42_string);
	var_59_bool = var_51_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_52_int = 0;

	Label_2080:
		var_61_int = var_52_int + (int)1;
		var_62_int = var_42_string + var_61_int;
		IsExisting3DSound(var_53_bool, var_62_int);
		var_63_bool = var_53_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_52_int = var_52_int + (int)1;
			goto Label_2080;
		}
		var_64_bool = var_52_int == 0; //@nz
		if(var_64_bool != 0) {
			return 16;
		}
		irand(var_54_int, var_52_int);
		var_66_int = var_54_int + (int)1;
		var_42_string = var_42_string + var_66_int;
	}
	Is3DSoundLoaded(var_55_bool, var_42_string);
	var_67_bool = var_55_bool;
	if(var_67_bool != 0) {
		GetEyesHeight(var_56_float);
		GetDirection(var_57_cvector);
		var_58_cvector = var_57_cvector * (int)50;
		var_69_float = GetByIndex(var_58_cvector, 1);
		var_69_float = var_69_float + var_56_float;
		SetByIndex(var_58_cvector, 1) = var_69_float;
		PlayGlobalSound(var_42_string, var_58_cvector);
	}
	return 16;
	
}


func_33(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = var_19_object == 0; //@ne
	if(var_40_bool != 0) {
		var_41_string = "";
		func_124("fdie");
	} else {
		@@var_19_object:GetPosition(var_30_cvector);
		GetPosition(var_31_cvector);
		GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_73_float = GetByIndex(var_33_cvector, 0);
		var_74_float = GetByIndex(var_32_cvector, 0);
		var_75_float = var_73_float * var_74_float;
		var_76_float = GetByIndex(var_33_cvector, 2);
		var_77_float = GetByIndex(var_32_cvector, 2);
		var_78_float = var_76_float * var_77_float;
		var_79_int = var_75_float + var_78_float;
		var_81_bool = var_79_int >= (int)0;
		if(var_81_bool != 0) {
			var_34_string = "fdie";
		} else {
				var_34_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_19_object = var_35_object;
		var_84_bool = IsFuncExist(var_19_object, "GetScriptProperty", (int)2);
		if(var_84_bool != 0) {
			@@var_19_object:HasScriptProperty(var_36_bool, "Owner");
			var_86_bool = var_36_bool;
			if(var_86_bool != 0) {
				@@var_19_object:GetScriptProperty(var_35_object, "Owner");
				var_88_bool = var_35_object == 0; //@ne
				if(var_88_bool != 0) {
					var_19_object = var_35_object;
				}
			}
		}
		var_91_bool = IsFuncExist(var_35_object, "@GetEyesHeight", (int)1);
		if(var_91_bool != 0) {
			@@var_35_object:GetEyesHeight(var_38_float);
			var_39_cvector = CVector(0.0, 0.0, 0.0);
			var_92_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_92_float;
			SetByIndex(var_39_cvector, 1) = var_92_float;
			LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = 1;
		} else {
			var_37_bool = 0;

		}
		var_94_string = "";
		var_34_string = var_94_string;
		func_2074(var_94_string);
		PlayAnimation("all", var_34_string);
		WaitForAnimEnd();
		var_96_bool = var_37_bool;
		if(var_96_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_34_string);
		RemoveEnvelope();
		var_35_object = 0;
	}
	return 20;
	
}


func_2594(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	func_2810(var_34_object);
	return 0;
}


func_1057(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_2121(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_2121(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2600(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1839(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_object = Obj();
		func_2115(var_24_object);
		ReportReputationChange(var_19_object, var_24_object, (float)0.0);
	}
	return 0;
}


func_2613(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	var_22_bool = var_18_string == "heal";
	if(var_22_bool != 0) {
		FindActor(var_20_object, "player");
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_2854(var_25_object);
		var_24_bool = var_17_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = 0;
	return 2;
}


func_1593(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1087(var_0_bool, var_1_bool, var_2_bool, var_71_object)
{
	var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_bool = 0; var_83_cvector = CVector(0,0,0); var_84_float = 0;
	var_0_bool = var_71_object;
	var_85_cvector = CVector(0,0,0); var_86_float = 0;
	func_1057(var_84_float, var_85_cvector, (float)1.7453293800354004);
	var_85_cvector = var_80_cvector;
	var_81_float = var_80_cvector | var_80_cvector;
	var_116_bool = var_81_float < (float)2500.0;
	if(var_116_bool != 0) {
		var_117_cvector = CVector(0,0,0); var_118_float = 0;
		func_1057(var_84_float, var_117_cvector, (float)2.6179938316345215);
		var_117_cvector = var_80_cvector;
		var_81_float = var_80_cvector | var_80_cvector;
		var_120_bool = var_81_float < (float)2500.0;
		if(var_120_bool != 0) {
			var_122_float = sqrt(var_81_float);
			var_123_int = "Can't retreat, distance: " + var_122_float;
			Trace(var_123_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_125_float = GetByIndex(var_80_cvector, 0);
	var_126_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_125_float, var_126_float);
	var_127_cvector = CVector(0,0,0);
	func_1819(var_127_cvector);
	var_1_bool = var_127_cvector + var_80_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1129:
	MovePoint(var_1_bool, (int)1, var_82_bool);
	var_133_bool = var_82_bool;
	if(var_133_bool != 0) {
		var_134_bool = var_0_bool == 0; //@ne
		if(var_134_bool != 0) {
			goto Label_1159;
		EMIT "GOTO 0x485";

		Label_1159:
			return 10;
		}
		var_135_cvector = CVector(0,0,0); var_136_float = 0;
		func_1057(var_84_float, var_135_cvector, (float)2.6179938316345215);
		var_135_cvector = var_83_cvector;
		var_84_float = var_83_cvector | var_83_cvector;
		var_138_bool = var_84_float >= (float)2500.0;
		if(var_138_bool != 0) {
			var_139_cvector = CVector(0,0,0);
			func_1819(var_139_cvector);
			var_1_bool = var_139_cvector + var_83_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1159;
		}
	}
	var_142_bool = var_2_bool == 0; //@nz
	if(var_142_bool == 1) goto Label_1129;
	
}


func_2115(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj();
	self(var_106_object);
	var_106_object = var_104_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2629(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_32_bool = var_28_string == "heal";
	if(var_32_bool != 0) {
		FindActor(var_30_object, "player");
		var_30_object = Obj();
		func_2857();
		var_30_object = 0;
	}
	return 2;
}


func_2121(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_1609(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1824(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2642(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_2131(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector;
	var_83_int = var_80_cvector | var_80_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_float = var_83_int * var_84_int;
	var_86_float = sqrt(var_85_float);
	var_79_float = var_82_int / var_86_float;
	return 0;
}


func_2649(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_2651:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_2642(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_2651;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_2139(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = var_72_float * var_73_float;
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = var_75_float * var_76_float;
	var_69_float = var_74_float + var_77_float;
	return 0;
}


func_1632(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_2121(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_2121(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2148(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_82_float = var_80_float * var_81_float;
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_85_float = var_83_float * var_84_float;
	var_86_int = var_82_float + var_85_float;
	var_78_float = sqrt(var_86_int);
	return 0;
}


func_2666(var_59_int)
{
	var_61_bool = 0;
	func_2877(var_61_bool);
	if(var_61_bool != 0) {
		var_59_int = 2;
	} else {
		var_59_int = 0;
	}
	return 0;
	
}


func_2158(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_67_cvector = var_70_cvector;
	var_68_cvector = var_71_cvector;
	func_2139(var_69_float, var_70_cvector, var_71_cvector);
	var_78_float = 0; var_79_cvector = CVector(0,0,0);
	var_67_cvector = var_79_cvector;
	func_2148(var_78_float, var_79_cvector);
	var_87_float = 0; var_88_cvector = CVector(0,0,0);
	var_68_cvector = var_88_cvector;
	func_2148(var_87_float, var_88_cvector);
	var_89_float = var_78_float * var_87_float;
	var_66_float = var_69_float / var_89_float;
	return 0;
}


func_2675(var_76_object)
{
	var_77_object = Obj();
	var_76_object = var_77_object;
	TaskCall(3);
	func_775(var_78_object, var_77_object);
	TaskReturn();
	return 0;
}


func_2683(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_1897(var_30_bool, var_31_object);
	if(var_30_bool != 0) {
		var_28_int = 2;
	} else {
		var_28_int = 0;
	}
	return 0;
	
}


func_124(var_41_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_42_string = "";
	var_41_string = var_42_string;
	func_2074(var_42_string);
	PlayAnimation("all", var_41_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_41_string);
	RemoveEnvelope();
	return 0;
}


func_1662(var_0_bool, var_1_bool, var_2_bool, var_134_object)
{
	var_138_cvector = CVector(0,0,0); var_139_float = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0;
	var_0_bool = var_134_object;
	var_148_cvector = CVector(0,0,0); var_149_float = 0;
	func_1632(var_147_float, var_148_cvector, (float)1.7453293800354004);
	var_148_cvector = var_143_cvector;
	var_144_float = var_143_cvector | var_143_cvector;
	var_174_bool = var_144_float < (float)2500.0;
	if(var_174_bool != 0) {
		var_175_cvector = CVector(0,0,0); var_176_float = 0;
		func_1632(var_147_float, var_175_cvector, (float)2.6179938316345215);
		var_175_cvector = var_143_cvector;
		var_144_float = var_143_cvector | var_143_cvector;
		var_178_bool = var_144_float < (float)2500.0;
		if(var_178_bool != 0) {
			var_180_float = sqrt(var_144_float);
			var_181_int = "Can't retreat, distance: " + var_180_float;
			Trace(var_181_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_183_float = GetByIndex(var_143_cvector, 0);
	var_184_float = GetByIndex(var_143_cvector, 2);
	Rotate(var_183_float, var_184_float);
	var_185_cvector = CVector(0,0,0);
	func_1819(var_185_cvector);
	var_1_bool = var_185_cvector + var_143_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1704:
	MovePoint(var_1_bool, (int)1, var_145_bool);
	var_189_bool = var_145_bool;
	if(var_189_bool != 0) {
		var_190_bool = var_0_bool == 0; //@ne
		if(var_190_bool != 0) {
			goto Label_1734;
		EMIT "GOTO 0x6c4";

		Label_1734:
			return 10;
		}
		var_191_cvector = CVector(0,0,0); var_192_float = 0;
		func_1632(var_147_float, var_191_cvector, (float)2.6179938316345215);
		var_191_cvector = var_146_cvector;
		var_147_float = var_146_cvector | var_146_cvector;
		var_194_bool = var_147_float >= (float)2500.0;
		if(var_194_bool != 0) {
			var_195_cvector = CVector(0,0,0);
			func_1819(var_195_cvector);
			var_1_bool = var_195_cvector + var_146_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1734;
		}
	}
	var_198_bool = var_2_bool == 0; //@nz
	if(var_198_bool == 1) goto Label_1704;
	
}


func_2175(var_118_int)
{
	var_119_float = 0; var_120_float = 0;
	GetGameTime(var_120_float);
	var_122_int = 0;
	var_122_int = var_120_float / (int)24;
	var_118_int = (int)1 + var_122_int;
	return 2;
}


func_2693(var_70_object)
{
	var_71_object = Obj();
	var_70_object = var_71_object;
	TaskCall(4);
	func_1087(var_72_object, var_73_cvector, var_74_bool, var_71_object);
	TaskReturn();
	return 0;
}


func_2184(var_223_int)
{
	var_224_int = 0; var_225_int = 0;
	GetVariable("branch", var_225_int);
	var_225_int = var_223_int;
	return 2;
}


func_2701(var_68_int, var_69_object)
{
	var_71_bool = 0; var_72_object = Obj();
	var_69_object = var_72_object;
	func_1897(var_71_bool, var_72_object);
	if(var_71_bool != 0) {
		var_68_int = 2;
	} else {
		var_68_int = 0;
	}
	return 0;
	
}


func_2190(var_62_float)
{
	var_63_object = Obj(); var_64_float = 0; var_65_object = Obj(); var_66_float = 0;
	FindActor(var_65_object, "player");
	var_68_bool = var_65_object == 0; //@nz
	if(var_68_bool != 0) {
		var_62_float = 0;
		return 4;
	}
	@@var_65_object:GetProperty("reputation", var_66_float);
	var_66_float = var_62_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2711(var_105_object)
{
	var_106_object = Obj();
	var_105_object = var_106_object;
	TaskCall(5);
	func_1274(var_107_object, var_108_cvector, var_109_bool, var_106_object);
	TaskReturn();
	return 0;
}


func_2204(var_33_object)
{
	var_34_int = 0;
	func_2184(var_34_int);
	var_39_bool = var_34_int == (int)1;
	if(var_39_bool != 0) {
		WorkWithCorpse(var_33_object);
	} else {
		Barter(var_33_object);
	}
	return 0;
	
}


func_2719(var_25_bool, var_26_object, var_27_object, var_28_float)
{
	var_29_string = ""; var_30_bool = 0; var_31_string = ""; var_32_bool = 0;
	var_33_bool = 0; var_34_object = Obj(); var_35_string = "";
	var_27_object = var_34_object;
	func_1844(var_33_bool, var_34_object, "class");
	var_42_bool = var_33_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	@@var_27_object:GetProperty("class", var_31_string);
	var_45_bool = var_31_string == "rat";
	if(var_45_bool != 0) {
		var_25_bool = 0;
		return 4;
	EMIT "GOTO 0xabd";
	}
	var_47_bool = var_31_string == "rat_big";
	if(var_47_bool != 0) {
		var_25_bool = 0;
		return 4;
	EMIT "GOTO 0xabd";
	}
	var_49_bool = var_31_string == "dog";
	if(var_49_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	CanSee(var_32_bool, var_26_object);
	var_50_bool = 0;
	var_50_bool = 1;
	var_51_bool = var_32_bool;
	if(var_51_bool != 1) {
		var_52_float = 0; var_53_object = Obj();
		var_26_object = var_53_object;
		func_1831(var_52_float, var_53_object);
		var_60_float = var_28_float * var_28_float;
		var_61_bool = var_52_float <= var_60_float;
		if(var_61_bool != 1) {
			var_50_bool = 0;
		}
	}
	if(var_50_bool != 0) {
		var_25_bool = 1;
		return 4;
	}
	CanSee(var_32_bool, var_27_object);
	var_62_bool = 0;
	var_62_bool = 1;
	var_63_bool = var_32_bool;
	if(var_63_bool != 1) {
		var_64_float = 0; var_65_object = Obj();
		var_27_object = var_65_object;
		func_1831(var_64_float, var_65_object);
		var_66_float = var_28_float * var_28_float;
		var_67_bool = var_64_float <= var_66_float;
		if(var_67_bool != 1) {
			var_62_bool = 0;
		}
	}
	if(var_62_bool != 0) {
		var_25_bool = 1;
		return 4;
	}
	var_25_bool = 0;
	return 4;
}


func_2217(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0;
	var_130_bool = var_115_int > var_116_int;
	if(var_130_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_128_int = 0;
	var_132_bool = var_115_int != var_116_int;
	if(var_132_bool != 0) {
		var_133_int = var_116_int - var_115_int;
		irand(var_128_int, var_133_int);
	} else {
		var_142_bool = var_115_int == (int)0;
		if(var_142_bool == 0) goto Label_2235;
		return 4;
	}
Label_2235:
	var_128_int = var_128_int + var_115_int;
	var_135_bool = var_128_int == (int)0;
	if(var_135_bool != 0) {
		return 4;
	}
	var_136_int = 0; var_137_string = "";
	func_2464(var_136_int, "Money");
	AddItem(var_129_bool, var_136_int, (int)0, var_128_int);
	return 4;
	
}


func_171()
{
	var_18_bool = 0;
	func_2058(var_18_bool);
	var_21_bool = var_18_bool == 0; //@nz
	if(var_21_bool != 0) {
		func_2804();
	}
	return 0;
}


func_689()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_2058(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 14;
	}
	func_2649((int)0);
	var_65_int = var_56_int;
	var_57_int = 0;
	
Label_703:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_57_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_2058(var_81_bool);
		if(var_81_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		irand(var_58_int, (int)3);
		var_84_bool = var_58_int == (int)0;
		if(var_84_bool != 0) {
			var_85_int = var_56_int;
			if(var_85_int == 0) goto Label_736;
			irand(var_59_int, var_56_int);
			var_87_string = ""; var_88_int = 0;
			var_59_int = var_88_int;
			func_2642(var_87_string, var_88_int);
			PlayAnimation("all", var_87_string);
			WaitForAnimEnd(var_60_bool);
			var_89_bool = var_60_bool == 0; //@nz
			if(var_89_bool != 0) {
			} else {
		} else {
				var_94_bool = var_58_int == (int)1;
				if(var_94_bool != 0) {
					rand(var_61_float, (int)4);
					var_97_int = var_61_float + (int)1;
					Sleep(var_97_int, var_62_bool);
					var_98_bool = var_62_bool == 0; //@nz
					if(var_98_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_99_int = var_57_int;
				if(var_99_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_90_bool = 0;
			func_768(var_90_bool);
			var_91_bool = var_90_bool == 0; //@nz
			if(var_91_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_57_int = var_57_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1212(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_2248(var_229_string)
{
	var_230_object = Obj(); var_231_int = 0; var_232_bool = 0; var_233_object = Obj(); var_234_int = 0; var_235_bool = 0;
	CreateInvItem(var_233_object);
	@@var_233_object:SetItemName(var_229_string);
	@@var_233_object:SetProperty("Organ", (int)1);
	@@var_233_object:GetItemID(var_234_int);
	AddItem(var_235_bool, var_233_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1228(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1824(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2265()
{
	var_223_int = 0;
	func_2184(var_223_int);
	var_228_bool = var_223_int != (int)1;
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_string = "";
	func_2248("liver");
	var_240_string = "";
	func_2248("kidney");
	var_241_string = "";
	func_2248("heart");
	var_242_string = "";
	func_2248("blood");
	return 0;
}


func_1244(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_2121(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_2121(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2785(var_19_int)
{
	var_19_int = 0;
	return 0;
}


func_2788()
{
	return 0;
}


func_2790(var_203_int)
{
	var_203_int = 0;
	return 0;
}


func_2793()
{
	return 0;
}


func_2795(var_19_int)
{
	var_19_int = 2;
	return 0;
}


func_2798(var_27_object)
{
	var_28_object = Obj();
	var_27_object = var_28_object;
	func_2863(var_28_object);
	return 0;
}


func_2289(var_109_bool)
{
	var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0;
	var_114_bool = var_109_bool;
	if(var_114_bool != 0) {
		var_115_int = 0; var_116_int = 0;
		var_118_int = 0;
		func_2175(var_118_int);
		var_125_float = var_118_int * (int)100;
		var_116_int = (int)100 + var_125_float;
		func_2217((int)0, var_116_int);
		irand(var_112_int, (int)8);
		var_145_bool = var_112_int == (int)0;
		if(var_145_bool != 0) {
			var_146_int = 0; var_147_string = "";
			func_2464(var_146_int, "lemon");
			AddItem(var_113_bool, var_146_int, (int)0, (int)1);
		} else {
			var_151_bool = var_112_int == (int)1;
			if(var_151_bool != 0) {
				var_152_int = 0; var_153_string = "";
				func_2464(var_152_int, "rusk");
				AddItem(var_113_bool, var_152_int, (int)0, (int)1);
				goto Label_2377;
			}
			var_157_bool = var_112_int == (int)2;
			if(var_157_bool != 0) {
				var_158_int = 0; var_159_string = "";
				func_2464(var_158_int, "hook");
				AddItem(var_113_bool, var_158_int, (int)0, (int)1);
				goto Label_2377;
			}
			var_163_bool = var_112_int == (int)4;
			if(var_163_bool != 0) {
				var_164_int = 0; var_165_string = "";
				func_2464(var_164_int, "syringe");
				AddItem(var_113_bool, var_164_int, (int)0, (int)1);
				goto Label_2377;
			}
			var_169_bool = var_112_int == (int)5;
			if(var_169_bool != 0) {
				var_170_int = 0; var_171_string = "";
				func_2464(var_170_int, "watch");
				AddItem(var_113_bool, var_170_int, (int)0, (int)1);
				goto Label_2377;
			}
			var_175_bool = var_112_int == (int)6;
			if(var_175_bool == 0) goto Label_2377;
			var_176_int = 0; var_177_string = "";
			func_2464(var_176_int, "razor");
			AddItem(var_113_bool, var_176_int, (int)0, (int)1);
	}
		var_180_int = 0; var_181_int = 0;
		var_183_int = 0;
		func_2175(var_183_int);
		var_185_float = var_183_int * (int)50;
		var_181_int = (int)50 + var_185_float;
		func_2217((int)0, var_181_int);
		irand(var_112_int, (int)7);
		var_188_bool = var_112_int == (int)0;
		if(var_188_bool != 0) {
			var_189_int = 0; var_190_string = "";
			func_2464(var_189_int, "beads");
			AddItem(var_113_bool, var_189_int, (int)0, (int)1);
			goto Label_2463;
		}
		var_194_bool = var_112_int == (int)1;
		if(var_194_bool != 0) {
			var_195_int = 0; var_196_string = "";
			func_2464(var_195_int, "bracelet");
			AddItem(var_113_bool, var_195_int, (int)0, (int)1);
			goto Label_2463;
		}
		var_200_bool = var_112_int == (int)2;
		if(var_200_bool != 0) {
			var_201_int = 0; var_202_string = "";
			func_2464(var_201_int, "ear_ring");
			AddItem(var_113_bool, var_201_int, (int)0, (int)1);
			goto Label_2463;
		}
		var_206_bool = var_112_int == (int)3;
		if(var_206_bool != 0) {
			var_207_int = 0; var_208_string = "";
			func_2464(var_207_int, "gold_ring");
			AddItem(var_113_bool, var_207_int, (int)0, (int)1);
			goto Label_2463;
		}
		var_212_bool = var_112_int == (int)4;
		if(var_212_bool != 0) {
			var_213_int = 0; var_214_string = "";
			func_2464(var_213_int, "silver_ring");
			AddItem(var_113_bool, var_213_int, (int)0, (int)1);
			goto Label_2463;
		}
		var_218_bool = var_112_int == (int)5;
		if(var_218_bool == 0) goto Label_2463;
		var_219_int = 0; var_220_string = "";
		func_2464(var_219_int, "flower");
		AddItem(var_113_bool, var_219_int, (int)0, (int)1);
	}
Label_2377:
	goto Label_2463;
	
Label_2463:
	return 4;
	
}


func_2804()
{
	return 0;
}


func_2805(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	CanSee(var_25_bool, var_23_object);
	var_25_bool = var_22_bool;
	return 2;
}


func_2810(var_34_object)
{
	var_35_object = Obj();
	var_34_object = var_35_object;
	TaskCall(6);
	func_1468(var_36_object, var_37_cvector, var_38_bool, var_35_object);
	TaskReturn();
	return 0;
}


func_1787(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1274(var_0_bool, var_1_bool, var_2_bool, var_106_object)
{
	var_110_cvector = CVector(0,0,0); var_111_float = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0;
	var_0_bool = var_106_object;
	var_120_cvector = CVector(0,0,0); var_121_float = 0;
	func_1244(var_119_float, var_120_cvector, (float)1.7453293800354004);
	var_120_cvector = var_115_cvector;
	var_116_float = var_115_cvector | var_115_cvector;
	var_151_bool = var_116_float < (float)2500.0;
	if(var_151_bool != 0) {
		var_152_cvector = CVector(0,0,0); var_153_float = 0;
		func_1244(var_119_float, var_152_cvector, (float)2.6179938316345215);
		var_152_cvector = var_115_cvector;
		var_116_float = var_115_cvector | var_115_cvector;
		var_155_bool = var_116_float < (float)2500.0;
		if(var_155_bool != 0) {
			var_157_float = sqrt(var_116_float);
			var_158_int = "Can't retreat, distance: " + var_157_float;
			Trace(var_158_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_160_float = GetByIndex(var_115_cvector, 0);
	var_161_float = GetByIndex(var_115_cvector, 2);
	Rotate(var_160_float, var_161_float);
	var_162_cvector = CVector(0,0,0);
	func_1819(var_162_cvector);
	var_1_bool = var_162_cvector + var_115_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1316:
	MovePoint(var_1_bool, (int)1, var_117_bool);
	var_168_bool = var_117_bool;
	if(var_168_bool != 0) {
		var_169_bool = var_0_bool == 0; //@ne
		if(var_169_bool != 0) {
			goto Label_1346;
		EMIT "GOTO 0x540";

		Label_1346:
			return 10;
		}
		var_170_cvector = CVector(0,0,0); var_171_float = 0;
		func_1244(var_119_float, var_170_cvector, (float)2.6179938316345215);
		var_170_cvector = var_118_cvector;
		var_119_float = var_118_cvector | var_118_cvector;
		var_173_bool = var_119_float >= (float)2500.0;
		if(var_173_bool != 0) {
			var_174_cvector = CVector(0,0,0);
			func_1819(var_174_cvector);
			var_1_bool = var_174_cvector + var_118_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1346;
		}
	}
	var_177_bool = var_2_bool == 0; //@nz
	if(var_177_bool == 1) goto Label_1316;
	
}


func_768(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2818(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_1831(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)4000000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_775(var_0_bool, var_77_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0;
	var_0_bool = var_77_object;
	func_826(var_84_bool);
	GetDirection(var_82_cvector);
	var_92_cvector = CVector(0,0,0); var_93_object = Obj();
	var_93_object = var_0_bool;
	func_1824(var_92_cvector, var_93_object);
	var_92_cvector = var_83_cvector;
	var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_2158(var_98_float, var_99_cvector, var_100_cvector);
	var_123_bool = var_98_float < (int)0;
	if(var_123_bool != 0) {
		var_124_object = Obj();
		var_124_object = var_0_bool;
		func_2047(var_124_object);
		var_84_bool = 1;
	} else {
		Sleep((float)1.5, var_84_bool);
	}
	var_133_bool = var_84_bool;
	if(var_133_bool != 0) {
		var_134_object = Obj();
		var_134_object = var_0_bool;
		func_2047(var_134_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1803(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1824(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_2833(var_133_object)
{
	var_134_object = Obj();
	var_133_object = var_134_object;
	TaskCall(7);
	func_1662(var_135_object, var_136_cvector, var_137_bool, var_134_object);
	TaskReturn();
	return 0;
}


func_2841(var_48_bool, var_49_object)
{
	var_50_bool = 0; var_51_object = Obj();
	var_49_object = var_51_object;
	func_2818(var_50_bool, var_51_object);
	var_50_bool = var_48_bool;
	return 0;
}


func_1819(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
	GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
	return 2;
}


func_1824(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_2848(var_201_object)
{
	var_202_object = Obj();
	var_201_object = var_202_object;
	func_2833(var_202_object);
	return 0;
}


func_2854(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_1831(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2857()
{
	return 0;
}


func_2859()
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1839(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_bool = 0;
	IsPlayerActor(var_101_object, var_103_bool);
	var_103_bool = var_100_bool;
	return 2;
}


func_2863(var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		IsOverrideActive(var_30_bool);
		var_32_bool = var_30_bool == 0; //@nz
		if(var_32_bool != 0) {
			var_33_object = Obj();
			var_28_object = var_33_object;
			func_2204(var_33_object);
		}
		return 2;
	EMIT "GOTO 0xb3c";
	}
	return 2;
}


func_1844(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0;
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", (int)2);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	@@var_46_object:HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
	return 2;
}


func_826(var_0_bool)
{
	var_85_object = Obj();
	var_85_object = var_0_bool;
	func_2063(var_85_object);
	return 0;
}


func_2877(var_61_bool)
{
	var_62_float = 0;
	func_2190(var_62_float);
	var_61_bool = var_62_float > (float)0.8999999761581421;
	return 0;
}


func_1856(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_2883(var_21_bool, var_22_object, var_23_object)
{
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_float = 0;
	var_22_object = var_26_object;
	var_23_object = var_27_object;
	func_2719(var_25_bool, var_26_object, var_27_object, (float)700.0);
	var_25_bool = var_21_bool;
	return 0;
}


func_1861(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	var_33_bool = var_28_object == 0; //@ne
	if(var_33_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_34_bool = 0;
	var_34_bool = 0;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", (int)1);
	if(var_37_bool != 0) {
		var_38_bool = 0; var_39_object = Obj();
		var_28_object = var_39_object;
		func_1856(var_38_bool, var_39_object);
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetScene(var_31_object);
	var_42_bool = var_31_object == 0; //@ne
	if(var_42_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_28_object:GetScene(var_32_object);
	var_43_bool = var_31_object != var_32_object;
	if(var_43_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_27_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2892(var_99_object)
{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_1839(var_100_bool, var_101_object);
	if(var_100_bool != 0) {
		var_104_object = Obj();
		func_2115(var_104_object);
		ReportReputationChange(var_99_object, var_104_object, (float)-0.05000000074505806, (bool)1);
		var_109_bool = 0;
		func_2289((bool)0);
	}
	func_2265();
	var_243_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1897(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1861(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1844(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_15_cvector, var_16_bool);
	return 0;
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_20_bool, var_21_int);
	return 0;
}


func_1399(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1921(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_1415(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetDirection(var_71_cvector);
	var_73_cvector = CVector(0,0,0); var_74_object = Obj();
	var_74_object = var_0_bool;
	func_1824(var_73_cvector, var_74_object);
	var_73_cvector = var_72_cvector;
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= (float)-0.3420201241970062;
	return 4;
}


func_392(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_17_object = var_23_object;
	func_1897(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 4;
	}
	var_57_bool = var_2_bool;
	if(var_57_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_17_object, var_20_bool);
	var_58_bool = var_20_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_int = 0; var_60_object = Obj();
	var_17_object = var_60_object;
	func_2666(var_60_object);
	var_59_int = var_21_int;
	var_72_bool = var_21_int > (int)0;
	if(var_72_bool != 0) {
		var_74_bool = var_21_int > (int)1;
		if(var_74_bool != 0) {
			func_375(var_21_int);
		}
		var_76_object = Obj();
		var_17_object = var_76_object;
		func_2675(var_76_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1438(var_0_bool, var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0;
	GetPosition(var_38_cvector);
	@@@var_0_bool:GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	var_47_cvector = var_38_cvector - var_39_cvector;
	func_2121(var_46_cvector, var_47_cvector);
	var_54_float = var_40_cvector * (float)0.75;
	var_45_cvector = var_46_cvector + var_54_float;
	func_2121(var_44_cvector, var_45_cvector);
	var_44_cvector = var_41_cvector;
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, (int)32, (float)7000.0);
	var_43_float = var_43_float - (int)100;
	var_59_bool = var_43_float < (int)0;
	if(var_59_bool != 0) {
		var_43_float = 0;
	}
	var_30_cvector = var_42_cvector * var_43_float;
	return 12;
}


func_2464(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0;
	GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
	return 2;
}


func_2469(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	TaskCall(0);
	func_0(var_18_object);
	TaskReturn();
	return 0;
}


func_1965(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_1824(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2121(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_1994:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_1994;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_2033(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1921(var_110_object);
	return 18;
	
}


func_432(var_0_bool, var_1_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_28_float, (float)0.5);
	Sleep(var_28_float);
	
Label_440:
	var_35_bool = var_0_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_36_bool = var_1_bool == 0; //@nz
		if(var_36_bool != 0) {

		Label_444:
			GetPosition(var_30_cvector);
			var_37_float = 0;
			func_491(var_37_float);
			GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
			var_40_bool = var_31_bool;
			if(var_40_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_444;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_460;
	
Label_460:
	var_41_object = Obj(); var_42_cvector = CVector(0,0,0);
	var_29_cvector = var_42_cvector;
	func_519(var_41_object, var_42_cvector);
	var_41_object = var_32_object;
	var_45_bool = var_32_object != 0; //@nn
	if(var_45_bool != 0) {
		RotatePath(var_32_object, var_33_bool);
		var_46_bool = var_33_bool;
		if(var_46_bool != 0) {
			var_47_bool = 0;
			func_517(var_47_bool);
			FollowPath(var_32_object, var_47_bool, var_33_bool);
			var_32_object = 0;
			var_48_bool = var_33_bool;
			if(var_48_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_32_object = 0;
	goto Label_440;
	
}


func_1468(var_0_bool, var_1_bool, var_2_bool, var_35_object)
{
	var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0;
	var_0_bool = var_35_object;
	var_49_cvector = CVector(0,0,0); var_50_float = 0;
	func_1438(var_48_float, var_49_cvector, (float)1.7453293800354004);
	var_49_cvector = var_44_cvector;
	var_45_float = var_44_cvector | var_44_cvector;
	var_80_bool = var_45_float < (float)2500.0;
	if(var_80_bool != 0) {
		var_81_cvector = CVector(0,0,0); var_82_float = 0;
		func_1438(var_48_float, var_81_cvector, (float)2.6179938316345215);
		var_81_cvector = var_44_cvector;
		var_45_float = var_44_cvector | var_44_cvector;
		var_84_bool = var_45_float < (float)2500.0;
		if(var_84_bool != 0) {
			var_86_float = sqrt(var_45_float);
			var_87_int = "Can't retreat, distance: " + var_86_float;
			Trace(var_87_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_89_float = GetByIndex(var_44_cvector, 0);
	var_90_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_89_float, var_90_float);
	var_91_cvector = CVector(0,0,0);
	func_1819(var_91_cvector);
	var_1_bool = var_91_cvector + var_44_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1510:
	MovePoint(var_1_bool, (int)1, var_46_bool);
	var_97_bool = var_46_bool;
	if(var_97_bool != 0) {
		var_98_bool = var_0_bool == 0; //@ne
		if(var_98_bool != 0) {
			goto Label_1540;
		EMIT "GOTO 0x602";

		Label_1540:
			return 10;
		}
		var_99_cvector = CVector(0,0,0); var_100_float = 0;
		func_1438(var_48_float, var_99_cvector, (float)2.6179938316345215);
		var_99_cvector = var_47_cvector;
		var_48_float = var_47_cvector | var_47_cvector;
		var_102_bool = var_48_float >= (float)2500.0;
		if(var_102_bool != 0) {
			var_103_cvector = CVector(0,0,0);
			func_1819(var_103_cvector);
			var_1_bool = var_103_cvector + var_47_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1540;
		}
	}
	var_106_bool = var_2_bool == 0; //@nz
	if(var_106_bool == 1) goto Label_1510;
	
}


func_974()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2514(var_20_bool, var_21_object, var_22_string)
{
	var_24_bool = var_22_string == "unholster";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_2805(var_25_bool, var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x9f0";
	}
	var_30_bool = var_22_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_21_object = var_32_object;
		func_2818(var_31_bool, var_32_object);
		var_31_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x9f0";
	}
	var_47_bool = var_22_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_21_object = var_49_object;
		func_2841(var_48_bool, var_49_object);
		var_48_bool = var_20_bool;
		return 0;
	}
	var_20_bool = 0;
	return 0;
}


func_491(var_37_float)
{
	var_38_float = 0; var_39_float = 0;
	GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
	return 2;
}


func_2033(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1921(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2546(var_54_object, var_55_string)
{
	var_57_bool = var_55_string == "unholster";
	if(var_57_bool != 0) {
		var_58_object = Obj();
		var_54_object = var_58_object;
		func_2810(var_58_object);
	} else {
		var_132_bool = var_55_string == "player_shot";
		if(var_132_bool != 0) {
			var_133_object = Obj();
			var_54_object = var_133_object;
			func_2833(var_133_object);
			goto Label_2570;
		}
		var_200_bool = var_55_string == "battle";
		if(var_200_bool == 0) goto Label_2570;
		var_201_object = Obj();
		var_54_object = var_201_object;
		func_2848(var_201_object);
	}
Label_2570:
	return 0;
	
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_2047(var_92_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	@@var_92_object:GetPosition(var_96_cvector);
	GetPosition(var_97_cvector);
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_99_float = GetByIndex(var_98_cvector, 0);
	var_100_float = GetByIndex(var_98_cvector, 2);
	RotateAsync(var_99_float, var_100_float);
	return 6;
}


