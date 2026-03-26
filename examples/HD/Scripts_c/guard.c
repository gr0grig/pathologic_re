// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SensePlayerOnly/1,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,Stop/0,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,KillTimer/1,FollowPath/5,RequestClearPath/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,ReportReputationChange/3,FindActor/2,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,StopAnimation/0,SetRTEnvelope/2,ReportReputationChange/4
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:tourniquet|W:bandage|W:bottle_empty|W:tvirin|W:idle|W:class|W:guard
// @GLOBALS: 0:bool:
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x25 vars=object
// @EVENT_17: op=0x39 vars=object
// @EVENT_30: op=0x51 vars=object,object,bool
// @EVENT_40: op=0x6d vars=object
// @EVENT_42: op=0x81 vars=object,string
// @EVENT_26: op=0xa6 vars=string
// @EVENT_6: op=0xb4 vars=
// @EVENT_41: op=0xc5 vars=object
// @EVENT_1: op=0xce vars=object
// @TASK_2: vars= params=1
// @EVENT_0: op=0x14b vars=object
// @EVENT_6: op=0x159 vars=
// @EVENT_22: op=0x1d2 vars=object,int,float,float
// @EVENT_16: op=0x1d4 vars=object,string
// @EVENT_41: op=0x1d6 vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_6: op=0x47c vars=
// @EVENT_7: op=0x4b4 vars=int
// @EVENT_1: op=0x4cf vars=object
// @EVENT_2: op=0x4de vars=object
// @EVENT_10: op=0x564 vars=object
// @EVENT_41: op=0x56f vars=object
// @STANDALONE_EVENT_16: op=0x871 vars=object,string
// @STANDALONE_EVENT_41: op=0x87e vars=object
// @STANDALONE_EVENT_22: op=0x884 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x88c vars=object,int,float,float,cvector,cvector
// @PE: 0xa6,0xb4,0xc5,0xce,0x13c,0x159,0x1b8,0x1d2,0x1d4,0x1d6,0x1d8,0x1e0,0x1e3,0x474,0x47c,0x4b4,0x4cf,0x4de,0x552,0x564,0x56f,0x578,0x583,0x71c,0x723,0x761,0x781,0x7b1,0x7b7,0x7e7,0x869,0x87e,0x884,0x88c,0x8dd,0x8e7,0x8ef,0x8f6,0x902,0x905,0x90b,0x90e,0x910,0x913,0x915,0x918,0x91a,0x91d,0x91f,0x922,0x924,0x927,0x92d,0x95b

task_0_event_5(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2306(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_187();
		}
		var_23_object = Obj();
		var_12_bool = var_23_object;
		func_2309(var_23_object);
	}
	return 2;
}


task_1_event_17(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_object = Obj();
	var_12_bool = var_15_object;
	func_1975(var_15_object);
	var_24_int = 0; var_25_object = Obj();
	var_12_bool = var_25_object;
	func_2269(var_24_int, var_25_object);
	var_24_int = var_14_int;
	var_61_bool = var_14_int > (int)0;
	if(var_61_bool != 0) {
		var_63_bool = var_14_int > (int)1;
		if(var_63_bool != 0) {
			func_187();
		}
		var_66_object = Obj();
		var_12_bool = var_66_object;
		func_2279(var_66_object);
	}
	return 2;
}


task_1_event_30(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0;
	var_12_bool = var_18_object;
	var_13_object = var_19_object;
	var_14_bool = var_20_bool;
	func_2358(var_18_object, var_19_object, var_20_bool);
	if(var_17_bool != 0) {
		var_50_int = 0; var_51_object = Obj(); var_52_bool = 0;
		var_12_bool = var_51_object;
		var_14_bool = var_52_bool;
		func_2287(var_51_object, var_52_bool);
		var_50_int = var_16_int;
		var_84_bool = var_16_int > (int)0;
		if(var_84_bool != 0) {
			var_86_bool = var_16_int > (int)1;
			if(var_86_bool != 0) {
				func_187();
			}
			var_89_object = Obj();
			var_12_bool = var_89_object;
			func_2294(var_89_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2315(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_187();
		}
		var_12_bool = Obj();
		func_2318();
	}
	return 2;
}


task_1_event_42(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	var_13_bool = var_18_string;
	func_1889(var_16_bool, var_17_object, var_18_string);
	if(var_16_bool != 0) {
		func_187();
		var_33_object = Obj(); var_34_string = "";
		var_12_object = var_33_object;
		var_13_bool = var_34_string;
		func_1921(var_33_object, var_34_string);
	} else {
		var_44_int = 0; var_45_string = ""; var_46_object = Obj();
		var_13_bool = var_45_string;
		var_12_object = var_46_object;
		func_2320(var_46_object);
		var_44_int = var_15_int;
		var_48_bool = var_15_int > (int)0;
		if(var_48_bool == 0) goto Label_165;
		var_50_bool = var_15_int > (int)1;
		if(var_50_bool != 0) {
			func_187();
		}
		var_51_string = ""; var_52_object = Obj();
		var_13_bool = var_51_string;
		var_12_object = var_52_object;
		func_2323();
	}
Label_165:
	return 2;
	
}


task_1_event_26(var_0_cvector, var_1_cvector, var_2_bool, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = "";
	var_12_bool = var_14_string;
	func_1988(var_13_bool, var_14_string);
	if(var_13_bool != 0) {
		func_187();
		var_24_string = "";
		var_12_bool = var_24_string;
		func_2004(var_24_string);
	}
	return 0;
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_187();
	func_2300();
	return 0;
}


task_1_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_187();
	var_12_bool = Obj();
	func_2174();
	return 0;
}


task_1_event_1(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_bool = var_14_object;
	func_1946(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_187();
		var_27_object = Obj();
		var_12_bool = var_27_object;
		func_1969(var_27_object);
	}
	return 0;
}


task_2_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_bool = var_16_object;
	func_2306(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_12_bool = var_19_object;
		func_2309(var_19_object);
	}
	return 2;
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_2300();
	return 0;
}


task_2_event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_float, var_6_float, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	return 0;
}


task_2_event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0;
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0;
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_1218(var_11_bool);
	func_2300();
	return 0;
}


task_4_event_7(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)1;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_1_cvector;
		func_1869(var_15_object);
	} else {
		var_20_int = 0;
		var_12_int = var_20_int;
		func_1362(var_11_bool, var_12_int, var_20_int);
	}
	return 0;
	
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_cvector == var_12_object;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool == 0; //@nz
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = true;
		var_16_object = Obj();
		var_12_object = var_16_object;
		func_1737(var_16_object);
	}
	return 0;
}


task_4_event_2(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_1_cvector == var_12_object;
	if(var_14_bool != 0) {
		var_15_bool = var_2_bool;
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_4_event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	func_1218(var_12_object);
	var_12_object = Obj();
	func_2174();
	return 0;
}


event_16(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0;
	var_17_bool = var_13_string == "health";
	if(var_17_bool != 0) {
		GetProperty("health", var_15_float);
		var_20_bool = var_15_float <= (int)0;
		if(var_20_bool != 0) {
			SignalDeath(var_12_object);
		}
	}
	return 2;
}


event_41(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_2153(var_13_object);
	return 0;
}


event_22(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1639(var_16_object, var_17_int, var_18_float);
	return 0;
}


event_43(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_12_object = var_18_object;
	var_13_int = var_19_int;
	var_14_float = var_20_float;
	var_16_cvector = var_21_cvector;
	var_17_cvector = var_22_cvector;
	func_1707(var_20_float, var_21_cvector, var_22_cvector);
	return 0;
}


main(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_2_bool = false;
	SensePlayerOnly((bool)1);
	func_2345();
	func_28();
	
Label_23:
	func_226(var_10_object, var_11_bool);
	goto Label_23;
}
EMIT "Return(); Pop(0)";


func_1024(var_339_bool)
{
	var_340_bool = 0;
	var_340_bool = 0;
	var_341_bool = 0;
	func_996(var_340_bool, var_341_bool);
	if(var_341_bool != 0) {
		var_358_bool = 0;
		func_1040(var_339_bool, var_340_bool, var_358_bool);
		if(var_358_bool != 0) {
			var_340_bool = 1;
		}
	}
	if(var_340_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_18_bool = 0;
	func_1732(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool == 1) goto Label_0;
	return 0;
}


func_2306(var_15_int)
{
	var_15_int = 2;
	return 0;
}


func_2309(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	func_2349(var_20_object);
	return 0;
}


func_1800(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj();
	self(var_125_object);
	var_125_object = var_123_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2315(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_2318()
{
	return 0;
}


func_1806(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_53_float = sqrt(var_54_int);
	var_55_float = 9.999999974752427e-07;
	var_56_bool = var_53_float < var_55_float;
	if(var_56_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_53_float;
	return 2;
}


func_1040(var_0_cvector, var_4_object, var_358_bool)
{
	var_359_object = Obj(); var_360_bool = 0; var_361_float = 0; var_362_cvector = CVector(0,0,0); var_363_cvector = CVector(0,0,0); var_364_object = Obj(); var_365_bool = 0; var_366_float = 0; var_367_cvector = CVector(0,0,0); var_368_cvector = CVector(0,0,0);
	GetScene(var_364_object);
	var_365_bool = 0;
	
Label_1044:
	var_369_cvector = CVector(0,0,0); var_370_object = Obj();
	var_370_object = var_0_cvector;
	func_1425(var_369_cvector, var_370_object);
	var_375_int = -var_369_cvector;
	FindDirLength(var_366_float, var_375_int, var_4_object);
	var_376_bool = var_366_float < var_4_object;
	if(var_376_bool != 0) {
	} else {
		Face(var_0_cvector);
		PlayAnimation("all", "bjump");
		@@@var_0_cvector:GetPFPosition(var_367_cvector);
		GetPFPosition(var_368_cvector);
		WaitForAnimEnd();
		func_1128(var_368_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_365_bool = 1;
		var_380_bool = 0;
		func_996(var_368_cvector, var_380_bool);
		var_381_bool = var_380_bool == 0; //@nz
		if(var_381_bool != 0) {
			goto Label_1082;
		}
		goto Label_1044;
	}
Label_1082:
	var_365_bool = var_358_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2320(var_44_int)
{
	var_44_int = 0;
	return 0;
}


func_2067(var_105_string)
{
	var_106_object = Obj(); var_107_int = 0; var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; var_111_bool = 0;
	CreateInvItem(var_109_object);
	@@var_109_object:SetItemName(var_105_string);
	@@var_109_object:SetProperty("Organ", (int)1);
	@@var_109_object:GetItemID(var_110_int);
	AddItem(var_111_bool, var_109_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2323()
{
	return 0;
}


func_789(var_0_cvector, var_1_cvector, var_387_bool, var_388_float)
{
	var_389_int = 0; var_390_bool = 0; var_391_int = 0; var_392_string = ""; var_393_int = 0; var_394_bool = 0; var_395_int = 0; var_396_string = "";
	func_1128(var_396_string);
	irand(var_393_int, var_1_cvector);
	var_393_int = var_393_int + (int)1;
	Face(var_0_cvector);
	SetAttackState((bool)1);
	func_1878();
	var_405_int = "attack_begin" + var_393_int;
	PlayAnimation("all", var_405_int);
	WaitForAnimEnd();
	func_1096(var_395_int, var_396_string);
	var_421_bool = 0; var_422_object = Obj();
	var_422_object = var_0_cvector;
	func_1571(var_421_bool, var_422_object);
	var_423_bool = var_421_bool == 0; //@nz
	if(var_423_bool != 0) {
		StopAsync();
		var_387_bool = 0;
		return 8;
	}
	var_424_float = 0; var_425_int = 0;
	var_388_float = var_424_float;
	var_393_int = var_425_int;
	func_750(var_396_string, var_424_float, var_425_int);
	var_508_int = "attack_middle" + var_393_int;
	HasAnimation(var_394_bool, "all", var_508_int);
	var_509_bool = var_394_bool;
	if(var_509_bool != 0) {
		func_1878();
		var_512_int = "attack_middle" + var_393_int;
		PlayAnimation("all", var_512_int);
		WaitForAnimEnd();
		func_1128(var_396_string);
		var_513_bool = 0; var_514_object = Obj();
		var_514_object = var_0_cvector;
		func_1571(var_513_bool, var_514_object);
		var_515_bool = var_513_bool == 0; //@nz
		if(var_515_bool != 0) {
			StopAsync();
			var_387_bool = 0;
			return 8;
		}
		var_516_float = 0; var_517_int = 0;
		var_388_float = var_516_float;
		var_393_int = var_517_int;
		func_750(var_396_string, var_516_float, var_517_int);
		var_395_int = 1;

	Label_866:
		var_519_int = "attack_middle" + var_393_int;
		var_521_int = var_519_int + "_";
		var_396_string = var_521_int + var_395_int;
		HasAnimation(var_394_bool, "all", var_396_string);
		var_523_bool = var_394_bool == 0; //@nz
		if(var_523_bool != 0) {
		} else {
			func_1878();
			PlayAnimation("all", var_396_string);
			WaitForAnimEnd();
			func_1128(var_396_string);
			var_539_bool = 0; var_540_object = Obj();
			var_540_object = var_0_cvector;
			func_1571(var_539_bool, var_540_object);
			var_541_bool = var_539_bool == 0; //@nz
			if(var_541_bool != 0) {
				StopAsync();
				var_387_bool = 0;
				var_542_float = 0; var_543_int = 0;
				var_388_float = var_542_float;
				var_393_int = var_543_int;
				func_750(var_396_string, var_542_float, var_543_int);
				var_395_int = var_395_int + (int)1;
				goto Label_866;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_527_int = "attack_end" + var_393_int;
	PlayAnimation("all", var_527_int);
	var_528_bool = 0;
	func_1142(var_528_bool);
	if(var_528_bool != 0) {
		var_529_bool = 0; var_530_float = 0;
		func_926(var_529_bool, (float)0.75);
		StopAsync();
	}
	var_387_bool = 1;
	return 8;
	
}


func_2325(var_18_bool)
{
	var_18_bool = 0;
	return 0;
}


func_1816(var_77_float, var_78_cvector, var_79_cvector)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_79_cvector - var_78_cvector;
	var_77_float = var_81_cvector | var_81_cvector;
	return 2;
}


func_2328()
{
	return 0;
}


func_2330(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_28()
{
	var_14_bool = 0;
	func_1732(var_14_bool);
	var_17_bool = var_14_bool == 0; //@nz
	if(var_17_bool != 0) {
		func_2300();
	}
	return 0;
}


func_1820(var_476_float, var_477_float, var_478_float)
{
	var_481_bool = var_477_float < var_478_float;
	if(var_481_bool != 0) {
		var_477_float = var_476_float;
	} else {
		var_478_float = var_476_float;
	}
	return 0;
	
}


func_2333()
{
	return 0;
}


func_2335(var_29_bool)
{
	var_29_bool = 0;
	return 0;
}


func_2338()
{
	return 0;
}


func_1571(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0;
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	func_1535(var_29_bool, var_30_object);
	var_46_bool = var_29_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	var_47_bool = 0; var_48_object = Obj(); var_49_string = "";
	var_26_object = var_48_object;
	func_1445(var_47_bool, var_48_object, "noaccess");
	var_56_bool = var_47_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_25_bool = 1;
		return 2;
	}
	@@var_26_object:GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == (int)0;
	return 2;
}


func_2084()
{
	var_99_int = 0;
	func_2017(var_99_int);
	var_104_bool = var_99_int != (int)1;
	if(var_104_bool != 0) {
		return 0;
	}
	var_105_string = "";
	func_2067("liver");
	var_116_string = "";
	func_2067("kidney");
	var_117_string = "";
	func_2067("heart");
	var_118_string = "";
	func_2067("blood");
	return 0;
}


func_1827(var_486_float, var_487_float, var_488_float, var_489_float)
{
	var_490_bool = var_487_float < var_488_float;
	if(var_490_bool != 0) {
		var_488_float = var_486_float;
		return 0;
	}
	var_491_bool = var_487_float > var_489_float;
	if(var_491_bool != 0) {
		var_489_float = var_486_float;
		return 0;
	}
	var_487_float = var_486_float;
	return 0;
}


func_2340(var_20_bool)
{
	var_20_bool = 0;
	return 0;
}


func_2343()
{
	return 0;
}


func_2345()
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_2349(var_20_object)
{
	var_21_bool = GlobalVars[0];
	if(var_21_bool != 0) {
		var_22_object = Obj();
		var_20_object = var_22_object;
		func_2023(var_22_object);
		return 0;
	}
	return 0;
}


func_1838(var_164_bool, var_165_int, var_166_int)
{
	var_167_int = 0; var_168_int = 0;
	irand(var_168_int, var_166_int);
	var_164_bool = var_168_int < var_165_int;
	return 2;
}


func_1843(var_494_float)
{
	var_495_object = Obj(); var_496_object = Obj();
	CreateFloatVector(var_496_object);
	@@var_496_object:add(var_494_float);
	var_498_bool = var_494_float < (int)0;
	if(var_498_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_496_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2358(var_17_bool, var_18_object, var_19_object)
{
	var_21_string = ""; var_22_bool = 0; var_23_string = ""; var_24_bool = 0;
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_19_object = var_26_object;
	func_1445(var_25_bool, var_26_object, "class");
	var_34_bool = var_25_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_19_object:GetProperty("class", var_23_string);
	var_37_bool = var_23_string != "guard";
	if(var_37_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	CanSee(var_24_bool, var_18_object);
	var_38_bool = 0;
	var_38_bool = 1;
	var_39_bool = var_24_bool;
	if(var_39_bool != 1) {
		var_40_float = 0; var_41_object = Obj();
		var_18_object = var_41_object;
		func_1432(var_40_float, var_41_object);
		var_49_bool = var_40_float <= (float)1000000.0;
		if(var_49_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 0) {
		var_17_bool = 1;
		return 4;
	}
	var_17_bool = 0;
	return 4;
}


func_310()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1595(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = "";
	var_44_bool = var_29_object == 0; //@ne
	if(var_44_bool != 0) {
		return 14;
	}
	IsDead(var_37_bool);
	var_45_bool = var_37_bool;
	if(var_45_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_38_int);
	var_47_bool = var_38_int < (int)0;
	if(var_47_bool != 0) {
		return 14;
	}
	@@var_29_object:GetPosition(var_39_cvector);
	GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_50_float = var_48_float * var_49_float;
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	var_53_float = var_51_float * var_52_float;
	var_54_int = var_50_float + var_53_float;
	var_56_bool = var_54_int >= (int)0;
	if(var_56_bool != 0) {
		var_43_string = "fhit";
	} else {
		var_43_string = "bhit";
	}
	var_59_int = var_43_string + "1";
	var_61_int = var_43_string + "2";
	FadeSecondaryAnimation("hit_react", var_59_int, var_61_int, (int)-10);
	return 14;
	
}


func_2108()
{
	var_128_bool = 0; var_129_bool = 0;
	ClearSubContainer((int)0);
	var_131_int = 0; var_132_int = 0;
	var_134_int = 0;
	func_1860(var_134_int);
	var_141_float = var_134_int * (int)40;
	var_132_int = (int)50 + var_141_float;
	func_2036((int)30, var_132_int);
	var_159_string = ""; var_160_int = 0; var_161_int = 0;
	func_1748("tourniquet", (int)1, (int)10);
	var_170_string = ""; var_171_int = 0; var_172_int = 0;
	func_1748("bandage", (int)1, (int)10);
	var_173_string = ""; var_174_int = 0; var_175_int = 0;
	func_1748("bottle_empty", (int)1, (int)2);
	var_176_string = ""; var_177_int = 0; var_178_int = 0;
	func_1748("tvirin", (int)1, (int)8);
	return 2;
}


func_1085(var_0_cvector, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0;
	var_294_bool = IsFuncExist(var_0_cvector, "IsAttacking", (int)1);
	if(var_294_bool != 0) {
		@@@var_0_cvector:IsAttacking(var_291_bool);
		var_291_bool = var_289_bool;
		return 2;
	}
	var_289_bool = 0;
	return 2;
}


func_315()
{
	return 0;
}


func_316(var_14_object)
{
	EventDisable(0);
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_349(var_15_object);
	var_95_object = Obj();
	var_14_object = var_95_object;
	func_2395(var_95_object);
	EventEnable(0);
	
Label_327:
	Hold();
	goto Label_327;
}
EMIT "Return(); Pop(0)";


func_1860(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1096(var_2_bool, var_5_bool)
{
	var_406_float = 0; var_407_int = 0; var_408_float = 0; var_409_int = 0;
	var_410_bool = var_2_bool == 0; //@nz
	if(var_410_bool != 0) {
		return 4;
	}
	var_411_bool = var_5_bool;
	if(var_411_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_414_bool = var_5_bool > (int)0;
		if(var_414_bool != 0) {
			return 4;
		}
	}
	rand(var_408_float);
	var_415_float = 0;
	func_1146(var_415_float);
	var_416_bool = var_408_float < var_415_float;
	if(var_416_bool != 0) {
		irand(var_409_int, var_2_bool);
		var_409_int = var_409_int + (int)1;
		var_419_int = "attack" + var_409_int;
		Speak(var_419_int);
		var_420_int = 0;
		func_1144(var_420_int);
		var_5_bool = var_420_int;
	}
	return 4;
}


func_1869(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_18_bool = var_17_bool;
	if(var_18_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1362(var_0_cvector, var_1_cvector, var_20_int)
{
	var_22_bool = var_20_int != (int)0;
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0; var_24_object = Obj();
	var_24_object = var_1_cvector;
	func_1400(var_23_bool, var_24_object);
	var_59_bool = var_23_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_0_cvector = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1878()
{
	var_399_object = Obj(); var_400_object = Obj();
	GetScene(var_400_object);
	var_402_object = Obj();
	func_1800(var_402_object);
	BroadcastMessage("battle", var_402_object, var_400_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2395(var_95_object)
{
	var_96_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	func_2084();
	var_119_bool = 0; var_120_object = Obj();
	var_95_object = var_120_object;
	func_1440(var_119_bool, var_120_object);
	if(var_119_bool != 0) {
		var_123_object = Obj();
		func_1800(var_123_object);
		ReportReputationChange(var_95_object, var_123_object, (float)-0.029999999329447746, (bool)1);
		func_2108();
	}
	return 0;
}


func_349(var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_string = ""; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = var_15_object == 0; //@ne
	if(var_36_bool != 0) {
		var_37_string = "";
		func_440("fdie");
	} else {
		@@var_15_object:GetPosition(var_26_cvector);
		GetPosition(var_27_cvector);
		GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_69_float = GetByIndex(var_29_cvector, 0);
		var_70_float = GetByIndex(var_28_cvector, 0);
		var_71_float = var_69_float * var_70_float;
		var_72_float = GetByIndex(var_29_cvector, 2);
		var_73_float = GetByIndex(var_28_cvector, 2);
		var_74_float = var_72_float * var_73_float;
		var_75_int = var_71_float + var_74_float;
		var_77_bool = var_75_int >= (int)0;
		if(var_77_bool != 0) {
			var_30_string = "fdie";
		} else {
				var_30_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_15_object = var_31_object;
		var_80_bool = IsFuncExist(var_15_object, "GetScriptProperty", (int)2);
		if(var_80_bool != 0) {
			@@var_15_object:HasScriptProperty(var_32_bool, "Owner");
			var_82_bool = var_32_bool;
			if(var_82_bool != 0) {
				@@var_15_object:GetScriptProperty(var_31_object, "Owner");
				var_84_bool = var_31_object == 0; //@ne
				if(var_84_bool != 0) {
					var_15_object = var_31_object;
				}
			}
		}
		var_87_bool = IsFuncExist(var_31_object, "@GetEyesHeight", (int)1);
		if(var_87_bool != 0) {
			@@var_31_object:GetEyesHeight(var_34_float);
			var_35_cvector = CVector(0.0, 0.0, 0.0);
			var_88_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_88_float;
			SetByIndex(var_35_cvector, 1) = var_88_float;
			LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = 1;
		} else {
			var_33_bool = 0;

		}
		var_90_string = "";
		var_30_string = var_90_string;
		func_1759(var_90_string);
		PlayAnimation("all", var_30_string);
		WaitForAnimEnd();
		var_92_bool = var_33_bool;
		if(var_92_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_30_string);
		RemoveEnvelope();
		var_31_object = 0;
	}
	return 20;
	
}


func_1889(var_16_bool, var_17_object, var_18_string)
{
	var_20_bool = var_18_string == "unholster";
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_17_object = var_22_object;
		func_2325(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x77f";
	}
	var_24_bool = var_18_string == "player_shot";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_17_object = var_26_object;
		func_2330(var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x77f";
	}
	var_28_bool = var_18_string == "battle";
	if(var_28_bool != 0) {
		var_29_bool = 0; var_30_object = Obj();
		var_17_object = var_30_object;
		func_2335(var_30_object);
		var_29_bool = var_16_bool;
		return 0;
	}
	var_16_bool = 0;
	return 0;
}


func_2148(var_152_int, var_153_string)
{
	var_154_int = 0; var_155_int = 0;
	GetInvItemByName(var_155_int, var_153_string);
	var_155_int = var_152_int;
	return 2;
}


func_1639(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0);
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_object = var_16_object;
	if(var_39_object != 0) {
		var_41_bool = var_17_int != (int)4;
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
		var_46_cvector = CVector(0,0,0); var_47_object = Obj();
		var_16_object = var_47_object;
		func_1425(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1806(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		CreateVectorVector(var_29_object);
		var_30_int = 1;

	Label_1668:
		var_58_int = "hit" + var_30_int;
		GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector);
		var_59_bool = var_31_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_107_int = var_33_cvector | var_28_cvector;
			var_109_bool = var_107_int >= (float)0.7071067690849304;
			if(var_109_bool != 0) {
				@@var_29_object:add(var_32_cvector);
			}
			var_30_int = var_30_int + (int)1;
			goto Label_1668;
		}
		@@var_29_object:size(var_34_int);
		var_60_int = var_34_int;
		if(var_60_int != 0) {
			irand(var_35_int, var_34_int);
			@@var_29_object:get(var_36_cvector, var_35_int);
			var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
			var_16_object = var_61_object;
			var_17_int = var_62_int;
			var_18_float = var_63_float;
			var_36_cvector = var_64_cvector;
			var_65_cvector = -var_28_cvector;
			func_1707(var_63_float, var_64_cvector, var_65_cvector);
			return 18;
		}
		var_29_object = 0;
	}
	var_106_object = Obj();
	var_16_object = var_106_object;
	func_1595(var_106_object);
	return 18;
	
}


func_1128(var_0_cvector)
{
	var_162_object = Obj();
	var_162_object = var_0_cvector;
	func_1869(var_162_object);
	return 0;
}


func_2153(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(2);
	func_316(var_14_object);
	TaskReturn();
	return 0;
}


func_1384(var_0_cvector)
{
	var_0_cvector = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1133(var_503_int)
{
	var_503_int = 0;
	return 0;
}


func_1135()
{
	var_295_string = "";
	func_1759("attack_stay");
	return 0;
}


func_1140()
{
	return 0;
}


func_1142(var_528_bool)
{
	var_528_bool = 1;
	return 0;
}


func_1144(var_420_int)
{
	var_420_int = 1;
	return 0;
}


func_1400(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	func_1571(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
	return 0;
}


func_1146(var_415_float)
{
	var_415_float = 0.5;
	return 0;
}


func_1407(var_238_string)
{
	var_238_string = "walk";
	return 0;
}


func_1921(var_33_object, var_34_string)
{
	var_36_bool = var_34_string == "unholster";
	if(var_36_bool != 0) {
		var_33_object = Obj();
		func_2328();
	} else {
		var_39_bool = var_34_string == "player_shot";
		if(var_39_bool != 0) {
			var_33_object = Obj();
			func_2333();
			goto Label_1945;
		}
		var_42_bool = var_34_string == "battle";
		if(var_42_bool == 0) goto Label_1945;
		var_33_object = Obj();
		func_2338();
	}
Label_1945:
	return 0;
	
}


func_1409(var_239_string)
{
	var_239_string = "run";
	return 0;
}


func_1155(var_2_bool, var_169_bool, var_170_object, var_171_float, var_172_float, var_173_bool, var_174_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_bool = 0; var_181_bool = 0;
	var_182_object = Obj();
	var_170_object = var_182_object;
	func_1869(var_182_object);
	SetTimer((int)1, (int)5);
	CanSee(var_180_bool, var_170_object);
	var_185_bool = var_180_bool;
	if(var_185_bool != 0) {
		var_2_bool = true;
		var_186_object = Obj();
		var_170_object = var_186_object;
		func_1737(var_186_object);
	} else {
		var_2_bool = false;
	}
	var_193_bool = 0; var_194_object = Obj();
	var_170_object = var_194_object;
	func_1440(var_193_bool, var_194_object);
	if(var_193_bool != 0) {
		var_197_object = Obj();
		func_1800(var_197_object);
		SendPlayerEnemy(var_170_object, var_197_object);
	}
	var_198_bool = 0; var_199_object = Obj(); var_200_float = 0; var_201_float = 0; var_202_bool = 0; var_203_bool = 0;
	var_170_object = var_199_object;
	var_171_float = var_200_float;
	var_172_float = var_201_float;
	var_173_bool = var_202_bool;
	var_174_bool = var_203_bool;
	func_1260(var_180_bool, var_181_bool, var_198_bool, var_199_object, var_200_float, var_201_float, var_202_bool, var_203_bool);
	var_198_bool = var_181_bool;
	var_249_bool = var_2_bool;
	if(var_249_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_181_bool = var_169_bool;
	return 4;
	
}


func_1411(var_466_string, var_467_int)
{
	var_469_bool = var_467_int == (int)2;
	if(var_469_bool != 0) {
		var_466_string = "fire";
		return 0;
	EMIT "GOTO 0x58f";
	}
	var_471_bool = var_467_int == (int)1;
	if(var_471_bool != 0) {
		var_466_string = "bullet";
		return 0;
	}
	var_466_string = "phys";
	return 0;
}


func_1425(var_46_cvector, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	GetPosition(var_50_cvector);
	@@var_47_object:GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
	return 4;
}


func_2198(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = "";
	var_69_int = var_66_int;
	if(var_69_int != 0) {
		"idle" = "idle" + var_66_int;
	}
	var_68_string = var_65_string;
	return 2;
}


func_1432(var_42_float, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_43_object:GetPosition(var_48_cvector);
	var_49_cvector = var_48_cvector - var_47_cvector;
	var_42_float = var_49_cvector | var_49_cvector;
	return 6;
}


func_1946(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_14_object = var_19_object;
	func_2325(var_19_object);
	if(var_18_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_14_object = var_21_object;
		func_1440(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		@@var_14_object:IsWeaponHolstered(var_16_bool);
		var_24_bool = var_16_bool == 0; //@nz
		if(var_24_bool != 0) {
			var_13_bool = 1;
			return 2;
		}
	}
	var_13_bool = 0;
	return 2;
}


func_2205(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_62_int = 0;
	
Label_2207:
	var_65_string = ""; var_66_int = 0;
	var_62_int = var_66_int;
	func_2198(var_65_string, var_66_int);
	HasAnimation(var_63_bool, "all", var_65_string);
	var_70_bool = var_63_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_62_int = var_62_int + (int)1;
		goto Label_2207;
	}
	var_62_int = var_59_int;
	return 4;
	
}


func_926(var_529_bool, var_530_float)
{
	var_531_float = 0; var_532_bool = 0; var_533_float = 0; var_534_bool = 0;
	rand(var_533_float);
	var_535_bool = var_533_float < var_530_float;
	if(var_535_bool != 0) {

	Label_931:
		IsAnimationPlaying(var_534_bool);
		var_536_bool = var_534_bool == 0; //@nz
		if(var_536_bool != 0) {
		} else {
			var_537_bool = 0;
			func_1024(var_537_bool);
			if(var_537_bool != 0) {
				var_529_bool = 1;
				sync();
				goto Label_931;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1128(var_534_bool);
	}
	goto Label_951;
	
Label_951:
	var_529_bool = 0;
	return 4;
	
}


func_1440(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_bool = 0;
	IsPlayerActor(var_120_object, var_122_bool);
	var_122_bool = var_119_bool;
	return 2;
}


func_1445(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0;
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", (int)2);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	@@var_48_object:HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
	return 2;
}


func_1707(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetScene(var_25_object);
	AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	var_29_object = Obj();
	var_18_object = var_29_object;
	func_1595(var_29_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2222()
{
	UnlookAsync("head");
	StopAnimation();
	return 0;
}


func_1969(var_27_object)
{
	var_27_object = Obj();
	func_2328();
	return 0;
}


func_1457(var_438_float, var_439_object, var_440_float, var_441_int)
{
	var_445_int = 0; var_446_string = ""; var_447_int = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0; var_451_int = 0; var_452_string = ""; var_453_int = 0; var_454_float = 0; var_455_float = 0; var_456_float = 0;
	var_457_bool = 0; var_458_object = Obj(); var_459_string = "";
	var_439_object = var_458_object;
	func_1445(var_457_bool, var_458_object, "health");
	var_460_bool = var_457_bool == 0; //@nz
	if(var_460_bool != 0) {
		var_438_float = 0.0;
		return 12;
	}
	var_461_bool = 0; var_462_object = Obj(); var_463_string = "";
	var_439_object = var_462_object;
	func_1445(var_461_bool, var_462_object, "armor");
	var_464_bool = var_461_bool == 0; //@nz
	if(var_464_bool != 0) {
		var_451_int = 0;
	} else {
			@@var_439_object:GetProperty("armor", var_451_int);
	}
	var_466_string = ""; var_467_int = 0;
	var_441_int = var_467_int;
	func_1411(var_466_string, var_467_int);
	var_452_string = "armor_" + var_466_string;
	var_472_bool = 0; var_473_object = Obj(); var_474_string = "";
	var_439_object = var_473_object;
	var_452_string = var_474_string;
	func_1445(var_472_bool, var_473_object, var_474_string);
	var_475_bool = var_472_bool == 0; //@nz
	if(var_475_bool != 0) {
		var_453_int = 0;
	} else {
		@@var_439_object:GetProperty(var_452_string, var_453_int);

	}
	var_476_float = 0; var_477_float = 0; var_478_float = 0;
	var_479_int = var_451_int + var_453_int;
	var_477_float = var_479_int / (float)100.0;
	func_1820(var_476_float, var_477_float, (float)1);
	var_476_float = var_454_float;
	@@var_439_object:GetProperty("health", var_455_float);
	var_484_int = (int)1 - var_454_float;
	var_456_float = var_440_float * var_484_int;
	var_486_float = 0; var_487_float = 0; var_488_float = 0; var_489_float = 0;
	var_487_float = var_455_float - var_456_float;
	func_1827(var_486_float, var_487_float, (float)0, (float)1);
	@@var_439_object:SetProperty("health", var_486_float);
	var_492_bool = 0; var_493_object = Obj();
	var_439_object = var_493_object;
	func_1440(var_492_bool, var_493_object);
	if(var_492_bool != 0) {
		var_494_float = 0;
		var_494_float = -var_456_float;
		func_1843(var_494_float);
	}
	var_456_float = var_438_float;
	return 12;
	
}


func_2228()
{
	var_32_object = Obj(); var_33_float = 0; var_34_int = 0; var_35_int = 0; var_36_object = Obj(); var_37_float = 0; var_38_int = 0; var_39_int = 0;
	FindActor(var_36_object, "player");
	var_41_object = var_36_object;
	if(var_41_object != 0) {
		var_42_float = 0; var_43_object = Obj();
		var_36_object = var_43_object;
		func_1432(var_42_float, var_43_object);
		var_37_float = sqrt(var_42_float);
		var_51_bool = var_37_float < (int)350;
		if(var_51_bool != 0) {
			var_52_object = Obj();
			var_36_object = var_52_object;
			func_1737(var_52_object);
		}
	}
	func_2205((int)0);
	var_59_int = var_38_int;
	var_72_bool = var_38_int == 0; //@nz
	if(var_72_bool != 0) {
		return 8;
	}
	irand(var_39_int, var_38_int);
	var_74_string = ""; var_75_int = 0;
	var_39_int = var_75_int;
	func_2198(var_74_string, var_75_int);
	PlayAnimation("all", var_74_string);
	WaitForAnimEnd();
	UnlookAsync("head");
	return 8;
}
EMIT "Stack[-4] = 0";


func_1975(var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1440(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_20_object = Obj();
		func_1800(var_20_object);
		ReportReputationChange(var_15_object, var_20_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_440(var_37_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_38_string = "";
	var_37_string = var_38_string;
	func_1759(var_38_string);
	PlayAnimation("all", var_37_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_37_string);
	RemoveEnvelope();
	return 0;
}


func_1721(var_272_object)
{
	var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0);
	@@var_272_object:GetPosition(var_276_cvector);
	GetPosition(var_277_cvector);
	var_278_cvector = var_276_cvector - var_277_cvector;
	var_279_float = GetByIndex(var_278_cvector, 0);
	var_280_float = GetByIndex(var_278_cvector, 2);
	RotateAsync(var_279_float, var_280_float);
	return 6;
}


func_953(var_0_cvector, var_326_bool, var_327_float)
{
	var_328_bool = 0; var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_float = 0; var_333_bool = 0; var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_float = 0;
	
Label_954:
	IsAnimationPlaying(var_333_bool);
	var_338_bool = var_333_bool == 0; //@nz
	if(var_338_bool != 0) {
	} else {
		var_339_bool = 0;
		func_1024(var_339_bool);
		if(var_339_bool != 0) {
			var_326_bool = 1;
			return 10;
		}
		var_382_bool = 0; var_383_object = Obj();
		var_383_object = var_0_cvector;
		func_1571(var_382_bool, var_383_object);
		var_384_bool = var_382_bool == 0; //@nz
		if(var_384_bool != 0) {
			var_326_bool = 0;
			return 10;
		}
		@@@var_0_cvector:GetPFPosition(var_334_cvector);
		GetPFPosition(var_335_cvector);
		var_336_cvector = var_334_cvector - var_335_cvector;
		var_337_float = var_336_cvector | var_336_cvector;
		var_385_float = var_327_float * var_327_float;
		var_386_bool = var_337_float < var_385_float;
		if(var_386_bool != 0) {
			var_387_bool = 0; var_388_float = 0;
			var_327_float = var_388_float;
			func_789(var_336_cvector, var_337_float, var_387_bool, var_388_float);
			var_326_bool = 1;
			sync();
			goto Label_954;
		}
		return 10;
	}
	func_1128(var_337_float);
	var_326_bool = 0;
	return 10;
	
}


func_187()
{
	var_25_bool = var_2_bool;
	if(var_25_bool != 0) {
		func_2222();
	} else {
		func_310();
	}
	return 0;
	
}


func_1218(var_2_bool)
{
	KillTimer((int)1);
	var_14_bool = var_2_bool;
	if(var_14_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1384(var_12_object);
	return 0;
}


func_1732(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
	return 2;
}


func_1988(var_13_bool, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	var_18_bool = var_14_string == "heal";
	if(var_18_bool != 0) {
		FindActor(var_16_object, "player");
		var_20_bool = 0; var_21_object = Obj();
		var_16_object = var_21_object;
		func_2340(var_21_object);
		var_20_bool = var_13_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = 0;
	return 2;
}


func_1737(var_52_object)
{
	var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0);
	@@var_52_object:GetEyesHeight(var_55_float);
	var_56_cvector = CVector(0.0, 0.0, 0.0);
	var_57_float = GetByIndex(var_56_cvector, 1);
	var_55_float = var_57_float;
	SetByIndex(var_56_cvector, 1) = var_57_float;
	LookAsync(var_52_object, "head", var_56_cvector);
	return 4;
}


func_715(var_1_cvector, var_2_bool, var_4_object)
{
	var_123_bool = 0; var_124_bool = 0; var_125_cvector = CVector(0,0,0); var_126_bool = 0; var_127_bool = 0; var_128_cvector = CVector(0,0,0);
	var_1_cvector = 0;
	
Label_717:
	var_132_int = var_1_cvector + (int)1;
	var_133_int = "attack_begin" + var_132_int;
	HasAnimation(var_126_bool, "all", var_133_int);
	var_134_bool = var_126_bool == 0; //@nz
	if(var_134_bool != 0) {
	} else {
			var_1_cvector = var_1_cvector + (int)1;
			goto Label_717;
	}
	var_2_bool = 0;
	
Label_731:
	var_137_int = var_2_bool + (int)1;
	var_138_int = "attack" + var_137_int;
	IsExisting3DSound(var_127_bool, var_138_int);
	var_139_bool = var_127_bool == 0; //@nz
	if(var_139_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_731;

	}
	GetAnimationOffset(var_128_cvector, "all", "bjump");
	var_142_float = GetByIndex(var_128_cvector, 2);
	var_4_object = -var_142_float;
	return 6;
	
}


func_1748(var_159_string, var_160_int, var_161_int)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0; var_165_int = 0; var_166_int = 0;
	var_160_int = var_165_int;
	var_161_int = var_166_int;
	func_1838(var_164_bool, var_165_int, var_166_int);
	if(var_164_bool != 0) {
		AddItem(var_163_bool, var_159_string, (int)0);
	}
	return 2;
}


func_2004(var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	var_28_bool = var_24_string == "heal";
	if(var_28_bool != 0) {
		FindActor(var_26_object, "player");
		var_26_object = Obj();
		func_2343();
		var_26_object = 0;
	}
	return 2;
}


func_472(var_91_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_float = 0;
	var_91_object = var_98_object;
	func_486(var_94_int, var_95_bool, var_96_float, var_97_int, var_91_object, var_98_object, (bool)1, (float)180.0);
	return 0;
}


func_220(var_2_bool)
{
	var_2_bool = true;
	func_2228();
	var_2_bool = false;
	return 0;
}


func_2269(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj();
	var_54_object = var_56_object;
	func_1571(var_55_bool, var_56_object);
	if(var_55_bool != 0) {
		var_53_int = 2;
	} else {
		var_53_int = 0;
	}
	return 0;
	
}


func_1759(var_38_string)
{
	var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	IsExisting3DSound(var_47_bool, var_38_string);
	var_55_bool = var_47_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_48_int = 0;

	Label_1765:
		var_57_int = var_48_int + (int)1;
		var_58_int = var_38_string + var_57_int;
		IsExisting3DSound(var_49_bool, var_58_int);
		var_59_bool = var_49_bool == 0; //@nz
		if(var_59_bool != 0) {
		} else {
			var_48_int = var_48_int + (int)1;
			goto Label_1765;
		}
		var_60_bool = var_48_int == 0; //@nz
		if(var_60_bool != 0) {
			return 16;
		}
		irand(var_50_int, var_48_int);
		var_62_int = var_50_int + (int)1;
		var_38_string = var_38_string + var_62_int;
	}
	Is3DSoundLoaded(var_51_bool, var_38_string);
	var_63_bool = var_51_bool;
	if(var_63_bool != 0) {
		GetEyesHeight(var_52_float);
		GetDirection(var_53_cvector);
		var_54_cvector = var_53_cvector * (int)50;
		var_65_float = GetByIndex(var_54_cvector, 1);
		var_65_float = var_65_float + var_52_float;
		SetByIndex(var_54_cvector, 1) = var_65_float;
		PlayGlobalSound(var_38_string, var_54_cvector);
	}
	return 16;
	
}


func_480(var_435_float)
{
	var_435_float = 0.05000000074505806;
	return 0;
}


func_2017(var_99_int)
{
	var_100_int = 0; var_101_int = 0;
	GetVariable("branch", var_101_int);
	var_101_int = var_99_int;
	return 2;
}


func_226(var_0_cvector, var_1_cvector)
{
	var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_object = Obj();
	GetPFPosition(var_1_cvector);
	GetDirection(var_0_cvector);
	
Label_231:
	func_315();
	irand(var_24_int, (int)10);
	var_30_int = var_24_int + (int)5;
	Sleep(var_30_int, var_25_bool);
	var_31_bool = var_25_bool;
	if(var_31_bool != 0) {
		func_220(var_27_object);
	} else {
		func_315();
		GetPFPosition(var_26_cvector);
		var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
		var_78_cvector = var_1_cvector;
		var_26_cvector = var_79_cvector;
		func_1816(var_77_float, var_78_cvector, var_79_cvector);
		var_83_bool = var_77_float > (int)40000;
		if(var_83_bool != 0) {
			FindPathTo(var_27_object, var_1_cvector);
			var_84_bool = var_27_object != 0; //@nn
			if(var_84_bool != 0) {
				RotatePath(var_27_object, var_25_bool);
				var_85_bool = var_25_bool == 0; //@nz
				if(var_85_bool != 0) {
				} else {
					FollowPath(var_27_object, (bool)0, var_25_bool);
					var_87_bool = var_25_bool == 0; //@nz
					if(var_87_bool != 0) {
						goto Label_307;
					}
					var_88_float = GetByIndex(var_0_cvector, 0);
					var_89_float = GetByIndex(var_0_cvector, 2);
					Rotate(var_88_float, var_89_float, var_25_bool);
					var_90_bool = var_25_bool == 0; //@nz
					if(var_90_bool != 0) {
						goto Label_307;
					}
					WaitForAnimEnd(var_25_bool);
					var_91_bool = var_25_bool == 0; //@nz
					if(var_91_bool != 0) {
						goto Label_307;
					}
					goto Label_308;
				EMIT "GOTO 0x124";
			}
				Sleep((int)1);
				var_27_object = 0;
				goto Label_307;
		}
			var_93_float = GetByIndex(var_0_cvector, 0);
			var_94_float = GetByIndex(var_0_cvector, 2);
			Rotate(var_93_float, var_94_float, var_25_bool);
			var_95_bool = var_25_bool == 0; //@nz
			if(var_95_bool != 0) {
				goto Label_307;
			}
			WaitForAnimEnd(var_25_bool);
			var_96_bool = var_25_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_307;
			}
			goto Label_308;
		}
	Label_307:
		goto Label_247;
	}
Label_308:
	goto Label_231;
	
}
EMIT "Return(); Pop(8)";


func_483(var_442_int)
{
	var_442_int = 0;
	return 0;
}


func_996(var_0_cvector, var_341_bool)
{
	var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_float = 0; var_346_float = 0; var_347_cvector = CVector(0,0,0); var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); var_350_float = 0; var_351_float = 0;
	var_352_bool = 0; var_353_object = Obj();
	var_353_object = var_0_cvector;
	func_1571(var_352_bool, var_353_object);
	var_354_bool = var_352_bool == 0; //@nz
	if(var_354_bool != 0) {
		var_341_bool = 0;
		return 10;
	}
	var_355_bool = 0;
	func_1085(var_351_float, var_355_bool);
	if(var_355_bool != 0) {
		@@@var_0_cvector:GetPFPosition(var_347_cvector);
		GetPFPosition(var_348_cvector);
		var_349_cvector = var_347_cvector - var_348_cvector;
		var_350_float = var_349_cvector | var_349_cvector;
		@@@var_0_cvector:GetAttackDistance(var_351_float);
		var_351_float = var_351_float + (int)50;
		var_357_float = var_351_float * var_351_float;
		var_341_bool = var_350_float <= var_357_float;
		return 10;
	}
	var_341_bool = 0;
	return 10;
}


func_486(var_0_cvector, var_3_object, var_5_bool, var_98_object, var_99_bool, var_100_float, var_175_bool, var_267_bool)
{
	var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_bool = 0; var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_float = 0;
	func_715(var_120_cvector, var_121_bool, var_122_float);
	var_5_bool = 0;
	var_147_bool = IsFuncExist(var_98_object, "@GetAttackDistance", (int)1);
	if(var_147_bool != 0) {
		@@var_98_object:GetAttackDistance(var_112_float);
		var_112_float = var_112_float + (int)50;
	} else {
							var_100_float = var_112_float;
	}
	var_150_bool = var_112_float >= (int)150;
	if(var_150_bool != 0) {
		var_112_float = 150;
	}
	var_3_object = false;
	var_0_cvector = var_98_object;
	IsPlayerActor(var_0_cvector, var_115_bool);
	var_151_bool = var_115_bool;
	if(var_151_bool != 0) {
		PlayGlobalMusic("attack");
		var_153_object = Obj();
		func_1800(var_153_object);
		SendPlayerEnemy(var_98_object, var_153_object);
	}
	var_156_bool = var_99_bool;
	if(var_156_bool != 0) {
		var_116_bool = 0;
	} else {
						var_116_bool = 1;

	}
	var_117_float = (float)400.0 + var_112_float;
	
Label_526:
	var_158_bool = 0;
	var_158_bool = 0;
	var_159_bool = 0; var_160_object = Obj();
	var_160_object = var_0_cvector;
	func_1571(var_159_bool, var_160_object);
	if(var_159_bool != 0) {
		var_161_bool = var_3_object == 0; //@nz
		if(var_161_bool != 0) {
			var_158_bool = 1;
		}
	}
	if(var_158_bool != 0) {
		func_1128(var_122_float);
		@@@var_0_cvector:GetPFPosition(var_113_cvector);
		GetPFPosition(var_114_cvector);
		var_118_cvector = var_113_cvector - var_114_cvector;
		var_119_float = var_118_cvector | var_118_cvector;
		var_167_float = var_117_float * var_117_float;
		var_168_bool = var_119_float >= var_167_float;
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj(); var_171_float = 0; var_172_float = 0; var_173_bool = 0; var_174_bool = 0;
			var_170_object = var_0_cvector;
			var_112_float = var_171_float;
			TaskCall(4);
			func_1155(var_177_bool, var_169_bool, var_170_object, var_171_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_252_bool = var_175_bool == 0; //@nz
			if(var_252_bool != 0) {
			} else {
				var_116_bool = 0;
		} else {
				var_258_float = var_100_float * var_100_float;
				var_259_bool = var_119_float >= var_258_float;
				if(var_259_bool != 0) {
					@@@var_0_cvector:GetPFPosition(var_120_cvector);
					CanReachByPF(var_121_bool, var_120_cvector);
					var_260_bool = var_121_bool == 0; //@nz
					if(var_260_bool != 0) {
						var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0;
						var_262_object = var_0_cvector;
						var_112_float = var_263_float;
						TaskCall(4);
						func_1155(var_269_bool, var_261_bool, var_262_object, var_263_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_270_bool = var_267_bool == 0; //@nz
						if(var_270_bool != 0) {
							goto Label_698;
						}
						var_116_bool = 0;
						goto Label_526;
					}
					var_271_bool = var_116_bool == 0; //@nz
					if(var_271_bool != 0) {
						var_272_object = Obj();
						var_272_object = var_0_cvector;
						func_1721(var_272_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1128(var_122_float);
						StopAsync();
						var_116_bool = 1;
						var_283_bool = 0; var_284_object = Obj();
						var_284_object = var_0_cvector;
						func_1571(var_283_bool, var_284_object);
						var_285_bool = var_283_bool == 0; //@nz
						if(var_285_bool != 0) {
							goto Label_698;
						}
					}
					rand(var_122_float);
					var_286_bool = 0;
					var_288_bool = var_122_float < (float)0.25;
					if(var_288_bool != 1) {
						var_289_bool = 0;
						func_1085((bool)1, var_289_bool);
						if(var_289_bool != 1) {
							var_286_bool = 0;
						}
					}
					if(var_286_bool != 0) {
						Face(var_0_cvector);
						func_1135();
						PlayAnimation("all", "attack_stay");
						var_326_bool = 0; var_327_float = 0;
						var_100_float = var_327_float;
						func_953(var_122_float, var_326_bool, var_327_float);
						StopAsync();
					} else {
						Face(var_0_cvector);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1128(var_122_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_548_bool = 0;
						func_1085(var_122_float, var_548_bool);
						var_549_bool = var_548_bool == 0; //@nz
						if(var_549_bool == 0) goto Label_688;
						var_550_bool = 0; var_551_object = Obj();
						var_551_object = var_0_cvector;
						func_1571(var_550_bool, var_551_object);
						var_552_bool = var_550_bool == 0; //@nz
						if(var_552_bool != 0) {
							goto Label_698;
						}
						@@@var_0_cvector:GetPFPosition(var_113_cvector);
						GetPFPosition(var_114_cvector);
						var_118_cvector = var_113_cvector - var_114_cvector;
						var_119_float = var_118_cvector | var_118_cvector;
						var_553_float = var_100_float * var_100_float;
						var_554_bool = var_119_float < var_553_float;
						if(var_554_bool == 0) goto Label_688;
						var_555_bool = 0; var_556_float = 0;
						var_100_float = var_556_float;
						func_789(var_121_bool, var_122_float, var_555_bool, var_556_float);
						var_557_bool = var_555_bool == 0; //@nz
						if(var_557_bool == 0) goto Label_688;
						goto Label_698;
				}
					var_558_bool = 0; var_559_float = 0;
					var_100_float = var_559_float;
					func_789(var_121_bool, var_122_float, var_558_bool, var_559_float);
					var_560_bool = var_558_bool == 0; //@nz
					if(var_560_bool != 0) {
						goto Label_698;
					}
					var_116_bool = 1;

				}
			Label_688:
				goto Label_697;
		}
		Label_697:
			goto Label_526;

		}
	}
Label_698:
	WaitForAnimEnd();
	var_253_object = var_3_object;
	if(var_253_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_256_bool = var_115_bool;
	if(var_256_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_2279(var_90_object)
{
	var_91_object = Obj();
	var_90_object = var_91_object;
	TaskCall(3);
	func_472(var_91_object);
	TaskReturn();
	return 0;
}


func_2023(var_22_object)
{
	var_23_int = 0;
	func_2017(var_23_int);
	var_28_bool = var_23_int == (int)1;
	if(var_28_bool != 0) {
		WorkWithCorpse(var_22_object);
	} else {
		Barter(var_22_object);
	}
	return 0;
	
}


func_1260(var_0_cvector, var_1_cvector, var_198_bool, var_199_object, var_200_float, var_201_float, var_202_bool, var_203_bool)
{
	var_204_bool = 0; var_205_bool = 0; var_206_object = Obj(); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_object = Obj(); var_212_bool = 0; var_213_bool = 0; var_214_object = Obj(); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_float = 0; var_219_object = Obj();
	var_0_cvector = false;
	var_1_cvector = var_199_object;
	var_203_bool = var_213_bool;
	
Label_1264:
	var_220_bool = 0; var_221_object = Obj();
	var_199_object = var_221_object;
	func_1400(var_220_bool, var_221_object);
	var_224_bool = var_220_bool == 0; //@nz
	if(var_224_bool != 0) {
		var_198_bool = 0;
		return 16;
	}
	@@var_199_object:GetPosition(var_215_cvector);
	GetPosition(var_216_cvector);
	var_217_cvector = var_215_cvector - var_216_cvector;
	var_218_float = var_217_cvector | var_217_cvector;
	var_225_bool = 0;
	var_225_bool = 0;
	var_227_bool = var_201_float > (int)0;
	if(var_227_bool != 0) {
		var_228_float = var_201_float * var_201_float;
		var_229_bool = var_218_float > var_228_float;
		if(var_229_bool != 0) {
			var_225_bool = 1;
		}
	}
	if(var_225_bool != 0) {
		Stop();
		var_198_bool = 0;
		return 16;
	}
	var_230_float = var_200_float * var_200_float;
	var_231_bool = var_218_float > var_230_float;
	if(var_231_bool != 0) {
		@@var_199_object:GetPFPosition(var_215_cvector);
		FindPathTo(var_219_object, var_215_cvector);
		var_232_bool = var_219_object != 0; //@nn
		if(var_232_bool != 0) {
			var_219_object = var_214_object;
			var_219_object = 0;
		}
		var_233_bool = var_214_object != 0; //@nn
		if(var_233_bool != 0) {
			var_234_bool = var_213_bool;
			if(var_234_bool == 0) goto Label_1313;
			var_213_bool = 0;
			RotatePath(var_214_object, var_212_bool);
			var_235_bool = var_212_bool == 0; //@nz
			if(var_235_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_238_string = "";
				func_1407(var_238_string);
				var_239_string = "";
				func_1409(var_239_string);
				FollowPath(var_214_object, var_202_bool, var_212_bool, var_238_string, var_239_string);
				var_240_bool = var_212_bool == 0; //@nz
				if(var_240_bool != 0) {
					var_241_cvector = var_0_cvector;
					if(var_241_cvector != 0) {
						var_214_object = 0;
						goto Label_1360;
					EMIT "GOTO 0x535";
					}
				} else {
					var_214_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_212_bool);
					var_244_bool = var_212_bool == 0; //@nz
					if(var_244_bool != 0) {
						var_245_cvector = var_0_cvector;
						if(var_245_cvector != 0) {
							var_214_object = 0;
							goto Label_1360;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1360;
	}
			var_219_object = 0;
			goto Label_1358;

		Label_1358:
			var_214_object = 0;

		}
		goto Label_1264;
	}
Label_1360:
	var_198_bool = !var_0_cvector;
	return 16;
	
}


func_750(var_0_cvector, var_424_float, var_425_int)
{
	var_426_object = Obj(); var_427_float = 0; var_428_float = 0; var_429_object = Obj(); var_430_float = 0; var_431_float = 0;
	var_433_float = var_424_float * (float)0.8999999761581421;
	GetVictim(var_433_float, var_429_object);
	ReportAttack(var_0_cvector);
	var_434_bool = var_429_object == var_0_cvector;
	if(var_434_bool != 0) {
		var_435_float = 0; var_436_object = Obj(); var_437_int = 0;
		var_429_object = var_436_object;
		var_425_int = var_437_int;
		func_480(var_437_int);
		var_435_float = var_430_float;
		var_438_float = 0; var_439_object = Obj(); var_440_float = 0; var_441_int = 0;
		var_429_object = var_439_object;
		var_430_float = var_440_float;
		var_442_int = 0; var_443_object = Obj(); var_444_int = 0;
		var_429_object = var_443_object;
		var_425_int = var_444_int;
		func_483(var_444_int);
		var_442_int = var_441_int;
		func_1457(var_438_float, var_439_object, var_440_float, var_441_int);
		var_438_float = var_431_float;
		var_503_int = 0;
		func_1133(var_503_int);
		ReportHit(var_0_cvector, var_503_int, var_431_float, var_430_float);
		var_504_object = Obj(); var_505_float = 0;
		var_429_object = var_504_object;
		var_431_float = var_505_float;
		func_1140();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2287(var_50_int, var_51_object)
{
	var_53_int = 0; var_54_object = Obj();
	var_51_object = var_54_object;
	func_2269(var_53_int, var_54_object);
	var_53_int = var_50_int;
	return 0;
}


func_2036(var_131_int, var_132_int)
{
	var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_bool = 0;
	var_146_bool = var_131_int > var_132_int;
	if(var_146_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_144_int = 0;
	var_148_bool = var_131_int != var_132_int;
	if(var_148_bool != 0) {
		var_149_int = var_132_int - var_131_int;
		irand(var_144_int, var_149_int);
	} else {
		var_158_bool = var_131_int == (int)0;
		if(var_158_bool == 0) goto Label_2054;
		return 4;
	}
Label_2054:
	var_144_int = var_144_int + var_131_int;
	var_151_bool = var_144_int == (int)0;
	if(var_151_bool != 0) {
		return 4;
	}
	var_152_int = 0; var_153_string = "";
	func_2148(var_152_int, "Money");
	AddItem(var_145_bool, var_152_int, (int)0, var_144_int);
	return 4;
	
}


func_2294(var_89_object)
{
	var_90_object = Obj();
	var_89_object = var_90_object;
	func_2279(var_90_object);
	return 0;
}


func_1530(var_40_bool, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	@@var_41_object:IsDead(var_43_bool);
	var_43_bool = var_40_bool;
	return 2;
}


func_2300()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


func_1535(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	var_35_bool = var_30_object == 0; //@ne
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_bool = 0;
	var_36_bool = 0;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", (int)1);
	if(var_39_bool != 0) {
		var_40_bool = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_1530(var_40_bool, var_41_object);
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	GetScene(var_33_object);
	var_44_bool = var_33_object == 0; //@ne
	if(var_44_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	@@var_30_object:GetScene(var_34_object);
	var_45_bool = var_33_object != var_34_object;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_29_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


