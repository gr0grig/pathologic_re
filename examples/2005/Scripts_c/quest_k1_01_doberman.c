// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_1023();
			if(var_10_bool == 26016) {
				bool var_16_bool = false;
				bool var_17_bool;
				func_1128(var_1_object);
				if(var_17_bool != 0) {
					bool var_25_bool;
					func_1140(var_1_object);
					if(var_25_bool != 0)
						var_16_bool = true;
				}
				if(var_16_bool != 0) {
					object var_31_object; object var_32_object;
					var_31_object = var_1_object;
					var_32_object = var_0_object;
					func_1122();
					func_166(var_11_object, "Neutral");
					var_0_object->SetMessage(524677); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524678, 28065, 26017); //@t
					return 0;
				}
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(524679); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524680, -1, 26019); //@t
				var_0_object->AddReply(526801, -1, 28081); //@t
				return 0;
			}
			if(var_10_bool == 28065) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526786, 28067, 28066); //@t
				return 0;
			}
			if(var_10_bool == 28067) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526788, 28069, 28068); //@t
				return 0;
			}
			if(var_10_bool == 28069) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526795, 28076, 28075); //@t
				return 0;
			}
			if(var_10_bool == 28076) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526797, 28078, 28077); //@t
				return 0;
			}
			if(var_10_bool == 28078) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526798); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526799, 28080, 28079); //@t
				return 0;
			}
			if(var_10_bool == 28080) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526800); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526793, 28071, 28073); //@t
				var_0_object->AddReply(526790, 28082, 28070); //@t
				return 0;
			}
			if(var_10_bool == 28082) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526803, -1, 28083); //@t
				var_0_object->AddReply(526804, -1, 28084); //@t
				return 0;
			}
			if(var_10_bool == 28071) {
				func_166(var_11_object, "Neutral");
				var_0_object->SetMessage(526791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526792, -1, 28072); //@t
				var_0_object->AddReply(526794, -1, 28074); //@t
				return 0;
			}
			var_3_string = true;
			bool var_124_bool;
			func_1196(var_124_bool);
			if(var_124_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbd";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(3);
			func_444(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_509(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_471(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_1012(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_1175(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_827(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_895(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	if(var_12_bool != 0) {
		bool var_14_bool;
		func_1086(var_14_bool, "quest_k1_01", "doberman_dead");
	}
	object var_20_object;
	var_10_object = var_20_object;
	func_1198(var_20_object);
}


void func_1152(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x48f";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_914(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_1190(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1188(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1192(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1194(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1152(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_148_bool = !var_24_bool; //@nz
		if(var_148_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_149_object;
	var_15_object = var_149_object;
	func_982();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_768(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_645(object var_28_object)
{
	cvector var_39_cvector; cvector var_40_cvector; cvector var_41_cvector; cvector var_42_cvector; string var_43_string; object var_44_object; bool var_45_bool; bool var_46_bool; float var_47_float; cvector var_48_cvector;
	if(var_28_object == null) {
		func_736("fdie");
	} else {
		var_28_object->GetPosition(var_39_cvector);
		@GetPosition(var_40_cvector);
		@GetDirection(var_41_cvector);
		var_42_cvector = var_40_cvector - var_39_cvector;
		var_82_float = GetByIndex(var_42_cvector, 0);
		var_83_float = GetByIndex(var_41_cvector, 0);
		var_85_float = GetByIndex(var_42_cvector, 2);
		var_86_float = GetByIndex(var_41_cvector, 2);
		if(((var_82_float * var_83_float) + (var_85_float * var_86_float)) >= 0)
			var_43_string = "fdie";
		else
			var_43_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_28_object = var_44_object;
		var_93_bool = IsFuncExist(var_28_object, "GetScriptProperty", 2);
		if(var_93_bool != 0) {
			var_28_object->HasScriptProperty(var_45_bool, "Owner");
			if(var_45_bool != 0) {
				var_28_object->GetScriptProperty(var_44_object, "Owner");
				if(var_44_object == null)
					var_28_object = var_44_object;
			}
		}
		var_100_bool = IsFuncExist(var_44_object, "@GetEyesHeight", 1);
		if(var_100_bool != 0) {
			var_44_object->GetEyesHeight(var_47_float);
			var_48_cvector = [0.0, 0.0, 0.0];
			var_101_float = GetByIndex(var_48_cvector, 1);
			var_47_float = var_101_float;
			SetByIndex(var_48_cvector, 1) = var_101_float;
			@LookAsync(var_28_object, "head", var_48_cvector);
			var_46_bool = true;
		} else {
			var_46_bool = false;

		}
		string var_103_string;
		var_43_string = var_103_string;
		func_1030(var_103_string);
		@PlayAnimation("all", var_43_string);
		@WaitForAnimEnd();
		if(var_46_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_43_string);
		@RemoveEnvelope();
		var_44_object = null;
	}
	
}


void func_1030(string var_51_string)
{
	bool var_60_bool; int var_61_int; bool var_62_bool; int var_63_int; bool var_64_bool; float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
	@IsExisting3DSound(var_60_bool, var_51_string);
	if(!var_60_bool) { //@nz
		var_61_int = 0;

		for(;;) {
			@IsExisting3DSound(var_62_bool, (var_51_string + (var_61_int + 1)));
			if(!var_62_bool) { //@nz
				break;
			Label_1050:
				@irand(var_63_int, var_61_int);
				var_51_string += (var_63_int + 1);
	}
			@Is3DSoundLoaded(var_64_bool, var_51_string);
			if(var_64_bool != 0) {
				@GetEyesHeight(var_65_float);
				@GetDirection(var_66_cvector);
				var_67_cvector = var_66_cvector * 50;
				var_78_float = GetByIndex(var_67_cvector, 1);
				SetByIndex(var_67_cvector, 1) = (var_78_float + var_65_float);
				@PlayGlobalSound(var_51_string, var_67_cvector);
			}
		}
		var_61_int += 1;
	}
	var_73_bool = !var_61_int; //@nz
	if(var_73_bool == 0) goto Label_1050;
}


void func_775(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_523(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_909(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_1105(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_909(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_570;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_1098(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_599;
				}
			} else if(var_28_int != 0) {
				goto Label_599;
			}
			}
					bool var_61_bool;
					func_602(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_594;
			}
		}
	Label_599:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_594:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_909(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_783(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1169(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


void func_914(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1071(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_1196(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_976;
		@LookAsyncCamera("head");
	}
Label_976:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


// @pe
void func_1175(object var_14_object)
{
	int var_15_int;
	func_1169(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_895(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_783(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1188(int var_73_int)
{
	var_73_int = 518097;
}


void func_1190(int var_72_int)
{
	var_72_int = 518096;
}


// @pe
void func_166(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_1196(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_1006(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	
}


void func_1192(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_1194(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_1196(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_1198(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_609(var_21_object);
	TaskReturn();
}


void func_1071(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1081(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_827(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_768(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1071(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_889:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_783(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_889;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_895(var_61_float, var_62_cvector, var_63_cvector);
}


// @pe
void func_444(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_909(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_523();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1086(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool = false;
		bool var_93_bool;
		func_1128(var_1_object);
		if(var_93_bool != 0) {
			bool var_101_bool;
			func_1140(var_1_object);
			if(var_101_bool != 0)
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			object var_107_object; object var_108_object;
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_1122();
			func_166(var_86_object, "Neutral");
			var_0_object->SetMessage(524677); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524678, 28065, 26017); //@t
		} else {
					func_166(var_86_object, "Neutral");
					var_0_object->SetMessage(524679); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524680, -1, 26019); //@t
					var_0_object->AddReply(526801, -1, 28081); //@t
		}
	}
	for(;;) {
		bool var_127_bool;
		func_1196(var_127_bool);
		if(var_127_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_999(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_165;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_165:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_1098(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_1105(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_1098(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_982(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal();
	bool var_152_bool;
	func_1196(var_152_bool);
	if(var_152_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_998;
		@UnlookAsync("head");
	}
Label_998:
	
}


void func_471(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_775(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_602(bool var_61_bool)
{
	var_61_bool = true;
}


void func_604(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_736(string var_50_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_51_string;
	var_50_string = var_51_string;
	func_1030(var_51_string);
	@PlayAnimation("all", var_50_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_50_string);
	@RemoveEnvelope();
}


void func_609(object var_21_object)
{
	bool var_23_bool;
	@AddItem(var_23_bool, "lockpick", 0, 1);
	object var_27_object;
	var_21_object = var_27_object;
	func_620(var_27_object);
}


// @pe
void func_1122(void)
{
	@SetVariable("ook1Lisa1", 1);
}


void func_999(string var_129_string)
{
	float var_132_float; float var_133_float;
	@lshGetAnimTimes(var_129_string, var_132_float, var_133_float);
	@lshPlayAnimation(var_132_float, var_133_float, false);
}


// @pe
void func_1128(bool var_93_bool)
{
	int var_95_int;
	func_1081(var_95_int, "k1q01");
	if(var_95_int == 4)
		var_93_bool = true;
	var_93_bool = false;
}


// @pe
void func_620(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_645(var_28_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1006(string var_115_string, bool var_116_bool)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_115_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, var_116_bool);
}


// @pe
void func_1140(bool var_101_bool)
{
	int var_103_int;
	func_1081(var_103_int, "ook1Lisa1");
	if(var_103_int == 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


void func_1012(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_509(object var_2_object, string var_3_string)
{
	func_604();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1023(void)
{
	bool var_13_bool;
	func_1196(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


