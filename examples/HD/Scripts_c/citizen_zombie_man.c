// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindPathTo/2,FollowPath/5,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,HasProperty/2,SetProperty/2,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2,GetGameTime/1,GetVariable/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,RemoveActor/1,IsOverrideActive/1,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:dattack_begin|W:dattack_end|W:zwalk|A:GetPFPosition|W:run|W:Can't retreat, distance: |W:bow|W:health|W:disease|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:diseased_liver|W:diseased_kidney|W:diseased_heart|W:diseased_blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:idle
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
// @TASK_3: vars= params=1
// @EVENT_17: op=0x312 vars=object
// @EVENT_26: op=0x32a vars=string
// @EVENT_6: op=0x338 vars=
// @EVENT_41: op=0x375 vars=object
// @TASK_4: vars=bool,object params=2
// @EVENT_17: op=0x37e vars=object
// @EVENT_26: op=0x396 vars=string
// @EVENT_6: op=0x3a4 vars=
// @EVENT_7: op=0x41e vars=int
// @EVENT_10: op=0x430 vars=object
// @EVENT_41: op=0x43b vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4b4 vars=int
// @EVENT_41: op=0x4ef vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x532 vars=
// @EVENT_7: op=0x5a0 vars=int
// @EVENT_41: op=0x5db vars=object
// @TASK_7: vars=object,cvector,bool params=1
// @EVENT_6: op=0x5f4 vars=
// @EVENT_7: op=0x662 vars=int
// @EVENT_41: op=0x69d vars=object
// @STANDALONE_EVENT_16: op=0x9ae vars=object,string
// @STANDALONE_EVENT_41: op=0x9bb vars=object
// @STANDALONE_EVENT_22: op=0x9c1 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x9c9 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x307,0x32a,0x338,0x375,0x396,0x3a4,0x3ab,0x41e,0x430,0x43b,0x444,0x4ef,0x532,0x5db,0x5f4,0x69d,0x833,0x83e,0x846,0x89d,0x9a6,0x9bb,0x9c1,0x9c9,0x9d3,0x9f3,0xa23,0xa29,0xa6b,0xa6e,0xa76,0xa80,0xa88,0xa8b,0xa8d,0xa90,0xa92,0xa95,0xaa3,0xaa6,0xaa8,0xaab,0xaad,0xab0,0xab2,0xab9,0xad7,0xada,0xadc,0xadf,0xafa,0xb04

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_int = 0; var_18_object = Obj();
	var_14_bool = var_18_object;
	func_2706(var_18_object);
	var_17_int = var_16_int;
	var_20_bool = var_16_int > (int)0;
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_14_bool = var_21_object;
		func_2709(var_21_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_2715();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_int = 0; var_18_object = Obj();
	var_14_bool = var_18_object;
	func_2706(var_18_object);
	var_17_int = var_16_int;
	var_20_bool = var_16_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_16_int > (int)1;
		if(var_22_bool != 0) {
			func_367(var_16_int);
		}
		var_24_object = Obj();
		var_14_bool = var_24_object;
		func_2709(var_24_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_object = Obj();
	var_14_bool = var_17_object;
	func_2601(var_17_object);
	var_26_int = 0; var_27_object = Obj();
	var_14_bool = var_27_object;
	func_2810(var_26_int, var_27_object);
	var_26_int = var_16_int;
	var_63_bool = var_16_int > (int)0;
	if(var_63_bool != 0) {
		var_65_bool = var_16_int > (int)1;
		if(var_65_bool != 0) {
			func_367(var_16_int);
		}
		var_67_object = Obj();
		var_14_bool = var_67_object;
		func_2820(var_67_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0;
	var_14_object = var_20_object;
	var_15_cvector = var_21_object;
	var_16_bool = var_22_bool;
	func_2780(var_22_bool);
	if(var_19_bool != 0) {
		var_23_int = 0; var_24_object = Obj(); var_25_bool = 0;
		var_14_object = var_24_object;
		var_16_bool = var_25_bool;
		func_2678(var_24_object, var_25_bool);
		var_23_int = var_18_int;
		var_61_bool = var_18_int > (int)0;
		if(var_61_bool != 0) {
			var_63_bool = var_18_int > (int)1;
			if(var_63_bool != 0) {
				func_367(var_18_int);
			}
			var_65_object = Obj();
			var_14_object = var_65_object;
			func_2688(var_65_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_int = 0; var_18_object = Obj();
	var_14_bool = var_18_object;
	func_2696(var_18_object);
	var_17_int = var_16_int;
	var_20_bool = var_16_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_16_int > (int)1;
		if(var_22_bool != 0) {
			func_367(var_16_int);
		}
		var_14_bool = Obj();
		func_2699();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_string = "";
	var_14_cvector = var_19_object;
	var_15_bool = var_20_string;
	func_2515(var_18_bool, var_19_object, var_20_string);
	if(var_18_bool != 0) {
		func_367(var_17_int);
		var_34_object = Obj(); var_35_string = "";
		var_14_cvector = var_34_object;
		var_15_bool = var_35_string;
		func_2547(var_34_object, var_35_string);
	} else {
		var_45_int = 0; var_46_string = ""; var_47_object = Obj();
		var_15_bool = var_46_string;
		var_14_cvector = var_47_object;
		func_2701(var_47_object);
		var_45_int = var_17_int;
		var_49_bool = var_17_int > (int)0;
		if(var_49_bool == 0) goto Label_308;
		var_51_bool = var_17_int > (int)1;
		if(var_51_bool != 0) {
			func_367(var_17_int);
		}
		var_52_string = ""; var_53_object = Obj();
		var_15_bool = var_52_string;
		var_14_cvector = var_53_object;
		func_2704();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = "";
	var_14_bool = var_16_string;
	func_2614(var_15_bool, var_16_string);
	if(var_15_bool != 0) {
		func_367(var_14_bool);
		var_59_string = "";
		var_14_bool = var_59_string;
		func_2630(var_59_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2572(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_367(var_14_bool);
		var_28_object = Obj();
		var_14_bool = var_28_object;
		func_2595(var_28_object);
	} else {
		var_30_object = Obj();
		var_14_bool = var_30_object;
		func_392(var_14_bool, var_30_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj();
	var_14_bool = var_15_object;
	func_392(var_14_bool, var_15_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_16_bool = var_14_bool != (int)110;
	if(var_16_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_367(var_13_bool);
	func_2715();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_367(var_14_bool);
	var_14_bool = Obj();
	func_2491();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	RequestClearPath(var_14_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_int = 0; var_18_object = Obj();
	var_14_bool = var_18_object;
	func_2706(var_18_object);
	var_17_int = var_16_int;
	var_20_bool = var_16_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_16_int > (int)1;
		if(var_22_bool != 0) {
			func_770();
		}
		var_23_object = Obj();
		var_14_bool = var_23_object;
		func_2709(var_23_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_object = Obj();
	var_14_bool = var_17_object;
	func_2601(var_17_object);
	var_26_int = 0; var_27_object = Obj();
	var_14_bool = var_27_object;
	func_2810(var_26_int, var_27_object);
	var_26_int = var_16_int;
	var_63_bool = var_16_int > (int)0;
	if(var_63_bool != 0) {
		var_65_bool = var_16_int > (int)1;
		if(var_65_bool != 0) {
			func_770();
		}
		var_66_object = Obj();
		var_14_bool = var_66_object;
		func_2820(var_66_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0;
	var_14_object = var_20_object;
	var_15_cvector = var_21_object;
	var_16_bool = var_22_bool;
	func_2780(var_22_bool);
	if(var_19_bool != 0) {
		var_23_int = 0; var_24_object = Obj(); var_25_bool = 0;
		var_14_object = var_24_object;
		var_16_bool = var_25_bool;
		func_2678(var_24_object, var_25_bool);
		var_23_int = var_18_int;
		var_61_bool = var_18_int > (int)0;
		if(var_61_bool != 0) {
			var_63_bool = var_18_int > (int)1;
			if(var_63_bool != 0) {
				func_770();
			}
			var_64_object = Obj();
			var_14_object = var_64_object;
			func_2688(var_64_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_int = 0; var_18_object = Obj();
	var_14_bool = var_18_object;
	func_2696(var_18_object);
	var_17_int = var_16_int;
	var_20_bool = var_16_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_16_int > (int)1;
		if(var_22_bool != 0) {
			func_770();
		}
		var_14_bool = Obj();
		func_2699();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_string = "";
	var_14_cvector = var_19_object;
	var_15_bool = var_20_string;
	func_2515(var_18_bool, var_19_object, var_20_string);
	if(var_18_bool != 0) {
		func_770();
		var_33_object = Obj(); var_34_string = "";
		var_14_cvector = var_33_object;
		var_15_bool = var_34_string;
		func_2547(var_33_object, var_34_string);
	} else {
		var_44_int = 0; var_45_string = ""; var_46_object = Obj();
		var_15_bool = var_45_string;
		var_14_cvector = var_46_object;
		func_2701(var_46_object);
		var_44_int = var_17_int;
		var_48_bool = var_17_int > (int)0;
		if(var_48_bool == 0) goto Label_653;
		var_50_bool = var_17_int > (int)1;
		if(var_50_bool != 0) {
			func_770();
		}
		var_51_string = ""; var_52_object = Obj();
		var_15_bool = var_51_string;
		var_14_cvector = var_52_object;
		func_2704();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = "";
	var_14_bool = var_16_string;
	func_2614(var_15_bool, var_16_string);
	if(var_15_bool != 0) {
		func_770();
		var_58_string = "";
		var_14_bool = var_58_string;
		func_2630(var_58_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_770();
	func_2715();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_bool = var_16_object;
	func_2572(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_770();
		var_27_object = Obj();
		var_14_bool = var_27_object;
		func_2595(var_27_object);
	}
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_object = Obj();
	var_14_bool = var_17_object;
	func_2601(var_17_object);
	var_26_int = 0; var_27_object = Obj();
	var_14_bool = var_27_object;
	func_2775(var_27_object);
	var_26_int = var_16_int;
	var_29_bool = var_16_int > (int)0;
	if(var_29_bool != 0) {
		var_31_bool = var_16_int > (int)1;
		if(var_31_bool != 0) {
			func_880();
		}
		var_14_bool = Obj();
		func_2778();
	}
	return 2;
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = "";
	var_14_bool = var_16_string;
	func_2614(var_15_bool, var_16_string);
	if(var_15_bool != 0) {
		func_880();
		var_58_string = "";
		var_14_bool = var_58_string;
		func_2630(var_58_string);
	}
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_880();
	func_2715();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_880();
	var_14_bool = Obj();
	func_2491();
	return 0;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_object = Obj();
	var_14_bool = var_17_object;
	func_2601(var_17_object);
	var_26_int = 0; var_27_object = Obj();
	var_14_bool = var_27_object;
	func_2775(var_27_object);
	var_26_int = var_16_int;
	var_29_bool = var_16_int > (int)0;
	if(var_29_bool != 0) {
		var_31_bool = var_16_int > (int)1;
		if(var_31_bool != 0) {
			func_1076(var_16_int);
		}
		var_14_bool = Obj();
		func_2778();
	}
	return 2;
}


task_4_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = "";
	var_14_bool = var_16_string;
	func_2614(var_15_bool, var_16_string);
	if(var_15_bool != 0) {
		func_1076(var_14_bool);
		var_59_string = "";
		var_14_bool = var_59_string;
		func_2630(var_59_string);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1076(var_13_bool);
	func_2715();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_16_bool = var_14_bool != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_bool;
	func_1092(var_17_bool, var_18_object);
	var_53_bool = var_17_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	RequestClearPath(var_14_bool);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1076(var_14_bool);
	var_14_bool = Obj();
	func_2491();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0;
	var_24_bool = var_14_bool != (int)120;
	if(var_24_bool != 0) {
		return 8;
	}
	var_25_bool = var_0_bool == 0; //@ne
	if(var_25_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_19_cvector);
		FindDirLength(var_20_float, var_19_cvector, (float)7000.0);
		var_28_cvector = CVector(0,0,0); var_29_float = 0;
		func_1101(var_22_float, var_28_cvector, (float)1.7453293800354004);
		var_28_cvector = var_21_cvector;
		var_22_float = var_21_cvector | var_21_cvector;
		var_58_bool = 0;
		var_58_bool = 0;
		var_60_bool = var_22_float >= (float)2500.0;
		if(var_60_bool != 0) {
			var_61_bool = 0;
			var_62_float = var_20_float * var_20_float;
			var_64_float = var_62_float * (float)2.25;
			var_65_bool = var_22_float >= var_64_float;
			if(var_65_bool != 1) {
				var_66_bool = 0;
				func_1272((bool)1, var_66_bool);
				if(var_66_bool != 1) {
					var_61_bool = 0;
				}
			}
			if(var_61_bool != 0) {
				var_58_bool = 1;
			}
		}
		if(var_58_bool == 0) goto Label_1255;
		Stop();
		var_86_cvector = CVector(0,0,0);
		func_1718(var_86_cvector);
		var_1_bool = var_86_cvector + var_21_cvector;
	}
Label_1255:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1256(var_14_bool);
	var_14_bool = Obj();
	func_2491();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1492(var_13_bool);
	func_2715();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0;
	var_24_bool = var_14_bool != (int)120;
	if(var_24_bool != 0) {
		return 8;
	}
	var_25_bool = var_0_bool == 0; //@ne
	if(var_25_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_19_cvector);
		FindDirLength(var_20_float, var_19_cvector, (float)7000.0);
		var_28_cvector = CVector(0,0,0); var_29_float = 0;
		func_1337(var_22_float, var_28_cvector, (float)1.7453293800354004);
		var_28_cvector = var_21_cvector;
		var_22_float = var_21_cvector | var_21_cvector;
		var_58_bool = 0;
		var_58_bool = 0;
		var_60_bool = var_22_float >= (float)2500.0;
		if(var_60_bool != 0) {
			var_61_bool = 0;
			var_62_float = var_20_float * var_20_float;
			var_64_float = var_62_float * (float)2.25;
			var_65_bool = var_22_float >= var_64_float;
			if(var_65_bool != 1) {
				var_66_bool = 0;
				func_1508((bool)1, var_66_bool);
				if(var_66_bool != 1) {
					var_61_bool = 0;
				}
			}
			if(var_61_bool != 0) {
				var_58_bool = 1;
			}
		}
		if(var_58_bool == 0) goto Label_1491;
		Stop();
		var_86_cvector = CVector(0,0,0);
		func_1718(var_86_cvector);
		var_1_bool = var_86_cvector + var_21_cvector;
	}
Label_1491:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	func_1492(var_14_bool);
	var_14_bool = Obj();
	func_2491();
	return 0;
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1686(var_13_bool);
	func_2715();
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0;
	var_24_bool = var_14_int != (int)120;
	if(var_24_bool != 0) {
		return 8;
	}
	var_25_bool = var_0_bool == 0; //@ne
	if(var_25_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_19_cvector);
		FindDirLength(var_20_float, var_19_cvector, (float)7000.0);
		var_28_cvector = CVector(0,0,0); var_29_float = 0;
		func_1531(var_22_float, var_28_cvector, (float)1.7453293800354004);
		var_28_cvector = var_21_cvector;
		var_22_float = var_21_cvector | var_21_cvector;
		var_58_bool = 0;
		var_58_bool = 0;
		var_60_bool = var_22_float >= (float)2500.0;
		if(var_60_bool != 0) {
			var_61_bool = 0;
			var_62_float = var_20_float * var_20_float;
			var_64_float = var_62_float * (float)2.25;
			var_65_bool = var_22_float >= var_64_float;
			if(var_65_bool != 1) {
				var_66_bool = 0;
				func_1702((bool)1, var_66_bool);
				if(var_66_bool != 1) {
					var_61_bool = 0;
				}
			}
			if(var_61_bool != 0) {
				var_58_bool = 1;
			}
		}
		if(var_58_bool == 0) goto Label_1685;
		Stop();
		var_86_cvector = CVector(0,0,0);
		func_1718(var_86_cvector);
		var_1_bool = var_86_cvector + var_21_cvector;
	}
Label_1685:
	return 8;
	
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object)
{
	func_1686(var_14_object);
	var_14_object = Obj();
	func_2491();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_2470(var_15_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1955(var_18_object, var_19_int, var_20_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	var_14_object = var_20_object;
	var_15_int = var_21_int;
	var_16_float = var_22_float;
	var_18_cvector = var_23_cvector;
	var_19_cvector = var_24_cvector;
	func_2023(var_22_float, var_23_cvector, var_24_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	SensePlayerOnly((bool)1);
	func_2753();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_12_cvector, var_13_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_16_object)
{
	EventDisable(0);
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_33(var_17_object);
	var_97_object = Obj();
	var_16_object = var_97_object;
	func_2783(var_97_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_517(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_519(var_42_object, var_43_cvector)
{
	var_44_object = Obj(); var_45_object = Obj();
	FindShiftedPathTo(var_45_object, var_43_cvector);
	var_45_object = var_42_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2572(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_16_object = var_21_object;
	func_2723(var_21_object);
	if(var_20_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_16_object = var_23_object;
		func_1738(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		@@var_16_object:IsWeaponHolstered(var_18_bool);
		var_26_bool = var_18_bool == 0; //@nz
		if(var_26_bool != 0) {
			var_15_bool = 1;
			return 2;
		}
	}
	var_15_bool = 0;
	return 2;
}


func_1561(var_0_bool, var_1_bool, var_2_bool, var_67_object)
{
	var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0;
	var_0_bool = var_67_object;
	var_81_cvector = CVector(0,0,0); var_82_float = 0;
	func_1531(var_80_float, var_81_cvector, (float)1.7453293800354004);
	var_81_cvector = var_76_cvector;
	var_77_float = var_76_cvector | var_76_cvector;
	var_112_bool = var_77_float < (float)2500.0;
	if(var_112_bool != 0) {
		var_113_cvector = CVector(0,0,0); var_114_float = 0;
		func_1531(var_80_float, var_113_cvector, (float)2.6179938316345215);
		var_113_cvector = var_76_cvector;
		var_77_float = var_76_cvector | var_76_cvector;
		var_116_bool = var_77_float < (float)2500.0;
		if(var_116_bool != 0) {
			var_118_float = sqrt(var_77_float);
			var_119_int = "Can't retreat, distance: " + var_118_float;
			Trace(var_119_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_121_float = GetByIndex(var_76_cvector, 0);
	var_122_float = GetByIndex(var_76_cvector, 2);
	Rotate(var_121_float, var_122_float);
	var_123_cvector = CVector(0,0,0);
	func_1718(var_123_cvector);
	var_1_bool = var_123_cvector + var_76_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1603:
	MovePoint(var_1_bool, (int)1, var_78_bool);
	var_129_bool = var_78_bool;
	if(var_129_bool != 0) {
		var_130_bool = var_0_bool == 0; //@ne
		if(var_130_bool != 0) {
			goto Label_1633;
		EMIT "GOTO 0x65f";

		Label_1633:
			return 10;
		}
		var_131_cvector = CVector(0,0,0); var_132_float = 0;
		func_1531(var_80_float, var_131_cvector, (float)2.6179938316345215);
		var_131_cvector = var_79_cvector;
		var_80_float = var_79_cvector | var_79_cvector;
		var_134_bool = var_80_float >= (float)2500.0;
		if(var_134_bool != 0) {
			var_135_cvector = CVector(0,0,0);
			func_1718(var_135_cvector);
			var_1_bool = var_135_cvector + var_79_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1633;
		}
	}
	var_138_bool = var_2_bool == 0; //@nz
	if(var_138_bool == 1) goto Label_1603;
	
}


func_33(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = var_17_object == 0; //@ne
	if(var_38_bool != 0) {
		var_39_string = "";
		func_124("fdie");
	} else {
		@@var_17_object:GetPosition(var_28_cvector);
		GetPosition(var_29_cvector);
		GetDirection(var_30_cvector);
		var_31_cvector = var_29_cvector - var_28_cvector;
		var_71_float = GetByIndex(var_31_cvector, 0);
		var_72_float = GetByIndex(var_30_cvector, 0);
		var_73_float = var_71_float * var_72_float;
		var_74_float = GetByIndex(var_31_cvector, 2);
		var_75_float = GetByIndex(var_30_cvector, 2);
		var_76_float = var_74_float * var_75_float;
		var_77_int = var_73_float + var_76_float;
		var_79_bool = var_77_int >= (int)0;
		if(var_79_bool != 0) {
			var_32_string = "fdie";
		} else {
				var_32_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_17_object = var_33_object;
		var_82_bool = IsFuncExist(var_17_object, "GetScriptProperty", (int)2);
		if(var_82_bool != 0) {
			@@var_17_object:HasScriptProperty(var_34_bool, "Owner");
			var_84_bool = var_34_bool;
			if(var_84_bool != 0) {
				@@var_17_object:GetScriptProperty(var_33_object, "Owner");
				var_86_bool = var_33_object == 0; //@ne
				if(var_86_bool != 0) {
					var_17_object = var_33_object;
				}
			}
		}
		var_89_bool = IsFuncExist(var_33_object, "@GetEyesHeight", (int)1);
		if(var_89_bool != 0) {
			@@var_33_object:GetEyesHeight(var_36_float);
			var_37_cvector = CVector(0.0, 0.0, 0.0);
			var_90_float = GetByIndex(var_37_cvector, 1);
			var_36_float = var_90_float;
			SetByIndex(var_37_cvector, 1) = var_90_float;
			LookAsync(var_17_object, "head", var_37_cvector);
			var_35_bool = 1;
		} else {
			var_35_bool = 0;

		}
		var_92_string = "";
		var_32_string = var_92_string;
		func_2042(var_92_string);
		PlayAnimation("all", var_32_string);
		WaitForAnimEnd();
		var_94_bool = var_35_bool;
		if(var_94_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_32_string);
		RemoveEnvelope();
		var_33_object = 0;
	}
	return 20;
	
}


func_2595(var_27_object)
{
	var_27_object = Obj();
	func_2726();
	return 0;
}


func_2083(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2601(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_1738(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		var_22_object = Obj();
		func_2083(var_22_object);
		ReportReputationChange(var_17_object, var_22_object, (float)-0.029999999329447746);
	}
	return 0;
}


func_2089(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_47_cvector | var_47_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_46_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_46_cvector = var_47_cvector / var_55_float;
	return 2;
}


func_2099(var_95_float, var_96_float, var_97_float, var_98_float)
{
	var_99_bool = var_96_float < var_97_float;
	if(var_99_bool != 0) {
		var_97_float = var_95_float;
		return 0;
	}
	var_100_bool = var_96_float > var_98_float;
	if(var_100_bool != 0) {
		var_98_float = var_95_float;
		return 0;
	}
	var_96_float = var_95_float;
	return 0;
}


func_1076(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2614(var_15_bool, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	var_20_bool = var_16_string == "heal";
	if(var_20_bool != 0) {
		FindActor(var_18_object, "player");
		var_22_bool = 0; var_23_object = Obj();
		var_18_object = var_23_object;
		func_2738(var_22_bool, var_23_object);
		var_22_bool = var_15_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_15_bool = 0;
	return 2;
}


func_2110(var_77_float, var_78_cvector, var_79_cvector)
{
	var_80_int = var_78_cvector | var_79_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_int = var_79_cvector | var_79_cvector;
	var_83_float = var_81_int * var_82_int;
	var_84_float = sqrt(var_83_float);
	var_77_float = var_80_int / var_84_float;
	return 0;
}


func_1092(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1887(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_2630(var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj();
	var_63_bool = var_59_string == "heal";
	if(var_63_bool != 0) {
		FindActor(var_61_object, "player");
		var_65_object = Obj();
		var_61_object = var_65_object;
		func_2745(var_65_object);
		var_61_object = 0;
	}
	return 2;
}


func_2118(var_72_bool, var_73_object, var_74_float)
{
	var_75_bool = var_73_object == 0; //@nz
	if(var_75_bool != 0) {
		var_72_bool = 0;
		return 0;
	}
	var_77_bool = var_74_float > (int)0;
	if(var_77_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_102_bool = var_74_float < (int)0;
		if(var_102_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2139;
		}
		var_72_bool = 0;
		return 0;
	}
Label_2139:
	var_79_float = 0;
	var_74_float = var_79_float;
	func_2180(var_79_float);
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; var_86_float = 0; var_87_float = 0; var_88_float = 0;
	var_73_object = var_84_object;
	var_74_float = var_86_float;
	func_1755(var_83_bool, var_84_object, "reputation", var_86_float, (float)0, (float)1);
	var_72_bool = 1;
	return 0;
	
}


func_1099(var_118_string)
{
	var_118_string = "run";
	return 0;
}


func_1101(var_0_bool, var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0;
	GetPosition(var_36_cvector);
	@@@var_0_bool:GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_36_cvector - var_37_cvector;
	func_2089(var_44_cvector, var_45_cvector);
	var_52_float = var_38_cvector * (float)0.75;
	var_43_cvector = var_44_cvector + var_52_float;
	func_2089(var_42_cvector, var_43_cvector);
	var_42_cvector = var_39_cvector;
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, (int)32, (float)7000.0);
	var_41_float = var_41_float - (int)100;
	var_57_bool = var_41_float < (int)0;
	if(var_57_bool != 0) {
		var_41_float = 0;
	}
	var_28_cvector = var_40_cvector * var_41_float;
	return 12;
}


func_2643(var_72_string, var_73_int)
{
	var_74_string = ""; var_75_string = "";
	var_76_int = var_73_int;
	if(var_76_int != 0) {
		"idle" = "idle" + var_73_int;
	}
	var_75_string = var_72_string;
	return 2;
}


func_2650(var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_69_int = 0;
	
Label_2652:
	var_72_string = ""; var_73_int = 0;
	var_69_int = var_73_int;
	func_2643(var_72_string, var_73_int);
	HasAnimation(var_70_bool, "all", var_72_string);
	var_77_bool = var_70_bool == 0; //@nz
	if(var_77_bool != 0) {
	} else {
		var_69_int = var_69_int + (int)1;
		goto Label_2652;
	}
	var_69_int = var_66_int;
	return 4;
	
}


func_2153(var_196_float)
{
	var_197_object = Obj(); var_198_object = Obj();
	CreateFloatVector(var_198_object);
	@@var_198_object:add(var_196_float);
	SendWorldWndMessage((int)14, var_198_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2667(var_57_int)
{
	var_57_int = 2;
	return 0;
}


func_1131(var_0_bool, var_1_bool, var_2_bool, var_65_object)
{
	var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_bool = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_float = 0;
	var_0_bool = var_65_object;
	var_79_cvector = CVector(0,0,0); var_80_float = 0;
	func_1101(var_78_float, var_79_cvector, (float)1.7453293800354004);
	var_79_cvector = var_74_cvector;
	var_75_float = var_74_cvector | var_74_cvector;
	var_110_bool = var_75_float < (float)2500.0;
	if(var_110_bool != 0) {
		var_111_cvector = CVector(0,0,0); var_112_float = 0;
		func_1101(var_78_float, var_111_cvector, (float)2.6179938316345215);
		var_111_cvector = var_74_cvector;
		var_75_float = var_74_cvector | var_74_cvector;
		var_114_bool = var_75_float < (float)2500.0;
		if(var_114_bool != 0) {
			var_116_float = sqrt(var_75_float);
			var_117_int = "Can't retreat, distance: " + var_116_float;
			Trace(var_117_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_119_float = GetByIndex(var_74_cvector, 0);
	var_120_float = GetByIndex(var_74_cvector, 2);
	Rotate(var_119_float, var_120_float);
	var_121_cvector = CVector(0,0,0);
	func_1718(var_121_cvector);
	var_1_bool = var_121_cvector + var_74_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1173:
	MovePoint(var_1_bool, (int)1, var_76_bool);
	var_127_bool = var_76_bool;
	if(var_127_bool != 0) {
		var_128_bool = var_0_bool == 0; //@ne
		if(var_128_bool != 0) {
			goto Label_1203;
		EMIT "GOTO 0x4b1";

		Label_1203:
			return 10;
		}
		var_129_cvector = CVector(0,0,0); var_130_float = 0;
		func_1101(var_78_float, var_129_cvector, (float)2.6179938316345215);
		var_129_cvector = var_77_cvector;
		var_78_float = var_77_cvector | var_77_cvector;
		var_132_bool = var_78_float >= (float)2500.0;
		if(var_132_bool != 0) {
			var_133_cvector = CVector(0,0,0);
			func_1718(var_133_cvector);
			var_1_bool = var_133_cvector + var_77_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1203;
		}
	}
	var_136_bool = var_2_bool == 0; //@nz
	if(var_136_bool == 1) goto Label_1173;
	
}


func_2670(var_64_object)
{
	var_65_object = Obj();
	var_64_object = var_65_object;
	TaskCall(3);
	func_775(var_65_object);
	TaskReturn();
	return 0;
}


func_2163(var_106_float)
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateFloatVector(var_108_object);
	@@var_108_object:add(var_106_float);
	var_110_bool = var_106_float < (int)0;
	if(var_110_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_108_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2678(var_23_int, var_24_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_24_object = var_27_object;
	func_1887(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_23_int = 2;
	} else {
		var_23_int = 0;
	}
	return 0;
	
}


func_124(var_39_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_40_string = "";
	var_39_string = var_40_string;
	func_2042(var_40_string);
	PlayAnimation("all", var_39_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_39_string);
	RemoveEnvelope();
	return 0;
}


func_2688(var_64_object)
{
	var_65_object = Obj();
	var_64_object = var_65_object;
	TaskCall(5);
	func_1131(var_66_object, var_67_cvector, var_68_bool, var_65_object);
	TaskReturn();
	return 0;
}


func_2180(var_79_float)
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateFloatVector(var_81_object);
	@@var_81_object:add(var_79_float);
	SendWorldWndMessage((int)16, var_81_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2696(var_17_int)
{
	var_17_int = 0;
	return 0;
}


func_2699()
{
	return 0;
}


func_2701(var_44_int)
{
	var_44_int = 0;
	return 0;
}


func_2190(var_115_int)
{
	var_116_float = 0; var_117_float = 0;
	GetGameTime(var_117_float);
	var_119_int = 0;
	var_119_int = var_117_float / (int)24;
	var_115_int = (int)1 + var_119_int;
	return 2;
}


func_2704()
{
	return 0;
}


func_2706(var_17_int)
{
	var_17_int = 2;
	return 0;
}


func_2709(var_23_object)
{
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_2757(var_24_object);
	return 0;
}


func_1686(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_2199(var_220_int)
{
	var_221_int = 0; var_222_int = 0;
	GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
	return 2;
}


func_2715()
{
	var_20_object = Obj();
	func_2083(var_20_object);
	RemoveActor(var_20_object);
	Hold();
	return 0;
}


func_2205(var_29_object)
{
	var_30_int = 0;
	func_2199(var_30_int);
	var_35_bool = var_30_int == (int)1;
	if(var_35_bool != 0) {
		WorkWithCorpse(var_29_object);
	} else {
		Barter(var_29_object);
	}
	return 0;
	
}


func_2723(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_1702(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	GetDirection(var_69_cvector);
	var_71_cvector = CVector(0,0,0); var_72_object = Obj();
	var_72_object = var_0_bool;
	func_1723(var_71_cvector, var_72_object);
	var_71_cvector = var_70_cvector;
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= (float)-0.3420201241970062;
	return 4;
}


func_2726()
{
	return 0;
}


func_2728(var_27_bool)
{
	var_27_bool = 0;
	return 0;
}


func_2218(var_112_int, var_113_int)
{
	var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_bool = 0;
	var_127_bool = var_112_int > var_113_int;
	if(var_127_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_125_int = 0;
	var_129_bool = var_112_int != var_113_int;
	if(var_129_bool != 0) {
		var_130_int = var_113_int - var_112_int;
		irand(var_125_int, var_130_int);
	} else {
		var_139_bool = var_112_int == (int)0;
		if(var_139_bool == 0) goto Label_2236;
		return 4;
	}
Label_2236:
	var_125_int = var_125_int + var_112_int;
	var_132_bool = var_125_int == (int)0;
	if(var_132_bool != 0) {
		return 4;
	}
	var_133_int = 0; var_134_string = "";
	func_2465(var_133_int, "Money");
	AddItem(var_126_bool, var_133_int, (int)0, var_125_int);
	return 4;
	
}


func_171()
{
	var_16_bool = 0;
	func_2037(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		func_2715();
	}
	return 0;
}


func_2731()
{
	return 0;
}


func_2733(var_31_bool)
{
	var_31_bool = 0;
	return 0;
}


func_2736()
{
	return 0;
}


func_689()
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_bool = 0;
	WaitForAnimEnd();
	var_64_bool = 0;
	func_2037(var_64_bool);
	var_65_bool = var_64_bool == 0; //@nz
	if(var_65_bool != 0) {
		return 14;
	}
	func_2650((int)0);
	var_66_int = var_57_int;
	var_58_int = 0;
	
Label_703:
	var_79_bool = 0;
	var_79_bool = 0;
	var_81_bool = var_58_int < (int)5;
	if(var_81_bool != 0) {
		var_82_bool = 0;
		func_2037(var_82_bool);
		if(var_82_bool != 0) {
			var_79_bool = 1;
		}
	}
	if(var_79_bool != 0) {
		irand(var_59_int, (int)3);
		var_85_bool = var_59_int == (int)0;
		if(var_85_bool != 0) {
			var_86_int = var_57_int;
			if(var_86_int == 0) goto Label_736;
			irand(var_60_int, var_57_int);
			var_88_string = ""; var_89_int = 0;
			var_60_int = var_89_int;
			func_2643(var_88_string, var_89_int);
			PlayAnimation("all", var_88_string);
			WaitForAnimEnd(var_61_bool);
			var_90_bool = var_61_bool == 0; //@nz
			if(var_90_bool != 0) {
			} else {
		} else {
				var_95_bool = var_59_int == (int)1;
				if(var_95_bool != 0) {
					rand(var_62_float, (int)4);
					var_98_int = var_62_float + (int)1;
					Sleep(var_98_int, var_63_bool);
					var_99_bool = var_63_bool == 0; //@nz
					if(var_99_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_100_int = var_58_int;
				if(var_100_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_91_bool = 0;
			func_768(var_91_bool);
			var_92_bool = var_91_bool == 0; //@nz
			if(var_92_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_2738(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_1887(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
	return 0;
}


func_1718(var_86_cvector)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	GetPosition(var_88_cvector);
	var_88_cvector = var_86_cvector;
	return 2;
}


func_2745(var_65_object)
{
	var_66_object = Obj();
	var_65_object = var_66_object;
	TaskCall(6);
	func_1288(var_66_object);
	TaskReturn();
	return 0;
}


func_1723(var_48_cvector, var_49_object)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_52_cvector);
	@@var_49_object:GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
	return 4;
}


func_2753()
{
	var_15_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1730(var_132_float, var_133_object)
{
	var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0);
	GetPosition(var_137_cvector);
	@@var_133_object:GetPosition(var_138_cvector);
	var_139_cvector = var_138_cvector - var_137_cvector;
	var_132_float = var_139_cvector | var_139_cvector;
	return 6;
}


func_2757(var_24_object)
{
	var_25_bool = 0; var_26_bool = 0;
	var_27_bool = GlobalVars[0];
	if(var_27_bool != 0) {
		IsOverrideActive(var_26_bool);
		var_28_bool = var_26_bool == 0; //@nz
		if(var_28_bool != 0) {
			var_29_object = Obj();
			var_24_object = var_29_object;
			func_2205(var_29_object);
		}
		return 2;
	}
	return 2;
}


func_2249(var_226_string)
{
	var_227_object = Obj(); var_228_int = 0; var_229_bool = 0; var_230_object = Obj(); var_231_int = 0; var_232_bool = 0;
	CreateInvItem(var_230_object);
	@@var_230_object:SetItemName(var_226_string);
	@@var_230_object:SetProperty("Organ", (int)1);
	@@var_230_object:GetItemID(var_231_int);
	AddItem(var_232_bool, var_230_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1738(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_bool = 0;
	IsPlayerActor(var_99_object, var_101_bool);
	var_101_bool = var_98_bool;
	return 2;
}


func_1743(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0;
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", (int)2);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	@@var_42_object:HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
	return 2;
}


func_2770(var_66_bool, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0;
	IsPlayerActor(var_67_object, var_69_bool);
	var_69_bool = var_66_bool;
	return 2;
}


func_2775(var_26_int)
{
	var_26_int = 0;
	return 0;
}


func_2778()
{
	return 0;
}


func_1755(var_83_bool, var_84_object, var_85_string, var_86_float, var_87_float, var_88_float)
{
	var_89_float = 0; var_90_float = 0;
	var_91_bool = 0; var_92_object = Obj(); var_93_string = "";
	var_84_object = var_92_object;
	var_85_string = var_93_string;
	func_1743(var_91_bool, var_92_object, var_93_string);
	var_94_bool = var_91_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_83_bool = 0;
		return 2;
	}
	@@var_84_object:GetProperty(var_85_string, var_90_float);
	var_95_float = 0; var_96_float = 0; var_97_float = 0; var_98_float = 0;
	var_96_float = var_90_float + var_86_float;
	var_87_float = var_97_float;
	var_88_float = var_98_float;
	func_2099(var_95_float, var_96_float, var_97_float, var_98_float);
	@@var_84_object:SetProperty(var_85_string, var_95_float);
	var_83_bool = 1;
	return 2;
}


func_2780(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_2266()
{
	var_220_int = 0;
	func_2199(var_220_int);
	var_225_bool = var_220_int != (int)1;
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_string = "";
	func_2249("diseased_liver");
	var_237_string = "";
	func_2249("diseased_kidney");
	var_238_string = "";
	func_2249("diseased_heart");
	var_239_string = "";
	func_2249("diseased_blood");
	return 0;
}


func_2783(var_97_object)
{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1738(var_98_bool, var_99_object);
	if(var_98_bool != 0) {
		var_102_object = Obj();
		func_2083(var_102_object);
		ReportReputationChange(var_97_object, var_102_object, (float)-0.05000000074505806);
		var_106_bool = 0;
		func_2290((bool)1);
	}
	func_2266();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1256(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1777(var_142_float, var_143_object, var_144_float)
{
	var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0;
	var_149_bool = 0; var_150_object = Obj(); var_151_string = "";
	var_143_object = var_150_object;
	func_1743(var_149_bool, var_150_object, "disease");
	var_152_bool = var_149_bool == 0; //@nz
	if(var_152_bool != 0) {
		var_142_float = 0;
		return 4;
	}
	var_147_float = 0;
	var_153_bool = 0; var_154_object = Obj(); var_155_string = "";
	var_143_object = var_154_object;
	func_1743(var_153_bool, var_154_object, "armor_disease");
	if(var_153_bool != 0) {
		@@var_143_object:GetProperty("armor_disease", var_147_float);
		var_147_float = var_147_float / (int)100;
	}
	var_158_bool = 0; var_159_object = Obj(); var_160_string = "";
	var_143_object = var_159_object;
	func_1743(var_158_bool, var_159_object, "immunity");
	if(var_158_bool != 0) {
		@@var_143_object:GetProperty("immunity", var_148_float);
		var_147_float = var_147_float + var_148_float;
		var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; var_165_float = 0; var_166_float = 0; var_167_float = 0;
		var_143_object = var_163_object;
		var_165_float = -var_144_float;
		func_1755(var_162_bool, var_163_object, "immunity", var_165_float, (float)0, (float)1);
	}
	var_181_bool = var_147_float >= (int)1;
	if(var_181_bool != 0) {
		var_142_float = 0.0;
		return 4;
	}
	var_183_int = (int)1 - var_147_float;
	var_185_float = var_183_int / (int)2;
	var_144_float = var_144_float * var_185_float;
	var_186_bool = 0; var_187_object = Obj(); var_188_string = ""; var_189_float = 0; var_190_float = 0; var_191_float = 0;
	var_143_object = var_187_object;
	var_144_float = var_189_float;
	func_1755(var_186_bool, var_187_object, "disease", var_189_float, (float)0, (float)1);
	var_192_bool = 0; var_193_object = Obj();
	var_143_object = var_193_object;
	func_1738(var_192_bool, var_193_object);
	if(var_192_bool != 0) {
		var_196_float = 0;
		var_144_float = var_196_float;
		func_2153(var_196_float);
	}
	var_144_float = var_142_float;
	return 4;
}


func_2290(var_106_bool)
{
	var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0;
	var_111_bool = var_106_bool;
	if(var_111_bool != 0) {
		var_112_int = 0; var_113_int = 0;
		var_115_int = 0;
		func_2190(var_115_int);
		var_122_float = var_115_int * (int)100;
		var_113_int = (int)100 + var_122_float;
		func_2218((int)0, var_113_int);
		irand(var_109_int, (int)8);
		var_142_bool = var_109_int == (int)0;
		if(var_142_bool != 0) {
			var_143_int = 0; var_144_string = "";
			func_2465(var_143_int, "lemon");
			AddItem(var_110_bool, var_143_int, (int)0, (int)1);
		} else {
			var_148_bool = var_109_int == (int)1;
			if(var_148_bool != 0) {
				var_149_int = 0; var_150_string = "";
				func_2465(var_149_int, "rusk");
				AddItem(var_110_bool, var_149_int, (int)0, (int)1);
				goto Label_2378;
			}
			var_154_bool = var_109_int == (int)2;
			if(var_154_bool != 0) {
				var_155_int = 0; var_156_string = "";
				func_2465(var_155_int, "hook");
				AddItem(var_110_bool, var_155_int, (int)0, (int)1);
				goto Label_2378;
			}
			var_160_bool = var_109_int == (int)4;
			if(var_160_bool != 0) {
				var_161_int = 0; var_162_string = "";
				func_2465(var_161_int, "syringe");
				AddItem(var_110_bool, var_161_int, (int)0, (int)1);
				goto Label_2378;
			}
			var_166_bool = var_109_int == (int)5;
			if(var_166_bool != 0) {
				var_167_int = 0; var_168_string = "";
				func_2465(var_167_int, "watch");
				AddItem(var_110_bool, var_167_int, (int)0, (int)1);
				goto Label_2378;
			}
			var_172_bool = var_109_int == (int)6;
			if(var_172_bool == 0) goto Label_2378;
			var_173_int = 0; var_174_string = "";
			func_2465(var_173_int, "razor");
			AddItem(var_110_bool, var_173_int, (int)0, (int)1);
	}
		var_177_int = 0; var_178_int = 0;
		var_180_int = 0;
		func_2190(var_180_int);
		var_182_float = var_180_int * (int)50;
		var_178_int = (int)50 + var_182_float;
		func_2218((int)0, var_178_int);
		irand(var_109_int, (int)7);
		var_185_bool = var_109_int == (int)0;
		if(var_185_bool != 0) {
			var_186_int = 0; var_187_string = "";
			func_2465(var_186_int, "beads");
			AddItem(var_110_bool, var_186_int, (int)0, (int)1);
			goto Label_2464;
		}
		var_191_bool = var_109_int == (int)1;
		if(var_191_bool != 0) {
			var_192_int = 0; var_193_string = "";
			func_2465(var_192_int, "bracelet");
			AddItem(var_110_bool, var_192_int, (int)0, (int)1);
			goto Label_2464;
		}
		var_197_bool = var_109_int == (int)2;
		if(var_197_bool != 0) {
			var_198_int = 0; var_199_string = "";
			func_2465(var_198_int, "ear_ring");
			AddItem(var_110_bool, var_198_int, (int)0, (int)1);
			goto Label_2464;
		}
		var_203_bool = var_109_int == (int)3;
		if(var_203_bool != 0) {
			var_204_int = 0; var_205_string = "";
			func_2465(var_204_int, "gold_ring");
			AddItem(var_110_bool, var_204_int, (int)0, (int)1);
			goto Label_2464;
		}
		var_209_bool = var_109_int == (int)4;
		if(var_209_bool != 0) {
			var_210_int = 0; var_211_string = "";
			func_2465(var_210_int, "silver_ring");
			AddItem(var_110_bool, var_210_int, (int)0, (int)1);
			goto Label_2464;
		}
		var_215_bool = var_109_int == (int)5;
		if(var_215_bool == 0) goto Label_2464;
		var_216_int = 0; var_217_string = "";
		func_2465(var_216_int, "flower");
		AddItem(var_110_bool, var_216_int, (int)0, (int)1);
	}
Label_2378:
	goto Label_2464;
	
Label_2464:
	return 4;
	
}


func_1272(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	GetDirection(var_69_cvector);
	var_71_cvector = CVector(0,0,0); var_72_object = Obj();
	var_72_object = var_0_bool;
	func_1723(var_71_cvector, var_72_object);
	var_71_cvector = var_70_cvector;
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= (float)-0.3420201241970062;
	return 4;
}


func_2810(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	func_1887(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		var_26_int = 2;
	} else {
		var_26_int = 0;
	}
	return 0;
	
}


func_768(var_91_bool)
{
	var_91_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2820(var_66_object)
{
	var_67_object = Obj();
	var_66_object = var_67_object;
	TaskCall(7);
	func_1561(var_68_object, var_69_cvector, var_70_bool, var_67_object);
	TaskReturn();
	return 0;
}


func_775(var_65_object)
{
	var_66_bool = 0; var_67_object = Obj();
	var_65_object = var_67_object;
	func_2770(var_66_bool, var_67_object);
	if(var_66_bool != 0) {
		var_70_object = Obj();
		var_65_object = var_70_object;
		func_831(var_70_object);
	}
	return 0;
}


func_1288(var_66_object)
{
	var_70_bool = 0; var_71_bool = 0;
	Face(var_66_object);
	var_72_bool = 0; var_73_object = Obj(); var_74_float = 0;
	var_66_object = var_73_object;
	func_2118(var_72_bool, var_73_object, (float)0.10000000149011612);
	PlayAnimation("all", "bow");
	WaitForAnimEnd();
	StopAsync();
	var_106_float = 0;
	func_2163((float)-0.05999999865889549);
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; var_117_float = 0; var_118_float = 0; var_119_float = 0;
	var_66_object = var_115_object;
	func_1755(var_114_bool, var_115_object, "health", (float)-0.05999999865889549, (float)0, (float)1);
	HasProperty("disease", var_71_bool);
	var_121_bool = var_71_bool;
	if(var_121_bool != 0) {
		SetProperty("disease", (int)0);
	}
	var_124_object = Obj();
	var_66_object = var_124_object;
	func_1367(var_66_object, var_70_bool, var_71_bool, var_124_object);
	return 2;
}


func_1846(var_34_bool, var_35_object)
{
	var_36_bool = 0; var_37_bool = 0;
	@@var_35_object:IsDead(var_37_bool);
	var_37_bool = var_34_bool;
	return 2;
}


func_1337(var_0_bool, var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0;
	GetPosition(var_36_cvector);
	@@@var_0_bool:GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_36_cvector - var_37_cvector;
	func_2089(var_44_cvector, var_45_cvector);
	var_52_float = var_38_cvector * (float)0.75;
	var_43_cvector = var_44_cvector + var_52_float;
	func_2089(var_42_cvector, var_43_cvector);
	var_42_cvector = var_39_cvector;
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, (int)32, (float)7000.0);
	var_41_float = var_41_float - (int)100;
	var_57_bool = var_41_float < (int)0;
	if(var_57_bool != 0) {
		var_41_float = 0;
	}
	var_28_cvector = var_40_cvector * var_41_float;
	return 12;
}


func_1851(var_23_bool, var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	var_29_bool = var_24_object == 0; //@ne
	if(var_29_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_30_bool = 0;
	var_30_bool = 0;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", (int)1);
	if(var_33_bool != 0) {
		var_34_bool = 0; var_35_object = Obj();
		var_24_object = var_35_object;
		func_1846(var_34_bool, var_35_object);
		if(var_34_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	GetScene(var_27_object);
	var_38_bool = var_27_object == 0; //@ne
	if(var_38_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	@@var_24_object:GetScene(var_28_object);
	var_39_bool = var_27_object != var_28_object;
	if(var_39_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_23_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_831(var_70_object)
{
	var_71_bool = 0; var_72_bool = 0;
	
Label_832:
	var_73_bool = 0; var_74_object = Obj();
	var_70_object = var_74_object;
	TaskCall(4);
	func_939(var_73_bool, var_74_object);
	TaskReturn();
	if(var_75_bool != 0) {
		Face(var_70_object);
		WaitForAnimEnd(var_72_bool);
		var_128_bool = var_72_bool == 0; //@nz
		if(var_128_bool != 0) {
		} else {
			PlayAnimation("all", "dattack_begin");
			WaitForAnimEnd(var_72_bool);
			var_131_bool = var_72_bool == 0; //@nz
			if(var_131_bool != 0) {
				goto Label_879;
			}
			var_132_float = 0; var_133_object = Obj();
			var_70_object = var_133_object;
			func_1730(var_132_float, var_133_object);
			var_141_bool = var_132_float <= (float)90000.0;
			if(var_141_bool != 0) {
				var_142_float = 0; var_143_object = Obj(); var_144_float = 0;
				var_70_object = var_143_object;
				func_1777(var_142_float, var_143_object, (float)0.20000000298023224);
			}
			PlayAnimation("all", "dattack_end");
			WaitForAnimEnd(var_72_bool);
			var_202_bool = var_72_bool == 0; //@nz
			if(var_202_bool != 0) {
				goto Label_879;
			}
			StopAsync();
			goto Label_832;
		}
	}
Label_879:
	return 2;
	
}


func_1367(var_0_bool, var_1_bool, var_2_bool, var_124_object)
{
	var_125_cvector = CVector(0,0,0); var_126_float = 0; var_127_bool = 0; var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_float = 0;
	var_0_bool = var_124_object;
	var_135_cvector = CVector(0,0,0); var_136_float = 0;
	func_1337(var_134_float, var_135_cvector, (float)1.7453293800354004);
	var_135_cvector = var_130_cvector;
	var_131_float = var_130_cvector | var_130_cvector;
	var_166_bool = var_131_float < (float)2500.0;
	if(var_166_bool != 0) {
		var_167_cvector = CVector(0,0,0); var_168_float = 0;
		func_1337(var_134_float, var_167_cvector, (float)2.6179938316345215);
		var_167_cvector = var_130_cvector;
		var_131_float = var_130_cvector | var_130_cvector;
		var_170_bool = var_131_float < (float)2500.0;
		if(var_170_bool != 0) {
			var_172_float = sqrt(var_131_float);
			var_173_int = "Can't retreat, distance: " + var_172_float;
			Trace(var_173_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_175_float = GetByIndex(var_130_cvector, 0);
	var_176_float = GetByIndex(var_130_cvector, 2);
	Rotate(var_175_float, var_176_float);
	var_177_cvector = CVector(0,0,0);
	func_1718(var_177_cvector);
	var_1_bool = var_177_cvector + var_130_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1409:
	MovePoint(var_1_bool, (int)1, var_132_bool);
	var_183_bool = var_132_bool;
	if(var_183_bool != 0) {
		var_184_bool = var_0_bool == 0; //@ne
		if(var_184_bool != 0) {
			goto Label_1439;
		EMIT "GOTO 0x59d";

		Label_1439:
			return 10;
		}
		var_185_cvector = CVector(0,0,0); var_186_float = 0;
		func_1337(var_134_float, var_185_cvector, (float)2.6179938316345215);
		var_185_cvector = var_133_cvector;
		var_134_float = var_133_cvector | var_133_cvector;
		var_188_bool = var_134_float >= (float)2500.0;
		if(var_188_bool != 0) {
			var_189_cvector = CVector(0,0,0);
			func_1718(var_189_cvector);
			var_1_bool = var_189_cvector + var_133_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1439;
		}
	}
	var_192_bool = var_2_bool == 0; //@nz
	if(var_192_bool == 1) goto Label_1409;
	
}


func_1887(var_19_bool, var_20_object)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_20_object = var_24_object;
	func_1851(var_23_bool, var_24_object);
	var_40_bool = var_23_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_20_object = var_42_object;
	func_1743(var_41_bool, var_42_object, "noaccess");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_19_bool = 1;
		return 2;
	}
	@@var_20_object:GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == (int)0;
	return 2;
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_13_cvector, var_14_bool);
	return 0;
}


func_880()
{
	StopAsync();
	StopAnimation();
	return 0;
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_18_bool, var_19_int);
	return 0;
}


func_1911(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = "";
	var_46_bool = var_31_object == 0; //@ne
	if(var_46_bool != 0) {
		return 14;
	}
	IsDead(var_39_bool);
	var_47_bool = var_39_bool;
	if(var_47_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_40_int);
	var_49_bool = var_40_int < (int)0;
	if(var_49_bool != 0) {
		return 14;
	}
	@@var_31_object:GetPosition(var_41_cvector);
	GetPosition(var_42_cvector);
	GetDirection(var_43_cvector);
	var_44_cvector = var_42_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_44_cvector, 0);
	var_51_float = GetByIndex(var_43_cvector, 0);
	var_52_float = var_50_float * var_51_float;
	var_53_float = GetByIndex(var_44_cvector, 2);
	var_54_float = GetByIndex(var_43_cvector, 2);
	var_55_float = var_53_float * var_54_float;
	var_56_int = var_52_float + var_55_float;
	var_58_bool = var_56_int >= (int)0;
	if(var_58_bool != 0) {
		var_45_string = "fhit";
	} else {
		var_45_string = "bhit";
	}
	var_61_int = var_45_string + "1";
	var_63_int = var_45_string + "2";
	FadeSecondaryAnimation("hit_react", var_61_int, var_63_int, (int)-10);
	return 14;
	
}


func_392(var_2_bool, var_15_object)
{
	var_16_bool = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_15_object = var_21_object;
	func_1887(var_20_bool, var_21_object);
	var_54_bool = var_20_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 4;
	}
	var_55_bool = var_2_bool;
	if(var_55_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_15_object, var_18_bool);
	var_56_bool = var_18_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 4;
	}
	var_57_int = 0; var_58_object = Obj();
	var_15_object = var_58_object;
	func_2667(var_58_object);
	var_57_int = var_19_int;
	var_60_bool = var_19_int > (int)0;
	if(var_60_bool != 0) {
		var_62_bool = var_19_int > (int)1;
		if(var_62_bool != 0) {
			func_375(var_19_int);
		}
		var_64_object = Obj();
		var_15_object = var_64_object;
		func_2670(var_64_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2465(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0;
	GetInvItemByName(var_136_int, var_134_string);
	var_136_int = var_133_int;
	return 2;
}


func_1955(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_bool = 0;
	var_40_bool = 0;
	var_41_object = var_18_object;
	if(var_41_object != 0) {
		var_43_bool = var_19_int != (int)4;
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
		var_48_cvector = CVector(0,0,0); var_49_object = Obj();
		var_18_object = var_49_object;
		func_1723(var_48_cvector, var_49_object);
		var_48_cvector = var_47_cvector;
		func_2089(var_46_cvector, var_47_cvector);
		var_46_cvector = var_30_cvector;
		CreateVectorVector(var_31_object);
		var_32_int = 1;

	Label_1984:
		var_60_int = "hit" + var_32_int;
		GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector);
		var_61_bool = var_33_bool == 0; //@nz
		if(var_61_bool != 0) {
		} else {
			var_109_int = var_35_cvector | var_30_cvector;
			var_111_bool = var_109_int >= (float)0.7071067690849304;
			if(var_111_bool != 0) {
				@@var_31_object:add(var_34_cvector);
			}
			var_32_int = var_32_int + (int)1;
			goto Label_1984;
		}
		@@var_31_object:size(var_36_int);
		var_62_int = var_36_int;
		if(var_62_int != 0) {
			irand(var_37_int, var_36_int);
			@@var_31_object:get(var_38_cvector, var_37_int);
			var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
			var_18_object = var_63_object;
			var_19_int = var_64_int;
			var_20_float = var_65_float;
			var_38_cvector = var_66_cvector;
			var_67_cvector = -var_30_cvector;
			func_2023(var_65_float, var_66_cvector, var_67_cvector);
			return 18;
		}
		var_31_object = 0;
	}
	var_108_object = Obj();
	var_18_object = var_108_object;
	func_1911(var_108_object);
	return 18;
	
}


func_2470(var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	TaskCall(0);
	func_0(var_16_object);
	TaskReturn();
	return 0;
}


func_939(var_73_bool, var_74_object)
{
	var_77_bool = 0; var_78_object = Obj(); var_79_float = 0; var_80_float = 0; var_81_bool = 0; var_82_bool = 0;
	var_74_object = var_78_object;
	func_952(var_73_bool, var_74_object, var_77_bool, var_78_object, (float)150, (float)3000, (bool)0, (bool)1);
	var_77_bool = var_73_bool;
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_29_float, (float)0.5);
	Sleep(var_29_float);
	
Label_440:
	var_36_bool = var_0_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_37_bool = var_1_bool == 0; //@nz
		if(var_37_bool != 0) {

		Label_444:
			GetPosition(var_31_cvector);
			var_38_float = 0;
			func_491(var_38_float);
			GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool);
			var_41_bool = var_32_bool;
			if(var_41_bool != 0) {
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
	var_42_object = Obj(); var_43_cvector = CVector(0,0,0);
	var_30_cvector = var_43_cvector;
	func_519(var_42_object, var_43_cvector);
	var_42_object = var_33_object;
	var_46_bool = var_33_object != 0; //@nn
	if(var_46_bool != 0) {
		RotatePath(var_33_object, var_34_bool);
		var_47_bool = var_34_bool;
		if(var_47_bool != 0) {
			var_48_bool = 0;
			func_517(var_48_bool);
			FollowPath(var_33_object, var_48_bool, var_34_bool);
			var_33_object = 0;
			var_49_bool = var_34_bool;
			if(var_49_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_33_object = 0;
	goto Label_440;
	
}


func_950(var_117_string)
{
	var_117_string = "zwalk";
	return 0;
}


func_952(var_0_bool, var_1_bool, var_77_bool, var_78_object, var_79_float, var_80_float, var_81_bool, var_82_bool)
{
	var_83_bool = 0; var_84_bool = 0; var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_object = Obj(); var_91_bool = 0; var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj();
	var_0_bool = false;
	var_1_bool = var_78_object;
	var_82_bool = var_92_bool;
	
Label_956:
	var_99_bool = 0; var_100_object = Obj();
	var_78_object = var_100_object;
	func_1092(var_99_bool, var_100_object);
	var_103_bool = var_99_bool == 0; //@nz
	if(var_103_bool != 0) {
		var_77_bool = 0;
		return 16;
	}
	@@var_78_object:GetPosition(var_94_cvector);
	GetPosition(var_95_cvector);
	var_96_cvector = var_94_cvector - var_95_cvector;
	var_97_float = var_96_cvector | var_96_cvector;
	var_104_bool = 0;
	var_104_bool = 0;
	var_106_bool = var_80_float > (int)0;
	if(var_106_bool != 0) {
		var_107_float = var_80_float * var_80_float;
		var_108_bool = var_97_float > var_107_float;
		if(var_108_bool != 0) {
			var_104_bool = 1;
		}
	}
	if(var_104_bool != 0) {
		Stop();
		var_77_bool = 0;
		return 16;
	}
	var_109_float = var_79_float * var_79_float;
	var_110_bool = var_97_float > var_109_float;
	if(var_110_bool != 0) {
		@@var_78_object:GetPFPosition(var_94_cvector);
		FindPathTo(var_98_object, var_94_cvector);
		var_111_bool = var_98_object != 0; //@nn
		if(var_111_bool != 0) {
			var_98_object = var_93_object;
			var_98_object = 0;
		}
		var_112_bool = var_93_object != 0; //@nn
		if(var_112_bool != 0) {
			var_113_bool = var_92_bool;
			if(var_113_bool == 0) goto Label_1005;
			var_92_bool = 0;
			RotatePath(var_93_object, var_91_bool);
			var_114_bool = var_91_bool == 0; //@nz
			if(var_114_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_117_string = "";
				func_950(var_117_string);
				var_118_string = "";
				func_1099(var_118_string);
				FollowPath(var_93_object, var_81_bool, var_91_bool, var_117_string, var_118_string);
				var_119_bool = var_91_bool == 0; //@nz
				if(var_119_bool != 0) {
					var_120_bool = var_0_bool;
					if(var_120_bool != 0) {
						var_93_object = 0;
						goto Label_1052;
					EMIT "GOTO 0x401";
					}
				} else {
					var_93_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_91_bool);
					var_123_bool = var_91_bool == 0; //@nz
					if(var_123_bool != 0) {
						var_124_bool = var_0_bool;
						if(var_124_bool != 0) {
							var_93_object = 0;
							goto Label_1052;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1052;
	}
			var_98_object = 0;
			goto Label_1050;

		Label_1050:
			var_93_object = 0;

		}
		goto Label_956;
	}
Label_1052:
	var_77_bool = !var_0_bool;
	return 16;
	
}


func_2515(var_18_bool, var_19_object, var_20_string)
{
	var_22_bool = var_20_string == "unholster";
	if(var_22_bool != 0) {
		var_23_bool = 0; var_24_object = Obj();
		var_19_object = var_24_object;
		func_2723(var_24_object);
		var_23_bool = var_18_bool;
		return 0;
	EMIT "GOTO 0x9f1";
	}
	var_26_bool = var_20_string == "player_shot";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_19_object = var_28_object;
		func_2728(var_28_object);
		var_27_bool = var_18_bool;
		return 0;
	EMIT "GOTO 0x9f1";
	}
	var_30_bool = var_20_string == "battle";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_19_object = var_32_object;
		func_2733(var_32_object);
		var_31_bool = var_18_bool;
		return 0;
	}
	var_18_bool = 0;
	return 0;
}


func_1492(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1508(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	GetDirection(var_69_cvector);
	var_71_cvector = CVector(0,0,0); var_72_object = Obj();
	var_72_object = var_0_bool;
	func_1723(var_71_cvector, var_72_object);
	var_71_cvector = var_70_cvector;
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= (float)-0.3420201241970062;
	return 4;
}


func_2023(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	GetScene(var_27_object);
	AddActorByType(var_28_object, "scripted", var_27_object, var_23_cvector, var_24_cvector, "blood_dir.xml");
	var_31_object = Obj();
	var_20_object = var_31_object;
	func_1911(var_31_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_491(var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	GetCameraFarDistance(var_40_float);
	var_40_float = var_38_float;
	return 2;
}


func_2547(var_33_object, var_34_string)
{
	var_36_bool = var_34_string == "unholster";
	if(var_36_bool != 0) {
		var_33_object = Obj();
		func_2726();
	} else {
		var_39_bool = var_34_string == "player_shot";
		if(var_39_bool != 0) {
			var_33_object = Obj();
			func_2731();
			goto Label_2571;
		}
		var_42_bool = var_34_string == "battle";
		if(var_42_bool == 0) goto Label_2571;
		var_33_object = Obj();
		func_2736();
	}
Label_2571:
	return 0;
	
}


func_2037(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_2042(var_40_string)
{
	var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	IsExisting3DSound(var_49_bool, var_40_string);
	var_57_bool = var_49_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_50_int = 0;

	Label_2048:
		var_59_int = var_50_int + (int)1;
		var_60_int = var_40_string + var_59_int;
		IsExisting3DSound(var_51_bool, var_60_int);
		var_61_bool = var_51_bool == 0; //@nz
		if(var_61_bool != 0) {
		} else {
			var_50_int = var_50_int + (int)1;
			goto Label_2048;
		}
		var_62_bool = var_50_int == 0; //@nz
		if(var_62_bool != 0) {
			return 16;
		}
		irand(var_52_int, var_50_int);
		var_64_int = var_52_int + (int)1;
		var_40_string = var_40_string + var_64_int;
	}
	Is3DSoundLoaded(var_53_bool, var_40_string);
	var_65_bool = var_53_bool;
	if(var_65_bool != 0) {
		GetEyesHeight(var_54_float);
		GetDirection(var_55_cvector);
		var_56_cvector = var_55_cvector * (int)50;
		var_67_float = GetByIndex(var_56_cvector, 1);
		var_67_float = var_67_float + var_54_float;
		SetByIndex(var_56_cvector, 1) = var_67_float;
		PlayGlobalSound(var_40_string, var_56_cvector);
	}
	return 16;
	
}


func_1531(var_0_bool, var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0;
	GetPosition(var_36_cvector);
	@@@var_0_bool:GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_36_cvector - var_37_cvector;
	func_2089(var_44_cvector, var_45_cvector);
	var_52_float = var_38_cvector * (float)0.75;
	var_43_cvector = var_44_cvector + var_52_float;
	func_2089(var_42_cvector, var_43_cvector);
	var_42_cvector = var_39_cvector;
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, (int)32, (float)7000.0);
	var_41_float = var_41_float - (int)100;
	var_57_bool = var_41_float < (int)0;
	if(var_57_bool != 0) {
		var_41_float = 0;
	}
	var_28_cvector = var_40_cvector * var_41_float;
	return 12;
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


