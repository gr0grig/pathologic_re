// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,GetGameTime/1,GetVariable/2,FindActor/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,HasAnimation/3,CanSee/2,GetActiveScene/1,BroadcastMessage/3,IsOverrideActive/1,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:branch|W:player|W:reputation|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:idle|W:class|W:rat|W:rat_big|W:dog|W:killme
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
// @EVENT_6: op=0x436 vars=
// @EVENT_7: op=0x4a4 vars=int
// @EVENT_41: op=0x4df vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x55f vars=int
// @EVENT_41: op=0x59a vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x5b3 vars=
// @EVENT_7: op=0x621 vars=int
// @EVENT_41: op=0x65c vars=object
// @STANDALONE_EVENT_16: op=0x907 vars=object,string
// @STANDALONE_EVENT_41: op=0x914 vars=object
// @STANDALONE_EVENT_22: op=0x91a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x922 vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x3c0,0x3d9,0x405,0x40c,0x41a,0x436,0x4df,0x59a,0x5b3,0x65c,0x7ad,0x7b5,0x7be,0x7c8,0x7f6,0x8ff,0x914,0x91a,0x922,0x92c,0x94c,0x97c,0x982,0x9c4,0x9cd,0x9d5,0x9df,0x9e7,0x9f1,0xa3b,0xa3e,0xa40,0xa43,0xa45,0xa48,0xa4f,0xa52,0xa63,0xa6b,0xa72,0xa78,0xa7b,0xaa1,0xaaa,0xab3

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2629(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_13_bool = var_20_object;
		func_2632(var_20_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_2638();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2629(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_23_object = Obj();
		var_13_bool = var_23_object;
		func_2632(var_23_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2434(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2517(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_367(var_15_int);
		}
		var_66_object = Obj();
		var_13_bool = var_66_object;
		func_2527(var_66_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_object = var_19_object;
	var_14_cvector = var_20_object;
	var_15_bool = var_21_bool;
	func_2730(var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_65_int = 0; var_66_object = Obj(); var_67_bool = 0;
		var_13_object = var_66_object;
		var_15_bool = var_67_bool;
		func_2535(var_66_object, var_67_bool);
		var_65_int = var_17_int;
		var_97_bool = var_17_int > (int)0;
		if(var_97_bool != 0) {
			var_99_bool = var_17_int > (int)1;
			if(var_99_bool != 0) {
				func_367(var_17_int);
			}
			var_101_object = Obj();
			var_13_object = var_101_object;
			func_2545(var_101_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2619(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_367(var_15_int);
		}
		var_13_bool = Obj();
		func_2622();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_cvector = var_18_object;
	var_14_bool = var_19_string;
	func_2348(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_367(var_16_int);
		var_48_object = Obj(); var_49_string = "";
		var_13_cvector = var_48_object;
		var_14_bool = var_49_string;
		func_2380(var_48_object, var_49_string);
	} else {
		var_132_int = 0; var_133_string = ""; var_134_object = Obj();
		var_14_bool = var_133_string;
		var_13_cvector = var_134_object;
		func_2624(var_134_object);
		var_132_int = var_16_int;
		var_136_bool = var_16_int > (int)0;
		if(var_136_bool == 0) goto Label_308;
		var_138_bool = var_16_int > (int)1;
		if(var_138_bool != 0) {
			func_367(var_16_int);
		}
		var_139_string = ""; var_140_object = Obj();
		var_14_bool = var_139_string;
		var_13_cvector = var_140_object;
		func_2627();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2447(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_24_string = "";
		var_13_bool = var_24_string;
		func_2463(var_24_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2405(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_367(var_13_bool);
		var_27_object = Obj();
		var_13_bool = var_27_object;
		func_2428(var_27_object);
	} else {
		var_29_object = Obj();
		var_13_bool = var_29_object;
		func_392(var_13_bool, var_29_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_object = Obj();
	var_13_bool = var_14_object;
	func_392(var_13_bool, var_14_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool != (int)110;
	if(var_15_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_367(var_12_bool);
	func_2638();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_367(var_13_bool);
	var_13_bool = Obj();
	func_2324();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	RequestClearPath(var_13_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2629(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_22_object = Obj();
		var_13_bool = var_22_object;
		func_2632(var_22_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2434(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2517(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_770();
		}
		var_65_object = Obj();
		var_13_bool = var_65_object;
		func_2527(var_65_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_object = var_19_object;
	var_14_cvector = var_20_object;
	var_15_bool = var_21_bool;
	func_2730(var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_65_int = 0; var_66_object = Obj(); var_67_bool = 0;
		var_13_object = var_66_object;
		var_15_bool = var_67_bool;
		func_2535(var_66_object, var_67_bool);
		var_65_int = var_17_int;
		var_97_bool = var_17_int > (int)0;
		if(var_97_bool != 0) {
			var_99_bool = var_17_int > (int)1;
			if(var_99_bool != 0) {
				func_770();
			}
			var_100_object = Obj();
			var_13_object = var_100_object;
			func_2545(var_100_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2619(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_770();
		}
		var_13_bool = Obj();
		func_2622();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_cvector = var_18_object;
	var_14_bool = var_19_string;
	func_2348(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_770();
		var_47_object = Obj(); var_48_string = "";
		var_13_cvector = var_47_object;
		var_14_bool = var_48_string;
		func_2380(var_47_object, var_48_string);
	} else {
		var_131_int = 0; var_132_string = ""; var_133_object = Obj();
		var_14_bool = var_132_string;
		var_13_cvector = var_133_object;
		func_2624(var_133_object);
		var_131_int = var_16_int;
		var_135_bool = var_16_int > (int)0;
		if(var_135_bool == 0) goto Label_653;
		var_137_bool = var_16_int > (int)1;
		if(var_137_bool != 0) {
			func_770();
		}
		var_138_string = ""; var_139_object = Obj();
		var_14_bool = var_138_string;
		var_13_cvector = var_139_object;
		func_2627();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2447(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_770();
		var_23_string = "";
		var_13_bool = var_23_string;
		func_2463(var_23_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_770();
	func_2638();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2405(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_770();
		var_26_object = Obj();
		var_13_bool = var_26_object;
		func_2428(var_26_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2629(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_24_object = Obj();
		var_13_bool = var_24_object;
		func_2632(var_24_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_object = Obj();
	var_13_bool = var_16_object;
	func_2434(var_16_object);
	var_25_int = 0; var_26_object = Obj();
	var_13_bool = var_26_object;
	func_2517(var_25_int, var_26_object);
	var_25_int = var_15_int;
	var_62_bool = var_15_int > (int)0;
	if(var_62_bool != 0) {
		var_64_bool = var_15_int > (int)1;
		if(var_64_bool != 0) {
			func_974();
		}
		var_67_object = Obj();
		var_13_bool = var_67_object;
		func_2527(var_67_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0;
	var_13_object = var_19_object;
	var_14_cvector = var_20_object;
	var_15_bool = var_21_bool;
	func_2730(var_19_object, var_20_object, var_21_bool);
	if(var_18_bool != 0) {
		var_65_int = 0; var_66_object = Obj(); var_67_bool = 0;
		var_13_object = var_66_object;
		var_15_bool = var_67_bool;
		func_2535(var_66_object, var_67_bool);
		var_65_int = var_17_int;
		var_97_bool = var_17_int > (int)0;
		if(var_97_bool != 0) {
			var_99_bool = var_17_int > (int)1;
			if(var_99_bool != 0) {
				func_974();
			}
			var_102_object = Obj();
			var_13_object = var_102_object;
			func_2545(var_102_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_object = Obj();
	var_13_bool = var_17_object;
	func_2619(var_17_object);
	var_16_int = var_15_int;
	var_19_bool = var_15_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_15_int > (int)1;
		if(var_21_bool != 0) {
			func_974();
		}
		var_13_bool = Obj();
		func_2622();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_13_cvector = var_18_object;
	var_14_bool = var_19_string;
	func_2348(var_17_bool, var_18_object, var_19_string);
	if(var_17_bool != 0) {
		func_974();
		var_49_object = Obj(); var_50_string = "";
		var_13_cvector = var_49_object;
		var_14_bool = var_50_string;
		func_2380(var_49_object, var_50_string);
	} else {
		var_133_int = 0; var_134_string = ""; var_135_object = Obj();
		var_14_bool = var_134_string;
		var_13_cvector = var_135_object;
		func_2624(var_135_object);
		var_133_int = var_16_int;
		var_137_bool = var_16_int > (int)0;
		if(var_137_bool == 0) goto Label_959;
		var_139_bool = var_16_int > (int)1;
		if(var_139_bool != 0) {
			func_974();
		}
		var_140_string = ""; var_141_object = Obj();
		var_14_bool = var_140_string;
		var_13_cvector = var_141_object;
		func_2627();
	}
Label_959:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_string = "";
	var_13_bool = var_15_string;
	func_2447(var_14_bool, var_15_string);
	if(var_14_bool != 0) {
		func_974();
		var_25_string = "";
		var_13_bool = var_25_string;
		func_2463(var_25_string);
	}
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_974();
	var_13_bool = Obj();
	func_2324();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
	var_19_bool = var_13_bool != (int)111;
	if(var_19_bool != 0) {
		return 4;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_0_bool;
	func_1731(var_20_bool, var_21_object);
	var_54_bool = var_20_bool == 0; //@nz
	if(var_54_bool != 0) {
		func_974();
		return 4;
	}
	GetDirection(var_16_cvector);
	var_57_cvector = CVector(0,0,0); var_58_object = Obj();
	var_58_object = var_0_bool;
	func_1658(var_57_cvector, var_58_object);
	var_57_cvector = var_17_cvector;
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_16_cvector = var_64_cvector;
	var_17_cvector = var_65_cvector;
	func_1992(var_63_float, var_64_cvector, var_65_cvector);
	var_88_bool = var_63_float < (float)0.4999999701976776;
	if(var_88_bool != 0) {
		var_89_object = Obj();
		var_89_object = var_0_bool;
		func_1881(var_89_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_974();
	func_2638();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_bool = var_15_object;
	func_2405(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		func_974();
		var_28_object = Obj();
		var_13_bool = var_28_object;
		func_2428(var_28_object);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_1240(var_12_bool);
	func_2638();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_bool != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_bool == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_1085(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_1256((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_1239;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_1653(var_85_cvector);
		var_1_bool = var_85_cvector + var_20_cvector;
	}
Label_1239:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1240(var_13_bool);
	var_13_bool = Obj();
	func_2324();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_bool != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_bool == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_1272(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_1443((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_1426;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_1653(var_85_cvector);
		var_1_bool = var_85_cvector + var_20_cvector;
	}
Label_1426:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_1427(var_13_bool);
	var_13_bool = Obj();
	func_2324();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	func_1621(var_12_bool);
	func_2638();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_int != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_bool == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_1466(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_1637((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_1620;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_1653(var_85_cvector);
		var_1_bool = var_85_cvector + var_20_cvector;
	}
Label_1620:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_1621(var_13_object);
	var_13_object = Obj();
	func_2324();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0;
	var_18_bool = var_14_string == "health";
	if(var_18_bool != 0) {
		GetProperty("health", var_16_float);
		var_21_bool = var_16_float <= (int)0;
		if(var_21_bool != 0) {
			SignalDeath(var_13_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_2303(var_14_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1799(var_17_object, var_18_int, var_19_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_13_object = var_19_object;
	var_14_int = var_20_int;
	var_15_float = var_21_float;
	var_17_cvector = var_22_cvector;
	var_18_cvector = var_23_cvector;
	func_1867(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	SensePlayerOnly((bool)1);
	func_2696();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_11_cvector, var_12_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_15_object)
{
	EventDisable(0);
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_33(var_16_object);
	var_96_object = Obj();
	var_15_object = var_96_object;
	func_2739(var_96_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_2051(var_21_int, var_22_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_36_bool = var_21_int > var_22_int;
	if(var_36_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_34_int = 0;
	var_38_bool = var_21_int != var_22_int;
	if(var_38_bool != 0) {
		var_39_int = var_22_int - var_21_int;
		irand(var_34_int, var_39_int);
	} else {
		var_48_bool = var_21_int == (int)0;
		if(var_48_bool == 0) goto Label_2069;
		return 4;
	}
Label_2069:
	var_34_int = var_34_int + var_21_int;
	var_41_bool = var_34_int == (int)0;
	if(var_41_bool != 0) {
		return 4;
	}
	var_42_int = 0; var_43_string = "";
	func_2298(var_42_int, "Money");
	AddItem(var_35_bool, var_42_int, (int)0, var_34_int);
	return 4;
	
}


func_517(var_158_bool)
{
	var_158_bool = 0;
	return 0;
}


func_519(var_152_object, var_153_cvector)
{
	var_154_object = Obj(); var_155_object = Obj();
	FindShiftedPathTo(var_155_object, var_153_cvector);
	var_155_object = var_152_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1050(var_68_object)
{
	Face(var_68_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_78_object = Obj();
	var_68_object = var_78_object;
	func_1115(var_70_cvector, var_71_bool, var_68_object, var_78_object);
	return 0;
}


func_33(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = var_16_object == 0; //@ne
	if(var_37_bool != 0) {
		var_38_string = "";
		func_124("fdie");
	} else {
		@@var_16_object:GetPosition(var_27_cvector);
		GetPosition(var_28_cvector);
		GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_72_float = var_70_float * var_71_float;
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		var_75_float = var_73_float * var_74_float;
		var_76_int = var_72_float + var_75_float;
		var_78_bool = var_76_int >= (int)0;
		if(var_78_bool != 0) {
			var_31_string = "fdie";
		} else {
				var_31_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", (int)2);
		if(var_81_bool != 0) {
			@@var_16_object:HasScriptProperty(var_33_bool, "Owner");
			var_83_bool = var_33_bool;
			if(var_83_bool != 0) {
				@@var_16_object:GetScriptProperty(var_32_object, "Owner");
				var_85_bool = var_32_object == 0; //@ne
				if(var_85_bool != 0) {
					var_16_object = var_32_object;
				}
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", (int)1);
		if(var_88_bool != 0) {
			@@var_32_object:GetEyesHeight(var_35_float);
			var_36_cvector = CVector(0.0, 0.0, 0.0);
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = 1;
		} else {
			var_34_bool = 0;

		}
		var_91_string = "";
		var_31_string = var_91_string;
		func_1908(var_91_string);
		PlayAnimation("all", var_31_string);
		WaitForAnimEnd();
		var_93_bool = var_34_bool;
		if(var_93_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_31_string);
		RemoveEnvelope();
		var_32_object = 0;
	}
	return 20;
	
}


func_2082(var_226_string)
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


func_2099()
{
	var_220_int = 0;
	func_2018(var_220_int);
	var_225_bool = var_220_int != (int)1;
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_string = "";
	func_2082("liver");
	var_237_string = "";
	func_2082("kidney");
	var_238_string = "";
	func_2082("heart");
	var_239_string = "";
	func_2082("blood");
	return 0;
}


func_2619(var_16_int)
{
	var_16_int = 0;
	return 0;
}


func_1085(var_0_bool, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_bool:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1955(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1955(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_2622()
{
	return 0;
}


func_2624(var_133_int)
{
	var_133_int = 0;
	return 0;
}


func_2627()
{
	return 0;
}


func_2629(var_16_int)
{
	var_16_int = 2;
	return 0;
}


func_2632(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_2704(var_25_object);
	return 0;
}


func_2123(var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_20_bool = var_15_bool;
	if(var_20_bool != 0) {
		var_21_int = 0; var_22_int = 0;
		var_24_int = 0;
		func_2009(var_24_int);
		var_31_float = var_24_int * (int)100;
		var_22_int = (int)100 + var_31_float;
		func_2051((int)0, var_22_int);
		irand(var_18_int, (int)8);
		var_51_bool = var_18_int == (int)0;
		if(var_51_bool != 0) {
			var_52_int = 0; var_53_string = "";
			func_2298(var_52_int, "lemon");
			AddItem(var_19_bool, var_52_int, (int)0, (int)1);
		} else {
			var_57_bool = var_18_int == (int)1;
			if(var_57_bool != 0) {
				var_58_int = 0; var_59_string = "";
				func_2298(var_58_int, "rusk");
				AddItem(var_19_bool, var_58_int, (int)0, (int)1);
				goto Label_2211;
			}
			var_63_bool = var_18_int == (int)2;
			if(var_63_bool != 0) {
				var_64_int = 0; var_65_string = "";
				func_2298(var_64_int, "hook");
				AddItem(var_19_bool, var_64_int, (int)0, (int)1);
				goto Label_2211;
			}
			var_69_bool = var_18_int == (int)4;
			if(var_69_bool != 0) {
				var_70_int = 0; var_71_string = "";
				func_2298(var_70_int, "syringe");
				AddItem(var_19_bool, var_70_int, (int)0, (int)1);
				goto Label_2211;
			}
			var_75_bool = var_18_int == (int)5;
			if(var_75_bool != 0) {
				var_76_int = 0; var_77_string = "";
				func_2298(var_76_int, "watch");
				AddItem(var_19_bool, var_76_int, (int)0, (int)1);
				goto Label_2211;
			}
			var_81_bool = var_18_int == (int)6;
			if(var_81_bool == 0) goto Label_2211;
			var_82_int = 0; var_83_string = "";
			func_2298(var_82_int, "razor");
			AddItem(var_19_bool, var_82_int, (int)0, (int)1);
	}
		var_86_int = 0; var_87_int = 0;
		var_89_int = 0;
		func_2009(var_89_int);
		var_91_float = var_89_int * (int)50;
		var_87_int = (int)50 + var_91_float;
		func_2051((int)0, var_87_int);
		irand(var_18_int, (int)7);
		var_94_bool = var_18_int == (int)0;
		if(var_94_bool != 0) {
			var_95_int = 0; var_96_string = "";
			func_2298(var_95_int, "beads");
			AddItem(var_19_bool, var_95_int, (int)0, (int)1);
			goto Label_2297;
		}
		var_100_bool = var_18_int == (int)1;
		if(var_100_bool != 0) {
			var_101_int = 0; var_102_string = "";
			func_2298(var_101_int, "bracelet");
			AddItem(var_19_bool, var_101_int, (int)0, (int)1);
			goto Label_2297;
		}
		var_106_bool = var_18_int == (int)2;
		if(var_106_bool != 0) {
			var_107_int = 0; var_108_string = "";
			func_2298(var_107_int, "ear_ring");
			AddItem(var_19_bool, var_107_int, (int)0, (int)1);
			goto Label_2297;
		}
		var_112_bool = var_18_int == (int)3;
		if(var_112_bool != 0) {
			var_113_int = 0; var_114_string = "";
			func_2298(var_113_int, "gold_ring");
			AddItem(var_19_bool, var_113_int, (int)0, (int)1);
			goto Label_2297;
		}
		var_118_bool = var_18_int == (int)4;
		if(var_118_bool != 0) {
			var_119_int = 0; var_120_string = "";
			func_2298(var_119_int, "silver_ring");
			AddItem(var_19_bool, var_119_int, (int)0, (int)1);
			goto Label_2297;
		}
		var_124_bool = var_18_int == (int)5;
		if(var_124_bool == 0) goto Label_2297;
		var_125_int = 0; var_126_string = "";
		func_2298(var_125_int, "flower");
		AddItem(var_19_bool, var_125_int, (int)0, (int)1);
	}
Label_2211:
	goto Label_2297;
	
Label_2297:
	return 4;
	
}


func_2638()
{
	return 0;
}


func_2639(var_19_bool)
{
	var_19_bool = 0;
	return 0;
}


func_2642()
{
	return 0;
}


func_2644(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	CanSee(var_29_bool, var_27_object);
	var_26_bool = 1;
	var_30_bool = var_29_bool;
	if(var_30_bool != 1) {
		var_31_float = 0; var_32_object = Obj();
		var_27_object = var_32_object;
		func_1665(var_31_float, var_32_object);
		var_40_bool = var_31_float <= (int)4000000;
		if(var_40_bool != 1) {
			var_26_bool = 0;
		}
	}
	return 2;
}


func_1621(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1115(var_0_bool, var_1_bool, var_2_bool, var_78_object)
{
	var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0;
	var_0_bool = var_78_object;
	var_89_cvector = CVector(0,0,0); var_90_float = 0;
	func_1085(var_88_float, var_89_cvector, (float)1.7453293800354004);
	var_89_cvector = var_84_cvector;
	var_85_float = var_84_cvector | var_84_cvector;
	var_120_bool = var_85_float < (float)2500.0;
	if(var_120_bool != 0) {
		var_121_cvector = CVector(0,0,0); var_122_float = 0;
		func_1085(var_88_float, var_121_cvector, (float)2.6179938316345215);
		var_121_cvector = var_84_cvector;
		var_85_float = var_84_cvector | var_84_cvector;
		var_124_bool = var_85_float < (float)2500.0;
		if(var_124_bool != 0) {
			var_126_float = sqrt(var_85_float);
			var_127_int = "Can't retreat, distance: " + var_126_float;
			Trace(var_127_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_129_float = GetByIndex(var_84_cvector, 0);
	var_130_float = GetByIndex(var_84_cvector, 2);
	Rotate(var_129_float, var_130_float);
	var_131_cvector = CVector(0,0,0);
	func_1653(var_131_cvector);
	var_1_bool = var_131_cvector + var_84_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1157:
	MovePoint(var_1_bool, (int)1, var_86_bool);
	var_137_bool = var_86_bool;
	if(var_137_bool != 0) {
		var_138_bool = var_0_bool == 0; //@ne
		if(var_138_bool != 0) {
			goto Label_1187;
		EMIT "GOTO 0x4a1";

		Label_1187:
			return 10;
		}
		var_139_cvector = CVector(0,0,0); var_140_float = 0;
		func_1085(var_88_float, var_139_cvector, (float)2.6179938316345215);
		var_139_cvector = var_87_cvector;
		var_88_float = var_87_cvector | var_87_cvector;
		var_142_bool = var_88_float >= (float)2500.0;
		if(var_142_bool != 0) {
			var_143_cvector = CVector(0,0,0);
			func_1653(var_143_cvector);
			var_1_bool = var_143_cvector + var_87_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1187;
		}
	}
	var_146_bool = var_2_bool == 0; //@nz
	if(var_146_bool == 1) goto Label_1157;
	
}


func_2659(var_56_object)
{
	var_57_object = Obj();
	var_56_object = var_57_object;
	TaskCall(6);
	func_1496(var_58_object, var_59_cvector, var_60_bool, var_57_object);
	TaskReturn();
	return 0;
}


func_1637(var_0_bool, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1658(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_2667(var_43_bool, var_44_object)
{
	var_45_bool = 0; var_46_object = Obj();
	var_44_object = var_46_object;
	func_2644(var_45_bool, var_46_object);
	var_45_bool = var_43_bool;
	return 0;
}


func_2674(var_131_object)
{
	var_132_object = Obj();
	var_131_object = var_132_object;
	func_2659(var_132_object);
	return 0;
}


func_1653(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
	return 2;
}


func_2680(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_1658(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_2683()
{
	return 0;
}


func_124(var_38_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_39_string = "";
	var_38_string = var_39_string;
	func_1908(var_39_string);
	PlayAnimation("all", var_38_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_38_string);
	RemoveEnvelope();
	return 0;
}


func_2685()
{
	var_37_object = Obj(); var_38_object = Obj();
	GetActiveScene(var_38_object);
	var_40_object = Obj();
	func_1949(var_40_object);
	BroadcastMessage("killme", var_40_object, var_38_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1665(var_31_float, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	GetPosition(var_36_cvector);
	@@var_32_object:GetPosition(var_37_cvector);
	var_38_cvector = var_37_cvector - var_36_cvector;
	var_31_float = var_38_cvector | var_38_cvector;
	return 6;
}


func_2696()
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_15_bool = 0;
	func_2123((bool)0);
	return 0;
}


func_1673(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_bool = 0;
	IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
	return 2;
}


func_1678(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0;
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", (int)2);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	@@var_43_object:HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
	return 2;
}


func_2704(var_25_object)
{
	var_26_bool = 0; var_27_bool = 0;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		IsOverrideActive(var_27_bool);
		var_29_bool = var_27_bool == 0; //@nz
		if(var_29_bool != 0) {
			var_30_object = Obj();
			var_25_object = var_30_object;
			func_2038(var_30_object);
		}
		return 2;
	EMIT "GOTO 0xaa0";
	}
	func_2685();
	return 2;
}


func_1690(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	@@var_36_object:IsDead(var_38_bool);
	var_38_bool = var_35_bool;
	return 2;
}


func_1695(var_24_bool, var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	var_30_bool = var_25_object == 0; //@ne
	if(var_30_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_31_bool = 0;
	var_31_bool = 0;
	var_34_bool = IsFuncExist(var_25_object, "IsDead", (int)1);
	if(var_34_bool != 0) {
		var_35_bool = 0; var_36_object = Obj();
		var_25_object = var_36_object;
		func_1690(var_35_bool, var_36_object);
		if(var_35_bool != 0) {
			var_31_bool = 1;
		}
	}
	if(var_31_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	GetScene(var_28_object);
	var_39_bool = var_28_object == 0; //@ne
	if(var_39_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	@@var_25_object:GetScene(var_29_object);
	var_40_bool = var_28_object != var_29_object;
	if(var_40_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_24_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2721(var_58_bool)
{
	func_2685();
	var_65_float = 0;
	func_2024(var_65_float);
	var_58_bool = var_65_float > (float)0.699999988079071;
	return 0;
}


func_2730(var_18_bool, var_19_object, var_20_object)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_float = 0;
	var_19_object = var_23_object;
	var_20_object = var_24_object;
	func_2553(var_22_bool, var_23_object, var_24_object, (float)500.0);
	var_22_bool = var_18_bool;
	return 0;
}


func_171()
{
	var_129_bool = 0;
	func_1892(var_129_bool);
	var_132_bool = var_129_bool == 0; //@nz
	if(var_132_bool != 0) {
		func_2638();
	}
	return 0;
}


func_689()
{
	var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_bool = 0; var_165_float = 0; var_166_bool = 0; var_167_int = 0; var_168_int = 0; var_169_int = 0; var_170_int = 0; var_171_bool = 0; var_172_float = 0; var_173_bool = 0;
	WaitForAnimEnd();
	var_174_bool = 0;
	func_1892(var_174_bool);
	var_175_bool = var_174_bool == 0; //@nz
	if(var_175_bool != 0) {
		return 14;
	}
	func_2483((int)0);
	var_176_int = var_167_int;
	var_168_int = 0;
	
Label_703:
	var_189_bool = 0;
	var_189_bool = 0;
	var_191_bool = var_168_int < (int)5;
	if(var_191_bool != 0) {
		var_192_bool = 0;
		func_1892(var_192_bool);
		if(var_192_bool != 0) {
			var_189_bool = 1;
		}
	}
	if(var_189_bool != 0) {
		irand(var_169_int, (int)3);
		var_195_bool = var_169_int == (int)0;
		if(var_195_bool != 0) {
			var_196_int = var_167_int;
			if(var_196_int == 0) goto Label_736;
			irand(var_170_int, var_167_int);
			var_198_string = ""; var_199_int = 0;
			var_170_int = var_199_int;
			func_2476(var_198_string, var_199_int);
			PlayAnimation("all", var_198_string);
			WaitForAnimEnd(var_171_bool);
			var_200_bool = var_171_bool == 0; //@nz
			if(var_200_bool != 0) {
			} else {
		} else {
				var_205_bool = var_169_int == (int)1;
				if(var_205_bool != 0) {
					rand(var_172_float, (int)4);
					var_208_int = var_172_float + (int)1;
					Sleep(var_208_int, var_173_bool);
					var_209_bool = var_173_bool == 0; //@nz
					if(var_209_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_210_int = var_168_int;
				if(var_210_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_201_bool = 0;
			func_768(var_201_bool);
			var_202_bool = var_201_bool == 0; //@nz
			if(var_202_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_168_int = var_168_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_2739(var_96_object)
{
	var_97_bool = 0; var_98_object = Obj();
	var_96_object = var_98_object;
	func_1673(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		var_101_object = Obj();
		func_1949(var_101_object);
		ReportReputationChange(var_96_object, var_101_object, (float)-0.10000000149011612, (bool)1);
		var_106_bool = 0;
		func_2123((bool)0);
	}
	func_2099();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1731(var_20_bool, var_21_object)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_21_object = var_25_object;
	func_1695(var_24_bool, var_25_object);
	var_41_bool = var_24_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_21_object = var_43_object;
	func_1678(var_42_bool, var_43_object, "noaccess");
	var_51_bool = var_42_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_20_bool = 1;
		return 2;
	}
	@@var_21_object:GetProperty("noaccess", var_23_int);
	var_20_bool = var_23_int == (int)0;
	return 2;
}


func_1240(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1755(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = "";
	var_45_bool = var_30_object == 0; //@ne
	if(var_45_bool != 0) {
		return 14;
	}
	IsDead(var_38_bool);
	var_46_bool = var_38_bool;
	if(var_46_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_39_int);
	var_48_bool = var_39_int < (int)0;
	if(var_48_bool != 0) {
		return 14;
	}
	@@var_30_object:GetPosition(var_40_cvector);
	GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_44_string = "fhit";
	} else {
		var_44_string = "bhit";
	}
	var_60_int = var_44_string + "1";
	var_62_int = var_44_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 14;
	
}


func_1256(var_0_bool, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1658(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_1272(var_0_bool, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_bool:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1955(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1955(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_2298(var_42_int, var_43_string)
{
	var_44_int = 0; var_45_int = 0;
	GetInvItemByName(var_45_int, var_43_string);
	var_45_int = var_42_int;
	return 2;
}


func_2303(var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
	return 0;
}


func_768(var_201_bool)
{
	var_201_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1799(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_object = var_17_object;
	if(var_40_object != 0) {
		var_42_bool = var_18_int != (int)4;
		if(var_42_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
		var_47_cvector = CVector(0,0,0); var_48_object = Obj();
		var_17_object = var_48_object;
		func_1658(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1955(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_1828:
		var_59_int = "hit" + var_31_int;
		GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector);
		var_60_bool = var_32_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_108_int = var_34_cvector | var_29_cvector;
			var_110_bool = var_108_int >= (float)0.7071067690849304;
			if(var_110_bool != 0) {
				@@var_30_object:add(var_33_cvector);
			}
			var_31_int = var_31_int + (int)1;
			goto Label_1828;
		}
		@@var_30_object:size(var_35_int);
		var_61_int = var_35_int;
		if(var_61_int != 0) {
			irand(var_36_int, var_35_int);
			@@var_30_object:get(var_37_cvector, var_36_int);
			var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
			var_17_object = var_62_object;
			var_18_int = var_63_int;
			var_19_float = var_64_float;
			var_37_cvector = var_65_cvector;
			var_66_cvector = -var_29_cvector;
			func_1867(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_1755(var_107_object);
	return 18;
	
}


func_775(var_0_bool, var_80_object)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0;
	var_0_bool = var_80_object;
	func_826(var_87_bool);
	GetDirection(var_85_cvector);
	var_95_cvector = CVector(0,0,0); var_96_object = Obj();
	var_96_object = var_0_bool;
	func_1658(var_95_cvector, var_96_object);
	var_95_cvector = var_86_cvector;
	var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	var_85_cvector = var_102_cvector;
	var_86_cvector = var_103_cvector;
	func_1992(var_101_float, var_102_cvector, var_103_cvector);
	var_126_bool = var_101_float < (int)0;
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_127_object = var_0_bool;
		func_1881(var_127_object);
		var_87_bool = 1;
	} else {
		Sleep((float)1.5, var_87_bool);
	}
	var_136_bool = var_87_bool;
	if(var_136_bool != 0) {
		var_137_object = Obj();
		var_137_object = var_0_bool;
		func_1881(var_137_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1302(var_0_bool, var_1_bool, var_2_bool, var_103_object)
{
	var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_float = 0; var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0;
	var_0_bool = var_103_object;
	var_117_cvector = CVector(0,0,0); var_118_float = 0;
	func_1272(var_116_float, var_117_cvector, (float)1.7453293800354004);
	var_117_cvector = var_112_cvector;
	var_113_float = var_112_cvector | var_112_cvector;
	var_148_bool = var_113_float < (float)2500.0;
	if(var_148_bool != 0) {
		var_149_cvector = CVector(0,0,0); var_150_float = 0;
		func_1272(var_116_float, var_149_cvector, (float)2.6179938316345215);
		var_149_cvector = var_112_cvector;
		var_113_float = var_112_cvector | var_112_cvector;
		var_152_bool = var_113_float < (float)2500.0;
		if(var_152_bool != 0) {
			var_154_float = sqrt(var_113_float);
			var_155_int = "Can't retreat, distance: " + var_154_float;
			Trace(var_155_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_157_float = GetByIndex(var_112_cvector, 0);
	var_158_float = GetByIndex(var_112_cvector, 2);
	Rotate(var_157_float, var_158_float);
	var_159_cvector = CVector(0,0,0);
	func_1653(var_159_cvector);
	var_1_bool = var_159_cvector + var_112_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1344:
	MovePoint(var_1_bool, (int)1, var_114_bool);
	var_165_bool = var_114_bool;
	if(var_165_bool != 0) {
		var_166_bool = var_0_bool == 0; //@ne
		if(var_166_bool != 0) {
			goto Label_1374;
		EMIT "GOTO 0x55c";

		Label_1374:
			return 10;
		}
		var_167_cvector = CVector(0,0,0); var_168_float = 0;
		func_1272(var_116_float, var_167_cvector, (float)2.6179938316345215);
		var_167_cvector = var_115_cvector;
		var_116_float = var_115_cvector | var_115_cvector;
		var_170_bool = var_116_float >= (float)2500.0;
		if(var_170_bool != 0) {
			var_171_cvector = CVector(0,0,0);
			func_1653(var_171_cvector);
			var_1_bool = var_171_cvector + var_115_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1374;
		}
	}
	var_174_bool = var_2_bool == 0; //@nz
	if(var_174_bool == 1) goto Label_1344;
	
}


func_2348(var_17_bool, var_18_object, var_19_string)
{
	var_21_bool = var_19_string == "unholster";
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_18_object = var_23_object;
		func_2639(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x94a";
	}
	var_25_bool = var_19_string == "player_shot";
	if(var_25_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_18_object = var_27_object;
		func_2644(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x94a";
	}
	var_42_bool = var_19_string == "battle";
	if(var_42_bool != 0) {
		var_43_bool = 0; var_44_object = Obj();
		var_18_object = var_44_object;
		func_2667(var_43_bool, var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = 0;
	return 0;
}


func_826(var_0_bool)
{
	var_88_object = Obj();
	var_88_object = var_0_bool;
	func_1897(var_88_object);
	return 0;
}


func_1867(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_1755(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2380(var_49_object, var_50_string)
{
	var_52_bool = var_50_string == "unholster";
	if(var_52_bool != 0) {
		var_49_object = Obj();
		func_2642();
	} else {
		var_55_bool = var_50_string == "player_shot";
		if(var_55_bool != 0) {
			var_56_object = Obj();
			var_49_object = var_56_object;
			func_2659(var_56_object);
			goto Label_2404;
		}
		var_130_bool = var_50_string == "battle";
		if(var_130_bool == 0) goto Label_2404;
		var_131_object = Obj();
		var_49_object = var_131_object;
		func_2674(var_131_object);
	}
Label_2404:
	return 0;
	
}


func_1881(var_89_object)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0);
	@@var_89_object:GetPosition(var_93_cvector);
	GetPosition(var_94_cvector);
	var_95_cvector = var_93_cvector - var_94_cvector;
	var_96_float = GetByIndex(var_95_cvector, 0);
	var_97_float = GetByIndex(var_95_cvector, 2);
	RotateAsync(var_96_float, var_97_float);
	return 6;
}


func_1892(var_129_bool)
{
	var_130_bool = 0; var_131_bool = 0;
	IsLoaded(var_131_bool);
	var_131_bool = var_129_bool;
	return 2;
}


func_2405(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_15_object = var_20_object;
	func_2639(var_20_object);
	if(var_19_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_15_object = var_22_object;
		func_1673(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		@@var_15_object:IsWeaponHolstered(var_17_bool);
		var_25_bool = var_17_bool == 0; //@nz
		if(var_25_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


func_1897(var_88_object)
{
	var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0);
	@@var_88_object:GetEyesHeight(var_91_float);
	var_92_cvector = CVector(0.0, 0.0, 0.0);
	var_93_float = GetByIndex(var_92_cvector, 1);
	var_91_float = var_93_float;
	SetByIndex(var_92_cvector, 1) = var_93_float;
	LookAsync(var_88_object, "head", var_92_cvector);
	return 4;
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_12_cvector, var_13_bool);
	return 0;
}


func_1908(var_39_string)
{
	var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	IsExisting3DSound(var_48_bool, var_39_string);
	var_56_bool = var_48_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_49_int = 0;

	Label_1914:
		var_58_int = var_49_int + (int)1;
		var_59_int = var_39_string + var_58_int;
		IsExisting3DSound(var_50_bool, var_59_int);
		var_60_bool = var_50_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_49_int = var_49_int + (int)1;
			goto Label_1914;
		}
		var_61_bool = var_49_int == 0; //@nz
		if(var_61_bool != 0) {
			return 16;
		}
		irand(var_51_int, var_49_int);
		var_63_int = var_51_int + (int)1;
		var_39_string = var_39_string + var_63_int;
	}
	Is3DSoundLoaded(var_52_bool, var_39_string);
	var_64_bool = var_52_bool;
	if(var_64_bool != 0) {
		GetEyesHeight(var_53_float);
		GetDirection(var_54_cvector);
		var_55_cvector = var_54_cvector * (int)50;
		var_66_float = GetByIndex(var_55_cvector, 1);
		var_66_float = var_66_float + var_53_float;
		SetByIndex(var_55_cvector, 1) = var_66_float;
		PlayGlobalSound(var_39_string, var_55_cvector);
	}
	return 16;
	
}


func_375(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
	return 0;
}


func_2428(var_28_object)
{
	var_28_object = Obj();
	func_2642();
	return 0;
}


func_2434(var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1673(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_object = Obj();
		func_1949(var_21_object);
		ReportReputationChange(var_16_object, var_21_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_392(var_2_bool, var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_14_object = var_20_object;
	func_1731(var_19_bool, var_20_object);
	var_53_bool = var_19_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 4;
	}
	var_54_bool = var_2_bool;
	if(var_54_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_14_object, var_17_bool);
	var_55_bool = var_17_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 4;
	}
	var_56_int = 0; var_57_object = Obj();
	var_14_object = var_57_object;
	func_2500(var_57_object);
	var_56_int = var_18_int;
	var_75_bool = var_18_int > (int)0;
	if(var_75_bool != 0) {
		var_77_bool = var_18_int > (int)1;
		if(var_77_bool != 0) {
			func_375(var_18_int);
		}
		var_79_object = Obj();
		var_14_object = var_79_object;
		func_2509(var_79_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2447(var_14_bool, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj();
	var_19_bool = var_15_string == "heal";
	if(var_19_bool != 0) {
		FindActor(var_17_object, "player");
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_2680(var_22_object);
		var_21_bool = var_14_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = 0;
	return 2;
}


func_1427(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1949(var_101_object)
{
	var_102_object = Obj(); var_103_object = Obj();
	self(var_103_object);
	var_103_object = var_101_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2463(var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	var_29_bool = var_25_string == "heal";
	if(var_29_bool != 0) {
		FindActor(var_27_object, "player");
		var_27_object = Obj();
		func_2683();
		var_27_object = 0;
	}
	return 2;
}


func_1955(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_54_float;
	return 2;
}


func_1443(var_0_bool, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1658(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


func_2476(var_182_string, var_183_int)
{
	var_184_string = ""; var_185_string = "";
	var_186_int = var_183_int;
	if(var_186_int != 0) {
		"idle" = "idle" + var_183_int;
	}
	var_185_string = var_182_string;
	return 2;
}


func_1965(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector;
	var_80_int = var_77_cvector | var_77_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_float = var_80_int * var_81_int;
	var_83_float = sqrt(var_82_float);
	var_76_float = var_79_int / var_83_float;
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_object = Obj(); var_138_bool = 0; var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_object = Obj(); var_144_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_139_float, (float)0.5);
	Sleep(var_139_float);
	
Label_440:
	var_146_bool = var_0_bool == 0; //@nz
	if(var_146_bool != 0) {
		var_147_bool = var_1_bool == 0; //@nz
		if(var_147_bool != 0) {

		Label_444:
			GetPosition(var_141_cvector);
			var_148_float = 0;
			func_491(var_148_float);
			GetRandomPFPointInCircle(var_140_cvector, var_141_cvector, var_148_float, var_142_bool);
			var_151_bool = var_142_bool;
			if(var_151_bool != 0) {
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
	var_152_object = Obj(); var_153_cvector = CVector(0,0,0);
	var_140_cvector = var_153_cvector;
	func_519(var_152_object, var_153_cvector);
	var_152_object = var_143_object;
	var_156_bool = var_143_object != 0; //@nn
	if(var_156_bool != 0) {
		RotatePath(var_143_object, var_144_bool);
		var_157_bool = var_144_bool;
		if(var_157_bool != 0) {
			var_158_bool = 0;
			func_517(var_158_bool);
			FollowPath(var_143_object, var_158_bool, var_144_bool);
			var_143_object = 0;
			var_159_bool = var_144_bool;
			if(var_159_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_143_object = 0;
	goto Label_440;
	
}


func_2483(var_176_int)
{
	var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_bool = 0;
	var_179_int = 0;
	
Label_2485:
	var_182_string = ""; var_183_int = 0;
	var_179_int = var_183_int;
	func_2476(var_182_string, var_183_int);
	HasAnimation(var_180_bool, "all", var_182_string);
	var_187_bool = var_180_bool == 0; //@nz
	if(var_187_bool != 0) {
	} else {
		var_179_int = var_179_int + (int)1;
		goto Label_2485;
	}
	var_179_int = var_176_int;
	return 4;
	
}


func_1973(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = GetByIndex(var_68_cvector, 0);
	var_71_float = var_69_float * var_70_float;
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = GetByIndex(var_68_cvector, 2);
	var_74_float = var_72_float * var_73_float;
	var_66_float = var_71_float + var_74_float;
	return 0;
}


func_1466(var_0_bool, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_bool:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1955(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1955(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_1982(var_75_float, var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = var_77_float * var_78_float;
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = var_80_float * var_81_float;
	var_83_int = var_79_float + var_82_float;
	var_75_float = sqrt(var_83_int);
	return 0;
}


func_2500(var_56_int)
{
	var_58_bool = 0;
	func_2721(var_58_bool);
	if(var_58_bool != 0) {
		var_56_int = 2;
	} else {
		var_56_int = 0;
	}
	return 0;
	
}


func_1992(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	var_64_cvector = var_67_cvector;
	var_65_cvector = var_68_cvector;
	func_1973(var_66_float, var_67_cvector, var_68_cvector);
	var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_64_cvector = var_76_cvector;
	func_1982(var_75_float, var_76_cvector);
	var_84_float = 0; var_85_cvector = CVector(0,0,0);
	var_65_cvector = var_85_cvector;
	func_1982(var_84_float, var_85_cvector);
	var_86_float = var_75_float * var_84_float;
	var_63_float = var_66_float / var_86_float;
	return 0;
}


func_2509(var_79_object)
{
	var_80_object = Obj();
	var_79_object = var_80_object;
	TaskCall(3);
	func_775(var_81_object, var_80_object);
	TaskReturn();
	return 0;
}


func_974()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2517(var_25_int, var_26_object)
{
	var_27_bool = 0; var_28_object = Obj();
	var_26_object = var_28_object;
	func_1731(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		var_25_int = 2;
	} else {
		var_25_int = 0;
	}
	return 0;
	
}


func_1496(var_0_bool, var_1_bool, var_2_bool, var_57_object)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_float = 0;
	var_0_bool = var_57_object;
	var_71_cvector = CVector(0,0,0); var_72_float = 0;
	func_1466(var_70_float, var_71_cvector, (float)1.7453293800354004);
	var_71_cvector = var_66_cvector;
	var_67_float = var_66_cvector | var_66_cvector;
	var_102_bool = var_67_float < (float)2500.0;
	if(var_102_bool != 0) {
		var_103_cvector = CVector(0,0,0); var_104_float = 0;
		func_1466(var_70_float, var_103_cvector, (float)2.6179938316345215);
		var_103_cvector = var_66_cvector;
		var_67_float = var_66_cvector | var_66_cvector;
		var_106_bool = var_67_float < (float)2500.0;
		if(var_106_bool != 0) {
			var_108_float = sqrt(var_67_float);
			var_109_int = "Can't retreat, distance: " + var_108_float;
			Trace(var_109_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_111_float = GetByIndex(var_66_cvector, 0);
	var_112_float = GetByIndex(var_66_cvector, 2);
	Rotate(var_111_float, var_112_float);
	var_113_cvector = CVector(0,0,0);
	func_1653(var_113_cvector);
	var_1_bool = var_113_cvector + var_66_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1538:
	MovePoint(var_1_bool, (int)1, var_68_bool);
	var_119_bool = var_68_bool;
	if(var_119_bool != 0) {
		var_120_bool = var_0_bool == 0; //@ne
		if(var_120_bool != 0) {
			goto Label_1568;
		EMIT "GOTO 0x61e";

		Label_1568:
			return 10;
		}
		var_121_cvector = CVector(0,0,0); var_122_float = 0;
		func_1466(var_70_float, var_121_cvector, (float)2.6179938316345215);
		var_121_cvector = var_69_cvector;
		var_70_float = var_69_cvector | var_69_cvector;
		var_124_bool = var_70_float >= (float)2500.0;
		if(var_124_bool != 0) {
			var_125_cvector = CVector(0,0,0);
			func_1653(var_125_cvector);
			var_1_bool = var_125_cvector + var_69_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1568;
		}
	}
	var_128_bool = var_2_bool == 0; //@nz
	if(var_128_bool == 1) goto Label_1538;
	
}


func_2009(var_24_int)
{
	var_25_float = 0; var_26_float = 0;
	GetGameTime(var_26_float);
	var_28_int = 0;
	var_28_int = var_26_float / (int)24;
	var_24_int = (int)1 + var_28_int;
	return 2;
}


func_2527(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(4);
	func_1050(var_68_object);
	TaskReturn();
	return 0;
}


func_2018(var_220_int)
{
	var_221_int = 0; var_222_int = 0;
	GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
	return 2;
}


func_2535(var_65_int, var_66_object)
{
	var_68_bool = 0; var_69_object = Obj();
	var_66_object = var_69_object;
	func_1731(var_68_bool, var_69_object);
	if(var_68_bool != 0) {
		var_65_int = 2;
	} else {
		var_65_int = 0;
	}
	return 0;
	
}


func_2024(var_65_float)
{
	var_66_object = Obj(); var_67_float = 0; var_68_object = Obj(); var_69_float = 0;
	FindActor(var_68_object, "player");
	var_71_bool = var_68_object == 0; //@nz
	if(var_71_bool != 0) {
		var_65_float = 0;
		return 4;
	}
	@@var_68_object:GetProperty("reputation", var_69_float);
	var_69_float = var_65_float;
	return 4;
}
EMIT "Stack[-2] = 0";


func_491(var_148_float)
{
	var_149_float = 0; var_150_float = 0;
	GetCameraFarDistance(var_150_float);
	var_150_float = var_148_float;
	return 2;
}


func_2545(var_102_object)
{
	var_103_object = Obj();
	var_102_object = var_103_object;
	TaskCall(5);
	func_1302(var_104_object, var_105_cvector, var_106_bool, var_103_object);
	TaskReturn();
	return 0;
}


func_2038(var_30_object)
{
	var_31_int = 0;
	func_2018(var_31_int);
	var_36_bool = var_31_int == (int)1;
	if(var_36_bool != 0) {
		WorkWithCorpse(var_30_object);
	} else {
		Barter(var_30_object);
	}
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


func_2553(var_22_bool, var_23_object, var_24_object, var_25_float)
{
	var_26_string = ""; var_27_bool = 0; var_28_string = ""; var_29_bool = 0;
	var_30_bool = 0; var_31_object = Obj(); var_32_string = "";
	var_24_object = var_31_object;
	func_1678(var_30_bool, var_31_object, "class");
	var_39_bool = var_30_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_24_object:GetProperty("class", var_28_string);
	var_42_bool = var_28_string == "rat";
	if(var_42_bool != 0) {
		var_22_bool = 0;
		return 4;
	EMIT "GOTO 0xa17";
	}
	var_44_bool = var_28_string == "rat_big";
	if(var_44_bool != 0) {
		var_22_bool = 0;
		return 4;
	EMIT "GOTO 0xa17";
	}
	var_46_bool = var_28_string == "dog";
	if(var_46_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	CanSee(var_29_bool, var_23_object);
	var_47_bool = 0;
	var_47_bool = 1;
	var_48_bool = var_29_bool;
	if(var_48_bool != 1) {
		var_49_float = 0; var_50_object = Obj();
		var_23_object = var_50_object;
		func_1665(var_49_float, var_50_object);
		var_57_float = var_25_float * var_25_float;
		var_58_bool = var_49_float <= var_57_float;
		if(var_58_bool != 1) {
			var_47_bool = 0;
		}
	}
	if(var_47_bool != 0) {
		var_22_bool = 1;
		return 4;
	}
	CanSee(var_29_bool, var_24_object);
	var_59_bool = 0;
	var_59_bool = 1;
	var_60_bool = var_29_bool;
	if(var_60_bool != 1) {
		var_61_float = 0; var_62_object = Obj();
		var_24_object = var_62_object;
		func_1665(var_61_float, var_62_object);
		var_63_float = var_25_float * var_25_float;
		var_64_bool = var_61_float <= var_63_float;
		if(var_64_bool != 1) {
			var_59_bool = 0;
		}
	}
	if(var_59_bool != 0) {
		var_22_bool = 1;
		return 4;
	}
	var_22_bool = 0;
	return 4;
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


