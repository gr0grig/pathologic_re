// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindPathTo/2,FollowPath/5,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,HasAnimation/3,SetRTEnvelope/2,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:dattack_begin|W:dattack_end|W:zwalk|A:GetPFPosition|W:run|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:idle
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
// @STANDALONE_EVENT_16: op=0x60f vars=object,string
// @STANDALONE_EVENT_41: op=0x61c vars=object
// @STANDALONE_EVENT_22: op=0x622 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x62a vars=object,int,float,float,cvector,cvector
// @PE: 0x0,0x1d,0x7c,0x96,0x98,0x9a,0x135,0x143,0x156,0x15c,0x168,0x17f,0x1f0,0x28e,0x29c,0x2a3,0x307,0x32a,0x338,0x375,0x396,0x3a4,0x3ab,0x41e,0x430,0x43b,0x444,0x5c5,0x5d0,0x607,0x61c,0x622,0x62a,0x634,0x654,0x684,0x68a,0x6cc,0x6cf,0x6d7,0x6da,0x6dc,0x6df,0x6e1,0x6e4,0x6e6,0x6e9,0x6eb,0x6ee,0x6f0,0x6f3,0x6f5,0x6f8,0x6fa,0x6fd,0x6ff,0x702,0x70d,0x710,0x712,0x715

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1761(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_5_object = Obj();
		func_1764();
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1832();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1761(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_367(var_7_int);
		}
		var_5_object = Obj();
		func_1764();
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_object = Obj();
	var_5_object = var_8_object;
	func_1674(var_8_object);
	var_17_int = 0; var_18_object = Obj();
	var_5_object = var_18_object;
	func_1751(var_18_object);
	var_17_int = var_7_int;
	var_20_bool = var_7_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_7_int > (int)1;
		if(var_22_bool != 0) {
			func_367(var_7_int);
		}
		var_5_object = Obj();
		func_1754();
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0;
	var_5_bool = var_11_object;
	var_6_bool = var_12_object;
	var_7_object = var_13_bool;
	func_1810(var_13_bool);
	if(var_10_bool != 0) {
		var_14_int = 0; var_15_object = Obj(); var_16_bool = 0;
		var_5_bool = var_15_object;
		var_7_object = var_16_bool;
		func_1756(var_16_bool);
		var_14_int = var_9_int;
		var_18_bool = var_9_int > (int)0;
		if(var_18_bool != 0) {
			var_20_bool = var_9_int > (int)1;
			if(var_20_bool != 0) {
				func_367(var_9_int);
			}
			var_5_bool = Obj();
			func_1759();
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1766(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_367(var_7_int);
		}
		var_5_object = Obj();
		func_1769();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = 0; var_10_object = Obj(); var_11_string = "";
	var_5_bool = var_10_object;
	var_6_object = var_11_string;
	func_1588(var_9_bool, var_10_object, var_11_string);
	if(var_9_bool != 0) {
		func_367(var_8_int);
		var_25_object = Obj(); var_26_string = "";
		var_5_bool = var_25_object;
		var_6_object = var_26_string;
		func_1620(var_25_object, var_26_string);
	} else {
		var_36_int = 0; var_37_string = ""; var_38_object = Obj();
		var_6_object = var_37_string;
		var_5_bool = var_38_object;
		func_1771(var_38_object);
		var_36_int = var_8_int;
		var_40_bool = var_8_int > (int)0;
		if(var_40_bool == 0) goto Label_308;
		var_42_bool = var_8_int > (int)1;
		if(var_42_bool != 0) {
			func_367(var_8_int);
		}
		var_43_string = ""; var_44_object = Obj();
		var_6_object = var_43_string;
		var_5_bool = var_44_object;
		func_1774();
	}
Label_308:
	return 2;
	
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = "";
	var_5_object = var_7_string;
	func_1687(var_6_bool, var_7_string);
	if(var_6_bool != 0) {
		func_367(var_5_object);
		var_16_string = "";
		var_5_object = var_16_string;
		func_1703(var_16_string);
	}
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	func_1645(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_367(var_5_object);
		var_19_object = Obj();
		var_5_object = var_19_object;
		func_1668(var_19_object);
	} else {
		var_21_object = Obj();
		var_5_object = var_21_object;
		func_392(var_5_object, var_21_object);
	}
	return 0;
	
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_392(var_5_object, var_6_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object)
{
	var_7_bool = var_5_object != (int)110;
	if(var_7_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_367(var_4_object);
	func_1832();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_367(var_5_object);
	var_5_object = Obj();
	func_1564();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	RequestClearPath(var_5_object);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1761(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_770();
		}
		var_5_object = Obj();
		func_1764();
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_object = Obj();
	var_5_object = var_8_object;
	func_1674(var_8_object);
	var_17_int = 0; var_18_object = Obj();
	var_5_object = var_18_object;
	func_1751(var_18_object);
	var_17_int = var_7_int;
	var_20_bool = var_7_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_7_int > (int)1;
		if(var_22_bool != 0) {
			func_770();
		}
		var_5_object = Obj();
		func_1754();
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0;
	var_5_bool = var_11_object;
	var_6_bool = var_12_object;
	var_7_object = var_13_bool;
	func_1810(var_13_bool);
	if(var_10_bool != 0) {
		var_14_int = 0; var_15_object = Obj(); var_16_bool = 0;
		var_5_bool = var_15_object;
		var_7_object = var_16_bool;
		func_1756(var_16_bool);
		var_14_int = var_9_int;
		var_18_bool = var_9_int > (int)0;
		if(var_18_bool != 0) {
			var_20_bool = var_9_int > (int)1;
			if(var_20_bool != 0) {
				func_770();
			}
			var_5_bool = Obj();
			func_1759();
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1766(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_770();
		}
		var_5_object = Obj();
		func_1769();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = 0; var_10_object = Obj(); var_11_string = "";
	var_5_bool = var_10_object;
	var_6_object = var_11_string;
	func_1588(var_9_bool, var_10_object, var_11_string);
	if(var_9_bool != 0) {
		func_770();
		var_24_object = Obj(); var_25_string = "";
		var_5_bool = var_24_object;
		var_6_object = var_25_string;
		func_1620(var_24_object, var_25_string);
	} else {
		var_35_int = 0; var_36_string = ""; var_37_object = Obj();
		var_6_object = var_36_string;
		var_5_bool = var_37_object;
		func_1771(var_37_object);
		var_35_int = var_8_int;
		var_39_bool = var_8_int > (int)0;
		if(var_39_bool == 0) goto Label_653;
		var_41_bool = var_8_int > (int)1;
		if(var_41_bool != 0) {
			func_770();
		}
		var_42_string = ""; var_43_object = Obj();
		var_6_object = var_42_string;
		var_5_bool = var_43_object;
		func_1774();
	}
Label_653:
	return 2;
	
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = "";
	var_5_object = var_7_string;
	func_1687(var_6_bool, var_7_string);
	if(var_6_bool != 0) {
		func_770();
		var_15_string = "";
		var_5_object = var_15_string;
		func_1703(var_15_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_770();
	func_1832();
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	func_1645(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_770();
		var_18_object = Obj();
		var_5_object = var_18_object;
		func_1668(var_18_object);
	}
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_object = Obj();
	var_5_object = var_8_object;
	func_1674(var_8_object);
	var_17_int = 0; var_18_object = Obj();
	var_5_object = var_18_object;
	func_1805(var_18_object);
	var_17_int = var_7_int;
	var_20_bool = var_7_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_7_int > (int)1;
		if(var_22_bool != 0) {
			func_880();
		}
		var_5_object = Obj();
		func_1808();
	}
	return 2;
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = "";
	var_5_object = var_7_string;
	func_1687(var_6_bool, var_7_string);
	if(var_6_bool != 0) {
		func_880();
		var_15_string = "";
		var_5_object = var_15_string;
		func_1703(var_15_string);
	}
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_880();
	func_1832();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_880();
	var_5_object = Obj();
	func_1564();
	return 0;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_object = Obj();
	var_5_object = var_8_object;
	func_1674(var_8_object);
	var_17_int = 0; var_18_object = Obj();
	var_5_object = var_18_object;
	func_1805(var_18_object);
	var_17_int = var_7_int;
	var_20_bool = var_7_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_7_int > (int)1;
		if(var_22_bool != 0) {
			func_1076(var_7_int);
		}
		var_5_object = Obj();
		func_1808();
	}
	return 2;
}


task_4_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string)
{
	var_6_bool = 0; var_7_string = "";
	var_5_string = var_7_string;
	func_1687(var_6_bool, var_7_string);
	if(var_6_bool != 0) {
		func_1076(var_5_string);
		var_16_string = "";
		var_5_string = var_16_string;
		func_1703(var_16_string);
	}
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1076(var_4_object);
	func_1832();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_7_bool = var_5_int != (int)0;
	if(var_7_bool != 0) {
		return 0;
	}
	var_8_bool = 0; var_9_object = Obj();
	var_9_object = var_1_bool;
	func_1092(var_8_bool, var_9_object);
	var_44_bool = var_8_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	RequestClearPath(var_5_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	func_1076(var_5_object);
	var_5_object = Obj();
	func_1564();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0;
	var_10_bool = var_6_string == "health";
	if(var_10_bool != 0) {
		GetProperty("health", var_8_float);
		var_13_bool = var_8_float <= (int)0;
		if(var_13_bool != 0) {
			SignalDeath(var_5_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_1543(var_6_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0;
	var_5_object = var_9_object;
	var_6_int = var_10_int;
	var_7_float = var_11_float;
	func_1333(var_9_object, var_10_int, var_11_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0);
	var_5_object = var_11_object;
	var_6_int = var_12_int;
	var_7_float = var_13_float;
	var_9_cvector = var_14_cvector;
	var_10_cvector = var_15_cvector;
	func_1401(var_13_float, var_14_cvector, var_15_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	SensePlayerOnly((bool)1);
	func_1796();
	func_171();
	
Label_165:
	var_2_bool = false;
	func_432(var_3_bool, var_4_object);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_7_object)
{
	EventDisable(0);
	var_8_object = Obj();
	var_7_object = var_8_object;
	func_33(var_8_object);
	var_88_object = Obj();
	var_7_object = var_88_object;
	func_1813(var_88_object);
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_517(var_39_bool)
{
	var_39_bool = 0;
	return 0;
}


func_519(var_33_object, var_34_cvector)
{
	var_35_object = Obj(); var_36_object = Obj();
	FindShiftedPathTo(var_36_object, var_34_cvector);
	var_36_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1543(var_6_object)
{
	var_7_object = Obj();
	var_6_object = var_7_object;
	TaskCall(0);
	func_0(var_7_object);
	TaskReturn();
	return 0;
}


func_33(var_8_object)
{
	var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0);
	var_29_bool = var_8_object == 0; //@ne
	if(var_29_bool != 0) {
		var_30_string = "";
		func_124("fdie");
	} else {
		@@var_8_object:GetPosition(var_19_cvector);
		GetPosition(var_20_cvector);
		GetDirection(var_21_cvector);
		var_22_cvector = var_20_cvector - var_19_cvector;
		var_62_float = GetByIndex(var_22_cvector, 0);
		var_63_float = GetByIndex(var_21_cvector, 0);
		var_64_float = var_62_float * var_63_float;
		var_65_float = GetByIndex(var_22_cvector, 2);
		var_66_float = GetByIndex(var_21_cvector, 2);
		var_67_float = var_65_float * var_66_float;
		var_68_int = var_64_float + var_67_float;
		var_70_bool = var_68_int >= (int)0;
		if(var_70_bool != 0) {
			var_23_string = "fdie";
		} else {
				var_23_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_8_object = var_24_object;
		var_73_bool = IsFuncExist(var_8_object, "GetScriptProperty", (int)2);
		if(var_73_bool != 0) {
			@@var_8_object:HasScriptProperty(var_25_bool, "Owner");
			var_75_bool = var_25_bool;
			if(var_75_bool != 0) {
				@@var_8_object:GetScriptProperty(var_24_object, "Owner");
				var_77_bool = var_24_object == 0; //@ne
				if(var_77_bool != 0) {
					var_8_object = var_24_object;
				}
			}
		}
		var_80_bool = IsFuncExist(var_24_object, "@GetEyesHeight", (int)1);
		if(var_80_bool != 0) {
			@@var_24_object:GetEyesHeight(var_27_float);
			var_28_cvector = CVector(0.0, 0.0, 0.0);
			var_81_float = GetByIndex(var_28_cvector, 1);
			var_27_float = var_81_float;
			SetByIndex(var_28_cvector, 1) = var_81_float;
			LookAsync(var_8_object, "head", var_28_cvector);
			var_26_bool = 1;
		} else {
			var_26_bool = 0;

		}
		var_83_string = "";
		var_23_string = var_83_string;
		func_1420(var_83_string);
		PlayAnimation("all", var_23_string);
		WaitForAnimEnd();
		var_85_bool = var_26_bool;
		if(var_85_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_23_string);
		RemoveEnvelope();
		var_24_object = 0;
	}
	return 20;
	
}


func_1588(var_9_bool, var_10_object, var_11_string)
{
	var_13_bool = var_11_string == "unholster";
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_10_object = var_15_object;
		func_1776(var_15_object);
		var_14_bool = var_9_bool;
		return 0;
	EMIT "GOTO 0x652";
	}
	var_17_bool = var_11_string == "player_shot";
	if(var_17_bool != 0) {
		var_18_bool = 0; var_19_object = Obj();
		var_10_object = var_19_object;
		func_1781(var_19_object);
		var_18_bool = var_9_bool;
		return 0;
	EMIT "GOTO 0x652";
	}
	var_21_bool = var_11_string == "battle";
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_10_object = var_23_object;
		func_1786(var_23_object);
		var_22_bool = var_9_bool;
		return 0;
	}
	var_9_bool = 0;
	return 0;
}


func_1076(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1092(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_1265(var_10_bool, var_11_object);
	var_10_bool = var_8_bool;
	return 0;
}


func_1099(var_109_string)
{
	var_109_string = "run";
	return 0;
}


func_1101(var_39_cvector, var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_43_cvector);
	@@var_40_object:GetPosition(var_44_cvector);
	var_39_cvector = var_44_cvector - var_43_cvector;
	return 4;
}


func_1620(var_24_object, var_25_string)
{
	var_27_bool = var_25_string == "unholster";
	if(var_27_bool != 0) {
		var_24_object = Obj();
		func_1779();
	} else {
		var_30_bool = var_25_string == "player_shot";
		if(var_30_bool != 0) {
			var_24_object = Obj();
			func_1784();
			goto Label_1644;
		}
		var_33_bool = var_25_string == "battle";
		if(var_33_bool == 0) goto Label_1644;
		var_24_object = Obj();
		func_1789();
	}
Label_1644:
	return 0;
	
}


func_1108(var_123_float, var_124_object)
{
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0);
	GetPosition(var_128_cvector);
	@@var_124_object:GetPosition(var_129_cvector);
	var_130_cvector = var_129_cvector - var_128_cvector;
	var_123_float = var_130_cvector | var_130_cvector;
	return 6;
}


func_1116(var_89_bool, var_90_object)
{
	var_91_bool = 0; var_92_bool = 0;
	IsPlayerActor(var_90_object, var_92_bool);
	var_92_bool = var_89_bool;
	return 2;
}


func_1121(var_112_bool, var_113_object, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_119_bool = IsFuncExist(var_113_object, "HasProperty", (int)2);
	var_120_bool = var_119_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_112_bool = 0;
		return 2;
	}
	@@var_113_object:HasProperty(var_114_string, var_116_bool);
	var_116_bool = var_112_bool;
	return 2;
}


func_1645(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_7_object = var_12_object;
	func_1776(var_12_object);
	if(var_11_bool != 0) {
		var_13_bool = 0; var_14_object = Obj();
		var_7_object = var_14_object;
		func_1116(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		@@var_7_object:IsWeaponHolstered(var_9_bool);
		var_17_bool = var_9_bool == 0; //@nz
		if(var_17_bool != 0) {
			var_6_bool = 1;
			return 2;
		}
	}
	var_6_bool = 0;
	return 2;
}


func_1133(var_104_bool, var_105_object, var_106_string, var_107_float, var_108_float, var_109_float)
{
	var_110_float = 0; var_111_float = 0;
	var_112_bool = 0; var_113_object = Obj(); var_114_string = "";
	var_105_object = var_113_object;
	var_106_string = var_114_string;
	func_1121(var_112_bool, var_113_object, var_114_string);
	var_121_bool = var_112_bool == 0; //@nz
	if(var_121_bool != 0) {
		var_104_bool = 0;
		return 2;
	}
	@@var_105_object:GetProperty(var_106_string, var_111_float);
	var_122_float = 0; var_123_float = 0; var_124_float = 0; var_125_float = 0;
	var_123_float = var_111_float + var_107_float;
	var_108_float = var_124_float;
	var_109_float = var_125_float;
	func_1477(var_122_float, var_123_float, var_124_float, var_125_float);
	@@var_105_object:SetProperty(var_106_string, var_122_float);
	var_104_bool = 1;
	return 2;
}


func_124(var_30_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_31_string = "";
	var_30_string = var_31_string;
	func_1420(var_31_string);
	PlayAnimation("all", var_30_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_30_string);
	RemoveEnvelope();
	return 0;
}


func_1155(var_133_float, var_134_object, var_135_float)
{
	var_136_float = 0; var_137_float = 0; var_138_float = 0; var_139_float = 0;
	var_140_bool = 0; var_141_object = Obj(); var_142_string = "";
	var_134_object = var_141_object;
	func_1121(var_140_bool, var_141_object, "disease");
	var_143_bool = var_140_bool == 0; //@nz
	if(var_143_bool != 0) {
		var_133_float = 0;
		return 4;
	}
	var_138_float = 0;
	var_144_bool = 0; var_145_object = Obj(); var_146_string = "";
	var_134_object = var_145_object;
	func_1121(var_144_bool, var_145_object, "armor_disease");
	if(var_144_bool != 0) {
		@@var_134_object:GetProperty("armor_disease", var_138_float);
		var_138_float = var_138_float / (int)100;
	}
	var_149_bool = 0; var_150_object = Obj(); var_151_string = "";
	var_134_object = var_150_object;
	func_1121(var_149_bool, var_150_object, "immunity");
	if(var_149_bool != 0) {
		@@var_134_object:GetProperty("immunity", var_139_float);
		var_138_float = var_138_float + var_139_float;
		var_153_bool = 0; var_154_object = Obj(); var_155_string = ""; var_156_float = 0; var_157_float = 0; var_158_float = 0;
		var_134_object = var_154_object;
		var_156_float = -var_135_float;
		func_1133(var_153_bool, var_154_object, "immunity", var_156_float, (float)0, (float)1);
	}
	var_172_bool = var_138_float >= (int)1;
	if(var_172_bool != 0) {
		var_133_float = 0.0;
		return 4;
	}
	var_174_int = (int)1 - var_138_float;
	var_176_float = var_174_int / (int)2;
	var_135_float = var_135_float * var_176_float;
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0;
	var_134_object = var_178_object;
	var_135_float = var_180_float;
	func_1133(var_177_bool, var_178_object, "disease", var_180_float, (float)0, (float)1);
	var_183_bool = 0; var_184_object = Obj();
	var_134_object = var_184_object;
	func_1116(var_183_bool, var_184_object);
	if(var_183_bool != 0) {
		var_187_float = 0;
		var_135_float = var_187_float;
		func_1523(var_187_float);
	}
	var_135_float = var_133_float;
	return 4;
}


func_1668(var_18_object)
{
	var_18_object = Obj();
	func_1779();
	return 0;
}


func_1674(var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1116(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		var_13_object = Obj();
		func_1461(var_13_object);
		ReportReputationChange(var_8_object, var_13_object, (float)0.0);
	}
	return 0;
}


func_1687(var_6_bool, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj();
	var_11_bool = var_7_string == "heal";
	if(var_11_bool != 0) {
		FindActor(var_9_object, "player");
		var_13_bool = 0; var_14_object = Obj();
		var_9_object = var_14_object;
		func_1791(var_14_object);
		var_13_bool = var_6_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_6_bool = 0;
	return 2;
}


func_1703(var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	var_20_bool = var_16_string == "heal";
	if(var_20_bool != 0) {
		FindActor(var_18_object, "player");
		var_18_object = Obj();
		func_1794();
		var_18_object = 0;
	}
	return 2;
}


func_171()
{
	var_7_bool = 0;
	func_1415(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		func_1832();
	}
	return 0;
}


func_689()
{
	var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_float = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_bool = 0;
	WaitForAnimEnd();
	var_55_bool = 0;
	func_1415(var_55_bool);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 14;
	}
	func_1723((int)0);
	var_57_int = var_48_int;
	var_49_int = 0;
	
Label_703:
	var_70_bool = 0;
	var_70_bool = 0;
	var_72_bool = var_49_int < (int)5;
	if(var_72_bool != 0) {
		var_73_bool = 0;
		func_1415(var_73_bool);
		if(var_73_bool != 0) {
			var_70_bool = 1;
		}
	}
	if(var_70_bool != 0) {
		irand(var_50_int, (int)3);
		var_76_bool = var_50_int == (int)0;
		if(var_76_bool != 0) {
			var_77_int = var_48_int;
			if(var_77_int == 0) goto Label_736;
			irand(var_51_int, var_48_int);
			var_79_string = ""; var_80_int = 0;
			var_51_int = var_80_int;
			func_1716(var_79_string, var_80_int);
			PlayAnimation("all", var_79_string);
			WaitForAnimEnd(var_52_bool);
			var_81_bool = var_52_bool == 0; //@nz
			if(var_81_bool != 0) {
			} else {
		} else {
				var_86_bool = var_50_int == (int)1;
				if(var_86_bool != 0) {
					rand(var_53_float, (int)4);
					var_89_int = var_53_float + (int)1;
					Sleep(var_89_int, var_54_bool);
					var_90_bool = var_54_bool == 0; //@nz
					if(var_90_bool != 0) {
						goto Label_765;
					}
					goto Label_754;
				}
				var_91_int = var_49_int;
				if(var_91_int == 0) goto Label_754;
				goto Label_765;
		}
		Label_754:
			var_82_bool = 0;
			func_768(var_82_bool);
			var_83_bool = var_82_bool == 0; //@nz
			if(var_83_bool != 0) {
				goto Label_765;
			}
			ResetAAS();
			var_49_int = var_49_int + (int)1;
			goto Label_703;

		}
	}
Label_765:
	ResetAAS();
	return 14;
	
}


func_1716(var_63_string, var_64_int)
{
	var_65_string = ""; var_66_string = "";
	var_67_int = var_64_int;
	if(var_67_int != 0) {
		"idle" = "idle" + var_64_int;
	}
	var_66_string = var_63_string;
	return 2;
}


func_1723(var_57_int)
{
	var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0;
	var_60_int = 0;
	
Label_1725:
	var_63_string = ""; var_64_int = 0;
	var_60_int = var_64_int;
	func_1716(var_63_string, var_64_int);
	HasAnimation(var_61_bool, "all", var_63_string);
	var_68_bool = var_61_bool == 0; //@nz
	if(var_68_bool != 0) {
	} else {
		var_60_int = var_60_int + (int)1;
		goto Label_1725;
	}
	var_60_int = var_57_int;
	return 4;
	
}


func_1224(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	@@var_26_object:IsDead(var_28_bool);
	var_28_bool = var_25_bool;
	return 2;
}


func_1740(var_48_int)
{
	var_48_int = 2;
	return 0;
}


func_1229(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = var_15_object == 0; //@ne
	if(var_20_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_21_bool = 0;
	var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", (int)1);
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_15_object = var_26_object;
		func_1224(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	GetScene(var_18_object);
	var_29_bool = var_18_object == 0; //@ne
	if(var_29_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_15_object:GetScene(var_19_object);
	var_30_bool = var_18_object != var_19_object;
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_14_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1743(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_56_object);
	TaskReturn();
	return 0;
}


func_1751(var_17_int)
{
	var_17_int = 0;
	return 0;
}


func_1754()
{
	return 0;
}


func_1756(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1759()
{
	return 0;
}


func_1761(var_8_int)
{
	var_8_int = 0;
	return 0;
}


func_1764()
{
	return 0;
}


func_1766(var_8_int)
{
	var_8_int = 0;
	return 0;
}


func_1769()
{
	return 0;
}


func_1771(var_35_int)
{
	var_35_int = 0;
	return 0;
}


func_1774()
{
	return 0;
}


func_1776(var_11_bool)
{
	var_11_bool = 0;
	return 0;
}


func_1265(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1229(var_14_bool, var_15_object);
	var_31_bool = var_14_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_11_object = var_33_object;
	func_1121(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_10_bool = 1;
		return 2;
	}
	@@var_11_object:GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == (int)0;
	return 2;
}


func_1779()
{
	return 0;
}


func_1781(var_18_bool)
{
	var_18_bool = 0;
	return 0;
}


func_1784()
{
	return 0;
}


func_1786(var_22_bool)
{
	var_22_bool = 0;
	return 0;
}


func_1789()
{
	return 0;
}


func_1791(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_768(var_82_bool)
{
	var_82_bool = 1;
	return 0;
}


func_770()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1794()
{
	return 0;
}


func_1796()
{
	var_6_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_775(var_56_object)
{
	var_57_bool = 0; var_58_object = Obj();
	var_56_object = var_58_object;
	func_1800(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		var_61_object = Obj();
		var_56_object = var_61_object;
		func_831(var_61_object);
	}
	return 0;
}


func_1800(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
	return 2;
}


func_1289(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = var_22_object == 0; //@ne
	if(var_37_bool != 0) {
		return 14;
	}
	IsDead(var_30_bool);
	var_38_bool = var_30_bool;
	if(var_38_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_31_int);
	var_40_bool = var_31_int < (int)0;
	if(var_40_bool != 0) {
		return 14;
	}
	@@var_22_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_35_cvector, 0);
	var_42_float = GetByIndex(var_34_cvector, 0);
	var_43_float = var_41_float * var_42_float;
	var_44_float = GetByIndex(var_35_cvector, 2);
	var_45_float = GetByIndex(var_34_cvector, 2);
	var_46_float = var_44_float * var_45_float;
	var_47_int = var_43_float + var_46_float;
	var_49_bool = var_47_int >= (int)0;
	if(var_49_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_52_int = var_36_string + "1";
	var_54_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_52_int, var_54_int, (int)-10);
	return 14;
	
}


func_1805(var_17_int)
{
	var_17_int = 0;
	return 0;
}


func_1808()
{
	return 0;
}


func_1810(var_10_bool)
{
	var_10_bool = 0;
	return 0;
}


func_1813(var_88_object)
{
	var_89_bool = 0; var_90_object = Obj();
	var_88_object = var_90_object;
	func_1116(var_89_bool, var_90_object);
	if(var_89_bool != 0) {
		var_93_bool = 0; var_94_object = Obj(); var_95_float = 0;
		var_88_object = var_94_object;
		func_1488(var_93_bool, var_94_object, (float)-0.05000000074505806);
	}
	var_131_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1832()
{
	var_11_object = Obj();
	func_1461(var_11_object);
	RemoveActor(var_11_object);
	return 0;
}


func_1333(var_9_object, var_10_int, var_11_float)
{
	var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_int = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0);
	var_30_bool = 0;
	var_30_bool = 0;
	var_31_bool = 0;
	var_31_bool = 0;
	var_32_object = var_9_object;
	if(var_32_object != 0) {
		var_34_bool = var_10_int != (int)4;
		if(var_34_bool != 0) {
			var_31_bool = 1;
		}
	}
	if(var_31_bool != 0) {
		var_36_bool = var_10_int != (int)5;
		if(var_36_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
		var_39_cvector = CVector(0,0,0); var_40_object = Obj();
		var_9_object = var_40_object;
		func_1101(var_39_cvector, var_40_object);
		var_39_cvector = var_38_cvector;
		func_1467(var_37_cvector, var_38_cvector);
		var_37_cvector = var_21_cvector;
		CreateVectorVector(var_22_object);
		var_23_int = 1;

	Label_1362:
		var_51_int = "hit" + var_23_int;
		GetGeometryLocator(var_51_int, var_24_bool, var_25_cvector, var_26_cvector);
		var_52_bool = var_24_bool == 0; //@nz
		if(var_52_bool != 0) {
		} else {
			var_100_int = var_26_cvector | var_21_cvector;
			var_102_bool = var_100_int >= (float)0.7071067690849304;
			if(var_102_bool != 0) {
				@@var_22_object:add(var_25_cvector);
			}
			var_23_int = var_23_int + (int)1;
			goto Label_1362;
		}
		@@var_22_object:size(var_27_int);
		var_53_int = var_27_int;
		if(var_53_int != 0) {
			irand(var_28_int, var_27_int);
			@@var_22_object:get(var_29_cvector, var_28_int);
			var_54_object = Obj(); var_55_int = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
			var_9_object = var_54_object;
			var_10_int = var_55_int;
			var_11_float = var_56_float;
			var_29_cvector = var_57_cvector;
			var_58_cvector = -var_21_cvector;
			func_1401(var_56_float, var_57_cvector, var_58_cvector);
			return 18;
		}
		var_22_object = 0;
	}
	var_99_object = Obj();
	var_9_object = var_99_object;
	func_1289(var_99_object);
	return 18;
	
}


func_831(var_61_object)
{
	var_62_bool = 0; var_63_bool = 0;
	
Label_832:
	var_64_bool = 0; var_65_object = Obj();
	var_61_object = var_65_object;
	TaskCall(4);
	func_939(var_64_bool, var_65_object);
	TaskReturn();
	if(var_66_bool != 0) {
		Face(var_61_object);
		WaitForAnimEnd(var_63_bool);
		var_119_bool = var_63_bool == 0; //@nz
		if(var_119_bool != 0) {
		} else {
			PlayAnimation("all", "dattack_begin");
			WaitForAnimEnd(var_63_bool);
			var_122_bool = var_63_bool == 0; //@nz
			if(var_122_bool != 0) {
				goto Label_879;
			}
			var_123_float = 0; var_124_object = Obj();
			var_61_object = var_124_object;
			func_1108(var_123_float, var_124_object);
			var_132_bool = var_123_float <= (float)90000.0;
			if(var_132_bool != 0) {
				var_133_float = 0; var_134_object = Obj(); var_135_float = 0;
				var_61_object = var_134_object;
				func_1155(var_133_float, var_134_object, (float)0.20000000298023224);
			}
			PlayAnimation("all", "dattack_end");
			WaitForAnimEnd(var_63_bool);
			var_193_bool = var_63_bool == 0; //@nz
			if(var_193_bool != 0) {
				goto Label_879;
			}
			StopAsync();
			goto Label_832;
		}
	}
Label_879:
	return 2;
	
}


func_367(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_503(var_4_bool, var_5_object);
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
	func_510(var_9_bool, var_10_int);
	return 0;
}


func_1401(var_11_object, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	GetScene(var_18_object);
	AddActorByType(var_19_object, "scripted", var_18_object, var_14_cvector, var_15_cvector, "blood_dir.xml");
	var_22_object = Obj();
	var_11_object = var_22_object;
	func_1289(var_22_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1415(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_392(var_2_bool, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_bool = 0; var_10_int = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_6_object = var_12_object;
	func_1265(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 4;
	}
	var_46_bool = var_2_bool;
	if(var_46_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_6_object, var_9_bool);
	var_47_bool = var_9_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 4;
	}
	var_48_int = 0; var_49_object = Obj();
	var_6_object = var_49_object;
	func_1740(var_49_object);
	var_48_int = var_10_int;
	var_51_bool = var_10_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_10_int > (int)1;
		if(var_53_bool != 0) {
			func_375(var_10_int);
		}
		var_55_object = Obj();
		var_6_object = var_55_object;
		func_1743(var_55_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1420(var_31_string)
{
	var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	IsExisting3DSound(var_40_bool, var_31_string);
	var_48_bool = var_40_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_41_int = 0;

	Label_1426:
		var_50_int = var_41_int + (int)1;
		var_51_int = var_31_string + var_50_int;
		IsExisting3DSound(var_42_bool, var_51_int);
		var_52_bool = var_42_bool == 0; //@nz
		if(var_52_bool != 0) {
		} else {
			var_41_int = var_41_int + (int)1;
			goto Label_1426;
		}
		var_53_bool = var_41_int == 0; //@nz
		if(var_53_bool != 0) {
			return 16;
		}
		irand(var_43_int, var_41_int);
		var_55_int = var_43_int + (int)1;
		var_31_string = var_31_string + var_55_int;
	}
	Is3DSoundLoaded(var_44_bool, var_31_string);
	var_56_bool = var_44_bool;
	if(var_56_bool != 0) {
		GetEyesHeight(var_45_float);
		GetDirection(var_46_cvector);
		var_47_cvector = var_46_cvector * (int)50;
		var_58_float = GetByIndex(var_47_cvector, 1);
		var_58_float = var_58_float + var_45_float;
		SetByIndex(var_47_cvector, 1) = var_58_float;
		PlayGlobalSound(var_31_string, var_47_cvector);
	}
	return 16;
	
}


func_939(var_64_bool, var_65_object)
{
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_bool = 0; var_73_bool = 0;
	var_65_object = var_69_object;
	func_952(var_64_bool, var_65_object, var_68_bool, var_69_object, (float)150, (float)3000, (bool)0, (bool)1);
	var_68_bool = var_64_bool;
	return 0;
}


func_432(var_0_bool, var_1_bool)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_20_float, (float)0.5);
	Sleep(var_20_float);
	
Label_440:
	var_27_bool = var_0_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_28_bool = var_1_bool == 0; //@nz
		if(var_28_bool != 0) {

		Label_444:
			GetPosition(var_22_cvector);
			var_29_float = 0;
			func_491(var_29_float);
			GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_29_float, var_23_bool);
			var_32_bool = var_23_bool;
			if(var_32_bool != 0) {
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
	var_33_object = Obj(); var_34_cvector = CVector(0,0,0);
	var_21_cvector = var_34_cvector;
	func_519(var_33_object, var_34_cvector);
	var_33_object = var_24_object;
	var_37_bool = var_24_object != 0; //@nn
	if(var_37_bool != 0) {
		RotatePath(var_24_object, var_25_bool);
		var_38_bool = var_25_bool;
		if(var_38_bool != 0) {
			var_39_bool = 0;
			func_517(var_39_bool);
			FollowPath(var_24_object, var_39_bool, var_25_bool);
			var_24_object = 0;
			var_40_bool = var_25_bool;
			if(var_40_bool != 0) {
				TaskCall(2);
				func_689();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_24_object = 0;
	goto Label_440;
	
}


func_1461(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_950(var_108_string)
{
	var_108_string = "zwalk";
	return 0;
}


func_952(var_0_bool, var_1_bool, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; var_76_object = Obj(); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj();
	var_0_bool = false;
	var_1_bool = var_69_object;
	var_73_bool = var_83_bool;
	
Label_956:
	var_90_bool = 0; var_91_object = Obj();
	var_69_object = var_91_object;
	func_1092(var_90_bool, var_91_object);
	var_94_bool = var_90_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_68_bool = 0;
		return 16;
	}
	@@var_69_object:GetPosition(var_85_cvector);
	GetPosition(var_86_cvector);
	var_87_cvector = var_85_cvector - var_86_cvector;
	var_88_float = var_87_cvector | var_87_cvector;
	var_95_bool = 0;
	var_95_bool = 0;
	var_97_bool = var_71_float > (int)0;
	if(var_97_bool != 0) {
		var_98_float = var_71_float * var_71_float;
		var_99_bool = var_88_float > var_98_float;
		if(var_99_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool != 0) {
		Stop();
		var_68_bool = 0;
		return 16;
	}
	var_100_float = var_70_float * var_70_float;
	var_101_bool = var_88_float > var_100_float;
	if(var_101_bool != 0) {
		@@var_69_object:GetPFPosition(var_85_cvector);
		FindPathTo(var_89_object, var_85_cvector);
		var_102_bool = var_89_object != 0; //@nn
		if(var_102_bool != 0) {
			var_89_object = var_84_object;
			var_89_object = 0;
		}
		var_103_bool = var_84_object != 0; //@nn
		if(var_103_bool != 0) {
			var_104_bool = var_83_bool;
			if(var_104_bool == 0) goto Label_1005;
			var_83_bool = 0;
			RotatePath(var_84_object, var_82_bool);
			var_105_bool = var_82_bool == 0; //@nz
			if(var_105_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_108_string = "";
				func_950(var_108_string);
				var_109_string = "";
				func_1099(var_109_string);
				FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string);
				var_110_bool = var_82_bool == 0; //@nz
				if(var_110_bool != 0) {
					var_111_bool = var_0_bool;
					if(var_111_bool != 0) {
						var_84_object = 0;
						goto Label_1052;
					EMIT "GOTO 0x401";
					}
				} else {
					var_84_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_82_bool);
					var_114_bool = var_82_bool == 0; //@nz
					if(var_114_bool != 0) {
						var_115_bool = var_0_bool;
						if(var_115_bool != 0) {
							var_84_object = 0;
							goto Label_1052;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1052;
	}
			var_89_object = 0;
			goto Label_1050;

		Label_1050:
			var_84_object = 0;

		}
		goto Label_956;
	}
Label_1052:
	var_68_bool = !var_0_bool;
	return 16;
	
}


func_1467(var_37_cvector, var_38_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_38_cvector | var_38_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_37_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_37_cvector = var_38_cvector / var_46_float;
	return 2;
}


func_1477(var_122_float, var_123_float, var_124_float, var_125_float)
{
	var_126_bool = var_123_float < var_124_float;
	if(var_126_bool != 0) {
		var_124_float = var_122_float;
		return 0;
	}
	var_127_bool = var_123_float > var_125_float;
	if(var_127_bool != 0) {
		var_125_float = var_122_float;
		return 0;
	}
	var_123_float = var_122_float;
	return 0;
}


func_1488(var_93_bool, var_94_object, var_95_float)
{
	var_96_bool = var_94_object == 0; //@nz
	if(var_96_bool != 0) {
		var_93_bool = 0;
		return 0;
	}
	var_98_bool = var_95_float > (int)0;
	if(var_98_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_129_bool = var_95_float < (int)0;
		if(var_129_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1509;
		}
		var_93_bool = 0;
		return 0;
	}
Label_1509:
	var_100_float = 0;
	var_95_float = var_100_float;
	func_1533(var_100_float);
	var_104_bool = 0; var_105_object = Obj(); var_106_string = ""; var_107_float = 0; var_108_float = 0; var_109_float = 0;
	var_94_object = var_105_object;
	var_95_float = var_107_float;
	func_1133(var_104_bool, var_105_object, "reputation", var_107_float, (float)0, (float)1);
	var_93_bool = 1;
	return 0;
	
}


func_491(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetCameraFarDistance(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_1523(var_187_float)
{
	var_188_object = Obj(); var_189_object = Obj();
	CreateFloatVector(var_189_object);
	@@var_189_object:add(var_187_float);
	SendWorldWndMessage((int)14, var_189_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1533(var_100_float)
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateFloatVector(var_102_object);
	@@var_102_object:add(var_100_float);
	SendWorldWndMessage((int)16, var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


