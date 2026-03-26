// @IMPORTS: Hold/0,StopGroup0/0,sync/0,RemoveEnvelope/0,SetRTEnvelope/2,Is3DSoundLoaded/2,PlayGlobalSound/2,PlayAnimation/2,WaitForAnimEnd/1,WaitForAnimEnd/0,LockAnimationEnd/2,SetDeathState/0,IsPlayerActor/2,IsDead/1,RemoveActor/1,GetProperty/2,StopAnimation/0,GetSecondaryAnimationType/1,GetPosition/1,GetDirection/1,FadeSecondaryAnimation/4,GetScene/1,AddActorByType/6,IsLoaded/1,self/1,rand/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,FindActor/2,Trigger/2,SignalDeath/1
// @STRINGS: W:quest_b1_02|W:agony_dead|W:agony|W:all|W:sleep|W:agony_sleep|W:death|W:agony_die|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetPosition|W:fhit|W:bhit|W:hit_react|W:1|W:scripted|W:blood_dir.xml|W:reputation|A:add|W:health|W:cleanup
// @GLOBALS: 0:bool:
// @RUN_OP: 0x1b
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=int params=0
// @EVENT_0: op=0xd vars=object
// @EVENT_41: op=0xf vars=object
// @EVENT_6: op=0x8b vars=
// @EVENT_16: op=0x9e vars=object,string
// @STANDALONE_EVENT_16: op=0x162 vars=object,string
// @STANDALONE_EVENT_43: op=0x16f vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_26: op=0x179 vars=string
// @STANDALONE_EVENT_6: op=0x18a vars=
// @PE: 0xd,0xf,0x8b,0x119,0x129,0x16f

task_0_event_5(var_0_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_0(var_0_int, var_1_object)
{
	return 0;
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_string = ""; var_4_string = "";
	func_342(var_2_bool, "quest_b1_02", "agony_dead");
	var_8_object = Obj();
	var_1_object = var_8_object;
	func_104(var_1_object, var_8_object);
	return 0;
}


task_1_event_6(var_0_int)
{
	func_394();
	func_175();
	var_5_int = var_0_int;
	if(var_5_int != 0) {
		var_6_object = Obj();
		func_275(var_6_object);
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
	func_354();
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
	func_256(var_9_float, var_10_cvector, var_11_cvector);
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
			func_275(var_8_object);
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
		func_275(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


main(var_0_int)
{
	var_1_bool = 0; var_2_bool = 0;
	var_0_int = 0;
	RemoveEnvelope();
	SetRTEnvelope((int)50, (int)40);
	var_5_bool = 0;
	func_270(var_5_bool);
	var_8_bool = var_5_bool == 0; //@nz
	if(var_8_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_45:
	Is3DSoundLoaded(var_2_bool, "agony");
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_float = 0;
		func_292(var_14_bool, (float)0.3333333432674408);
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		PlayGlobalSound("agony", CVector(0.0, 40.0, 0.0));
	}
	PlayAnimation("all", "agony");
	WaitForAnimEnd(var_2_bool);
	var_23_bool = var_0_int > (int)0;
	if(var_23_bool != 0) {
		var_24_bool = var_2_bool;
		if(var_24_bool != 0) {
			PlayGlobalSound("sleep", CVector(0.0, 40.0, 0.0));
			PlayAnimation("all", "agony_sleep");
			WaitForAnimEnd();
			LockAnimationEnd("all", "agony_sleep");
		}
		SetDeathState();
		func_26();
		goto Label_100;
	EMIT "GOTO 0x63";

	Label_100:
		Hold();
		goto Label_100;
	}
	var_32_bool = var_0_int < (int)0;
	if(var_32_bool != 0) {
		goto Label_100;
	}
	goto Label_45;
}
EMIT "Return(); Pop(2)";


func_0()
{
	
Label_0:
	Hold();
	var_9_bool = 0;
	func_270(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool == 1) goto Label_0;
	return 0;
}


func_256(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	GetScene(var_14_object);
	AddActorByType(var_15_object, "scripted", var_14_object, var_10_cvector, var_11_cvector, "blood_dir.xml");
	var_18_object = Obj();
	var_7_object = var_18_object;
	func_212(var_18_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_292(var_14_bool, var_15_float)
{
	var_16_float = 0; var_17_float = 0;
	rand(var_17_float);
	var_14_bool = var_17_float < var_15_float;
	return 2;
}


func_104(var_0_int, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; var_11_bool = 0; var_12_bool = 0;
	var_13_int = var_0_int;
	if(var_13_int != 0) {
		return 4;
	}
	IsPlayerActor(var_8_object, var_11_bool);
	var_14_bool = var_11_bool;
	if(var_14_bool != 0) {
		IsDead(var_12_bool);
		var_15_bool = var_12_bool == 0; //@nz
		if(var_15_bool != 0) {
			SetDeathState();
			var_0_int = -1;
			var_16_bool = 0; var_17_object = Obj(); var_18_float = 0;
			var_8_object = var_17_object;
			func_297(var_16_bool, var_17_object, (float)-0.30000001192092896);
			PlayGlobalSound("death", CVector(0.0, 40.0, 0.0));
			PlayAnimation("all", "agony_die");
			WaitForAnimEnd();
			LockAnimationEnd("all", "agony_die");
		}
	}
	return 4;
}


func_297(var_16_bool, var_17_object, var_18_float)
{
	var_19_bool = var_17_object == 0; //@nz
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 0;
	}
	var_21_bool = var_18_float > (int)0;
	if(var_21_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_52_bool = var_18_float < (int)0;
		if(var_52_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_318;
		}
		var_16_bool = 0;
		return 0;
	}
Label_318:
	var_23_float = 0;
	var_18_float = var_23_float;
	func_332(var_23_float);
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0;
	var_17_object = var_28_object;
	var_18_float = var_30_float;
	func_190(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
	var_16_bool = 1;
	return 0;
	
}


func_332(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj();
	CreateFloatVector(var_25_object);
	@@var_25_object:add(var_23_float);
	SendWorldWndMessage((int)16, var_25_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_270(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
	return 2;
}


func_175()
{
	StopAnimation();
	return 0;
}


func_178(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


func_275(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_212(var_18_object)
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


func_342(var_2_bool, var_3_string, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj();
	FindActor(var_6_object, var_3_string);
	var_7_bool = var_6_object == 0; //@ne
	if(var_7_bool != 0) {
		var_2_bool = 0;
		return 2;
	}
	Trigger(var_6_object, var_4_string);
	var_2_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_281(var_45_float, var_46_float, var_47_float, var_48_float)
{
	var_49_bool = var_46_float < var_47_float;
	if(var_49_bool != 0) {
		var_47_float = var_45_float;
		return 0;
	}
	var_50_bool = var_46_float > var_48_float;
	if(var_50_bool != 0) {
		var_48_float = var_45_float;
		return 0;
	}
	var_46_float = var_45_float;
	return 0;
}


func_26()
{
	return 0;
}


func_190(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_28_object = var_36_object;
	var_29_string = var_37_string;
	func_178(var_35_bool, var_36_object, var_37_string);
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	@@var_28_object:GetProperty(var_29_string, var_34_float);
	var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0;
	var_46_float = var_34_float + var_30_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_281(var_45_float, var_46_float, var_47_float, var_48_float);
	@@var_28_object:SetProperty(var_29_string, var_45_float);
	var_27_bool = 1;
	return 2;
}


