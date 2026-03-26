// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SetTimer/2,CanSee/2,SendPlayerEnemy/2,KillTimer/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetAnimationOffset/3,FindLongestDir/6,SetDirection/1,irand/2,IsPlayerActor/2,PlayGlobalMusic/1,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:walk|W:run|W:jump1|W:jump2|W:jump|W:@GetAttackDistance|A:GetAttackDistance|W:attack|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:player|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:revolver_ammo|W:samopal_ammo|W:rifle_ammo|W:lockpick|W:hunter_mark
// @RUN_OP: 0x4b4
// @RUN_TASK: 3
// @TASK_0: vars= params=1
// @EVENT_0: op=0x1b vars=object
// @EVENT_22: op=0x9a vars=object,int,float,float
// @EVENT_16: op=0x9c vars=object,string
// @EVENT_41: op=0x9e vars=object
// @TASK_1: vars=bool,object,bool params=6
// @EVENT_17: op=0xa0 vars=object
// @EVENT_7: op=0xd7 vars=int
// @EVENT_1: op=0xf2 vars=object
// @EVENT_2: op=0x101 vars=object
// @EVENT_10: op=0x187 vars=object
// @EVENT_41: op=0x192 vars=object
// @TASK_2: vars=object,int,int,bool,float,int,bool params=2
// @EVENT_17: op=0x1b4 vars=object
// @TASK_3: vars= params=0
// @EVENT_5: op=0x4b8 vars=
// @STANDALONE_EVENT_22: op=0x78e vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x796 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x7a0 vars=object,string
// @STANDALONE_EVENT_41: op=0x7ad vars=object
// @PE: 0x0,0xc,0x80,0x9a,0x9c,0x9e,0xa0,0xd7,0xf2,0x101,0x175,0x187,0x192,0x19b,0x1a6,0x1ae,0x1b1,0x1b4,0x4ae,0x4c7,0x665,0x66c,0x681,0x6e2,0x766,0x78e,0x796,0x7ad,0x7b3

task_0_event_0(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_bool = var_14_object;
		func_1762(var_14_object);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_10_bool = Obj();
	func_1971();
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_12_bool = var_10_bool == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_1736(var_13_object);
	} else {
		var_18_int = 0;
		var_10_bool = var_18_int;
		func_373(var_9_int, var_10_bool, var_18_int);
	}
	return 0;
	
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_bool;
	if(var_12_bool != 0) {
		var_13_bool = var_2_bool == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_bool = true;
		var_14_object = Obj();
		var_10_bool = var_14_object;
		func_1558(var_14_object);
	}
	return 0;
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_bool;
	if(var_12_bool != 0) {
		var_13_bool = var_2_bool;
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	RequestClearPath(var_10_bool);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	func_229(var_10_bool);
	var_10_bool = Obj();
	func_1965();
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object)
{
	var_10_object = Obj();
	func_1971();
	return 0;
}


task_3_event_5(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, "player");
	var_13_object = var_11_object;
	if(var_13_object != 0) {
		var_14_object = Obj(); var_15_bool = 0;
		var_11_object = var_14_object;
		TaskCall(2);
		func_422(var_14_object, (bool)0);
		TaskReturn();
	}
	return 2;
}
EMIT "Stack[-1] = 0";


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1465(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1533(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1894(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool)
{
	
Label_1204:
	Hold();
	goto Label_1204;
}
EMIT "Return(); Pop(0)";


func_128(var_158_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_159_string = "";
	var_158_string = var_159_string;
	func_1580(var_159_string);
	PlayAnimation("all", var_158_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_158_string);
	RemoveEnvelope();
	return 0;
}


func_1665(var_31_bool, var_32_object, var_33_float)
{
	var_34_bool = var_32_object == 0; //@nz
	if(var_34_bool != 0) {
		var_31_bool = 0;
		return 0;
	}
	var_36_bool = var_33_float > (int)0;
	if(var_36_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_67_bool = var_33_float < (int)0;
		if(var_67_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1686;
		}
		var_31_bool = 0;
		return 0;
	}
Label_1686:
	var_38_float = 0;
	var_33_float = var_38_float;
	func_1717(var_38_float);
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	var_32_object = var_43_object;
	var_33_float = var_45_float;
	func_1261(var_42_bool, var_43_object, "reputation", var_45_float, (float)0, (float)1);
	var_31_bool = 1;
	return 0;
	
}


func_1154(var_2_bool, var_5_int)
{
	var_363_float = 0; var_364_int = 0; var_365_float = 0; var_366_int = 0;
	var_367_bool = var_2_bool == 0; //@nz
	if(var_367_bool != 0) {
		return 4;
	}
	var_368_int = var_5_int;
	if(var_368_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_371_bool = var_5_int > (int)0;
		if(var_371_bool != 0) {
			return 4;
		}
	}
	rand(var_365_float);
	var_372_float = 0;
	func_1202(var_372_float);
	var_373_bool = var_365_float < var_372_float;
	if(var_373_bool != 0) {
		irand(var_366_int, var_2_bool);
		var_366_int = var_366_int + (int)1;
		var_376_int = "attack" + var_366_int;
		Speak(var_376_int);
		var_377_int = 0;
		func_1200(var_377_int);
		var_5_int = var_377_int;
	}
	return 4;
}


func_1283(var_395_float, var_396_object, var_397_float, var_398_int)
{
	var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0; var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0;
	var_414_bool = 0; var_415_object = Obj(); var_416_string = "";
	var_396_object = var_415_object;
	func_1249(var_414_bool, var_415_object, "health");
	var_417_bool = var_414_bool == 0; //@nz
	if(var_417_bool != 0) {
		var_395_float = 0.0;
		return 12;
	}
	var_418_bool = 0; var_419_object = Obj(); var_420_string = "";
	var_396_object = var_419_object;
	func_1249(var_418_bool, var_419_object, "armor");
	var_421_bool = var_418_bool == 0; //@nz
	if(var_421_bool != 0) {
		var_408_int = 0;
	} else {
			@@var_396_object:GetProperty("armor", var_408_int);
	}
	var_423_string = ""; var_424_int = 0;
	var_398_int = var_424_int;
	func_1223(var_423_string, var_424_int);
	var_409_string = "armor_" + var_423_string;
	var_429_bool = 0; var_430_object = Obj(); var_431_string = "";
	var_396_object = var_430_object;
	var_409_string = var_431_string;
	func_1249(var_429_bool, var_430_object, var_431_string);
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_410_int = 0;
	} else {
		@@var_396_object:GetProperty(var_409_string, var_410_int);

	}
	var_433_float = 0; var_434_float = 0; var_435_float = 0;
	var_436_int = var_408_int + var_410_int;
	var_434_float = var_436_int / (float)100.0;
	func_1637(var_433_float, var_434_float, (float)1);
	var_433_float = var_411_float;
	@@var_396_object:GetProperty("health", var_412_float);
	var_441_int = (int)1 - var_411_float;
	var_413_float = var_397_float * var_441_int;
	var_443_float = 0; var_444_float = 0; var_445_float = 0; var_446_float = 0;
	var_444_float = var_412_float - var_413_float;
	func_1644(var_443_float, var_444_float, (float)0, (float)1);
	@@var_396_object:SetProperty("health", var_443_float);
	var_449_bool = 0; var_450_object = Obj();
	var_396_object = var_450_object;
	func_1244(var_449_bool, var_450_object);
	if(var_449_bool != 0) {
		var_451_float = 0;
		var_451_float = -var_413_float;
		func_1700(var_451_float);
	}
	var_413_float = var_395_float;
	return 12;
	
}


func_0(var_69_object)
{
	func_1847();
	func_1823();
	var_135_object = Obj();
	var_69_object = var_135_object;
	func_12(var_135_object);
	return 0;
}


func_773(var_1_object, var_2_bool, var_4_int)
{
	var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_775:
	var_57_int = var_1_object + (int)1;
	var_58_int = "attack_begin" + var_57_int;
	HasAnimation(var_51_bool, "all", var_58_int);
	var_59_bool = var_51_bool == 0; //@nz
	if(var_59_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_775;
	}
	var_2_bool = 0;
	
Label_789:
	var_62_int = var_2_bool + (int)1;
	var_63_int = "attack" + var_62_int;
	IsExisting3DSound(var_52_bool, var_63_int);
	var_64_bool = var_52_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_789;

	}
	GetAnimationOffset(var_53_cvector, "all", "bjump");
	var_67_float = GetByIndex(var_53_cvector, 2);
	var_4_int = -var_67_float;
	return 6;
	
}


func_395(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_12(var_135_object)
{
	EventDisable(0);
	var_136_object = Obj();
	var_135_object = var_136_object;
	func_37(var_136_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_23:
	Hold();
	goto Label_23;
}
EMIT "Return(); Pop(0)";


func_1547(var_229_object)
{
	var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0);
	@@var_229_object:GetPosition(var_233_cvector);
	GetPosition(var_234_cvector);
	var_235_cvector = var_233_cvector - var_234_cvector;
	var_236_float = GetByIndex(var_235_cvector, 0);
	var_237_float = GetByIndex(var_235_cvector, 2);
	RotateAsync(var_236_float, var_237_float);
	return 6;
}


func_1421(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_271(var_0_bool, var_1_object, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj(); var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj();
	var_0_bool = false;
	var_1_object = var_156_object;
	var_160_bool = var_170_bool;
	
Label_275:
	var_177_bool = 0; var_178_object = Obj();
	var_156_object = var_178_object;
	func_411(var_177_bool, var_178_object);
	var_181_bool = var_177_bool == 0; //@nz
	if(var_181_bool != 0) {
		var_155_bool = 0;
		return 16;
	}
	@@var_156_object:GetPosition(var_172_cvector);
	GetPosition(var_173_cvector);
	var_174_cvector = var_172_cvector - var_173_cvector;
	var_175_float = var_174_cvector | var_174_cvector;
	var_182_bool = 0;
	var_182_bool = 0;
	var_184_bool = var_158_float > (int)0;
	if(var_184_bool != 0) {
		var_185_float = var_158_float * var_158_float;
		var_186_bool = var_175_float > var_185_float;
		if(var_186_bool != 0) {
			var_182_bool = 1;
		}
	}
	if(var_182_bool != 0) {
		Stop();
		var_155_bool = 0;
		return 16;
	}
	var_187_float = var_157_float * var_157_float;
	var_188_bool = var_175_float > var_187_float;
	if(var_188_bool != 0) {
		@@var_156_object:GetPFPosition(var_172_cvector);
		FindPathTo(var_176_object, var_172_cvector);
		var_189_bool = var_176_object != 0; //@nn
		if(var_189_bool != 0) {
			var_176_object = var_171_object;
			var_176_object = 0;
		}
		var_190_bool = var_171_object != 0; //@nn
		if(var_190_bool != 0) {
			var_191_bool = var_170_bool;
			if(var_191_bool == 0) goto Label_324;
			var_170_bool = 0;
			RotatePath(var_171_object, var_169_bool);
			var_192_bool = var_169_bool == 0; //@nz
			if(var_192_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_195_string = "";
				func_418(var_195_string);
				var_196_string = "";
				func_420(var_196_string);
				FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string);
				var_197_bool = var_169_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_198_bool = var_0_bool;
					if(var_198_bool != 0) {
						var_171_object = 0;
						goto Label_371;
					EMIT "GOTO 0x158";
					}
				} else {
					var_171_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_169_bool);
					var_201_bool = var_169_bool == 0; //@nz
					if(var_201_bool != 0) {
						var_202_bool = var_0_bool;
						if(var_202_bool != 0) {
							var_171_object = 0;
							goto Label_371;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_371;
	}
			var_176_object = 0;
			goto Label_369;

		Label_369:
			var_171_object = 0;

		}
		goto Label_275;
	}
Label_371:
	var_155_bool = !var_0_bool;
	return 16;
	
}


func_1806(var_121_string)
{
	var_122_object = Obj(); var_123_int = 0; var_124_bool = 0; var_125_object = Obj(); var_126_int = 0; var_127_bool = 0;
	CreateInvItem(var_125_object);
	@@var_125_object:SetItemName(var_121_string);
	@@var_125_object:SetProperty("Organ", (int)1);
	@@var_125_object:GetItemID(var_126_int);
	AddItem(var_127_bool, var_125_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1558(var_143_object)
{
	var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0);
	@@var_143_object:GetEyesHeight(var_146_float);
	var_147_cvector = CVector(0.0, 0.0, 0.0);
	var_148_float = GetByIndex(var_147_cvector, 1);
	var_146_float = var_148_float;
	SetByIndex(var_147_cvector, 1) = var_148_float;
	LookAsync(var_143_object, "head", var_147_cvector);
	return 4;
}


func_411(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj();
	var_178_object = var_180_object;
	func_1397(var_179_bool, var_180_object);
	var_179_bool = var_177_bool;
	return 0;
}


func_1054(var_0_bool, var_298_bool)
{
	var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_float = 0;
	var_309_bool = 0; var_310_object = Obj();
	var_310_object = var_0_bool;
	func_1397(var_309_bool, var_310_object);
	var_311_bool = var_309_bool == 0; //@nz
	if(var_311_bool != 0) {
		var_298_bool = 0;
		return 10;
	}
	var_312_bool = 0;
	func_1143(var_308_float, var_312_bool);
	if(var_312_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_304_cvector);
		GetPFPosition(var_305_cvector);
		var_306_cvector = var_304_cvector - var_305_cvector;
		var_307_float = var_306_cvector | var_306_cvector;
		@@@var_0_bool:GetAttackDistance(var_308_float);
		var_308_float = var_308_float + (int)50;
		var_314_float = var_308_float * var_308_float;
		var_298_bool = var_307_float <= var_314_float;
		return 10;
	}
	var_298_bool = 0;
	return 10;
}


func_1823()
{
	var_118_int = 0;
	func_1756(var_118_int);
	var_120_bool = var_118_int != (int)1;
	if(var_120_bool != 0) {
		return 0;
	}
	var_121_string = "";
	func_1806("liver");
	var_132_string = "";
	func_1806("kidney");
	var_133_string = "";
	func_1806("heart");
	var_134_string = "";
	func_1806("blood");
	return 0;
}


func_544(var_0_bool, var_3_object, var_5_int, var_23_object, var_24_bool, var_25_float, var_132_bool, var_224_bool)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0;
	func_773(var_45_cvector, var_46_bool, var_47_float);
	var_5_int = 0;
	var_72_bool = IsFuncExist(var_23_object, "@GetAttackDistance", (int)1);
	if(var_72_bool != 0) {
		@@var_23_object:GetAttackDistance(var_37_float);
		var_37_float = var_37_float + (int)50;
	} else {
							var_25_float = var_37_float;
	}
	var_75_bool = var_37_float >= (int)150;
	if(var_75_bool != 0) {
		var_37_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_23_object;
	IsPlayerActor(var_0_bool, var_40_bool);
	var_76_bool = var_40_bool;
	if(var_76_bool != 0) {
		PlayGlobalMusic("attack");
		var_78_object = Obj();
		func_1621(var_78_object);
		SendPlayerEnemy(var_23_object, var_78_object);
	}
	var_81_bool = var_24_bool;
	if(var_81_bool != 0) {
		var_41_bool = 0;
	} else {
						var_41_bool = 1;

	}
	var_42_float = (float)300.0 + var_37_float;
	
Label_584:
	var_83_bool = 0;
	var_83_bool = 0;
	var_84_bool = 0; var_85_object = Obj();
	var_85_object = var_0_bool;
	func_1397(var_84_bool, var_85_object);
	if(var_84_bool != 0) {
		var_118_bool = var_3_object == 0; //@nz
		if(var_118_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		func_1186(var_47_float);
		@@@var_0_bool:GetPFPosition(var_38_cvector);
		GetPFPosition(var_39_cvector);
		var_43_cvector = var_38_cvector - var_39_cvector;
		var_44_float = var_43_cvector | var_43_cvector;
		var_124_float = var_42_float * var_42_float;
		var_125_bool = var_44_float >= var_124_float;
		if(var_125_bool != 0) {
			var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_bool = 0;
			var_127_object = var_0_bool;
			var_37_float = var_128_float;
			TaskCall(1);
			func_166(var_134_bool, var_126_bool, var_127_object, var_128_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_209_bool = var_132_bool == 0; //@nz
			if(var_209_bool != 0) {
			} else {
				var_41_bool = 0;
		} else {
				var_215_float = var_25_float * var_25_float;
				var_216_bool = var_44_float >= var_215_float;
				if(var_216_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_45_cvector);
					CanReachByPF(var_46_bool, var_45_cvector);
					var_217_bool = var_46_bool == 0; //@nz
					if(var_217_bool != 0) {
						var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_bool = 0;
						var_219_object = var_0_bool;
						var_37_float = var_220_float;
						TaskCall(1);
						func_166(var_226_bool, var_218_bool, var_219_object, var_220_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_227_bool = var_224_bool == 0; //@nz
						if(var_227_bool != 0) {
							goto Label_756;
						}
						var_41_bool = 0;
						goto Label_584;
					}
					var_228_bool = var_41_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_object = Obj();
						var_229_object = var_0_bool;
						func_1547(var_229_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1186(var_47_float);
						StopAsync();
						var_41_bool = 1;
						var_240_bool = 0; var_241_object = Obj();
						var_241_object = var_0_bool;
						func_1397(var_240_bool, var_241_object);
						var_242_bool = var_240_bool == 0; //@nz
						if(var_242_bool != 0) {
							goto Label_756;
						}
					}
					rand(var_47_float);
					var_243_bool = 0;
					var_245_bool = var_47_float < (float)0.6000000238418579;
					if(var_245_bool != 1) {
						var_246_bool = 0;
						func_1143((bool)1, var_246_bool);
						if(var_246_bool != 1) {
							var_243_bool = 0;
						}
					}
					if(var_243_bool != 0) {
						Face(var_0_bool);
						func_1193();
						PlayAnimation("all", "attack_stay");
						var_283_bool = 0; var_284_float = 0;
						var_25_float = var_284_float;
						func_1011(var_47_float, var_283_bool, var_284_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1186(var_47_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_577_bool = 0;
						func_1143(var_47_float, var_577_bool);
						var_578_bool = var_577_bool == 0; //@nz
						if(var_578_bool == 0) goto Label_746;
						var_579_bool = 0; var_580_object = Obj();
						var_580_object = var_0_bool;
						func_1397(var_579_bool, var_580_object);
						var_581_bool = var_579_bool == 0; //@nz
						if(var_581_bool != 0) {
							goto Label_756;
						}
						@@@var_0_bool:GetPFPosition(var_38_cvector);
						GetPFPosition(var_39_cvector);
						var_43_cvector = var_38_cvector - var_39_cvector;
						var_44_float = var_43_cvector | var_43_cvector;
						var_582_float = var_25_float * var_25_float;
						var_583_bool = var_44_float < var_582_float;
						if(var_583_bool == 0) goto Label_746;
						var_584_bool = 0; var_585_float = 0;
						var_25_float = var_585_float;
						func_847(var_46_bool, var_47_float, var_584_bool, var_585_float);
						var_586_bool = var_584_bool == 0; //@nz
						if(var_586_bool == 0) goto Label_746;
						goto Label_756;
				}
					var_587_bool = 0; var_588_float = 0;
					var_25_float = var_588_float;
					func_847(var_46_bool, var_47_float, var_587_bool, var_588_float);
					var_589_bool = var_587_bool == 0; //@nz
					if(var_589_bool != 0) {
						goto Label_756;
					}
					var_41_bool = 1;

				}
			Label_746:
				goto Label_755;
		}
		Label_755:
			goto Label_584;

		}
	}
Label_756:
	WaitForAnimEnd();
	var_210_object = var_3_object;
	if(var_210_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_213_bool = var_40_bool;
	if(var_213_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1569(var_94_string, var_95_int, var_96_int)
{
	var_97_bool = 0; var_98_bool = 0;
	var_99_bool = 0; var_100_int = 0; var_101_int = 0;
	var_95_int = var_100_int;
	var_96_int = var_101_int;
	func_1660(var_99_bool, var_100_int, var_101_int);
	if(var_99_bool != 0) {
		AddItem(var_98_bool, var_94_string, (int)0);
	}
	return 2;
}


func_418(var_195_string)
{
	var_195_string = "walk";
	return 0;
}


func_1186(var_0_bool)
{
	var_119_object = Obj();
	var_119_object = var_0_bool;
	func_1736(var_119_object);
	return 0;
}


func_420(var_196_string)
{
	var_196_string = "run";
	return 0;
}


func_37(var_136_object)
{
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_string = ""; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_string = ""; var_152_object = Obj(); var_153_bool = 0; var_154_bool = 0; var_155_float = 0; var_156_cvector = CVector(0,0,0);
	var_157_bool = var_136_object == 0; //@ne
	if(var_157_bool != 0) {
		var_158_string = "";
		func_128("fdie");
	} else {
		@@var_136_object:GetPosition(var_147_cvector);
		GetPosition(var_148_cvector);
		GetDirection(var_149_cvector);
		var_150_cvector = var_148_cvector - var_147_cvector;
		var_190_float = GetByIndex(var_150_cvector, 0);
		var_191_float = GetByIndex(var_149_cvector, 0);
		var_192_float = var_190_float * var_191_float;
		var_193_float = GetByIndex(var_150_cvector, 2);
		var_194_float = GetByIndex(var_149_cvector, 2);
		var_195_float = var_193_float * var_194_float;
		var_196_int = var_192_float + var_195_float;
		var_198_bool = var_196_int >= (int)0;
		if(var_198_bool != 0) {
			var_151_string = "fdie";
		} else {
				var_151_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_136_object = var_152_object;
		var_201_bool = IsFuncExist(var_136_object, "GetScriptProperty", (int)2);
		if(var_201_bool != 0) {
			@@var_136_object:HasScriptProperty(var_153_bool, "Owner");
			var_203_bool = var_153_bool;
			if(var_203_bool != 0) {
				@@var_136_object:GetScriptProperty(var_152_object, "Owner");
				var_205_bool = var_152_object == 0; //@ne
				if(var_205_bool != 0) {
					var_136_object = var_152_object;
				}
			}
		}
		var_208_bool = IsFuncExist(var_152_object, "@GetEyesHeight", (int)1);
		if(var_208_bool != 0) {
			@@var_152_object:GetEyesHeight(var_155_float);
			var_156_cvector = CVector(0.0, 0.0, 0.0);
			var_209_float = GetByIndex(var_156_cvector, 1);
			var_155_float = var_209_float;
			SetByIndex(var_156_cvector, 1) = var_209_float;
			LookAsync(var_136_object, "head", var_156_cvector);
			var_154_bool = 1;
		} else {
			var_154_bool = 0;

		}
		var_211_string = "";
		var_151_string = var_211_string;
		func_1580(var_211_string);
		PlayAnimation("all", var_151_string);
		WaitForAnimEnd();
		var_213_bool = var_154_bool;
		if(var_213_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_151_string);
		RemoveEnvelope();
		var_152_object = 0;
	}
	return 20;
	
}


func_166(var_2_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; var_138_bool = 0;
	var_139_object = Obj();
	var_127_object = var_139_object;
	func_1736(var_139_object);
	SetTimer((int)1, (int)5);
	CanSee(var_137_bool, var_127_object);
	var_142_bool = var_137_bool;
	if(var_142_bool != 0) {
		var_2_bool = true;
		var_143_object = Obj();
		var_127_object = var_143_object;
		func_1558(var_143_object);
	} else {
		var_2_bool = false;
	}
	var_150_bool = 0; var_151_object = Obj();
	var_127_object = var_151_object;
	func_1244(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_154_object = Obj();
		func_1621(var_154_object);
		SendPlayerEnemy(var_127_object, var_154_object);
	}
	var_155_bool = 0; var_156_object = Obj(); var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_bool = 0;
	var_127_object = var_156_object;
	var_128_float = var_157_float;
	var_129_float = var_158_float;
	var_130_bool = var_159_bool;
	var_131_bool = var_160_bool;
	func_271(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool);
	var_155_bool = var_138_bool;
	var_206_bool = var_2_bool;
	if(var_206_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_138_bool = var_126_bool;
	return 4;
	
}


func_1191(var_460_int)
{
	var_460_int = 0;
	return 0;
}


func_808(var_0_bool, var_381_float, var_382_int)
{
	var_383_object = Obj(); var_384_float = 0; var_385_float = 0; var_386_object = Obj(); var_387_float = 0; var_388_float = 0;
	var_390_float = var_381_float * (float)0.8999999761581421;
	GetVictim(var_390_float, var_386_object);
	ReportAttack(var_0_bool);
	var_391_bool = var_386_object == var_0_bool;
	if(var_391_bool != 0) {
		var_392_float = 0; var_393_object = Obj(); var_394_int = 0;
		var_386_object = var_393_object;
		var_382_int = var_394_int;
		func_430(var_394_int);
		var_392_float = var_387_float;
		var_395_float = 0; var_396_object = Obj(); var_397_float = 0; var_398_int = 0;
		var_386_object = var_396_object;
		var_387_float = var_397_float;
		var_399_int = 0; var_400_object = Obj(); var_401_int = 0;
		var_386_object = var_400_object;
		var_382_int = var_401_int;
		func_433(var_401_int);
		var_399_int = var_398_int;
		func_1283(var_395_float, var_396_object, var_397_float, var_398_int);
		var_395_float = var_388_float;
		var_460_int = 0;
		func_1191(var_460_int);
		ReportHit(var_0_bool, var_460_int, var_388_float, var_387_float);
		var_461_object = Obj(); var_462_float = 0;
		var_386_object = var_461_object;
		var_388_float = var_462_float;
		func_1198();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1193()
{
	var_252_string = "";
	func_1580("attack_stay");
	return 0;
}


func_422(var_14_object, var_15_bool)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_float = 0;
	var_14_object = var_23_object;
	var_15_bool = var_24_bool;
	func_544(var_20_float, var_21_int, var_22_bool, var_14_object, var_15_bool, var_23_object, var_24_bool, (float)180.0);
	return 0;
}


func_1700(var_451_float)
{
	var_452_object = Obj(); var_453_object = Obj();
	CreateFloatVector(var_453_object);
	@@var_453_object:add(var_451_float);
	var_455_bool = var_451_float < (int)0;
	if(var_455_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_453_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1580(var_159_string)
{
	var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_bool = 0; var_173_float = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0);
	IsExisting3DSound(var_168_bool, var_159_string);
	var_176_bool = var_168_bool == 0; //@nz
	if(var_176_bool != 0) {
		var_169_int = 0;

	Label_1586:
		var_178_int = var_169_int + (int)1;
		var_179_int = var_159_string + var_178_int;
		IsExisting3DSound(var_170_bool, var_179_int);
		var_180_bool = var_170_bool == 0; //@nz
		if(var_180_bool != 0) {
		} else {
			var_169_int = var_169_int + (int)1;
			goto Label_1586;
		}
		var_181_bool = var_169_int == 0; //@nz
		if(var_181_bool != 0) {
			return 16;
		}
		irand(var_171_int, var_169_int);
		var_183_int = var_171_int + (int)1;
		var_159_string = var_159_string + var_183_int;
	}
	Is3DSoundLoaded(var_172_bool, var_159_string);
	var_184_bool = var_172_bool;
	if(var_184_bool != 0) {
		GetEyesHeight(var_173_float);
		GetDirection(var_174_cvector);
		var_175_cvector = var_174_cvector * (int)50;
		var_186_float = GetByIndex(var_175_cvector, 1);
		var_186_float = var_186_float + var_173_float;
		SetByIndex(var_175_cvector, 1) = var_186_float;
		PlayGlobalSound(var_159_string, var_175_cvector);
	}
	return 16;
	
}


func_430(var_392_float)
{
	var_392_float = 0.20000000298023224;
	return 0;
}


func_1198()
{
	return 0;
}


func_1200(var_377_int)
{
	var_377_int = 1;
	return 0;
}


func_433(var_399_int)
{
	var_399_int = 0;
	return 0;
}


func_1202(var_372_float)
{
	var_372_float = 0.5;
	return 0;
}


func_1971()
{
	return 0;
}


func_1717(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateFloatVector(var_40_object);
	@@var_40_object:add(var_38_float);
	SendWorldWndMessage((int)16, var_40_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1847()
{
	var_70_int = 0; var_71_bool = 0; var_72_int = 0; var_73_bool = 0;
	ClearSubContainer((int)0);
	var_75_int = 0; var_76_int = 0;
	func_1775((int)200, (int)500);
	var_94_string = ""; var_95_int = 0; var_96_int = 0;
	func_1569("revolver_ammo", (int)1, (int)80);
	var_105_string = ""; var_106_int = 0; var_107_int = 0;
	func_1569("samopal_ammo", (int)1, (int)80);
	var_108_string = ""; var_109_int = 0; var_110_int = 0;
	func_1569("rifle_ammo", (int)1, (int)80);
	var_111_string = ""; var_112_int = 0; var_113_int = 0;
	func_1569("lockpick", (int)1, (int)80);
	var_114_int = 0; var_115_string = "";
	func_1889(var_114_int, "hunter_mark");
	AddItem(var_73_bool, var_114_int, (int)0, (int)1);
	return 4;
}


func_1465(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1237(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1627(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1494:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1494;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1533(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1421(var_104_object);
	return 18;
	
}


func_442(var_0_bool, var_6_bool, var_485_bool)
{
	var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_cvector = CVector(0,0,0); var_489_cvector = CVector(0,0,0); var_490_cvector = CVector(0,0,0); var_491_cvector = CVector(0,0,0); var_492_float = 0; var_493_float = 0; var_494_cvector = CVector(0,0,0); var_495_float = 0; var_496_int = 0; var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_cvector = CVector(0,0,0); var_502_cvector = CVector(0,0,0); var_503_float = 0; var_504_float = 0; var_505_cvector = CVector(0,0,0); var_506_float = 0; var_507_int = 0;
	var_508_bool = 0;
	var_508_bool = 0;
	var_509_bool = 0; var_510_object = Obj();
	var_510_object = var_0_bool;
	func_1397(var_509_bool, var_510_object);
	if(var_509_bool != 0) {
		var_511_bool = 0; var_512_float = 0;
		func_1655(var_511_bool, (float)0.5);
		if(var_511_bool != 0) {
			var_508_bool = 1;
		}
	}
	if(var_508_bool != 0) {
		GetPosition(var_497_cvector);
		@@@var_0_bool:GetPosition(var_498_cvector);
		GetDirection(var_499_cvector);
		var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0);
		var_516_cvector = var_497_cvector - var_498_cvector;
		func_1627(var_515_cvector, var_516_cvector);
		var_515_cvector = var_500_cvector;
		GetAnimationOffset(var_501_cvector, "all", "jump1");
		GetAnimationOffset(var_502_cvector, "all", "jump2");
		var_526_float = GetByIndex(var_501_cvector, 2);
		var_527_float = GetByIndex(var_502_cvector, 2);
		var_528_bool = var_526_float < var_527_float;
		if(var_528_bool != 0) {
			var_529_float = GetByIndex(var_502_cvector, 2);
			var_503_float = -var_529_float;
			var_530_float = GetByIndex(var_501_cvector, 2);
			var_504_float = -var_530_float;
		} else {
				var_556_float = GetByIndex(var_501_cvector, 2);
				var_503_float = -var_556_float;
				var_557_float = GetByIndex(var_502_cvector, 2);
				var_504_float = -var_557_float;
		}
		var_534_float = var_504_float * (int)3;
		FindLongestDir(var_505_cvector, var_506_float, var_500_cvector, (float)0.1745329350233078, (int)6, var_534_float);
		var_535_bool = var_506_float < var_503_float;
		if(var_535_bool != 0) {
			var_539_float = var_504_float * (int)3;
			FindLongestDir(var_505_cvector, var_506_float, var_500_cvector, (float)0.5235987901687622, (int)16, var_539_float);
		}
		var_540_bool = var_506_float >= var_503_float;
		if(var_540_bool != 0) {
			StopAsync();
			var_541_int = -var_505_cvector;
			SetDirection(var_541_int);
			var_6_bool = true;
			var_542_bool = var_506_float >= var_504_float;
			if(var_542_bool != 0) {
				irand(var_507_int, (int)2);
				var_547_int = var_507_int + (int)1;
				var_548_int = "jump" + var_547_int;
				PlayAnimation("all", var_548_int);
			} else {
				var_549_float = GetByIndex(var_501_cvector, 2);
				var_550_int = -var_549_float;
				var_551_bool = var_550_int <= var_506_float;
				if(var_551_bool != 0) {
					PlayAnimation("all", "jump1");
					goto Label_537;
				}
				PlayAnimation("all", "jump2");
		}
	}
		var_485_bool = 1;
		return 22;

	}
Label_537:
	WaitForAnimEnd();
	var_6_bool = false;
	var_485_bool = 0;
	return 22;
	
}


func_1082(var_296_bool)
{
	var_297_bool = 0;
	var_297_bool = 0;
	var_298_bool = 0;
	func_1054(var_297_bool, var_298_bool);
	if(var_298_bool != 0) {
		var_315_bool = 0;
		func_1098(var_296_bool, var_297_bool, var_315_bool);
		if(var_315_bool != 0) {
			var_297_bool = 1;
		}
	}
	if(var_297_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_1727(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_1223(var_423_string, var_424_int)
{
	var_426_bool = var_424_int == (int)2;
	if(var_426_bool != 0) {
		var_423_string = "fire";
		return 0;
	EMIT "GOTO 0x4d3";
	}
	var_428_bool = var_424_int == (int)1;
	if(var_428_bool != 0) {
		var_423_string = "bullet";
		return 0;
	}
	var_423_string = "phys";
	return 0;
}


func_1736(var_119_object)
{
	var_120_bool = 0; var_121_bool = 0;
	IsPlayerActor(var_119_object, var_121_bool);
	var_122_bool = var_121_bool;
	if(var_122_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1098(var_0_bool, var_4_int, var_315_bool)
{
	var_316_object = Obj(); var_317_bool = 0; var_318_float = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0);
	GetScene(var_321_object);
	var_322_bool = 0;
	
Label_1102:
	var_326_cvector = CVector(0,0,0); var_327_object = Obj();
	var_327_object = var_0_bool;
	func_1237(var_326_cvector, var_327_object);
	var_332_int = -var_326_cvector;
	FindDirLength(var_323_float, var_332_int, var_4_int);
	var_333_bool = var_323_float < var_4_int;
	if(var_333_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_324_cvector);
		GetPFPosition(var_325_cvector);
		WaitForAnimEnd();
		func_1186(var_325_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_322_bool = 1;
		var_337_bool = 0;
		func_1054(var_325_cvector, var_337_bool);
		var_338_bool = var_337_bool == 0; //@nz
		if(var_338_bool != 0) {
			goto Label_1140;
		}
		goto Label_1102;
	}
Label_1140:
	var_322_bool = var_315_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1356(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_bool = 0;
	@@var_100_object:IsDead(var_102_bool);
	var_102_bool = var_99_bool;
	return 2;
}


func_847(var_0_bool, var_1_object, var_344_bool, var_345_float)
{
	var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = "";
	func_1186(var_353_string);
	irand(var_350_int, var_1_object);
	var_350_int = var_350_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_1745();
	var_362_int = "attack_begin" + var_350_int;
	PlayAnimation("all", var_362_int);
	WaitForAnimEnd();
	func_1154(var_352_int, var_353_string);
	var_378_bool = 0; var_379_object = Obj();
	var_379_object = var_0_bool;
	func_1397(var_378_bool, var_379_object);
	var_380_bool = var_378_bool == 0; //@nz
	if(var_380_bool != 0) {
		StopAsync();
		var_344_bool = 0;
		return 8;
	}
	var_381_float = 0; var_382_int = 0;
	var_345_float = var_381_float;
	var_350_int = var_382_int;
	func_808(var_353_string, var_381_float, var_382_int);
	var_465_int = "attack_middle" + var_350_int;
	HasAnimation(var_351_bool, "all", var_465_int);
	var_466_bool = var_351_bool;
	if(var_466_bool != 0) {
		func_1745();
		var_469_int = "attack_middle" + var_350_int;
		PlayAnimation("all", var_469_int);
		WaitForAnimEnd();
		func_1186(var_353_string);
		var_470_bool = 0; var_471_object = Obj();
		var_471_object = var_0_bool;
		func_1397(var_470_bool, var_471_object);
		var_472_bool = var_470_bool == 0; //@nz
		if(var_472_bool != 0) {
			StopAsync();
			var_344_bool = 0;
			return 8;
		}
		var_473_float = 0; var_474_int = 0;
		var_345_float = var_473_float;
		var_350_int = var_474_int;
		func_808(var_353_string, var_473_float, var_474_int);
		var_352_int = 1;

	Label_924:
		var_476_int = "attack_middle" + var_350_int;
		var_478_int = var_476_int + "_";
		var_353_string = var_478_int + var_352_int;
		HasAnimation(var_351_bool, "all", var_353_string);
		var_480_bool = var_351_bool == 0; //@nz
		if(var_480_bool != 0) {
		} else {
			func_1745();
			PlayAnimation("all", var_353_string);
			WaitForAnimEnd();
			func_1186(var_353_string);
			var_568_bool = 0; var_569_object = Obj();
			var_569_object = var_0_bool;
			func_1397(var_568_bool, var_569_object);
			var_570_bool = var_568_bool == 0; //@nz
			if(var_570_bool != 0) {
				StopAsync();
				var_344_bool = 0;
				var_571_float = 0; var_572_int = 0;
				var_345_float = var_571_float;
				var_350_int = var_572_int;
				func_808(var_353_string, var_571_float, var_572_int);
				var_352_int = var_352_int + (int)1;
				goto Label_924;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_484_int = "attack_end" + var_350_int;
	PlayAnimation("all", var_484_int);
	var_485_bool = 0;
	func_442(var_352_int, var_353_string, var_485_bool);
	if(var_485_bool != 0) {
		var_558_bool = 0; var_559_float = 0;
		func_984(var_558_bool, (float)0.75);
		StopAsync();
	}
	var_344_bool = 1;
	return 8;
	
}


func_1745()
{
	var_356_object = Obj(); var_357_object = Obj();
	GetScene(var_357_object);
	var_359_object = Obj();
	func_1621(var_359_object);
	BroadcastMessage("battle", var_359_object, var_357_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1361(var_88_bool, var_89_object)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj();
	var_94_bool = var_89_object == 0; //@ne
	if(var_94_bool != 0) {
		var_88_bool = 0;
		return 4;
	}
	var_95_bool = 0;
	var_95_bool = 0;
	var_98_bool = IsFuncExist(var_89_object, "IsDead", (int)1);
	if(var_98_bool != 0) {
		var_99_bool = 0; var_100_object = Obj();
		var_89_object = var_100_object;
		func_1356(var_99_bool, var_100_object);
		if(var_99_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool != 0) {
		var_88_bool = 0;
		return 4;
	}
	GetScene(var_92_object);
	var_103_bool = var_92_object == 0; //@ne
	if(var_103_bool != 0) {
		var_88_bool = 0;
		return 4;
	}
	@@var_89_object:GetScene(var_93_object);
	var_104_bool = var_92_object != var_93_object;
	if(var_104_bool != 0) {
		var_88_bool = 0;
		return 4;
	}
	var_88_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1621(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj();
	self(var_80_object);
	var_80_object = var_78_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1237(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1143(var_0_bool, var_246_bool)
{
	var_247_bool = 0; var_248_bool = 0;
	var_251_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_251_bool != 0) {
		@@@var_0_bool:IsAttacking(var_248_bool);
		var_248_bool = var_246_bool;
		return 2;
	}
	var_246_bool = 0;
	return 2;
}


func_984(var_558_bool, var_559_float)
{
	var_560_float = 0; var_561_bool = 0; var_562_float = 0; var_563_bool = 0;
	rand(var_562_float);
	var_564_bool = var_562_float < var_559_float;
	if(var_564_bool != 0) {

	Label_989:
		IsAnimationPlaying(var_563_bool);
		var_565_bool = var_563_bool == 0; //@nz
		if(var_565_bool != 0) {
		} else {
			var_566_bool = 0;
			func_1082(var_566_bool);
			if(var_566_bool != 0) {
				var_558_bool = 1;
				sync();
				goto Label_989;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1186(var_563_bool);
	}
	goto Label_1009;
	
Label_1009:
	var_558_bool = 0;
	return 4;
	
}


func_1627(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1244(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
	return 2;
}


func_1756(var_17_int)
{
	var_18_int = 0; var_19_int = 0;
	GetVariable("branch", var_19_int);
	var_19_int = var_17_int;
	return 2;
}


func_1249(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0;
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", (int)2);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	@@var_51_object:HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
	return 2;
}


func_1762(var_14_object)
{
	var_15_int = 0;
	func_1756(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1889(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0;
	GetInvItemByName(var_90_int, var_88_string);
	var_90_int = var_87_int;
	return 2;
}


func_229(var_2_bool)
{
	KillTimer((int)1);
	var_12_bool = var_2_bool;
	if(var_12_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_395(var_10_bool);
	return 0;
}


func_1637(var_433_float, var_434_float, var_435_float)
{
	var_438_bool = var_434_float < var_435_float;
	if(var_438_bool != 0) {
		var_434_float = var_433_float;
	} else {
		var_435_float = var_433_float;
	}
	return 0;
	
}


func_1894(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1244(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		var_16_bool = 0;
		var_16_bool = 0;
		var_17_int = 0;
		func_1756(var_17_int);
		var_22_bool = var_17_int == (int)2;
		if(var_22_bool != 0) {
			var_23_int = 0;
			func_1727(var_23_int);
			var_30_bool = var_23_int == (int)6;
			if(var_30_bool != 0) {
				var_16_bool = 1;
			}
		}
		if(var_16_bool != 0) {
			var_31_bool = 0; var_32_object = Obj(); var_33_float = 0;
			var_11_object = var_32_object;
			func_1665(var_31_bool, var_32_object, (float)0.10000000149011612);
		} else {
			var_218_bool = 0; var_219_object = Obj(); var_220_float = 0;
			var_11_object = var_219_object;
			func_1665(var_218_bool, var_219_object, (float)0.05000000074505806);
		}
	}
	var_69_object = Obj();
	var_11_object = var_69_object;
	TaskCall(0);
	func_0(var_69_object);
	TaskReturn();
	return 0;
	
}


func_1644(var_60_float, var_61_float, var_62_float, var_63_float)
{
	var_64_bool = var_61_float < var_62_float;
	if(var_64_bool != 0) {
		var_62_float = var_60_float;
		return 0;
	}
	var_65_bool = var_61_float > var_63_float;
	if(var_65_bool != 0) {
		var_63_float = var_60_float;
		return 0;
	}
	var_61_float = var_60_float;
	return 0;
}


func_1261(var_42_bool, var_43_object, var_44_string, var_45_float, var_46_float, var_47_float)
{
	var_48_float = 0; var_49_float = 0;
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_43_object = var_51_object;
	var_44_string = var_52_string;
	func_1249(var_50_bool, var_51_object, var_52_string);
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	@@var_43_object:GetProperty(var_44_string, var_49_float);
	var_60_float = 0; var_61_float = 0; var_62_float = 0; var_63_float = 0;
	var_61_float = var_49_float + var_45_float;
	var_46_float = var_62_float;
	var_47_float = var_63_float;
	func_1644(var_60_float, var_61_float, var_62_float, var_63_float);
	@@var_43_object:SetProperty(var_44_string, var_60_float);
	var_42_bool = 1;
	return 2;
}


func_1775(var_75_int, var_76_int)
{
	var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_bool = 0;
	var_81_bool = var_75_int > var_76_int;
	if(var_81_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_79_int = 0;
	var_83_bool = var_75_int != var_76_int;
	if(var_83_bool != 0) {
		var_84_int = var_76_int - var_75_int;
		irand(var_79_int, var_84_int);
	} else {
		var_93_bool = var_75_int == (int)0;
		if(var_93_bool == 0) goto Label_1793;
		return 4;
	}
Label_1793:
	var_79_int = var_79_int + var_75_int;
	var_86_bool = var_79_int == (int)0;
	if(var_86_bool != 0) {
		return 4;
	}
	var_87_int = 0; var_88_string = "";
	func_1889(var_87_int, "Money");
	AddItem(var_80_bool, var_87_int, (int)0, var_79_int);
	return 4;
	
}


func_1011(var_0_bool, var_283_bool, var_284_float)
{
	var_285_bool = 0; var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_bool = 0; var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_float = 0;
	
Label_1012:
	IsAnimationPlaying(var_290_bool);
	var_295_bool = var_290_bool == 0; //@nz
	if(var_295_bool != 0) {
	} else {
		var_296_bool = 0;
		func_1082(var_296_bool);
		if(var_296_bool != 0) {
			var_283_bool = 1;
			return 10;
		}
		var_339_bool = 0; var_340_object = Obj();
		var_340_object = var_0_bool;
		func_1397(var_339_bool, var_340_object);
		var_341_bool = var_339_bool == 0; //@nz
		if(var_341_bool != 0) {
			var_283_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_291_cvector);
		GetPFPosition(var_292_cvector);
		var_293_cvector = var_291_cvector - var_292_cvector;
		var_294_float = var_293_cvector | var_293_cvector;
		var_342_float = var_284_float * var_284_float;
		var_343_bool = var_294_float < var_342_float;
		if(var_343_bool != 0) {
			var_344_bool = 0; var_345_float = 0;
			var_284_float = var_345_float;
			func_847(var_293_cvector, var_294_float, var_344_bool, var_345_float);
			var_283_bool = 1;
			sync();
			goto Label_1012;
		}
		return 10;
	}
	func_1186(var_294_float);
	var_283_bool = 0;
	return 10;
	
}


func_373(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_411(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1397(var_84_bool, var_85_object)
{
	var_86_int = 0; var_87_int = 0;
	var_88_bool = 0; var_89_object = Obj();
	var_85_object = var_89_object;
	func_1361(var_88_bool, var_89_object);
	var_105_bool = var_88_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_84_bool = 0;
		return 2;
	}
	var_106_bool = 0; var_107_object = Obj(); var_108_string = "";
	var_85_object = var_107_object;
	func_1249(var_106_bool, var_107_object, "noaccess");
	var_115_bool = var_106_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_84_bool = 1;
		return 2;
	}
	@@var_85_object:GetProperty("noaccess", var_87_int);
	var_84_bool = var_87_int == (int)0;
	return 2;
}


func_1655(var_511_bool, var_512_float)
{
	var_513_float = 0; var_514_float = 0;
	rand(var_514_float);
	var_511_bool = var_514_float < var_512_float;
	return 2;
}


func_1660(var_99_bool, var_100_int, var_101_int)
{
	var_102_int = 0; var_103_int = 0;
	irand(var_103_int, var_101_int);
	var_99_bool = var_103_int < var_100_int;
	return 2;
}


func_1533(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1421(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


