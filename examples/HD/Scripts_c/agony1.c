// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SetProperty/2,RemoveEnvelope/0,SetRTEnvelope/2,Is3DSoundLoaded/2,PlayGlobalSound/2,PlayAnimation/2,WaitForAnimEnd/1,WaitForAnimEnd/0,LockAnimationEnd/2,SetDeathState/0,IsDead/1,IsOverrideActive/1,Barter/1,GetProperty/2,ShowWindow/4,IsPlayerActor/2,RemoveActor/1,StopAnimation/0,GetSecondaryAnimationType/1,GetPosition/1,GetDirection/1,FadeSecondaryAnimation/4,GetScene/1,AddActorByType/6,IsLoaded/1,AddItem/3,irand/2,AddItem/4,self/1,rand/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,GetGameTime/1,SignalDeath/1,Trace/1,GetInvItemByName/2
// @STRINGS: W:agony|W:all|W:sleep|W:agony_sleep|W:agony.xml|W:death|W:agony_die|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetPosition|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:scripted|W:blood_dir.xml|W:reputation|A:add|W:health|W:cleanup|W:GenerateMoney: iMin > iMax|W:Money|W:bottle_water|W:lockpick
// @GLOBALS: 0:bool:
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=int params=0
// @EVENT_0: op=0x66 vars=object
// @EVENT_41: op=0x91 vars=object
// @EVENT_6: op=0xb4 vars=
// @EVENT_16: op=0xc7 vars=object,string
// @STANDALONE_EVENT_16: op=0x1a7 vars=object,string
// @STANDALONE_EVENT_43: op=0x1b4 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_26: op=0x1be vars=string
// @STANDALONE_EVENT_6: op=0x1cf vars=
// @PE: 0x15,0xb4,0x15c,0x171,0x1b4

task_0_event_5(var_0_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_0(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_float = 0; var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_bool = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0;
	IsDead(var_7_bool);
	var_12_bool = var_7_bool;
	if(var_12_bool != 0) {
		IsOverrideActive(var_8_bool);
		var_13_bool = var_8_bool == 0; //@nz
		if(var_13_bool != 0) {
			Barter(var_1_object);
		}
	} else {
		GetProperty("agony", var_9_float);
		var_16_bool = var_9_float == (int)0;
		if(var_16_bool != 0) {
			return 10;
		}
		IsOverrideActive(var_10_bool);
		var_17_bool = var_10_bool == 0; //@nz
		if(var_17_bool == 0) goto Label_144;
		var_21_object = Obj();
		func_342(var_21_object);
		ShowWindow("agony.xml", (bool)1, (bool)0, var_21_object);
		GetProperty("agony", var_11_float);
		var_26_bool = var_11_float < (float)0.0010000000474974513;
		if(var_26_bool == 0) goto Label_144;
		var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
		var_1_object = var_28_object;
		func_369(var_27_bool, var_28_object, (float)0.20000000298023224);
	}
Label_144:
	return 10;
	
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	var_6_int = var_0_int;
	if(var_6_int != 0) {
		return 4;
	}
	IsPlayerActor(var_1_object, var_4_bool);
	var_7_bool = var_4_bool;
	if(var_7_bool != 0) {
		IsDead(var_5_bool);
		var_8_bool = var_5_bool == 0; //@nz
		if(var_8_bool != 0) {
			SetDeathState();
			var_0_int = -1;
			var_9_bool = 0; var_10_object = Obj(); var_11_float = 0;
			var_1_object = var_10_object;
			func_369(var_9_bool, var_10_object, (float)-0.30000001192092896);
			PlayGlobalSound("death", CVector(0.0, 40.0, 0.0));
			PlayAnimation("all", "agony_die");
			WaitForAnimEnd();
			LockAnimationEnd("all", "agony_die");
		}
	}
	return 4;
}


task_1_event_6(var_0_int)
{
	func_463();
	func_216();
	var_5_int = var_0_int;
	if(var_5_int != 0) {
		var_6_object = Obj();
		func_342(var_6_object);
		RemoveActor(var_6_object);
	}
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0;
	var_6_bool = var_2_string == "agony";
	if(var_6_bool != 0) {
		GetProperty("agony", var_4_float);
		var_9_bool = var_4_float < (float)0.0010000000474974513;
		if(var_9_bool != 0) {
			var_0_int = 1;
		}
	}
	var_10_object = Obj(); var_11_string = "";
	var_1_object = var_10_object;
	var_2_string = var_11_string;
	func_423();
	return 2;
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0;
	var_6_bool = var_2_string == "health";
	if(var_6_bool != 0) {
		GetProperty("health", var_4_float);
		var_9_bool = var_4_float <= (int)0;
		if(var_9_bool != 0) {
			SignalDeath(var_1_object);
		}
	}
	return 2;
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	var_1_object = var_7_object;
	var_2_int = var_8_int;
	var_3_float = var_9_float;
	var_5_cvector = var_10_cvector;
	var_6_cvector = var_11_cvector;
	func_297(var_9_float, var_10_cvector, var_11_cvector);
	return 0;
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_6_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		IsLoaded(var_3_bool);
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_object = Obj();
			func_342(var_8_object);
			RemoveActor(var_8_object);
		}
	}
	return 2;
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0];
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_342(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


main(var_0_int)
{
	SetProperty("agony", (float)0.5);
	func_25(var_0_int);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_11_bool = 0;
	func_311(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool == 1) goto Label_0;
	return 0;
}


func_528(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0;
	GetInvItemByName(var_59_int, var_57_string);
	var_59_int = var_56_int;
	return 2;
}


func_404(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateFloatVector(var_18_object);
	@@var_18_object:add(var_16_float);
	SendWorldWndMessage((int)16, var_18_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_21()
{
	func_502();
	return 0;
}


func_25(var_0_int)
{
	var_3_bool = 0; var_4_bool = 0;
	var_0_int = 0;
	RemoveEnvelope();
	SetRTEnvelope((int)50, (int)40);
	var_7_bool = 0;
	func_311(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_43:
	Is3DSoundLoaded(var_4_bool, "agony");
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_bool = var_4_bool;
	if(var_15_bool != 0) {
		var_16_bool = 0; var_17_float = 0;
		func_359(var_16_bool, (float)0.3333333432674408);
		if(var_16_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		PlayGlobalSound("agony", CVector(0.0, 40.0, 0.0));
	}
	PlayAnimation("all", "agony");
	WaitForAnimEnd(var_4_bool);
	var_25_bool = var_0_int > (int)0;
	if(var_25_bool != 0) {
		var_26_bool = var_4_bool;
		if(var_26_bool != 0) {
			PlayGlobalSound("sleep", CVector(0.0, 40.0, 0.0));
			PlayAnimation("all", "agony_sleep");
			WaitForAnimEnd();
			LockAnimationEnd("all", "agony_sleep");
		}
		SetDeathState();
		func_21();
		goto Label_98;
	EMIT "GOTO 0x61";

	Label_98:
		Hold();
		goto Label_98;
	}
	var_89_bool = var_0_int < (int)0;
	if(var_89_bool != 0) {
		goto Label_98;
	}
	goto Label_43;
}
EMIT "Return(); Pop(2)";


func_414(var_38_int)
{
	var_39_float = 0; var_40_float = 0;
	GetGameTime(var_40_float);
	var_42_int = 0;
	var_42_int = var_40_float / (int)24;
	var_38_int = (int)1 + var_42_int;
	return 2;
}


func_297(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	GetScene(var_14_object);
	AddActorByType(var_15_object, "scripted", var_14_object, var_10_cvector, var_11_cvector, "blood_dir.xml");
	var_18_object = Obj();
	var_7_object = var_18_object;
	func_253(var_18_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_311(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_316(var_79_string, var_80_int, var_81_int)
{
	var_82_bool = 0; var_83_bool = 0;
	var_84_bool = 0; var_85_int = 0; var_86_int = 0;
	var_80_int = var_85_int;
	var_81_int = var_86_int;
	func_364(var_84_bool, var_85_int, var_86_int);
	if(var_84_bool != 0) {
		AddItem(var_83_bool, var_79_string, (int)0);
	}
	return 2;
}


func_327(var_63_string, var_64_int, var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_71_bool = 0; var_72_int = 0; var_73_int = 0;
	var_64_int = var_72_int;
	var_65_int = var_73_int;
	func_364(var_71_bool, var_72_int, var_73_int);
	if(var_71_bool != 0) {
		irand(var_69_int, var_66_int);
		var_78_int = var_69_int + (int)1;
		AddItem(var_70_bool, var_63_string, (int)0, var_78_int);
	}
	return 4;
}


func_342(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_471(var_35_int, var_36_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_50_bool = var_35_int > var_36_int;
	if(var_50_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_48_int = 0;
	var_52_bool = var_35_int != var_36_int;
	if(var_52_bool != 0) {
		var_53_int = var_36_int - var_35_int;
		irand(var_48_int, var_53_int);
	} else {
		var_62_bool = var_35_int == (int)0;
		if(var_62_bool == 0) goto Label_489;
		return 4;
	}
Label_489:
	var_48_int = var_48_int + var_35_int;
	var_55_bool = var_48_int == (int)0;
	if(var_55_bool != 0) {
		return 4;
	}
	var_56_int = 0; var_57_string = "";
	func_528(var_56_int, "Money");
	AddItem(var_49_bool, var_56_int, (int)0, var_48_int);
	return 4;
	
}


func_216()
{
	StopAnimation();
	return 0;
}


func_219(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0;
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", (int)2);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
	return 2;
}


func_348(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float;
	if(var_42_bool != 0) {
		var_40_float = var_38_float;
		return 0;
	}
	var_43_bool = var_39_float > var_41_float;
	if(var_43_bool != 0) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
	return 0;
}


func_359(var_16_bool, var_17_float)
{
	var_18_float = 0; var_19_float = 0;
	rand(var_19_float);
	var_16_bool = var_19_float < var_17_float;
	return 2;
}


func_231(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_21_object = var_29_object;
	var_22_string = var_30_string;
	func_219(var_28_bool, var_29_object, var_30_string);
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	@@var_21_object:GetProperty(var_22_string, var_27_float);
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0;
	var_39_float = var_27_float + var_23_float;
	var_24_float = var_40_float;
	var_25_float = var_41_float;
	func_348(var_38_float, var_39_float, var_40_float, var_41_float);
	@@var_21_object:SetProperty(var_22_string, var_38_float);
	var_20_bool = 1;
	return 2;
}


func_364(var_71_bool, var_72_int, var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	irand(var_75_int, var_73_int);
	var_71_bool = var_75_int < var_72_int;
	return 2;
}


func_369(var_9_bool, var_10_object, var_11_float)
{
	var_12_bool = var_10_object == 0; //@nz
	if(var_12_bool != 0) {
		var_9_bool = 0;
		return 0;
	}
	var_14_bool = var_11_float > (int)0;
	if(var_14_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_45_bool = var_11_float < (int)0;
		if(var_45_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_390;
		}
		var_9_bool = 0;
		return 0;
	}
Label_390:
	var_16_float = 0;
	var_11_float = var_16_float;
	func_404(var_16_float);
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0;
	var_10_object = var_21_object;
	var_11_float = var_23_float;
	func_231(var_20_bool, var_21_object, "reputation", var_23_float, (float)0, (float)1);
	var_9_bool = 1;
	return 0;
	
}


func_502()
{
	var_33_bool = 0; var_34_bool = 0;
	var_35_int = 0; var_36_int = 0;
	var_38_int = 0;
	func_414(var_38_int);
	var_45_float = var_38_int * (int)100;
	var_36_int = (int)10 + var_45_float;
	func_471((int)0, var_36_int);
	var_63_string = ""; var_64_int = 0; var_65_int = 0; var_66_int = 0;
	func_327("bottle_water", (int)1, (int)4, (int)4);
	var_79_string = ""; var_80_int = 0; var_81_int = 0;
	func_316("lockpick", (int)1, (int)6);
	return 2;
}


func_253(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = "";
	var_33_bool = var_18_object == 0; //@ne
	if(var_33_bool != 0) {
		return 14;
	}
	IsDead(var_26_bool);
	var_34_bool = var_26_bool;
	if(var_34_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_27_int);
	var_36_bool = var_27_int < (int)0;
	if(var_36_bool != 0) {
		return 14;
	}
	@@var_18_object:GetPosition(var_28_cvector);
	GetPosition(var_29_cvector);
	GetDirection(var_30_cvector);
	var_31_cvector = var_29_cvector - var_28_cvector;
	var_37_float = GetByIndex(var_31_cvector, 0);
	var_38_float = GetByIndex(var_30_cvector, 0);
	var_39_float = var_37_float * var_38_float;
	var_40_float = GetByIndex(var_31_cvector, 2);
	var_41_float = GetByIndex(var_30_cvector, 2);
	var_42_float = var_40_float * var_41_float;
	var_43_int = var_39_float + var_42_float;
	var_45_bool = var_43_int >= (int)0;
	if(var_45_bool != 0) {
		var_32_string = "fhit";
	} else {
		var_32_string = "bhit";
	}
	var_48_int = var_32_string + "1";
	var_50_int = var_32_string + "2";
	FadeSecondaryAnimation("hit_react", var_48_int, var_50_int, (int)-10);
	return 14;
	
}


