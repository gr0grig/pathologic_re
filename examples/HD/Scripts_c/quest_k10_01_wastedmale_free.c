// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		if(1 != 0) {
			func_1056();
			if(var_14_bool == 28267) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1143();
			}
			if(var_14_bool == 28275) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_1152();
				object var_82_object = var_1_object;
				func_1196(var_0_object);
				object var_85_object = var_1_object;
				func_1180(var_0_object);
			}
			if(var_14_bool == 29417) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_1152();
				object var_115_object = var_1_object;
				func_1196(var_0_object);
				object var_117_object = var_1_object;
				func_1180(var_0_object);
			}
			if(var_13_cvector == 28264) {
				bool var_121_bool;
				func_1201(var_1_object);
				if(var_121_bool != 0) {
					func_157(var_14_bool, "Neutral");
					var_0_object->SetMessage(526972); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528069, 29412, 29411); //@t
					return 0;
				}
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(526976); //@t
				var_0_object->ClearReplies(); //@t
				bool var_152_bool;
				func_1213(var_1_object);
				if(var_152_bool != 0)
					var_0_object->AddReply(526981, 28274, 28273); //@t
				var_0_object->AddReply(526977, -1, 28269); //@t
				return 0;
			}
			if(var_13_cvector == 28274) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(526982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528073, 29416, 29415); //@t
				var_0_object->AddReply(528075, -1, 29417); //@t
				return 0;
			}
			if(var_13_cvector == 29416) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(528074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526983, -1, 28275); //@t
				return 0;
			}
			if(var_13_cvector == 29412) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(528070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528071, 29414, 29413); //@t
				return 0;
			}
			if(var_13_cvector == 29414) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(528072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526973, 28266, 28265); //@t
				return 0;
			}
			if(var_13_cvector == 28266) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(526974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526975, -1, 28267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_202_bool;
			func_1141(var_202_bool);
			if(var_202_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_424(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		int var_16_int; object var_17_object;
		func_489(var_16_int, var_17_object);
		int var_21_int; object var_22_object;
		var_13_bool = var_22_object;
		TaskCall(0);
		func_0(var_23_object, var_21_int, var_22_object);
		TaskReturn();
		var_23_object = var_16_int;
		if(var_16_int == 0) {
			@GetScene(var_17_object);
			object var_172_object;
			func_1063(var_172_object);
			var_17_object->RemoveStationaryActor(var_172_object);
			object var_175_object;
			var_13_bool = var_175_object;
			TaskCall(3);
			func_619(var_176_object, var_177_cvector, var_178_bool, var_175_object);
			TaskReturn();
			var_17_object = null;
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == 10) {
			bool var_16_bool;
			func_451(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
			if(var_16_bool != 0) {
				if(!var_2_object) { //@nz
					func_1045(var_4_bool);
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
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_589(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_760(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_743;
			@Stop();
			cvector var_85_cvector;
			func_776(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_743:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_744(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_1377();
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_840(var_17_object, var_18_int, var_19_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_19_object;
	var_13_object = var_19_object;
	int var_20_int;
	var_14_int = var_20_int;
	float var_21_float;
	var_15_float = var_21_float;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	func_908(var_21_float, var_22_cvector, var_23_cvector);
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
}


void func_1152(void)
{
	@SetVariable("k10q01", 6);
	object var_54_object;
	func_1292(var_54_object);
	object var_51_object;
	var_54_object = var_51_object;
	float var_65_float;
	func_1104(var_65_float);
	var_51_object->AddMark("k10q01WastedGotoBurah", "pt_gmap_factory", 1, 530196, var_65_float);
	func_1238();
	bool var_76_bool;
	func_1092(var_76_bool, "quest_k10_01", "init_factory");
}
EMIT "Stack[-1] = 0";


void func_0(object var_0_object, int var_21_int, object var_22_object)
{
	var_0_object = var_22_object;
	bool var_32_bool; object var_33_object;
	var_22_object = var_33_object;
	func_927(var_32_bool, var_33_object, 70.0);
	if(!var_32_bool) { //@nz
		var_21_int = -2;
		return 8;
	}
	object var_28_object;
	@CreateDialog(var_28_object);
	int var_80_int;
	func_1135(var_80_int);
	var_28_object->SetNPCName(var_80_int);
	int var_81_int;
	func_1133(var_81_int);
	var_28_object->SetNPCDescription(var_81_int);
	string var_82_string;
	func_1137(var_82_string);
	var_28_object->SetPhoto(var_82_string);
	string var_83_string;
	func_1139(var_83_string);
	var_28_object->SetPhoto2(var_83_string);
	int var_84_int;
	func_1342(var_84_int);
	var_28_object->SetPlayerName(var_84_int);
	bool var_29_bool;
	@IsOverrideActive(var_29_bool);
	if(var_29_bool != 0) {
		var_21_int = -2;
		return 8;
	}
	@DoDialog(var_28_object);
	object var_93_object; object var_94_object;
	var_22_object = var_93_object;
	var_28_object = var_94_object;
	TaskCall(1);
	func_74(var_95_object, var_96_object, var_97_string, var_98_bool, var_93_object, var_94_object);
	TaskReturn();
	bool var_31_bool;
	var_28_object->IsDialogEnd(var_31_bool);
	
	for(;;) {
		var_161_bool = !var_31_bool; //@nz
		if(var_161_bool == 0) goto Label_63;
		@sync();
		var_28_object->IsDialogEnd(var_31_bool);
	}
	
Label_63:
	object var_162_object;
	var_22_object = var_162_object;
	func_996();
	@StopDialog(var_28_object);
	var_28_object->GetReturnValue(-1);
	int var_30_int = var_21_int;
}
EMIT "Stack[-4] = 0";


void func_1030(string var_112_string, bool var_113_bool)
{
	bool var_119_bool; float var_120_float; float var_121_float;
	@lshHasAnimation(var_119_bool, var_112_string);
	if(var_119_bool != 0) {
		@lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		@lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_112_string);
	}
	
}


void func_776(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


void func_908(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_796(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_781(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


void func_1292(object var_54_object)
{
	object var_57_object; object var_58_object;
	@GetMainOutdoorScene(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find main outdoor scene");
		var_58_object = null;
		var_58_object = var_54_object;
	}
	var_57_object->GetMap(var_58_object);
	var_58_object = var_54_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_788(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


void func_1045(object var_30_object)
{
	float var_33_float;
	var_30_object->GetEyesHeight(var_33_float);
	cvector var_34_cvector = [0.0, 0.0, 0.0];
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	@LookAsync(var_30_object, "head", var_34_cvector);
}


void func_922(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_796(object var_30_object)
{
	string var_44_string;
	if(var_30_object == null)
		return 14;
	bool var_38_bool;
	@IsDead(var_38_bool);
	if(var_38_bool != 0)
		return 14;
	int var_39_int;
	@GetSecondaryAnimationType(var_39_int);
	if(var_39_int < 0)
		return 14;
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetDirection(var_42_cvector);
	cvector var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_44_string = "fhit";
	else
		var_44_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_44_string + "1"), (var_44_string + "2"), -10);
	
}


void func_1309(object var_87_object, string var_88_string, float var_89_float)
{
	object var_97_object;
	@GetMainOutdoorScene(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_95_cvector;
	cvector var_96_cvector;
	bool var_98_bool;
	var_97_object->GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector);
	if(!var_98_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_88_string) + " doesnt exist");
	var_97_object->GetMap(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_108_float = GetByIndex(var_95_cvector, 0);
	var_109_float = GetByIndex(var_95_cvector, 2);
	var_87_object->SetMapParams(var_108_float, var_109_float, var_89_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_1180(object var_86_object)
{
	object var_90_object;
	func_1292(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	func_1309(var_87_object, "pt_gmap_factory", (float)2);
	object var_110_object;
	func_1292(var_110_object);
	var_86_object->ShowMap(var_110_object);
}


// @pe
void func_157(object var_2_object, string var_108_string)
{
	bool var_109_bool;
	func_1141(var_109_bool);
	if(!var_109_bool) //@nz
		return 0;
	if(var_108_string == var_2_object)
		return 0;
	string var_112_string; bool var_113_bool;
	var_108_string = var_112_string;
	if(var_108_string == "")
		var_113_bool = false;
	else
		var_113_bool = true;
	func_1030(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	
}


void func_1056(void)
{
	bool var_16_bool;
	func_1141(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


void func_927(bool var_32_bool, object var_33_object, float var_34_float)
{
	cvector var_45_cvector; bool var_52_bool;
	var_33_object->GetPosition(var_45_cvector);
	float var_44_float;
	var_33_object->GetEyesHeight(var_44_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (var_53_float + var_44_float);
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	@GetEyesHeight(var_44_float);
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (var_54_float + var_44_float);
	cvector var_47_cvector = var_45_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_47_cvector, 1);
	SetByIndex(var_47_cvector, 1) = (float)0;
	var_57_float = sqrt(var_47_cvector | var_47_cvector);
	var_47_cvector /= var_57_float;
	cvector var_48_cvector = -var_47_cvector;
	cvector var_59_cvector;
	func_1069(var_59_cvector, (var_48_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_49_cvector = ((var_47_cvector * var_34_float) + (var_59_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0)
		var_32_bool = false;
	@StopWorld();
	@CameraTransit((var_46_cvector + var_49_cvector), var_48_cvector, true);
	var_73_float = GetByIndex(var_49_cvector, 0);
	var_74_float = GetByIndex(var_49_cvector, 2);
	@Rotate(var_73_float, var_74_float);
	bool var_75_bool;
	func_1141(var_75_bool);
	if(var_75_bool != 0) {
	} else {
		@HasAnimationTrack(var_52_bool, "head");
		if(var_52_bool == 0) goto Label_990;
		@LookAsyncCamera("head");
	}
Label_990:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_32_bool = true;
	
}


void func_1063(object var_172_object)
{
	object var_174_object;
	@self(var_174_object);
	var_174_object = var_172_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_424(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_14_float, float var_15_float)
{
	bool var_16_bool;
	func_922(var_16_bool);
	if(!var_16_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_14_float;
	var_1_object = var_15_float;
	@SetTimer(10, 1.0);
	func_503();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1196(object var_83_object)
{
	var_83_object->SetReturnValue(0);
}


void func_1069(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


// @pe
void func_1201(bool var_100_bool)
{
	int var_102_int;
	func_1087(var_102_int, "k10q01");
	if(var_102_int == 3)
		var_100_bool = true;
	var_100_bool = false;
}


// @pe
void func_1079(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


// @pe
void func_1213(bool var_149_bool)
{
	int var_151_int;
	func_1087(var_151_int, "k10q01");
	if(var_151_int == 5)
		var_149_bool = true;
	var_149_bool = false;
}


void func_1342(int var_84_int)
{
	int var_86_int;
	@GetVariable("branch", var_86_int);
	if(var_86_int == 0) {
		var_84_int = 1;
		return 2;
	EMIT "GOTO 0x54d";
	}
	if(var_86_int == 1) {
		var_84_int = 2;
		return 2;
	}
	var_84_int = 3;
}


void func_1087(int var_102_int, string var_103_string)
{
	int var_105_int;
	@GetVariable(var_103_string, var_105_int);
	var_105_int = var_102_int;
}


void func_451(object var_0_object, object var_1_object, bool var_4_bool, bool var_16_bool)
{
	if(var_4_bool == null)
		var_16_bool = false;
	float var_20_float;
	func_788(var_20_float, var_4_bool);
	float var_18_float = sqrt(var_20_float);
	if(var_2_object != 0)
		var_18_float -= var_1_object;
	var_16_bool = var_18_float < var_0_object;
}


void func_1092(bool var_76_bool, string var_77_string, string var_78_string)
{
	object var_80_object;
	@FindActor(var_80_object, var_77_string);
	if(var_80_object == null)
		var_76_bool = false;
	@Trigger(var_80_object, var_78_string);
	var_76_bool = true;
}
EMIT "Stack[-1] = 0";


void func_582(bool var_64_bool)
{
	var_64_bool = true;
}


void func_584(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1225(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 451, 1, 527009);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_1264(var_28_bool, var_29_object, 447);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_93_object, object var_94_object)
{
	var_0_object = var_94_object;
	var_1_object = var_93_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_100_bool;
		func_1201(var_1_object);
		if(var_100_bool != 0) {
			func_157(var_94_object, "Neutral");
			var_0_object->SetMessage(526972); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528069, 29412, 29411); //@t
		} else {
					func_157(var_94_object, "Neutral");
					var_0_object->SetMessage(526976); //@t
					var_0_object->ClearReplies(); //@t
					bool var_149_bool;
					func_1213(var_1_object);
					if(var_149_bool != 0)
						var_0_object->AddReply(526981, 28274, 28273); //@t
					var_0_object->AddReply(526977, -1, 28269); //@t
		}
	}
	for(;;) {
		bool var_129_bool;
		func_1141(var_129_bool);
		if(var_129_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1014(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_840(object var_17_object, int var_18_int, float var_19_float)
{
	cvector var_29_cvector; object var_30_object; int var_31_int; bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	bool var_38_bool = false;
	bool var_39_bool = false;
	if(var_17_object != 0) {
		if(var_18_int != 4)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		if(var_18_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		cvector var_45_cvector; cvector var_46_cvector;
		cvector var_47_cvector; object var_48_object;
		var_17_object = var_48_object;
		func_781(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1069(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_902:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_796(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_902;
	int var_36_int;
	@irand(var_36_int, var_35_int);
	cvector var_37_cvector;
	var_30_object->get(var_37_cvector, var_36_int);
	object var_62_object; int var_63_int; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	var_17_object = var_62_object;
	var_18_int = var_63_int;
	var_19_float = var_64_float;
	var_37_cvector = var_65_cvector;
	var_66_cvector = -var_29_cvector;
	func_908(var_64_float, var_65_cvector, var_66_cvector);
}


void func_589(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1069(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1069(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_1104(float var_65_float)
{
	float var_67_float;
	@GetGameTime(var_67_float);
	var_67_float = var_65_float;
}


void func_1109(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1238(void)
{
	object var_69_object;
	@CreateDiaryEntry(var_69_object, 453, 1, 527011);
	bool var_73_bool; object var_74_object;
	var_69_object = var_74_object;
	func_1264(var_73_bool, var_74_object, 447);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1143(void)
{
	@SetVariable("k10q01", 4);
	func_1225();
}


void func_1116(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1109(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1251(object var_37_object)
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


void func_996(void)
{
	bool var_164_bool;
	@CameraSwitchToNormal(true);
	bool var_166_bool;
	func_1141(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_1013;
		@UnlookAsync("head");
	}
Label_1013:
	
}


void func_744(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_489(object var_2_object, string var_3_string)
{
	func_584();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_619(object var_0_object, object var_1_object, object var_2_object, object var_175_object)
{
	float var_185_float; cvector var_187_cvector; float var_188_float;
	cvector var_189_cvector;
	func_589(var_188_float, var_189_cvector, 1.7453294);
	cvector var_184_cvector;
	var_189_cvector = var_184_cvector;
	if((var_184_cvector | var_184_cvector) < 2500.0) {
		cvector var_216_cvector;
		func_589(var_188_float, var_216_cvector, 2.6179938);
		var_216_cvector = var_184_cvector;
		var_185_float = var_184_cvector | var_184_cvector;
		if(var_185_float < 2500.0) {
			var_221_float = sqrt(var_185_float);
			@Trace("Can't retreat, distance: " + var_221_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_224_float = GetByIndex(var_184_cvector, 0);
	var_225_float = GetByIndex(var_184_cvector, 2);
	@Rotate(var_224_float, var_225_float);
	cvector var_226_cvector;
	func_776(var_226_cvector);
	@SetTimer(120, 0.5);
	
Label_661:
	bool var_186_bool;
	@MovePoint((var_226_cvector + var_184_cvector), 1, var_186_bool);
	if(var_186_bool != 0) {
		if(var_175_object == null) {
			goto Label_691;
		EMIT "GOTO 0x2b1";

		Label_691:
			for(;;) {
				return 10;
		}
			cvector var_234_cvector;
			func_589(var_188_float, var_234_cvector, 2.6179938);
			var_234_cvector = var_187_cvector;
			if((var_187_cvector | var_187_cvector) >= 2500.0) {
				cvector var_238_cvector;
				func_776(var_238_cvector);
				var_1_object = var_238_cvector + var_187_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_661; //@nz

	}
}


void func_1133(int var_81_int)
{
	var_81_int = 515556;
}


void func_1135(int var_80_int)
{
	var_80_int = 503341;
}


void func_1264(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_1251(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1137(string var_82_string)
{
	var_82_string = "ui/NPC_Citizen3.png";
}


void func_1139(string var_83_string)
{
	var_83_string = "ui/NPC_Citizen3_b.png";
}


void func_1141(bool var_75_bool)
{
	var_75_bool = false;
}


void func_1014(string var_131_string)
{
	bool var_135_bool; float var_136_float; float var_137_float;
	@lshHasAnimation(var_135_bool, var_131_string);
	if(var_135_bool != 0) {
		@lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		@lshPlayAnimation(var_136_float, var_137_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_131_string);
	}
	
}


void func_503(void)
{
	int var_32_int; int var_33_int; bool var_34_bool; float var_35_float; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_922(var_37_bool);
	if(!var_37_bool) //@nz
		return 14;
	int var_39_int;
	func_1116(var_39_int);
	int var_30_int;
	var_39_int = var_30_int;
	int var_31_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_31_int < 5) {
			bool var_55_bool;
			func_922(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			@irand(var_32_int, 3);
			if(var_32_int == 0) {
				if(var_30_int == 0) goto Label_550;
				@irand(var_33_int, var_30_int);
				string var_61_string; int var_62_int;
				var_33_int = var_62_int;
				func_1109(var_61_string, var_62_int);
				@PlayAnimation("all", var_61_string);
				@WaitForAnimEnd(var_34_bool);
				if(!var_34_bool) { //@nz
				} else {
			} else {
			if(var_32_int == 1) {
				@rand(var_35_float, 4);
				@Sleep((var_35_float + 1), var_36_bool);
				if(!var_36_bool) { //@nz
					goto Label_579;
				}
			} else if(var_31_int != 0) {
				goto Label_579;
			}
			}
					bool var_64_bool;
					func_582(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_574;
			}
		}
	Label_579:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_574:
		@ResetAAS();
		var_31_int += 1;
	}
	
}


void func_760(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_781(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1079(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


