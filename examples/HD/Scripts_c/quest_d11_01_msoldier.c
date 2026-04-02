// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_1057();
			if(var_11_object == 42007) {
				object var_16_object = var_1_object;
				func_1186(var_0_object);
				object var_22_object = var_1_object;
				func_1192(var_0_object);
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1209();
			}
			if(var_11_object == 42008) {
				object var_62_object = var_1_object;
				func_1169(var_0_object);
			}
			if(var_11_object == 15679) {
				object var_80_object = var_1_object;
				func_1169(var_0_object);
			}
			if(var_11_object == 42005) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1215();
			}
			if(var_10_bool == 15673) {
				bool var_96_bool;
				func_1248(var_1_object);
				if(var_96_bool != 0) {
					object var_104_object; object var_105_object;
					var_104_object = var_1_object;
					var_105_object = var_0_object;
					func_1231();
					func_142(var_11_object, "Neutral");
					var_0_object->SetMessage(514445); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514456, 15687, 15686); //@t
					var_0_object->AddReply(514446, 15675, 15674); //@t
					return 0;
				}
			}
			if(var_10_bool == 15675) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(514447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514448, 15677, 15676); //@t
				var_0_object->AddReply(514452, 15681, 15680); //@t
				return 0;
			}
			if(var_10_bool == 15681) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(514453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514454, 15677, 15682); //@t
				var_0_object->AddReply(514455, 15677, 15684); //@t
				return 0;
			}
			if(var_10_bool == 15677) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(514449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514450, 42006, 15678); //@t
				var_0_object->AddReply(514451, -1, 15679); //@t
				var_0_object->AddReply(540038, -1, 42005); //@t
				return 0;
			}
			if(var_10_bool == 42006) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(540039); //@t
				var_0_object->ClearReplies(); //@t
				bool var_169_bool;
				func_1237(var_169_bool, var_1_object);
				if(var_169_bool != 0)
					var_0_object->AddReply(540040, -1, 42007); //@t
				var_0_object->AddReply(540041, -1, 42008); //@t
				return 0;
			}
			if(var_10_bool == 15687) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(514457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514458, 15689, 15688); //@t
				return 0;
			}
			if(var_10_bool == 15689) {
				func_142(var_11_object, "Neutral");
				var_0_object->SetMessage(514459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514460, 15681, 15690); //@t
				return 0;
			}
			var_3_string = true;
			bool var_198_bool;
			func_1384(var_198_bool);
			if(var_198_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
		var_10_bool = GlobalVars[1];
		GlobalVars[1] = false;
	
		while(true != 0) {
			func_469(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		int var_13_int; bool var_14_bool;
		func_534(var_13_int, var_14_bool);
		int var_18_int; object var_19_object;
		var_10_object = var_19_object;
		TaskCall(0);
		func_0(var_20_object, var_18_int, var_19_object);
		TaskReturn();
		var_20_object = var_13_int;
		if(var_13_int == 0) {
			var_162_bool = GlobalVars[1];
			GlobalVars[1] = true;
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd(var_14_bool);
			@PlayAnimation("all", "attack_end2");
			@WaitForAnimEnd(var_14_bool);
			bool var_167_bool;
			func_1133(var_167_bool, "quest_d11_01", "teleport");
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_534(var_9_object, var_10_object);
		bool var_14_bool;
		func_1133(var_14_bool, "quest_d11_01", "soldier_attack");
		@SetProperty("health", 0);
		@SetVariable("d11q01", 3);
		bool var_24_bool;
		func_1133(var_24_bool, "quest_d11_01", "restore_andrei");
		func_1260();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_496(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_1046(var_4_bool);
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
			func_1363(var_14_object);
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
	func_841(var_14_object, var_15_int, var_16_float);
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
	func_909(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	var_14_bool = GlobalVars[1];
	if(var_14_bool != 0) {
	}
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1386(var_11_object);
}


void func_0(object var_0_object, int var_18_int, object var_19_object)
{
	var_0_object = var_19_object;
	bool var_29_bool; object var_30_object;
	var_19_object = var_30_object;
	func_928(var_29_bool, var_30_object, 70.0);
	if(!var_29_bool) { //@nz
		var_18_int = -2;
		return 8;
	}
	object var_25_object;
	@CreateDialog(var_25_object);
	int var_77_int;
	func_1378(var_77_int);
	var_25_object->SetNPCName(var_77_int);
	int var_78_int;
	func_1376(var_78_int);
	var_25_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_1380(var_79_string);
	var_25_object->SetPhoto(var_79_string);
	string var_80_string;
	func_1382(var_80_string);
	var_25_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_1340(var_81_int);
	var_25_object->SetPlayerName(var_81_int);
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	if(var_26_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	@DoDialog(var_25_object);
	object var_90_object; object var_91_object;
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_28_bool;
	var_25_object->IsDialogEnd(var_28_bool);
	
	for(;;) {
		var_151_bool = !var_28_bool; //@nz
		if(var_151_bool == 0) goto Label_63;
		@sync();
		var_25_object->IsDialogEnd(var_28_bool);
	}
	
Label_63:
	object var_152_object;
	var_19_object = var_152_object;
	func_997();
	@StopDialog(var_25_object);
	var_25_object->GetReturnValue(-1);
	int var_27_int = var_18_int;
}
EMIT "Stack[-4] = 0";


void func_1152(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_1145(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


void func_1273(void)
{
	object var_27_object;
	@CreateDiaryEntry(var_27_object, 769, 1, 540066);
	bool var_31_bool; object var_32_object;
	var_27_object = var_32_object;
	func_1312(var_31_bool, var_32_object, 192);
}
EMIT "Stack[-1] = 0";


void func_1286(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 768, 1, 540065);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_1312(var_71_bool, var_72_object, 192);
}
EMIT "Stack[-1] = 0";


void func_1031(string var_113_string, bool var_114_bool)
{
	bool var_120_bool; float var_121_float; float var_122_float;
	@lshHasAnimation(var_120_bool, var_113_string);
	if(var_120_bool != 0) {
		@lshGetAnimTimes(var_113_string, var_121_float, var_122_float);
		@lshPlayAnimation(var_121_float, var_122_float, var_114_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_113_string);
	}
	
}


void func_909(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_797(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_142(object var_2_object, string var_109_string)
{
	bool var_110_bool;
	func_1384(var_110_bool);
	if(!var_110_bool) //@nz
		return 0;
	if(var_109_string == var_2_object)
		return 0;
	string var_113_string; bool var_114_bool;
	var_109_string = var_113_string;
	if(var_109_string == "")
		var_114_bool = false;
	else
		var_114_bool = true;
	func_1031(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	
}


void func_782(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


// @pe
void func_1169(object var_63_object)
{
	@SetVariable("d11q01", 3);
	func_1286();
	bool var_74_bool;
	func_1133(var_74_bool, "quest_d11_01", "restore_andrei");
	var_63_object->SetReturnValue(0);
}


void func_659(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_750("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1064(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_1299(object var_41_object)
{
	object var_43_object;
	@GetDiaryRoot(var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_41_object = false;
	}
	var_43_object = var_41_object;
}
EMIT "Stack[-1] = 0";


void func_789(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_534(object var_2_object, string var_3_string)
{
	func_629();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1046(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_923(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


void func_797(object var_27_object)
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


void func_928(bool var_29_bool, object var_30_object, float var_31_float)
{
	cvector var_42_cvector; bool var_49_bool;
	var_30_object->GetPosition(var_42_cvector);
	float var_41_float;
	var_30_object->GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_41_float);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	@GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_41_float);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_54_float = sqrt(var_44_cvector | var_44_cvector);
	var_44_cvector /= var_54_float;
	cvector var_45_cvector = -var_44_cvector;
	cvector var_56_cvector;
	func_1111(var_56_cvector, (var_45_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_46_cvector = ((var_44_cvector * var_31_float) + (var_56_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_48_bool;
	@IsOverrideActive(var_48_bool);
	if(var_48_bool != 0)
		var_29_bool = false;
	@StopWorld();
	@CameraTransit((var_43_cvector + var_46_cvector), var_45_cvector, true);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_1384(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_49_bool, "head");
		if(var_49_bool == 0) goto Label_991;
		@LookAsyncCamera("head");
	}
Label_991:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_29_bool = true;
	
}


void func_1057(void)
{
	bool var_13_bool;
	func_1384(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_1186(object var_16_object)
{
	int var_19_int;
	var_16_object->RemoveItemByType(var_19_int, "burah_serum", 1);
}


void func_1312(bool var_32_bool, object var_33_object, int var_34_int)
{
	object var_41_object;
	func_1299(var_41_object);
	object var_38_object;
	var_41_object = var_38_object;
	object var_39_object;
	var_38_object->Find(var_34_int, var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_34_int);
		var_32_bool = false;
	}
	var_39_object->AddChild(var_33_object);
	@SendWorldWndMessage(7);
	int var_40_int;
	var_33_object->GetCategory(var_40_int);
	@SetDiarySection(var_40_int);
	var_32_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_548(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_923(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_37_int;
	func_1152(var_37_int);
	int var_28_int;
	var_37_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_50_bool = false;
		if(var_29_int < 5) {
			bool var_53_bool;
			func_923(var_53_bool);
			if(var_53_bool != 0)
				var_50_bool = true;
		}
		if(var_50_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_595;
				@irand(var_31_int, var_28_int);
				string var_59_string; int var_60_int;
				var_31_int = var_60_int;
				func_1145(var_59_string, var_60_int);
				@PlayAnimation("all", var_59_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_624;
				}
			} else if(var_29_int != 0) {
				goto Label_624;
			}
			}
					bool var_62_bool;
					func_627(var_62_bool);
					var_63_bool = !var_62_bool; //@nz
					if(var_63_bool == 0) goto Label_619;
			}
		}
	Label_624:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_619:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


// @pe
void func_1192(object var_23_object)
{
	@SetVariable("d11q01", 3);
	func_1273();
	bool var_49_bool;
	func_1133(var_49_bool, "quest_d11_01", "restore_andrei");
	var_23_object->SetReturnValue(1);
}


void func_1064(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_1084:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_1084;
}


// @pe
void func_1209(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1340(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x54b";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


// @pe
void func_1215(void)
{
	@SetVariable("d11q01", 3);
	bool var_88_bool;
	func_1133(var_88_bool, "quest_d11_01", "soldier_attack");
	bool var_91_bool;
	func_1133(var_91_bool, "quest_d11_01", "restore_andrei");
}


void func_841(object var_14_object, int var_15_int, float var_16_float)
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
		func_782(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1111(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_903:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_797(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_903;
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
	func_909(var_61_float, var_62_cvector, var_63_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_97_bool;
		func_1248(var_1_object);
		if(var_97_bool != 0) {
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_1231();
			func_142(var_91_object, "Neutral");
			var_0_object->SetMessage(514445); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514456, 15687, 15686); //@t
			var_0_object->AddReply(514446, 15675, 15674); //@t
		} else {
				return 0;
		}
	}
	bool var_133_bool;
	func_1384(var_133_bool);
	if(var_133_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1015(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_141:
		return 0;

	}
	
}
EMIT "GOTO 0x4e";


void func_1357(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


// @pe
void func_1231(void)
{
	@SetVariable("ood11Officer1", 1);
}


void func_1105(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1363(object var_14_object)
{
	int var_15_int;
	func_1357(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


// @pe
void func_1237(bool var_169_bool, object var_170_object)
{
	object var_172_object;
	var_170_object = var_172_object;
	bool var_171_bool;
	func_1126(var_171_bool, var_172_object, "burah_serum");
	if(var_171_bool != 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


// @pe
void func_469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_12_float, float var_13_float)
{
	bool var_14_bool;
	func_923(var_14_bool);
	if(!var_14_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	@SetTimer(10, 1.0);
	func_548();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1111(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1376(int var_78_int)
{
	var_78_int = 515572;
}


// @pe
void func_1248(bool var_97_bool)
{
	int var_99_int;
	func_1121(var_99_int, "ood11Officer1");
	if(var_99_int == 0) {
		var_97_bool = true;
		return 0;
	}
	var_97_bool = false;
}


void func_1378(int var_77_int)
{
	var_77_int = 504031;
}


void func_1121(int var_99_int, string var_100_string)
{
	int var_102_int;
	@GetVariable(var_100_string, var_102_int);
	var_102_int = var_99_int;
}


void func_1380(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen2.png";
}


void func_997(void)
{
	bool var_154_bool;
	@CameraSwitchToNormal(true);
	bool var_156_bool;
	func_1384(var_156_bool);
	if(var_156_bool != 0) {
	} else {
		@HasAnimationTrack(var_154_bool, "head");
		if(var_154_bool == 0) goto Label_1014;
		@UnlookAsync("head");
	}
Label_1014:
	
}


void func_1382(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen2_b.png";
}


void func_1126(bool var_171_bool, object var_172_object, string var_173_string)
{
	int var_176_int;
	@GetInvItemByName(var_176_int, var_173_string);
	bool var_177_bool;
	var_172_object->HasItem(var_176_int, var_177_bool);
	var_177_bool = var_171_bool;
}


void func_1384(bool var_72_bool)
{
	var_72_bool = false;
}


void func_1386(object var_11_object)
{
	object var_13_object;
	@GetScene(var_13_object);
	object var_14_object;
	func_1105(var_14_object);
	var_13_object->RemoveStationaryActor(var_14_object);
	object var_17_object;
	var_11_object = var_17_object;
	TaskCall(3);
	func_634(var_17_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1260(void)
{
	object var_28_object;
	@CreateDiaryEntry(var_28_object, 794, 1, 543369);
	bool var_32_bool; object var_33_object;
	var_28_object = var_33_object;
	func_1312(var_32_bool, var_33_object, 192);
}
EMIT "Stack[-1] = 0";


void func_1133(bool var_14_bool, string var_15_string, string var_16_string)
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
void func_750(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1064(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_496(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_789(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_627(bool var_62_bool)
{
	var_62_bool = true;
}


void func_629(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1015(string var_135_string)
{
	bool var_139_bool; float var_140_float; float var_141_float;
	@lshHasAnimation(var_139_bool, var_135_string);
	if(var_139_bool != 0) {
		@lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		@lshPlayAnimation(var_140_float, var_141_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_135_string);
	}
	
}


void func_1145(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


// @pe
void func_634(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_659(var_18_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


