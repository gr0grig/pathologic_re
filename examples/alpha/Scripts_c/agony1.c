// @IMPORTS: Hold/0,StopGroup0/0,SetProperty/2,AddItem/4,RemoveEnvelope/0,SetRTEnvelope/2,PlayAnimation/2,WaitForAnimEnd/1,SetDeathState/0,LockAnimationEnd/2,WaitForAnimEnd/0,IsDead/1,IsOverrideActive/1,WorkWithCorpse/1,GetProperty/2,ShowWindow/4,StopAnimation/0,self/1
// @STRINGS: W:agony|W:Money|W:all|W:agony_die|W:agony.xml|W:reputation|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_0: op=0x41 vars=object
// @EVENT_5: op=0x73 vars=
// @EVENT_6: op=0x7d vars=
// @PE: 0xb7

task_0_event_5()
{
	StopGroup0();
	return 0;
}


task_1_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_float = 0; var_4_bool = 0; var_5_float = 0; var_6_bool = 0; var_7_bool = 0; var_8_float = 0; var_9_bool = 0; var_10_float = 0;
	IsDead(var_6_bool);
	var_11_bool = var_6_bool;
	if(var_11_bool != 0) {
		IsOverrideActive(var_7_bool);
		var_12_bool = var_7_bool == 0; //@nz
		if(var_12_bool != 0) {
			WorkWithCorpse(var_0_object);
		}
	} else {
		GetProperty("agony", var_8_float);
		var_15_bool = var_8_float == (int)0;
		if(var_15_bool != 0) {
			return 10;
		}
		IsOverrideActive(var_9_bool);
		var_16_bool = var_9_bool == 0; //@nz
		if(var_16_bool == 0) goto Label_114;
		var_20_object = Obj();
		func_177(var_20_object);
		ShowWindow("agony.xml", (bool)1, (bool)0, var_20_object);
		GetProperty("agony", var_10_float);
		var_25_bool = var_10_float == (int)0;
		if(var_25_bool == 0) goto Label_114;
		SetProperty("agony", (int)0);
		var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0;
		var_0_object = var_29_object;
		func_155(var_28_bool, var_29_object, "reputation", (float)0.20000000298023224, (float)0, (float)1);
	}
Label_114:
	return 10;
	
}


task_1_event_5()
{
	var_0_bool = 0; var_1_bool = 0;
	IsDead(var_1_bool);
	var_2_bool = var_1_bool;
	if(var_2_bool != 0) {
		LockAnimationEnd("all", "agony_die");
	}
	return 2;
}


task_1_event_6()
{
	func_140();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


main()
{
	SetProperty("agony", (float)0.5);
	func_21();
	return 0;
}


func_0()
{
	Hold();
	return 0;
}


func_134(var_8_bool)
{
	var_9_float = 0; var_10_float = 0;
	GetProperty("agony", var_10_float);
	var_8_bool = !var_10_float;
	return 2;
}


func_140()
{
	StopAnimation();
	return 0;
}


func_14()
{
	var_15_bool = 0; var_16_bool = 0;
	AddItem(var_16_bool, "Money", (int)0, (int)500);
	return 2;
}


func_143(var_36_bool, var_37_object, var_38_string)
{
	var_39_bool = 0; var_40_bool = 0;
	var_43_bool = IsFuncExist(var_37_object, "HasProperty", (int)2);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_36_bool = 0;
		return 2;
	}
	@@var_37_object:HasProperty(var_38_string, var_40_bool);
	var_40_bool = var_36_bool;
	return 2;
}


func_177(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_21()
{
	var_2_bool = 0; var_3_bool = 0;
	RemoveEnvelope();
	SetRTEnvelope((int)50, (int)40);
	
Label_28:
	PlayAnimation("all", "agony");
	WaitForAnimEnd(var_3_bool);
	var_8_bool = 0;
	func_134(var_8_bool);
	if(var_8_bool != 0) {
		var_12_bool = var_3_bool;
		if(var_12_bool != 0) {
			func_58();
		}
		SetDeathState();
		func_14();
	} else {
		goto Label_28;
	}
	LockAnimationEnd("all", "agony_die");
	
Label_54:
	Hold();
	goto Label_54;
	
}
EMIT "Return(); Pop(2)";


func_183(var_46_float, var_47_float, var_48_float, var_49_float)
{
	var_50_bool = var_47_float < var_48_float;
	if(var_50_bool != 0) {
		var_48_float = var_46_float;
		return 0;
	}
	var_51_bool = var_47_float > var_49_float;
	if(var_51_bool != 0) {
		var_49_float = var_46_float;
		return 0;
	}
	var_47_float = var_46_float;
	return 0;
}


func_58()
{
	PlayAnimation("all", "agony_die");
	WaitForAnimEnd();
	return 0;
}


func_155(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	var_36_bool = 0; var_37_object = Obj(); var_38_string = "";
	var_29_object = var_37_object;
	var_30_string = var_38_string;
	func_143(var_36_bool, var_37_object, var_38_string);
	var_45_bool = var_36_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:GetProperty(var_30_string, var_35_float);
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_47_float = var_35_float + var_31_float;
	var_32_float = var_48_float;
	var_33_float = var_49_float;
	func_183(var_46_float, var_47_float, var_48_float, var_49_float);
	@@var_29_object:SetProperty(var_30_string, var_46_float);
	var_28_bool = 1;
	return 2;
}


