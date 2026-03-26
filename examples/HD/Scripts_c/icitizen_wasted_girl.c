// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,GetGameTime/1,GetVariable/2,WorkWithCorpse/1,Barter/1,AddItem/4,CreateInvItem/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,CanSee/2,IsOverrideActive/1,HasAnimation/3,StopAnimation/0,SetProperty/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:class|W:rat|W:rat_big|W:dog|W:Received steal|W:idle|W:ToDie
// @GLOBALS: 0:bool:
// @RUN_OP: 0x9c
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x96 vars=object,int,float,float
// @EVENT_16: op=0x98 vars=object,string
// @EVENT_41: op=0x9a vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_0: op=0xc7 vars=object
// @EVENT_17: op=0xdb vars=object
// @EVENT_30: op=0xf3 vars=object,object,bool
// @EVENT_40: op=0x10f vars=object
// @EVENT_42: op=0x123 vars=object,string
// @EVENT_26: op=0x148 vars=string
// @EVENT_1: op=0x156 vars=object
// @EVENT_3: op=0x16c vars=object
// @EVENT_7: op=0x175 vars=int
// @EVENT_6: op=0x181 vars=
// @EVENT_41: op=0x195 vars=object
// @TASK_2: vars=object params=1
// @EVENT_0: op=0x1f7 vars=object
// @EVENT_17: op=0x20b vars=object
// @EVENT_30: op=0x223 vars=object,object,bool
// @EVENT_40: op=0x23f vars=object
// @EVENT_42: op=0x253 vars=object,string
// @EVENT_26: op=0x278 vars=string
// @EVENT_41: op=0x291 vars=object
// @EVENT_7: op=0x29a vars=int
// @EVENT_6: op=0x2bd vars=
// @EVENT_1: op=0x2c4 vars=object
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_6: op=0x2ee vars=
// @EVENT_7: op=0x35c vars=int
// @EVENT_41: op=0x397 vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_7: op=0x417 vars=int
// @EVENT_41: op=0x452 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x46b vars=
// @EVENT_7: op=0x4d9 vars=int
// @EVENT_41: op=0x514 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_6: op=0x52d vars=
// @EVENT_7: op=0x59b vars=int
// @EVENT_41: op=0x5d6 vars=object
// @STANDALONE_EVENT_16: op=0x873 vars=object,string
// @STANDALONE_EVENT_41: op=0x880 vars=object
// @STANDALONE_EVENT_22: op=0x886 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x88e vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x148,0x156,0x16c,0x175,0x181,0x195,0x278,0x291,0x2bd,0x2c4,0x2d2,0x2ee,0x397,0x452,0x46b,0x514,0x52d,0x5d6,0x727,0x72f,0x738,0x742,0x762,0x86b,0x880,0x886,0x88e,0x898,0x8b8,0x8e8,0x8ee,0x918,0x921,0x929,0x933,0x93b,0x945,0x98f,0x992,0x9a9,0x9af,0x9b2,0x9b9,0x9d0,0x9d8,0x9df,0x9e5,0x9e8,0xa26,0xa36

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_int = 0; var_19_object = Obj();
	var_15_bool = var_19_object;
	func_2447(var_19_object);
	var_18_int = var_17_int;
	var_21_bool = var_17_int > (int)0;
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_15_bool = var_22_object;
		func_2450(var_22_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_2456();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_int = 0; var_19_object = Obj();
	var_15_bool = var_19_object;
	func_2447(var_19_object);
	var_18_int = var_17_int;
	var_21_bool = var_17_int > (int)0;
	if(var_21_bool != 0) {
		var_23_bool = var_17_int > (int)1;
		if(var_23_bool != 0) {
			func_392(var_17_int);
		}
		var_26_object = Obj();
		var_15_bool = var_26_object;
		func_2450(var_26_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_object = Obj();
	var_15_bool = var_18_object;
	func_2286(var_18_object);
	var_27_int = 0; var_28_object = Obj();
	var_15_bool = var_28_object;
	func_2345(var_27_int, var_28_object);
	var_27_int = var_17_int;
	var_64_bool = var_17_int > (int)0;
	if(var_64_bool != 0) {
		var_66_bool = var_17_int > (int)1;
		if(var_66_bool != 0) {
			func_392(var_17_int);
		}
		var_69_object = Obj();
		var_15_bool = var_69_object;
		func_2355(var_69_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_15_object = var_21_object;
	var_16_cvector = var_22_object;
	var_17_bool = var_23_bool;
	func_2598(var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_69_int = 0; var_70_object = Obj(); var_71_bool = 0;
		var_15_object = var_70_object;
		var_17_bool = var_71_bool;
		func_2363(var_70_object, var_71_bool);
		var_69_int = var_19_int;
		var_101_bool = var_19_int > (int)0;
		if(var_101_bool != 0) {
			var_103_bool = var_19_int > (int)1;
			if(var_103_bool != 0) {
				func_392(var_19_int);
			}
			var_106_object = Obj();
			var_15_object = var_106_object;
			func_2373(var_106_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_int = 0; var_19_object = Obj();
	var_15_bool = var_19_object;
	func_2457(var_18_int, var_19_object);
	var_18_int = var_17_int;
	var_61_bool = var_17_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_17_int > (int)1;
		if(var_63_bool != 0) {
			func_392(var_17_int);
		}
		var_66_object = Obj();
		var_15_bool = var_66_object;
		func_2473(var_66_object);
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_string = "";
	var_15_cvector = var_20_object;
	var_16_bool = var_21_string;
	func_2200(var_19_bool, var_20_object, var_21_string);
	if(var_19_bool != 0) {
		func_392(var_18_int);
		var_53_object = Obj(); var_54_string = "";
		var_15_cvector = var_53_object;
		var_16_bool = var_54_string;
		func_2232(var_53_object, var_54_string);
	} else {
		var_202_int = 0; var_203_string = ""; var_204_object = Obj();
		var_16_bool = var_203_string;
		var_15_cvector = var_204_object;
		func_2479(var_204_object);
		var_202_int = var_18_int;
		var_206_bool = var_18_int > (int)0;
		if(var_206_bool == 0) goto Label_327;
		var_208_bool = var_18_int > (int)1;
		if(var_208_bool != 0) {
			func_392(var_18_int);
		}
		var_209_string = ""; var_210_object = Obj();
		var_16_bool = var_209_string;
		var_15_cvector = var_210_object;
		func_2482();
	}
Label_327:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_string, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = 0; var_17_string = "";
	var_15_bool = var_17_string;
	func_2299(var_16_bool, var_17_string);
	if(var_16_bool != 0) {
		func_392(var_15_bool);
		var_27_string = "";
		var_15_bool = var_27_string;
		func_2315(var_27_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = var_0_bool;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_15_bool = var_18_object;
	func_2257(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		func_392(var_15_bool);
		var_33_object = Obj();
		var_15_bool = var_33_object;
		func_2280(var_33_object);
	} else {
		var_107_object = Obj();
		var_15_bool = var_107_object;
		func_414(var_15_bool, var_107_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = var_0_bool;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_object = Obj();
	var_15_bool = var_17_object;
	func_414(var_15_bool, var_17_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_17_bool = var_15_bool != (int)110;
	if(var_17_bool != 0) {
		return 0;
	}
	var_1_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_392(var_14_bool);
	func_2456();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_392(var_15_bool);
	var_15_bool = Obj();
	func_2176();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_int = 0; var_19_object = Obj();
	var_15_bool = var_19_object;
	func_2447(var_19_object);
	var_18_int = var_17_int;
	var_21_bool = var_17_int > (int)0;
	if(var_21_bool != 0) {
		var_23_bool = var_17_int > (int)1;
		if(var_23_bool != 0) {
			func_646();
		}
		var_26_object = Obj();
		var_15_bool = var_26_object;
		func_2450(var_26_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_object = Obj();
	var_15_bool = var_18_object;
	func_2286(var_18_object);
	var_27_int = 0; var_28_object = Obj();
	var_15_bool = var_28_object;
	func_2345(var_27_int, var_28_object);
	var_27_int = var_17_int;
	var_64_bool = var_17_int > (int)0;
	if(var_64_bool != 0) {
		var_66_bool = var_17_int > (int)1;
		if(var_66_bool != 0) {
			func_646();
		}
		var_69_object = Obj();
		var_15_bool = var_69_object;
		func_2355(var_69_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0;
	var_15_object = var_21_object;
	var_16_cvector = var_22_object;
	var_17_bool = var_23_bool;
	func_2598(var_21_object, var_22_object, var_23_bool);
	if(var_20_bool != 0) {
		var_69_int = 0; var_70_object = Obj(); var_71_bool = 0;
		var_15_object = var_70_object;
		var_17_bool = var_71_bool;
		func_2363(var_70_object, var_71_bool);
		var_69_int = var_19_int;
		var_101_bool = var_19_int > (int)0;
		if(var_101_bool != 0) {
			var_103_bool = var_19_int > (int)1;
			if(var_103_bool != 0) {
				func_646();
			}
			var_106_object = Obj();
			var_15_object = var_106_object;
			func_2373(var_106_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	var_18_int = 0; var_19_object = Obj();
	var_15_bool = var_19_object;
	func_2457(var_18_int, var_19_object);
	var_18_int = var_17_int;
	var_61_bool = var_17_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_17_int > (int)1;
		if(var_63_bool != 0) {
			func_646();
		}
		var_66_object = Obj();
		var_15_bool = var_66_object;
		func_2473(var_66_object);
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_string = "";
	var_15_cvector = var_20_object;
	var_16_bool = var_21_string;
	func_2200(var_19_bool, var_20_object, var_21_string);
	if(var_19_bool != 0) {
		func_646();
		var_53_object = Obj(); var_54_string = "";
		var_15_cvector = var_53_object;
		var_16_bool = var_54_string;
		func_2232(var_53_object, var_54_string);
	} else {
		var_202_int = 0; var_203_string = ""; var_204_object = Obj();
		var_16_bool = var_203_string;
		var_15_cvector = var_204_object;
		func_2479(var_204_object);
		var_202_int = var_18_int;
		var_206_bool = var_18_int > (int)0;
		if(var_206_bool == 0) goto Label_631;
		var_208_bool = var_18_int > (int)1;
		if(var_208_bool != 0) {
			func_646();
		}
		var_209_string = ""; var_210_object = Obj();
		var_16_bool = var_209_string;
		var_15_cvector = var_210_object;
		func_2482();
	}
Label_631:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = 0; var_17_string = "";
	var_15_bool = var_17_string;
	func_2299(var_16_bool, var_17_string);
	if(var_16_bool != 0) {
		func_646();
		var_27_string = "";
		var_15_bool = var_27_string;
		func_2315(var_27_string);
	}
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_646();
	var_15_bool = Obj();
	func_2176();
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	var_21_bool = var_15_bool != (int)111;
	if(var_21_bool != 0) {
		return 4;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_0_bool;
	func_1597(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		func_646();
		return 4;
	}
	GetDirection(var_18_cvector);
	var_59_cvector = CVector(0,0,0); var_60_object = Obj();
	var_60_object = var_0_bool;
	func_1524(var_59_cvector, var_60_object);
	var_59_cvector = var_19_cvector;
	var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	var_18_cvector = var_66_cvector;
	var_19_cvector = var_67_cvector;
	func_1858(var_65_float, var_66_cvector, var_67_cvector);
	var_90_bool = var_65_float < (float)0.4999999701976776;
	if(var_90_bool != 0) {
		var_91_object = Obj();
		var_91_object = var_0_bool;
		func_1747(var_91_object);
	}
	return 4;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_646();
	func_2456();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_bool = var_17_object;
	func_2257(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		func_646();
		var_32_object = Obj();
		var_15_bool = var_32_object;
		func_2280(var_32_object);
	}
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_912(var_14_bool);
	func_2456();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0;
	var_25_bool = var_15_bool != (int)120;
	if(var_25_bool != 0) {
		return 8;
	}
	var_26_bool = var_0_bool == 0; //@ne
	if(var_26_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_20_cvector);
		FindDirLength(var_21_float, var_20_cvector, (float)7000.0);
		var_29_cvector = CVector(0,0,0); var_30_float = 0;
		func_757(var_23_float, var_29_cvector, (float)1.7453293800354004);
		var_29_cvector = var_22_cvector;
		var_23_float = var_22_cvector | var_22_cvector;
		var_59_bool = 0;
		var_59_bool = 0;
		var_61_bool = var_23_float >= (float)2500.0;
		if(var_61_bool != 0) {
			var_62_bool = 0;
			var_63_float = var_21_float * var_21_float;
			var_65_float = var_63_float * (float)2.25;
			var_66_bool = var_23_float >= var_65_float;
			if(var_66_bool != 1) {
				var_67_bool = 0;
				func_928((bool)1, var_67_bool);
				if(var_67_bool != 1) {
					var_62_bool = 0;
				}
			}
			if(var_62_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool == 0) goto Label_911;
		Stop();
		var_87_cvector = CVector(0,0,0);
		func_1519(var_87_cvector);
		var_1_bool = var_87_cvector + var_22_cvector;
	}
Label_911:
	return 8;
	
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_912(var_15_bool);
	var_15_bool = Obj();
	func_2176();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_int, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0;
	var_25_bool = var_15_bool != (int)120;
	if(var_25_bool != 0) {
		return 8;
	}
	var_26_bool = var_0_bool == 0; //@ne
	if(var_26_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_20_cvector);
		FindDirLength(var_21_float, var_20_cvector, (float)7000.0);
		var_29_cvector = CVector(0,0,0); var_30_float = 0;
		func_944(var_23_float, var_29_cvector, (float)1.7453293800354004);
		var_29_cvector = var_22_cvector;
		var_23_float = var_22_cvector | var_22_cvector;
		var_59_bool = 0;
		var_59_bool = 0;
		var_61_bool = var_23_float >= (float)2500.0;
		if(var_61_bool != 0) {
			var_62_bool = 0;
			var_63_float = var_21_float * var_21_float;
			var_65_float = var_63_float * (float)2.25;
			var_66_bool = var_23_float >= var_65_float;
			if(var_66_bool != 1) {
				var_67_bool = 0;
				func_1115((bool)1, var_67_bool);
				if(var_67_bool != 1) {
					var_62_bool = 0;
				}
			}
			if(var_62_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool == 0) goto Label_1098;
		Stop();
		var_87_cvector = CVector(0,0,0);
		func_1519(var_87_cvector);
		var_1_bool = var_87_cvector + var_22_cvector;
	}
Label_1098:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1099(var_15_bool);
	var_15_bool = Obj();
	func_2176();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1293(var_14_bool);
	func_2456();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0;
	var_25_bool = var_15_bool != (int)120;
	if(var_25_bool != 0) {
		return 8;
	}
	var_26_bool = var_0_bool == 0; //@ne
	if(var_26_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_20_cvector);
		FindDirLength(var_21_float, var_20_cvector, (float)7000.0);
		var_29_cvector = CVector(0,0,0); var_30_float = 0;
		func_1138(var_23_float, var_29_cvector, (float)1.7453293800354004);
		var_29_cvector = var_22_cvector;
		var_23_float = var_22_cvector | var_22_cvector;
		var_59_bool = 0;
		var_59_bool = 0;
		var_61_bool = var_23_float >= (float)2500.0;
		if(var_61_bool != 0) {
			var_62_bool = 0;
			var_63_float = var_21_float * var_21_float;
			var_65_float = var_63_float * (float)2.25;
			var_66_bool = var_23_float >= var_65_float;
			if(var_66_bool != 1) {
				var_67_bool = 0;
				func_1309((bool)1, var_67_bool);
				if(var_67_bool != 1) {
					var_62_bool = 0;
				}
			}
			if(var_62_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool == 0) goto Label_1292;
		Stop();
		var_87_cvector = CVector(0,0,0);
		func_1519(var_87_cvector);
		var_1_bool = var_87_cvector + var_22_cvector;
	}
Label_1292:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	func_1293(var_15_bool);
	var_15_bool = Obj();
	func_2176();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1487(var_14_bool);
	func_2456();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_int)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0;
	var_25_bool = var_15_int != (int)120;
	if(var_25_bool != 0) {
		return 8;
	}
	var_26_bool = var_0_bool == 0; //@ne
	if(var_26_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_20_cvector);
		FindDirLength(var_21_float, var_20_cvector, (float)7000.0);
		var_29_cvector = CVector(0,0,0); var_30_float = 0;
		func_1332(var_23_float, var_29_cvector, (float)1.7453293800354004);
		var_29_cvector = var_22_cvector;
		var_23_float = var_22_cvector | var_22_cvector;
		var_59_bool = 0;
		var_59_bool = 0;
		var_61_bool = var_23_float >= (float)2500.0;
		if(var_61_bool != 0) {
			var_62_bool = 0;
			var_63_float = var_21_float * var_21_float;
			var_65_float = var_63_float * (float)2.25;
			var_66_bool = var_23_float >= var_65_float;
			if(var_66_bool != 1) {
				var_67_bool = 0;
				func_1503((bool)1, var_67_bool);
				if(var_67_bool != 1) {
					var_62_bool = 0;
				}
			}
			if(var_62_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool == 0) goto Label_1486;
		Stop();
		var_87_cvector = CVector(0,0,0);
		func_1519(var_87_cvector);
		var_1_bool = var_87_cvector + var_22_cvector;
	}
Label_1486:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	func_1487(var_15_object);
	var_15_object = Obj();
	func_2176();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0;
	var_20_bool = var_16_string == "health";
	if(var_20_bool != 0) {
		GetProperty("health", var_18_float);
		var_23_bool = var_18_float <= (int)0;
		if(var_23_bool != 0) {
			SignalDeath(var_15_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_2155(var_16_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0;
	var_15_object = var_19_object;
	var_16_int = var_20_int;
	var_17_float = var_21_float;
	func_1665(var_19_object, var_20_int, var_21_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0);
	var_15_object = var_21_object;
	var_16_int = var_22_int;
	var_17_float = var_23_float;
	var_19_cvector = var_24_cvector;
	var_20_cvector = var_25_cvector;
	func_1733(var_23_float, var_24_cvector, var_25_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0;
	var_0_bool = false;
	SensePlayerOnly((bool)1);
	func_2545();
	func_190();
	
Label_167:
	irand(var_17_int, (int)2);
	var_141_bool = var_17_int == (int)0;
	if(var_141_bool != 0) {
		var_0_bool = true;
		func_2566();
		var_0_bool = false;
		ResetAAS();
	} else {
		irand(var_18_int, (int)4);
		var_161_int = var_18_int + (int)1;
		Sleep(var_161_int);
	}
	goto Label_167;
	
}
EMIT "Return(); Pop(4)";


func_0(var_17_object)
{
	EventDisable(0);
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_33(var_18_object);
	var_98_object = Obj();
	var_17_object = var_98_object;
	func_2614(var_98_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1539(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_bool = 0;
	IsPlayerActor(var_100_object, var_102_bool);
	var_102_bool = var_99_bool;
	return 2;
}


func_2566()
{
	var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_int = 0; var_146_bool = 0; var_147_int = 0;
	var_145_int = 0;
	
Label_2568:
	var_149_string = ""; var_150_int = 0;
	var_145_int = var_150_int;
	func_2538(var_149_string, var_150_int);
	HasAnimation(var_146_bool, "all", var_149_string);
	var_154_bool = var_146_bool == 0; //@nz
	if(var_154_bool != 0) {
	} else {
		var_145_int = var_145_int + (int)1;
		goto Label_2568;
	}
	irand(var_147_int, var_145_int);
	var_156_string = ""; var_157_int = 0;
	var_147_int = var_157_int;
	func_2538(var_156_string, var_157_int);
	PlayAnimation("all", var_156_string);
	WaitForAnimEnd();
	return 6;
	
}


func_1544(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0;
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", (int)2);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_44_bool = 0;
		return 2;
	}
	@@var_45_object:HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
	return 2;
}


func_1556(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_1561(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	var_32_bool = var_27_object == 0; //@ne
	if(var_32_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_33_bool = 0;
	var_33_bool = 0;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", (int)1);
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_1556(var_37_bool, var_38_object);
		if(var_37_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	GetScene(var_30_object);
	var_41_bool = var_30_object == 0; //@ne
	if(var_41_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	@@var_27_object:GetScene(var_31_object);
	var_42_bool = var_30_object != var_31_object;
	if(var_42_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_26_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_33(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0);
	var_39_bool = var_18_object == 0; //@ne
	if(var_39_bool != 0) {
		var_40_string = "";
		func_124("fdie");
	} else {
		@@var_18_object:GetPosition(var_29_cvector);
		GetPosition(var_30_cvector);
		GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_74_float = var_72_float * var_73_float;
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		var_77_float = var_75_float * var_76_float;
		var_78_int = var_74_float + var_77_float;
		var_80_bool = var_78_int >= (int)0;
		if(var_80_bool != 0) {
			var_33_string = "fdie";
		} else {
				var_33_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", (int)2);
		if(var_83_bool != 0) {
			@@var_18_object:HasScriptProperty(var_35_bool, "Owner");
			var_85_bool = var_35_bool;
			if(var_85_bool != 0) {
				@@var_18_object:GetScriptProperty(var_34_object, "Owner");
				var_87_bool = var_34_object == 0; //@ne
				if(var_87_bool != 0) {
					var_18_object = var_34_object;
				}
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", (int)1);
		if(var_90_bool != 0) {
			@@var_34_object:GetEyesHeight(var_37_float);
			var_38_cvector = CVector(0.0, 0.0, 0.0);
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = 1;
		} else {
			var_36_bool = 0;

		}
		var_93_string = "";
		var_33_string = var_93_string;
		func_1774(var_93_string);
		PlayAnimation("all", var_33_string);
		WaitForAnimEnd();
		var_95_bool = var_36_bool;
		if(var_95_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_33_string);
		RemoveEnvelope();
		var_34_object = 0;
	}
	return 20;
	
}


func_2593()
{
	StopAnimation();
	return 0;
}


func_2596(var_26_bool)
{
	var_26_bool = 1;
	return 0;
}


func_2598(var_20_bool, var_21_object, var_22_object)
{
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_float = 0;
	var_21_object = var_25_object;
	var_22_object = var_26_object;
	func_2381(var_24_bool, var_25_object, var_26_object, (float)500.0);
	if(var_24_bool != 0) {
		SetProperty("ToDie", (bool)1);
		var_20_bool = 1;
		return 0;
	}
	var_20_bool = 0;
	return 0;
}


func_2614(var_98_object)
{
	var_99_bool = 0; var_100_object = Obj();
	var_98_object = var_100_object;
	func_1539(var_99_bool, var_100_object);
	if(var_99_bool != 0) {
		var_103_object = Obj();
		func_1815(var_103_object);
		ReportReputationChange(var_98_object, var_103_object, (float)-0.10000000149011612, (bool)1);
		var_108_bool = 0;
		func_1975((bool)0);
	}
	func_1951();
	var_242_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1597(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1561(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1544(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_1099(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1621(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = "";
	var_47_bool = var_32_object == 0; //@ne
	if(var_47_bool != 0) {
		return 14;
	}
	IsDead(var_40_bool);
	var_48_bool = var_40_bool;
	if(var_48_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_41_int);
	var_50_bool = var_41_int < (int)0;
	if(var_50_bool != 0) {
		return 14;
	}
	@@var_32_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	GetDirection(var_44_cvector);
	var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_46_string = "fhit";
	} else {
		var_46_string = "bhit";
	}
	var_62_int = var_46_string + "1";
	var_64_int = var_46_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 14;
	
}


func_1115(var_0_bool, var_67_bool)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetDirection(var_70_cvector);
	var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	var_73_object = var_0_bool;
	func_1524(var_72_cvector, var_73_object);
	var_72_cvector = var_71_cvector;
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= (float)-0.3420201241970062;
	return 4;
}


func_2150(var_48_int, var_49_string)
{
	var_50_int = 0; var_51_int = 0;
	GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
	return 2;
}


func_2155(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	TaskCall(0);
	func_0(var_17_object);
	TaskReturn();
	return 0;
}


func_1138(var_0_bool, var_29_cvector, var_30_float)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0;
	GetPosition(var_37_cvector);
	@@@var_0_bool:GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_37_cvector - var_38_cvector;
	func_1821(var_45_cvector, var_46_cvector);
	var_53_float = var_39_cvector * (float)0.75;
	var_44_cvector = var_45_cvector + var_53_float;
	func_1821(var_43_cvector, var_44_cvector);
	var_43_cvector = var_40_cvector;
	FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, (int)32, (float)7000.0);
	var_42_float = var_42_float - (int)100;
	var_58_bool = var_42_float < (int)0;
	if(var_58_bool != 0) {
		var_42_float = 0;
	}
	var_29_cvector = var_41_cvector * var_42_float;
	return 12;
}


func_124(var_40_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_41_string = "";
	var_40_string = var_41_string;
	func_1774(var_41_string);
	PlayAnimation("all", var_40_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_40_string);
	RemoveEnvelope();
	return 0;
}


func_1665(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0);
	var_40_bool = 0;
	var_40_bool = 0;
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_object = var_19_object;
	if(var_42_object != 0) {
		var_44_bool = var_20_int != (int)4;
		if(var_44_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_46_bool = var_20_int != (int)5;
		if(var_46_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
		var_49_cvector = CVector(0,0,0); var_50_object = Obj();
		var_19_object = var_50_object;
		func_1524(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1821(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		CreateVectorVector(var_32_object);
		var_33_int = 1;

	Label_1694:
		var_61_int = "hit" + var_33_int;
		GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector);
		var_62_bool = var_34_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_110_int = var_36_cvector | var_31_cvector;
			var_112_bool = var_110_int >= (float)0.7071067690849304;
			if(var_112_bool != 0) {
				@@var_32_object:add(var_35_cvector);
			}
			var_33_int = var_33_int + (int)1;
			goto Label_1694;
		}
		@@var_32_object:size(var_37_int);
		var_63_int = var_37_int;
		if(var_63_int != 0) {
			irand(var_38_int, var_37_int);
			@@var_32_object:get(var_39_cvector, var_38_int);
			var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
			var_19_object = var_64_object;
			var_20_int = var_65_int;
			var_21_float = var_66_float;
			var_39_cvector = var_67_cvector;
			var_68_cvector = -var_31_cvector;
			func_1733(var_66_float, var_67_cvector, var_68_cvector);
			return 18;
		}
		var_32_object = 0;
	}
	var_109_object = Obj();
	var_19_object = var_109_object;
	func_1621(var_109_object);
	return 18;
	
}


func_646()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1168(var_0_bool, var_1_bool, var_2_object, var_34_object)
{
	var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0;
	var_0_bool = var_34_object;
	var_48_cvector = CVector(0,0,0); var_49_float = 0;
	func_1138(var_47_float, var_48_cvector, (float)1.7453293800354004);
	var_48_cvector = var_43_cvector;
	var_44_float = var_43_cvector | var_43_cvector;
	var_79_bool = var_44_float < (float)2500.0;
	if(var_79_bool != 0) {
		var_80_cvector = CVector(0,0,0); var_81_float = 0;
		func_1138(var_47_float, var_80_cvector, (float)2.6179938316345215);
		var_80_cvector = var_43_cvector;
		var_44_float = var_43_cvector | var_43_cvector;
		var_83_bool = var_44_float < (float)2500.0;
		if(var_83_bool != 0) {
			var_85_float = sqrt(var_44_float);
			var_86_int = "Can't retreat, distance: " + var_85_float;
			Trace(var_86_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_88_float = GetByIndex(var_43_cvector, 0);
	var_89_float = GetByIndex(var_43_cvector, 2);
	Rotate(var_88_float, var_89_float);
	var_90_cvector = CVector(0,0,0);
	func_1519(var_90_cvector);
	var_1_bool = var_90_cvector + var_43_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1210:
	MovePoint(var_1_bool, (int)1, var_45_bool);
	var_96_bool = var_45_bool;
	if(var_96_bool != 0) {
		var_97_bool = var_0_bool == 0; //@ne
		if(var_97_bool != 0) {
			goto Label_1240;
		EMIT "GOTO 0x4d6";

		Label_1240:
			return 10;
		}
		var_98_cvector = CVector(0,0,0); var_99_float = 0;
		func_1138(var_47_float, var_98_cvector, (float)2.6179938316345215);
		var_98_cvector = var_46_cvector;
		var_47_float = var_46_cvector | var_46_cvector;
		var_101_bool = var_47_float >= (float)2500.0;
		if(var_101_bool != 0) {
			var_102_cvector = CVector(0,0,0);
			func_1519(var_102_cvector);
			var_1_bool = var_102_cvector + var_46_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1240;
		}
	}
	var_105_bool = var_2_object == 0; //@nz
	if(var_105_bool == 1) goto Label_1210;
	
}


func_2200(var_19_bool, var_20_object, var_21_string)
{
	var_23_bool = var_21_string == "unholster";
	if(var_23_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_20_object = var_25_object;
		func_2484(var_24_bool, var_25_object);
		var_24_bool = var_19_bool;
		return 0;
	EMIT "GOTO 0x8b6";
	}
	var_29_bool = var_21_string == "player_shot";
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_20_object = var_31_object;
		func_2497(var_30_bool, var_31_object);
		var_30_bool = var_19_bool;
		return 0;
	EMIT "GOTO 0x8b6";
	}
	var_46_bool = var_21_string == "battle";
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_20_object = var_48_object;
		func_2520(var_47_bool, var_48_object);
		var_47_bool = var_19_bool;
		return 0;
	}
	var_19_bool = 0;
	return 0;
}


func_2232(var_53_object, var_54_string)
{
	var_56_bool = var_54_string == "unholster";
	if(var_56_bool != 0) {
		var_57_object = Obj();
		var_53_object = var_57_object;
		func_2489(var_57_object);
	} else {
		var_131_bool = var_54_string == "player_shot";
		if(var_131_bool != 0) {
			var_132_object = Obj();
			var_53_object = var_132_object;
			func_2512(var_132_object);
			goto Label_2256;
		}
		var_199_bool = var_54_string == "battle";
		if(var_199_bool == 0) goto Label_2256;
		var_200_object = Obj();
		var_53_object = var_200_object;
		func_2527(var_200_object);
	}
Label_2256:
	return 0;
	
}


func_190()
{
	var_135_bool = 0;
	func_1758(var_135_bool);
	var_138_bool = var_135_bool == 0; //@nz
	if(var_138_bool != 0) {
		func_2456();
	}
	return 0;
}


func_1733(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetScene(var_28_object);
	AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	var_32_object = Obj();
	var_21_object = var_32_object;
	func_1621(var_32_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2257(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_17_object = var_22_object;
	func_2484(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_17_object = var_26_object;
		func_1539(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		@@var_17_object:IsWeaponHolstered(var_19_bool);
		var_29_bool = var_19_bool == 0; //@nz
		if(var_29_bool != 0) {
			var_16_bool = 1;
			return 2;
		}
	}
	var_16_bool = 0;
	return 2;
}


func_722(var_68_object)
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
	func_787(var_70_cvector, var_71_bool, var_68_object, var_78_object);
	return 0;
}


func_1747(var_91_object)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0);
	@@var_91_object:GetPosition(var_95_cvector);
	GetPosition(var_96_cvector);
	var_97_cvector = var_95_cvector - var_96_cvector;
	var_98_float = GetByIndex(var_97_cvector, 0);
	var_99_float = GetByIndex(var_97_cvector, 2);
	RotateAsync(var_98_float, var_99_float);
	return 6;
}


func_1758(var_135_bool)
{
	var_136_bool = 0; var_137_bool = 0;
	IsLoaded(var_137_bool);
	var_137_bool = var_135_bool;
	return 2;
}


func_1763(var_42_object)
{
	var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_cvector = CVector(0,0,0);
	@@var_42_object:GetEyesHeight(var_45_float);
	var_46_cvector = CVector(0.0, 0.0, 0.0);
	var_47_float = GetByIndex(var_46_cvector, 1);
	var_45_float = var_47_float;
	SetByIndex(var_46_cvector, 1) = var_47_float;
	LookAsync(var_42_object, "head", var_46_cvector);
	return 4;
}


func_2280(var_32_object)
{
	var_33_object = Obj();
	var_32_object = var_33_object;
	func_2489(var_33_object);
	return 0;
}


func_1774(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	IsExisting3DSound(var_50_bool, var_41_string);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_51_int = 0;

	Label_1780:
		var_60_int = var_51_int + (int)1;
		var_61_int = var_41_string + var_60_int;
		IsExisting3DSound(var_52_bool, var_61_int);
		var_62_bool = var_52_bool == 0; //@nz
		if(var_62_bool != 0) {
		} else {
			var_51_int = var_51_int + (int)1;
			goto Label_1780;
		}
		var_63_bool = var_51_int == 0; //@nz
		if(var_63_bool != 0) {
			return 16;
		}
		irand(var_53_int, var_51_int);
		var_65_int = var_53_int + (int)1;
		var_41_string = var_41_string + var_65_int;
	}
	Is3DSoundLoaded(var_54_bool, var_41_string);
	var_66_bool = var_54_bool;
	if(var_66_bool != 0) {
		GetEyesHeight(var_55_float);
		GetDirection(var_56_cvector);
		var_57_cvector = var_56_cvector * (int)50;
		var_68_float = GetByIndex(var_57_cvector, 1);
		var_68_float = var_68_float + var_55_float;
		SetByIndex(var_57_cvector, 1) = var_68_float;
		PlayGlobalSound(var_41_string, var_57_cvector);
	}
	return 16;
	
}


func_2286(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1539(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_object = Obj();
		func_1815(var_23_object);
		ReportReputationChange(var_18_object, var_23_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_757(var_0_bool, var_29_cvector, var_30_float)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0;
	GetPosition(var_37_cvector);
	@@@var_0_bool:GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_37_cvector - var_38_cvector;
	func_1821(var_45_cvector, var_46_cvector);
	var_53_float = var_39_cvector * (float)0.75;
	var_44_cvector = var_45_cvector + var_53_float;
	func_1821(var_43_cvector, var_44_cvector);
	var_43_cvector = var_40_cvector;
	FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, (int)32, (float)7000.0);
	var_42_float = var_42_float - (int)100;
	var_58_bool = var_42_float < (int)0;
	if(var_58_bool != 0) {
		var_42_float = 0;
	}
	var_29_cvector = var_41_cvector * var_42_float;
	return 12;
}


func_2299(var_16_bool, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj();
	var_21_bool = var_17_string == "heal";
	if(var_21_bool != 0) {
		FindActor(var_19_object, "player");
		var_23_bool = 0; var_24_object = Obj();
		var_19_object = var_24_object;
		func_2533(var_24_object);
		var_23_bool = var_16_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_16_bool = 0;
	return 2;
}


func_2315(var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	var_31_bool = var_27_string == "heal";
	if(var_31_bool != 0) {
		FindActor(var_29_object, "player");
		var_29_object = Obj();
		func_2536();
		var_29_object = 0;
	}
	return 2;
}


func_1293(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_787(var_0_bool, var_1_bool, var_2_object, var_78_object)
{
	var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0;
	var_0_bool = var_78_object;
	var_89_cvector = CVector(0,0,0); var_90_float = 0;
	func_757(var_88_float, var_89_cvector, (float)1.7453293800354004);
	var_89_cvector = var_84_cvector;
	var_85_float = var_84_cvector | var_84_cvector;
	var_120_bool = var_85_float < (float)2500.0;
	if(var_120_bool != 0) {
		var_121_cvector = CVector(0,0,0); var_122_float = 0;
		func_757(var_88_float, var_121_cvector, (float)2.6179938316345215);
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
	func_1519(var_131_cvector);
	var_1_bool = var_131_cvector + var_84_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_829:
	MovePoint(var_1_bool, (int)1, var_86_bool);
	var_137_bool = var_86_bool;
	if(var_137_bool != 0) {
		var_138_bool = var_0_bool == 0; //@ne
		if(var_138_bool != 0) {
			goto Label_859;
		EMIT "GOTO 0x359";

		Label_859:
			return 10;
		}
		var_139_cvector = CVector(0,0,0); var_140_float = 0;
		func_757(var_88_float, var_139_cvector, (float)2.6179938316345215);
		var_139_cvector = var_87_cvector;
		var_88_float = var_87_cvector | var_87_cvector;
		var_142_bool = var_88_float >= (float)2500.0;
		if(var_142_bool != 0) {
			var_143_cvector = CVector(0,0,0);
			func_1519(var_143_cvector);
			var_1_bool = var_143_cvector + var_87_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_859;
		}
	}
	var_146_bool = var_2_object == 0; //@nz
	if(var_146_bool == 1) goto Label_829;
	
}


func_1815(var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj();
	self(var_105_object);
	var_105_object = var_103_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2328(var_24_int)
{
	var_26_bool = 0;
	func_2596(var_26_bool);
	if(var_26_bool != 0) {
		var_24_int = 2;
	} else {
		var_24_int = 0;
	}
	return 0;
	
}


func_1821(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_48_cvector | var_48_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_47_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_47_cvector = var_48_cvector / var_56_float;
	return 2;
}


func_1309(var_0_bool, var_67_bool)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetDirection(var_70_cvector);
	var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	var_73_object = var_0_bool;
	func_1524(var_72_cvector, var_73_object);
	var_72_cvector = var_71_cvector;
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= (float)-0.3420201241970062;
	return 4;
}


func_2337(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	TaskCall(2);
	func_447(var_35_object, var_34_object);
	TaskReturn();
	return 0;
}


func_1831(var_78_float, var_79_cvector, var_80_cvector)
{
	var_81_int = var_79_cvector | var_80_cvector;
	var_82_int = var_79_cvector | var_79_cvector;
	var_83_int = var_80_cvector | var_80_cvector;
	var_84_float = var_82_int * var_83_int;
	var_85_float = sqrt(var_84_float);
	var_78_float = var_81_int / var_85_float;
	return 0;
}


func_2345(var_24_int, var_25_object)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	func_1597(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		var_24_int = 2;
	} else {
		var_24_int = 0;
	}
	return 0;
	
}


func_1839(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = GetByIndex(var_69_cvector, 0);
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = var_71_float * var_72_float;
	var_74_float = GetByIndex(var_69_cvector, 2);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = var_74_float * var_75_float;
	var_68_float = var_73_float + var_76_float;
	return 0;
}


func_2355(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(3);
	func_722(var_68_object);
	TaskReturn();
	return 0;
}


func_1332(var_0_bool, var_29_cvector, var_30_float)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0;
	GetPosition(var_37_cvector);
	@@@var_0_bool:GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_37_cvector - var_38_cvector;
	func_1821(var_45_cvector, var_46_cvector);
	var_53_float = var_39_cvector * (float)0.75;
	var_44_cvector = var_45_cvector + var_53_float;
	func_1821(var_43_cvector, var_44_cvector);
	var_43_cvector = var_40_cvector;
	FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, (int)32, (float)7000.0);
	var_42_float = var_42_float - (int)100;
	var_58_bool = var_42_float < (int)0;
	if(var_58_bool != 0) {
		var_42_float = 0;
	}
	var_29_cvector = var_41_cvector * var_42_float;
	return 12;
}


func_1848(var_77_float, var_78_cvector)
{
	var_79_float = GetByIndex(var_78_cvector, 0);
	var_80_float = GetByIndex(var_78_cvector, 0);
	var_81_float = var_79_float * var_80_float;
	var_82_float = GetByIndex(var_78_cvector, 2);
	var_83_float = GetByIndex(var_78_cvector, 2);
	var_84_float = var_82_float * var_83_float;
	var_85_int = var_81_float + var_84_float;
	var_77_float = sqrt(var_85_int);
	return 0;
}


func_2363(var_69_int, var_70_object)
{
	var_72_bool = 0; var_73_object = Obj();
	var_70_object = var_73_object;
	func_1597(var_72_bool, var_73_object);
	if(var_72_bool != 0) {
		var_69_int = 2;
	} else {
		var_69_int = 0;
	}
	return 0;
	
}


func_1858(var_65_float, var_66_cvector, var_67_cvector)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_66_cvector = var_69_cvector;
	var_67_cvector = var_70_cvector;
	func_1839(var_68_float, var_69_cvector, var_70_cvector);
	var_77_float = 0; var_78_cvector = CVector(0,0,0);
	var_66_cvector = var_78_cvector;
	func_1848(var_77_float, var_78_cvector);
	var_86_float = 0; var_87_cvector = CVector(0,0,0);
	var_67_cvector = var_87_cvector;
	func_1848(var_86_float, var_87_cvector);
	var_88_float = var_77_float * var_86_float;
	var_65_float = var_68_float / var_88_float;
	return 0;
}


func_2373(var_106_object)
{
	var_107_object = Obj();
	var_106_object = var_107_object;
	TaskCall(4);
	func_974(var_108_object, var_109_cvector, var_110_bool, var_107_object);
	TaskReturn();
	return 0;
}


func_2381(var_24_bool, var_25_object, var_26_object, var_27_float)
{
	var_28_string = ""; var_29_bool = 0; var_30_string = ""; var_31_bool = 0;
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_26_object = var_33_object;
	func_1544(var_32_bool, var_33_object, "class");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	@@var_26_object:GetProperty("class", var_30_string);
	var_44_bool = var_30_string == "rat";
	if(var_44_bool != 0) {
		var_24_bool = 0;
		return 4;
	EMIT "GOTO 0x96b";
	}
	var_46_bool = var_30_string == "rat_big";
	if(var_46_bool != 0) {
		var_24_bool = 0;
		return 4;
	EMIT "GOTO 0x96b";
	}
	var_48_bool = var_30_string == "dog";
	if(var_48_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	CanSee(var_31_bool, var_25_object);
	var_49_bool = 0;
	var_49_bool = 1;
	var_50_bool = var_31_bool;
	if(var_50_bool != 1) {
		var_51_float = 0; var_52_object = Obj();
		var_25_object = var_52_object;
		func_1531(var_51_float, var_52_object);
		var_59_float = var_27_float * var_27_float;
		var_60_bool = var_51_float <= var_59_float;
		if(var_60_bool != 1) {
			var_49_bool = 0;
		}
	}
	if(var_49_bool != 0) {
		var_24_bool = 1;
		return 4;
	}
	CanSee(var_31_bool, var_26_object);
	var_61_bool = 0;
	var_61_bool = 1;
	var_62_bool = var_31_bool;
	if(var_62_bool != 1) {
		var_63_float = 0; var_64_object = Obj();
		var_26_object = var_64_object;
		func_1531(var_63_float, var_64_object);
		var_65_float = var_27_float * var_27_float;
		var_66_bool = var_63_float <= var_65_float;
		if(var_66_bool != 1) {
			var_61_bool = 0;
		}
	}
	if(var_61_bool != 0) {
		var_24_bool = 1;
		return 4;
	}
	var_24_bool = 0;
	return 4;
}


func_1362(var_0_bool, var_1_bool, var_2_object, var_133_object)
{
	var_137_cvector = CVector(0,0,0); var_138_float = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0;
	var_0_bool = var_133_object;
	var_147_cvector = CVector(0,0,0); var_148_float = 0;
	func_1332(var_146_float, var_147_cvector, (float)1.7453293800354004);
	var_147_cvector = var_142_cvector;
	var_143_float = var_142_cvector | var_142_cvector;
	var_173_bool = var_143_float < (float)2500.0;
	if(var_173_bool != 0) {
		var_174_cvector = CVector(0,0,0); var_175_float = 0;
		func_1332(var_146_float, var_174_cvector, (float)2.6179938316345215);
		var_174_cvector = var_142_cvector;
		var_143_float = var_142_cvector | var_142_cvector;
		var_177_bool = var_143_float < (float)2500.0;
		if(var_177_bool != 0) {
			var_179_float = sqrt(var_143_float);
			var_180_int = "Can't retreat, distance: " + var_179_float;
			Trace(var_180_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_182_float = GetByIndex(var_142_cvector, 0);
	var_183_float = GetByIndex(var_142_cvector, 2);
	Rotate(var_182_float, var_183_float);
	var_184_cvector = CVector(0,0,0);
	func_1519(var_184_cvector);
	var_1_bool = var_184_cvector + var_142_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1404:
	MovePoint(var_1_bool, (int)1, var_144_bool);
	var_188_bool = var_144_bool;
	if(var_188_bool != 0) {
		var_189_bool = var_0_bool == 0; //@ne
		if(var_189_bool != 0) {
			goto Label_1434;
		EMIT "GOTO 0x598";

		Label_1434:
			return 10;
		}
		var_190_cvector = CVector(0,0,0); var_191_float = 0;
		func_1332(var_146_float, var_190_cvector, (float)2.6179938316345215);
		var_190_cvector = var_145_cvector;
		var_146_float = var_145_cvector | var_145_cvector;
		var_193_bool = var_146_float >= (float)2500.0;
		if(var_193_bool != 0) {
			var_194_cvector = CVector(0,0,0);
			func_1519(var_194_cvector);
			var_1_bool = var_194_cvector + var_145_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1434;
		}
	}
	var_197_bool = var_2_object == 0; //@nz
	if(var_197_bool == 1) goto Label_1404;
	
}


func_1875(var_30_int)
{
	var_31_float = 0; var_32_float = 0;
	GetGameTime(var_32_float);
	var_34_int = 0;
	var_34_int = var_32_float / (int)24;
	var_30_int = (int)1 + var_34_int;
	return 2;
}


func_1884(var_222_int)
{
	var_223_int = 0; var_224_int = 0;
	GetVariable("branch", var_224_int);
	var_224_int = var_222_int;
	return 2;
}


func_1890(var_32_object)
{
	var_33_int = 0;
	func_1884(var_33_int);
	var_38_bool = var_33_int == (int)1;
	if(var_38_bool != 0) {
		WorkWithCorpse(var_32_object);
	} else {
		Barter(var_32_object);
	}
	return 0;
	
}


func_1903(var_27_int, var_28_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_42_bool = var_27_int > var_28_int;
	if(var_42_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_40_int = 0;
	var_44_bool = var_27_int != var_28_int;
	if(var_44_bool != 0) {
		var_45_int = var_28_int - var_27_int;
		irand(var_40_int, var_45_int);
	} else {
		var_54_bool = var_27_int == (int)0;
		if(var_54_bool == 0) goto Label_1921;
		return 4;
	}
Label_1921:
	var_40_int = var_40_int + var_27_int;
	var_47_bool = var_40_int == (int)0;
	if(var_47_bool != 0) {
		return 4;
	}
	var_48_int = 0; var_49_string = "";
	func_2150(var_48_int, "Money");
	AddItem(var_41_bool, var_48_int, (int)0, var_40_int);
	return 4;
	
}


func_392(var_1_bool)
{
	KillTimer((int)110);
	var_1_bool = false;
	var_17_bool = var_0_bool;
	if(var_17_bool != 0) {
		func_2593();
	} else {
		Stop();
	}
	return 0;
	
}


func_1934(var_228_string)
{
	var_229_object = Obj(); var_230_int = 0; var_231_bool = 0; var_232_object = Obj(); var_233_int = 0; var_234_bool = 0;
	CreateInvItem(var_232_object);
	@@var_232_object:SetItemName(var_228_string);
	@@var_232_object:SetProperty("Organ", (int)1);
	@@var_232_object:GetItemID(var_233_int);
	AddItem(var_234_bool, var_232_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2447(var_18_int)
{
	var_18_int = 2;
	return 0;
}


func_912(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_2450(var_26_object)
{
	var_27_object = Obj();
	var_26_object = var_27_object;
	func_2553(var_27_object);
	return 0;
}


func_2456()
{
	return 0;
}


func_2457(var_18_int, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	Trace("Received steal");
	CanSee(var_21_bool, var_19_object);
	var_23_bool = var_21_bool;
	if(var_23_bool != 0) {
		var_24_int = 0; var_25_object = Obj();
		var_19_object = var_25_object;
		func_2345(var_24_int, var_25_object);
		var_24_int = var_18_int;
		return 2;
	}
	var_18_int = 0;
	return 2;
}


func_414(var_1_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = var_1_bool;
	if(var_22_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_17_object, var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 4;
	}
	var_24_int = 0; var_25_object = Obj();
	var_17_object = var_25_object;
	func_2328(var_25_object);
	var_24_int = var_21_int;
	var_28_bool = var_21_int > (int)0;
	if(var_28_bool != 0) {
		var_30_bool = var_21_int > (int)1;
		if(var_30_bool != 0) {
			func_392(var_21_int);
		}
		var_33_object = Obj();
		var_17_object = var_33_object;
		func_2337(var_33_object);
		var_1_bool = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_1951()
{
	var_222_int = 0;
	func_1884(var_222_int);
	var_227_bool = var_222_int != (int)1;
	if(var_227_bool != 0) {
		return 0;
	}
	var_228_string = "";
	func_1934("liver");
	var_239_string = "";
	func_1934("kidney");
	var_240_string = "";
	func_1934("heart");
	var_241_string = "";
	func_1934("blood");
	return 0;
}


func_928(var_0_bool, var_67_bool)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetDirection(var_70_cvector);
	var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	var_73_object = var_0_bool;
	func_1524(var_72_cvector, var_73_object);
	var_72_cvector = var_71_cvector;
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= (float)-0.3420201241970062;
	return 4;
}


func_2473(var_66_object)
{
	var_67_object = Obj();
	var_66_object = var_67_object;
	func_2355(var_67_object);
	return 0;
}


func_2479(var_202_int)
{
	var_202_int = 0;
	return 0;
}


func_944(var_0_bool, var_29_cvector, var_30_float)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0;
	GetPosition(var_37_cvector);
	@@@var_0_bool:GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_37_cvector - var_38_cvector;
	func_1821(var_45_cvector, var_46_cvector);
	var_53_float = var_39_cvector * (float)0.75;
	var_44_cvector = var_45_cvector + var_53_float;
	func_1821(var_43_cvector, var_44_cvector);
	var_43_cvector = var_40_cvector;
	FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, (int)32, (float)7000.0);
	var_42_float = var_42_float - (int)100;
	var_58_bool = var_42_float < (int)0;
	if(var_58_bool != 0) {
		var_42_float = 0;
	}
	var_29_cvector = var_41_cvector * var_42_float;
	return 12;
}


func_2482()
{
	return 0;
}


func_2484(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	CanSee(var_24_bool, var_22_object);
	var_24_bool = var_21_bool;
	return 2;
}


func_1975(var_21_bool)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_26_bool = var_21_bool;
	if(var_26_bool != 0) {
		var_27_int = 0; var_28_int = 0;
		var_30_int = 0;
		func_1875(var_30_int);
		var_37_float = var_30_int * (int)100;
		var_28_int = (int)100 + var_37_float;
		func_1903((int)0, var_28_int);
		irand(var_24_int, (int)8);
		var_57_bool = var_24_int == (int)0;
		if(var_57_bool != 0) {
			var_58_int = 0; var_59_string = "";
			func_2150(var_58_int, "lemon");
			AddItem(var_25_bool, var_58_int, (int)0, (int)1);
		} else {
			var_63_bool = var_24_int == (int)1;
			if(var_63_bool != 0) {
				var_64_int = 0; var_65_string = "";
				func_2150(var_64_int, "rusk");
				AddItem(var_25_bool, var_64_int, (int)0, (int)1);
				goto Label_2063;
			}
			var_69_bool = var_24_int == (int)2;
			if(var_69_bool != 0) {
				var_70_int = 0; var_71_string = "";
				func_2150(var_70_int, "hook");
				AddItem(var_25_bool, var_70_int, (int)0, (int)1);
				goto Label_2063;
			}
			var_75_bool = var_24_int == (int)4;
			if(var_75_bool != 0) {
				var_76_int = 0; var_77_string = "";
				func_2150(var_76_int, "syringe");
				AddItem(var_25_bool, var_76_int, (int)0, (int)1);
				goto Label_2063;
			}
			var_81_bool = var_24_int == (int)5;
			if(var_81_bool != 0) {
				var_82_int = 0; var_83_string = "";
				func_2150(var_82_int, "watch");
				AddItem(var_25_bool, var_82_int, (int)0, (int)1);
				goto Label_2063;
			}
			var_87_bool = var_24_int == (int)6;
			if(var_87_bool == 0) goto Label_2063;
			var_88_int = 0; var_89_string = "";
			func_2150(var_88_int, "razor");
			AddItem(var_25_bool, var_88_int, (int)0, (int)1);
	}
		var_92_int = 0; var_93_int = 0;
		var_95_int = 0;
		func_1875(var_95_int);
		var_97_float = var_95_int * (int)50;
		var_93_int = (int)50 + var_97_float;
		func_1903((int)0, var_93_int);
		irand(var_24_int, (int)7);
		var_100_bool = var_24_int == (int)0;
		if(var_100_bool != 0) {
			var_101_int = 0; var_102_string = "";
			func_2150(var_101_int, "beads");
			AddItem(var_25_bool, var_101_int, (int)0, (int)1);
			goto Label_2149;
		}
		var_106_bool = var_24_int == (int)1;
		if(var_106_bool != 0) {
			var_107_int = 0; var_108_string = "";
			func_2150(var_107_int, "bracelet");
			AddItem(var_25_bool, var_107_int, (int)0, (int)1);
			goto Label_2149;
		}
		var_112_bool = var_24_int == (int)2;
		if(var_112_bool != 0) {
			var_113_int = 0; var_114_string = "";
			func_2150(var_113_int, "ear_ring");
			AddItem(var_25_bool, var_113_int, (int)0, (int)1);
			goto Label_2149;
		}
		var_118_bool = var_24_int == (int)3;
		if(var_118_bool != 0) {
			var_119_int = 0; var_120_string = "";
			func_2150(var_119_int, "gold_ring");
			AddItem(var_25_bool, var_119_int, (int)0, (int)1);
			goto Label_2149;
		}
		var_124_bool = var_24_int == (int)4;
		if(var_124_bool != 0) {
			var_125_int = 0; var_126_string = "";
			func_2150(var_125_int, "silver_ring");
			AddItem(var_25_bool, var_125_int, (int)0, (int)1);
			goto Label_2149;
		}
		var_130_bool = var_24_int == (int)5;
		if(var_130_bool == 0) goto Label_2149;
		var_131_int = 0; var_132_string = "";
		func_2150(var_131_int, "flower");
		AddItem(var_25_bool, var_131_int, (int)0, (int)1);
	}
Label_2063:
	goto Label_2149;
	
Label_2149:
	return 4;
	
}


func_2489(var_33_object)
{
	var_34_object = Obj();
	var_33_object = var_34_object;
	TaskCall(5);
	func_1168(var_35_object, var_36_cvector, var_37_bool, var_34_object);
	TaskReturn();
	return 0;
}


func_447(var_0_bool, var_34_object)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	var_0_bool = var_34_object;
	func_498(var_41_bool);
	GetDirection(var_39_cvector);
	var_49_cvector = CVector(0,0,0); var_50_object = Obj();
	var_50_object = var_0_bool;
	func_1524(var_49_cvector, var_50_object);
	var_49_cvector = var_40_cvector;
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_39_cvector = var_56_cvector;
	var_40_cvector = var_57_cvector;
	func_1858(var_55_float, var_56_cvector, var_57_cvector);
	var_80_bool = var_55_float < (int)0;
	if(var_80_bool != 0) {
		var_81_object = Obj();
		var_81_object = var_0_bool;
		func_1747(var_81_object);
		var_41_bool = 1;
	} else {
		Sleep((float)1.5, var_41_bool);
	}
	var_90_bool = var_41_bool;
	if(var_90_bool != 0) {
		var_91_object = Obj();
		var_91_object = var_0_bool;
		func_1747(var_91_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2497(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	CanSee(var_33_bool, var_31_object);
	var_30_bool = 1;
	var_34_bool = var_33_bool;
	if(var_34_bool != 1) {
		var_35_float = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_1531(var_35_float, var_36_object);
		var_44_bool = var_35_float <= (int)4000000;
		if(var_44_bool != 1) {
			var_30_bool = 0;
		}
	}
	return 2;
}


func_974(var_0_bool, var_1_bool, var_2_object, var_107_object)
{
	var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_bool = 0; var_114_cvector = CVector(0,0,0); var_115_float = 0; var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0;
	var_0_bool = var_107_object;
	var_121_cvector = CVector(0,0,0); var_122_float = 0;
	func_944(var_120_float, var_121_cvector, (float)1.7453293800354004);
	var_121_cvector = var_116_cvector;
	var_117_float = var_116_cvector | var_116_cvector;
	var_152_bool = var_117_float < (float)2500.0;
	if(var_152_bool != 0) {
		var_153_cvector = CVector(0,0,0); var_154_float = 0;
		func_944(var_120_float, var_153_cvector, (float)2.6179938316345215);
		var_153_cvector = var_116_cvector;
		var_117_float = var_116_cvector | var_116_cvector;
		var_156_bool = var_117_float < (float)2500.0;
		if(var_156_bool != 0) {
			var_158_float = sqrt(var_117_float);
			var_159_int = "Can't retreat, distance: " + var_158_float;
			Trace(var_159_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_161_float = GetByIndex(var_116_cvector, 0);
	var_162_float = GetByIndex(var_116_cvector, 2);
	Rotate(var_161_float, var_162_float);
	var_163_cvector = CVector(0,0,0);
	func_1519(var_163_cvector);
	var_1_bool = var_163_cvector + var_116_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_1016:
	MovePoint(var_1_bool, (int)1, var_118_bool);
	var_169_bool = var_118_bool;
	if(var_169_bool != 0) {
		var_170_bool = var_0_bool == 0; //@ne
		if(var_170_bool != 0) {
			goto Label_1046;
		EMIT "GOTO 0x414";

		Label_1046:
			return 10;
		}
		var_171_cvector = CVector(0,0,0); var_172_float = 0;
		func_944(var_120_float, var_171_cvector, (float)2.6179938316345215);
		var_171_cvector = var_119_cvector;
		var_120_float = var_119_cvector | var_119_cvector;
		var_174_bool = var_120_float >= (float)2500.0;
		if(var_174_bool != 0) {
			var_175_cvector = CVector(0,0,0);
			func_1519(var_175_cvector);
			var_1_bool = var_175_cvector + var_119_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1046;
		}
	}
	var_178_bool = var_2_object == 0; //@nz
	if(var_178_bool == 1) goto Label_1016;
	
}


func_1487(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_2512(var_132_object)
{
	var_133_object = Obj();
	var_132_object = var_133_object;
	TaskCall(6);
	func_1362(var_134_object, var_135_cvector, var_136_bool, var_133_object);
	TaskReturn();
	return 0;
}


func_2520(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_2497(var_49_bool, var_50_object);
	var_49_bool = var_47_bool;
	return 0;
}


func_1503(var_0_bool, var_67_bool)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetDirection(var_70_cvector);
	var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	var_73_object = var_0_bool;
	func_1524(var_72_cvector, var_73_object);
	var_72_cvector = var_71_cvector;
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= (float)-0.3420201241970062;
	return 4;
}


func_2527(var_200_object)
{
	var_201_object = Obj();
	var_200_object = var_201_object;
	func_2512(var_201_object);
	return 0;
}


func_2533(var_23_bool)
{
	var_23_bool = 0;
	return 0;
}


func_2536()
{
	return 0;
}


func_2538(var_149_string, var_150_int)
{
	var_151_string = ""; var_152_string = "";
	var_153_int = var_150_int;
	if(var_153_int != 0) {
		"idle" = "idle" + var_150_int;
	}
	var_152_string = var_149_string;
	return 2;
}


func_1519(var_87_cvector)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	GetPosition(var_89_cvector);
	var_89_cvector = var_87_cvector;
	return 2;
}


func_2545()
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_21_bool = 0;
	func_1975((bool)0);
	return 0;
}


func_498(var_0_bool)
{
	var_42_object = Obj();
	var_42_object = var_0_bool;
	func_1763(var_42_object);
	return 0;
}


func_1524(var_49_cvector, var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_53_cvector);
	@@var_50_object:GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
	return 4;
}


func_2553(var_27_object)
{
	var_28_bool = 0; var_29_bool = 0;
	var_30_bool = GlobalVars[0];
	if(var_30_bool != 0) {
		IsOverrideActive(var_29_bool);
		var_31_bool = var_29_bool == 0; //@nz
		if(var_31_bool != 0) {
			var_32_object = Obj();
			var_27_object = var_32_object;
			func_1890(var_32_object);
		}
		return 2;
	}
	return 2;
}


func_1531(var_35_float, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	@@var_36_object:GetPosition(var_41_cvector);
	var_42_cvector = var_41_cvector - var_40_cvector;
	var_35_float = var_42_cvector | var_42_cvector;
	return 6;
}


