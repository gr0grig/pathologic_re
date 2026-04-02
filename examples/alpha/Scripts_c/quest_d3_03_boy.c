// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		if(1 != 0) {
			func_1020();
			if(var_11_bool == 12062) {
				object var_16_object = var_1_object;
				func_1113(var_0_object);
				object var_52_object = var_1_object;
				func_1132(var_0_object);
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_1107();
			}
			if(var_10_cvector == 12052) {
				func_116(var_11_bool, "Neutral");
				var_0_object->SetMessage(10904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10905, 12054, 12053); //@t
				return 0;
			}
			if(var_10_cvector == 12054) {
				func_116(var_11_bool, "Neutral");
				var_0_object->SetMessage(10906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10907, 12056, 12055); //@t
				return 0;
			}
			if(var_10_cvector == 12056) {
				func_116(var_11_bool, "Neutral");
				var_0_object->SetMessage(10908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10909, 12058, 12057); //@t
				return 0;
			}
			if(var_10_cvector == 12058) {
				func_116(var_11_bool, "Neutral");
				var_0_object->SetMessage(10910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10911, 12061, 12059); //@t
				var_0_object->AddReply(10912, 12061, 12060); //@t
				return 0;
			}
			if(var_10_cvector == 12061) {
				func_116(var_11_bool, "Neutral");
				var_0_object->SetMessage(10913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10914, -1, 12062); //@t
				return 0;
			}
			var_3_string = true;
			bool var_127_bool;
			func_1222(var_127_bool);
			if(var_127_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x85";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		TaskCall(0);
		int var_11_int;
		func_0(var_13_object, var_11_int, var_12_object);
		TaskReturn();
		TaskCall(3);
		func_281();
		TaskReturn();
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool; object var_12_object;
		func_1259(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_373(var_9_cvector, var_12_object);
			object var_47_object;
			var_10_bool = var_47_object;
			func_1266(var_47_object);
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@RequestClearPath(var_10_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_373(var_9_cvector, var_10_bool);
		object var_11_object;
		var_10_bool = var_11_object;
		func_1253();
	}

}


task task_4
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1259(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_474();
			object var_47_object;
			var_10_bool = var_47_object;
			func_1266(var_47_object);
		}
	}

}


task task_5
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int)
	{
		cvector var_15_cvector; float var_16_float; cvector var_17_cvector; float var_18_float;
		if(var_10_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_15_cvector);
			@FindDirLength(var_16_float, var_15_cvector, 7000.0);
			cvector var_24_cvector;
			func_479(var_18_float, var_24_cvector, 1.7453294);
			var_24_cvector = var_17_cvector;
			var_18_float = var_17_cvector | var_17_cvector;
			bool var_54_bool = false;
			if(var_18_float >= 10000.0) {
				bool var_57_bool;
				var_61_bool = var_18_float >= ((var_16_float * var_16_float) * 2.25);
				if(var_61_bool != 1) {
					bool var_62_bool;
					func_641(true, var_62_bool);
					if(var_62_bool != 1)
						var_57_bool = false;
				}
				if(var_57_bool != 0)
					var_54_bool = true;
			}
			if(var_54_bool == 0) goto Label_624;
			@Stop();
			cvector var_82_cvector;
			func_781(var_82_cvector);
			var_1_object = var_82_cvector + var_17_cvector;
		}
	Label_624:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		func_625(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1253();
	}

}


task task_6
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_870(var_15_int, var_16_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1224(var_11_object);
}


void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	if(var_12_bool != 0) {
		bool var_14_bool;
		func_1071(var_14_bool, "quest_d3_03", "boy_attacked");
	}
}


void func_0(object var_0_object, int var_11_int, object var_12_object)
{
	var_0_object = var_12_object;
	bool var_22_bool; object var_23_object;
	var_12_object = var_23_object;
	func_942(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_11_int = -2;
		return 8;
	}
	object var_18_object;
	@CreateDialog(var_18_object);
	int var_63_int;
	func_1218(var_63_int);
	var_18_object->SetNPCName(var_63_int);
	string var_64_string;
	func_1220(var_64_string);
	var_18_object->SetPhoto(var_64_string);
	int var_65_int;
	func_1185(var_65_int);
	var_18_object->SetPlayerName(var_65_int);
	bool var_19_bool;
	@IsOverrideActive(var_19_bool);
	if(var_19_bool != 0) {
		var_11_int = -2;
		return 8;
	}
	@DoDialog(var_18_object);
	object var_74_object; object var_75_object;
	var_12_object = var_74_object;
	var_18_object = var_75_object;
	TaskCall(1);
	func_63(var_76_object, var_77_object, var_78_string, var_79_bool, var_74_object, var_75_object);
	TaskReturn();
	bool var_21_bool;
	var_18_object->IsDialogEnd(var_21_bool);
	
	for(;;) {
		var_108_bool = !var_21_bool; //@nz
		if(var_108_bool == 0) goto Label_52;
		@sync();
		var_18_object->IsDialogEnd(var_21_bool);
	}
	
Label_52:
	object var_109_object;
	var_12_object = var_109_object;
	func_998();
	@StopDialog(var_18_object);
	var_18_object->GetReturnValue(-1);
	int var_20_int = var_11_int;
}
EMIT "Stack[-4] = 0";


void func_641(object var_0_object, bool var_62_bool)
{
	cvector var_65_cvector;
	@GetDirection(var_65_cvector);
	cvector var_67_cvector;
	func_786(var_67_cvector, var_0_object);
	cvector var_66_cvector;
	var_67_cvector = var_66_cvector;
	float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1037(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= -0.34202012;
}


void func_1027(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_43_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_43_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_43_float;
}


void func_1156(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_1143(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SetVariable("player_diary", 1);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_389(bool var_141_bool)
{
	var_141_bool = false;
}


void func_781(cvector var_82_cvector)
{
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
}


// @pe
void func_1037(float var_73_float, cvector var_74_cvector, cvector var_75_cvector)
{
	var_80_float = sqrt((var_74_cvector | var_74_cvector) * (var_75_cvector | var_75_cvector));
	var_73_float = (var_74_cvector | var_75_cvector) / var_80_float;
}


// @pe
void func_657(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_666(var_13_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_786(cvector var_67_cvector, object var_68_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_68_object->GetPosition(var_72_cvector);
	var_67_cvector = var_72_cvector - var_71_cvector;
}


void func_405(void)
{
	int var_152_int; int var_153_int; bool var_154_bool; float var_155_float; bool var_156_bool;
	@WaitForAnimEnd();
	bool var_157_bool;
	func_937(var_157_bool);
	if(!var_157_bool) //@nz
		return 14;
	int var_161_int;
	func_1090(var_161_int);
	int var_150_int;
	var_161_int = var_150_int;
	int var_151_int = 0;
	
	for(;;) {
		bool var_174_bool = false;
		if(var_151_int < 5) {
			bool var_177_bool;
			func_937(var_177_bool);
			if(var_177_bool != 0)
				var_174_bool = true;
		}
		if(var_174_bool != 0) {
			@irand(var_152_int, 3);
			if(var_152_int == 0) {
				if(var_150_int == 0) goto Label_452;
				@irand(var_153_int, var_150_int);
				string var_183_string; int var_184_int;
				var_153_int = var_184_int;
				func_1083(var_183_string, var_184_int);
				@PlayAnimation("all", var_183_string);
				@WaitForAnimEnd(var_154_bool);
				if(!var_154_bool) { //@nz
				} else {
			} else {
			if(var_152_int == 1) {
				@rand(var_155_float, 4);
				@Sleep((var_155_float + 1), var_156_bool);
				if(!var_156_bool) { //@nz
					goto Label_473;
				}
			} else if(var_151_int != 0) {
				goto Label_473;
			}
			}
				var_151_int += 1;
			}
		}
	Label_473:
		return 14;

	}
	
}


void func_1045(object var_60_object, object var_61_object, int var_62_int)
{
	int var_66_int;
	var_61_object->GetItemID(var_66_int);
	int var_67_int;
	@GetInvItemProperty(var_67_int, var_66_int, "Category");
	bool var_68_bool;
	var_60_object->AddItem(var_68_bool, var_61_object, var_67_int, var_62_int);
	if(!var_68_bool) //@nz
		var_60_object->DropItems(var_61_object, var_62_int);
}


void func_281(void)
{
	bool var_112_bool;
	func_1071(var_112_bool, "quest_d3_03", "boy_free");
	@SetProperty("noaccess", 0);
	
	for(;;) {
		func_309(var_110_bool, var_111_bool);
	}
}
EMIT "Return(); Pop(0)";


void func_793(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


void func_666(object var_13_object)
{
	cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; string var_28_string; object var_29_object; bool var_30_bool; bool var_31_bool; float var_32_float; cvector var_33_cvector;
	if(var_13_object == null) {
		func_753("fdie");
	} else {
		var_13_object->GetPosition(var_24_cvector);
		@GetPosition(var_25_cvector);
		@GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		if(((var_38_float * var_39_float) + (var_41_float * var_42_float)) >= 0)
			var_28_string = "fdie";
		else
			var_28_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", 2);
		if(var_49_bool != 0) {
			var_13_object->HasScriptProperty(var_30_bool, "Owner");
			if(var_30_bool != 0) {
				var_13_object->GetScriptProperty(var_29_object, "Owner");
				if(var_29_object == null)
					var_13_object = var_29_object;
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", 1);
		if(var_56_bool != 0) {
			var_29_object->GetEyesHeight(var_32_float);
			var_33_cvector = [0.0, 0.0, 0.0];
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			@LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = true;
		} else {
			var_31_bool = false;

		}
		@PlayAnimation("all", var_28_string);
		@WaitForAnimEnd();
		if(var_31_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_28_string);
		@RemoveEnvelope();
		var_29_object = null;
	}
	
}


void func_1185(int var_65_int)
{
	int var_67_int;
	@GetVariable("player", var_67_int);
	if(var_67_int == 0) {
		var_65_int = 200001;
		return 2;
	EMIT "GOTO 0x4b0";
	}
	if(var_67_int == 1) {
		var_65_int = 200002;
		return 2;
	}
	var_65_int = 200003;
}


void func_1058(object var_55_object, string var_56_string, int var_57_int)
{
	object var_59_object;
	@CreateInvItem(var_59_object);
	var_59_object->SetItemName(var_56_string);
	object var_60_object; object var_61_object; int var_62_int;
	var_55_object = var_60_object;
	var_59_object = var_61_object;
	var_57_int = var_62_int;
	func_1045(var_60_object, var_61_object, var_62_int);
}
EMIT "Stack[-1] = 0";


void func_805(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_937(bool var_157_bool)
{
	bool var_159_bool;
	@IsLoaded(var_159_bool);
	var_159_bool = var_157_bool;
}


void func_810(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_805(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_942(bool var_22_bool, object var_23_object)
{
	cvector var_33_cvector;
	var_23_object->GetPosition(var_33_cvector);
	float var_32_float;
	var_23_object->GetEyesHeight(var_32_float);
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_40_float + var_32_float);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	@GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_41_float + var_32_float);
	cvector var_35_cvector = var_33_cvector - var_34_cvector;
	var_42_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_44_float = sqrt(var_35_cvector | var_35_cvector);
	var_35_cvector /= var_44_float;
	cvector var_36_cvector = -var_35_cvector;
	cvector var_47_cvector;
	func_1027(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * 70) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_22_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector);
	var_60_float = GetByIndex(var_37_cvector, 0);
	var_61_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_60_float, var_61_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_22_bool = true;
}


void func_1071(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1202(void)
{
	@Trace("Adding diary entry");
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 84, 2, 12166);
	bool var_28_bool; object var_29_object;
	var_23_object = var_29_object;
	func_1156(var_28_bool, var_29_object, 27);
}
EMIT "Stack[-1] = 0";


void func_309(object var_0_object, object var_1_object)
{
	float var_127_float; cvector var_128_cvector; cvector var_129_cvector; float var_130_float; bool var_131_bool; object var_132_object; bool var_133_bool;
	@rand(var_127_float, 0.5);
	@Sleep(var_127_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_321:
				@GetPosition(var_129_cvector);
				@GetCameraFarDistance(var_130_float);
				@GetRandomPFPointInCircle(var_128_cvector, var_129_cvector, (var_130_float * 2.5), var_131_bool);
				if(var_131_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_321;
			}
				var_1_object = false;
		}
		}
		goto Label_338;

	Label_338:
		@FindShiftedPathTo(var_132_object, var_128_cvector);
		if(var_132_object != null) {
			@RotatePath(var_132_object, var_133_bool);
			if(var_133_bool != 0) {
				bool var_141_bool;
				func_389(var_141_bool);
				@FollowPath(var_132_object, var_141_bool, var_133_bool);
				var_132_object = null;
				if(var_133_bool != 0) {
					TaskCall(4);
					func_405();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_132_object = null;
	}
	
}


void func_1083(string var_167_string, int var_168_int)
{
	string var_170_string = "idle";
	if(var_168_int != 0)
		var_170_string += var_168_int;
	var_170_string = var_167_string;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_74_object, object var_75_object)
{
	var_0_object = var_75_object;
	var_1_object = var_74_object;
	var_3_string = false;
	if(1 != 0) {
		func_116(var_75_object, "Neutral");
		var_0_object->SetMessage(10904); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(10905, 12054, 12053); //@t
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	bool var_100_bool;
	func_1222(var_100_bool);
	if(var_100_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1002(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_115;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_115:
		return 0;

	}
	
}


void func_1218(int var_63_int)
{
	var_63_int = 3345;
}


void func_1090(int var_161_int)
{
	int var_164_int; bool var_165_bool;
	var_164_int = 0;
	
	for(;;) {
		string var_167_string; int var_168_int;
		var_164_int = var_168_int;
		func_1083(var_167_string, var_168_int);
		@HasAnimation(var_165_bool, "all", var_167_string);
		if(!var_165_bool) //@nz
			break;
		var_164_int += 1;
	}
	var_164_int = var_161_int;
}


void func_1220(string var_64_string)
{
	var_64_string = "ui/NPC_None.png";
}


void func_1222(bool var_82_bool)
{
	var_82_bool = false;
}


// @pe
void func_1224(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(6);
	func_657(var_12_object);
	TaskReturn();
}


void func_846(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_810(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_793(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


// @pe
void func_1107(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1113(object var_16_object)
{
	@SetVariable("d3q03", 2);
	func_1202();
	float var_19_float;
	var_16_object->GetProperty("disease", var_19_float);
	if(var_19_float < 0.5)
		var_16_object->SetProperty("disease", 0.5);
}


void func_474(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_479(object var_0_object, cvector var_24_cvector, float var_25_float)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_0_object->GetPosition(var_33_cvector); //@t
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_38_cvector;
	cvector var_40_cvector;
	func_1027(var_40_cvector, (var_32_cvector - var_33_cvector));
	func_1027(var_38_cvector, (var_40_cvector + (var_34_cvector * 0.75)));
	cvector var_35_cvector;
	var_38_cvector = var_35_cvector;
	cvector var_36_cvector;
	float var_37_float;
	@FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, 32, 7000.0);
	if((var_37_float - 100) < 0)
		var_37_float = 0;
	var_24_cvector = var_36_cvector * var_37_float;
}


// @pe
void func_998(void)
{
	@CameraSwitchToNormal();
}


void func_870(object var_14_object, int var_15_int)
{
	object var_27_object; object var_28_object; cvector var_29_cvector; float var_30_float; string var_36_string;
	bool var_37_bool = false;
	if(var_15_int != 4) {
		if(var_15_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		@GetScene(var_27_object);
		@GetPosition(var_29_cvector);
		@GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		SetByIndex(var_29_cvector, 1) = (var_42_float + (var_30_float / 2));
		@AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_28_object = null;
		var_27_object = null;
	}
	if(var_14_object == null)
		return 20;
	int var_31_int;
	@GetSecondaryAnimationType(var_31_int);
	if(var_31_int < 0)
		return 20;
	cvector var_32_cvector;
	var_14_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_36_string = "fhit";
	else
		var_36_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_36_string + "1"), (var_36_string + "2"), -10);
	
}


void func_1002(string var_85_string)
{
	@Trace("playing " + var_85_string);
	float var_88_float;
	float var_89_float;
	@lshGetAnimTimes(var_85_string, var_88_float, var_89_float);
	@lshPlayAnimation(var_88_float, var_89_float);
	@Trace("start: " + var_88_float);
	@Trace("end: " + var_89_float);
}


// @pe
void func_1259(bool var_11_bool, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_846(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
}


// @pe
void func_1132(object var_52_object)
{
	@Trace("powder is given");
	object var_55_object;
	var_52_object = var_55_object;
	func_1058(var_55_object, "powder", 1);
}


void func_625(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1266(object var_47_object)
{
	object var_48_object;
	var_47_object = var_48_object;
	TaskCall(5);
	func_509(var_49_object, var_50_cvector, var_51_bool, var_48_object);
	TaskReturn();
}


// @pe
void func_753(string var_35_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_35_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_35_string);
	@RemoveEnvelope();
}


// @pe
void func_116(object var_2_object, string var_81_string)
{
	bool var_82_bool;
	func_1222(var_82_bool);
	if(!var_82_bool) //@nz
		return 0;
	if(var_81_string == var_2_object)
		return 0;
	string var_85_string;
	func_1002(var_85_string);
	var_2_object = var_85_string;
}


void func_373(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1143(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_1020(void)
{
	bool var_13_bool;
	func_1222(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_509(object var_0_object, object var_1_object, object var_2_object, object var_48_object)
{
	cvector var_60_cvector; float var_61_float;
	cvector var_62_cvector;
	func_479(var_61_float, var_62_cvector, 1.7453294);
	cvector var_57_cvector;
	var_62_cvector = var_57_cvector;
	float var_58_float = var_57_cvector | var_57_cvector;
	if(var_58_float < 10000.0) {
		var_95_float = sqrt(var_58_float);
		@Trace("Can't retreat, distance: " + var_95_float);
		@Sleep(0.5);
		return 10;
	}
	var_98_float = GetByIndex(var_57_cvector, 0);
	var_99_float = GetByIndex(var_57_cvector, 2);
	@Rotate(var_98_float, var_99_float);
	cvector var_100_cvector;
	func_781(var_100_cvector);
	@SetTimer(120, 0.5);
	
Label_542:
	bool var_59_bool;
	@MovePoint((var_100_cvector + var_57_cvector), 1, var_59_bool);
	if(var_59_bool != 0) {
		if(var_48_object == null) {
			goto Label_572;
		EMIT "GOTO 0x23a";

		Label_572:
			for(;;) {
				return 10;
		}
			cvector var_108_cvector;
			func_479(var_61_float, var_108_cvector, 2.6179938);
			var_108_cvector = var_60_cvector;
			if((var_60_cvector | var_60_cvector) >= 10000.0) {
				cvector var_112_cvector;
				func_781(var_112_cvector);
				var_1_object = var_112_cvector + var_60_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_542; //@nz

	}
}


