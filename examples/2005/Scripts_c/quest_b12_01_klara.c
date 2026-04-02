// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_778();
			if(var_7_bool == 24314) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_815();
			}
			if(var_7_bool == 24326) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_821();
			}
			if(var_6_int == 23350) {
				bool var_24_bool;
				func_827(var_1_object);
				if(!var_24_bool) { //@nz
					func_180(var_7_bool, "Neutral");
					var_0_object->SetMessage(522183); //@t
					var_0_object->ClearReplies(); //@t
					bool var_46_bool;
					func_839(var_1_object);
					if(var_46_bool != 0)
						var_0_object->AddReply(523114, 24315, 24314); //@t
					bool var_55_bool;
					func_851(var_1_object);
					if(var_55_bool != 0)
						var_0_object->AddReply(523126, 24327, 24326); //@t
					var_0_object->AddReply(523113, -1, 24313); //@t
					return 0;
				}
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522184, -1, 23351); //@t
				var_0_object->AddReply(523175, -1, 24377); //@t
				return 0;
			}
			if(var_6_int == 24327) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523128, 24329, 24328); //@t
				return 0;
			}
			if(var_6_int == 24329) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523130, -1, 24330); //@t
				var_0_object->AddReply(523131, 24332, 24331); //@t
				return 0;
			}
			if(var_6_int == 24332) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523132); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523133, -1, 24333); //@t
				var_0_object->AddReply(523134, -1, 24334); //@t
				return 0;
			}
			if(var_6_int == 24315) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523116, 24317, 24316); //@t
				return 0;
			}
			if(var_6_int == 24317) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523118, 24319, 24318); //@t
				var_0_object->AddReply(540129, 24321, 42100); //@t
				return 0;
			}
			if(var_6_int == 24319) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523120, 24321, 24320); //@t
				return 0;
			}
			if(var_6_int == 24321) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523122, 24323, 24322); //@t
				return 0;
			}
			if(var_6_int == 24323) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523123); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523124, -1, 24324); //@t
				var_0_object->AddReply(523125, -1, 24325); //@t
				return 0;
			}
			var_3_string = true;
			bool var_143_bool;
			func_888(var_143_bool);
			if(var_143_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcb";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_477();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_525(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_785(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_525(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_785(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_785(var_20_object);
	var_20_object = var_19_object;
	func_612(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_527(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_882(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_880(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_884(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_886(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_863(var_164_int);
	var_14_object->SetPlayerName(var_164_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_173_object; object var_174_object;
	var_8_object = var_173_object;
	var_14_object = var_174_object;
	TaskCall(1);
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_244_bool = !var_17_bool; //@nz
		if(var_244_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_245_object;
	var_8_object = var_245_object;
	func_595();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_707(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_806(var_73_int);
	string var_67_string = ("d" + var_73_int) + "m";
	int var_68_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_61_object->HasProperty((var_67_string + (var_68_int + 1)), var_69_bool);
			if(!var_69_bool) { //@nz
			} else {
				var_68_int += 1;
			}
		}
		if(!var_68_int) { //@nz
			var_60_bool = false;
			return 10;
		}
		var_70_int = 0;
		if(var_68_int > 1)
			@irand(var_70_int, var_68_int);
		var_61_object->GetProperty((var_67_string + (var_70_int + 1)), var_71_string);
		bool var_92_bool; string var_93_string;
		var_71_string = var_93_string;
		func_763(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


// @pe
void func_839(bool var_202_bool)
{
	int var_204_int;
	func_801(var_204_int, "oob12KlaraSobor1");
	if(var_204_int == 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


void func_778(void)
{
	bool var_9_bool;
	func_888(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_525(bool var_8_bool)
{
	var_8_bool = true;
}


void func_527(bool var_113_bool, object var_114_object, float var_115_float)
{
	cvector var_126_cvector; bool var_133_bool;
	var_114_object->GetPosition(var_126_cvector);
	float var_125_float;
	var_114_object->GetEyesHeight(var_125_float);
	var_134_float = GetByIndex(var_126_cvector, 1);
	SetByIndex(var_126_cvector, 1) = (var_134_float + var_125_float);
	cvector var_127_cvector;
	@GetPosition(var_127_cvector);
	@GetEyesHeight(var_125_float);
	var_135_float = GetByIndex(var_127_cvector, 1);
	SetByIndex(var_127_cvector, 1) = (var_135_float + var_125_float);
	cvector var_128_cvector = var_126_cvector - var_127_cvector;
	var_136_float = GetByIndex(var_128_cvector, 1);
	SetByIndex(var_128_cvector, 1) = (float)0;
	var_138_float = sqrt(var_128_cvector | var_128_cvector);
	var_128_cvector /= var_138_float;
	cvector var_129_cvector = -var_128_cvector;
	cvector var_140_cvector;
	func_791(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_130_cvector = ((var_128_cvector * var_115_float) + (var_140_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_132_bool;
	@IsOverrideActive(var_132_bool);
	if(var_132_bool != 0)
		var_113_bool = false;
	@StopWorld();
	@CameraTransit((var_127_cvector + var_130_cvector), var_129_cvector);
	var_153_float = GetByIndex(var_130_cvector, 0);
	var_154_float = GetByIndex(var_130_cvector, 2);
	@Rotate(var_153_float, var_154_float);
	bool var_155_bool;
	func_888(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_589;
		@LookAsyncCamera("head");
	}
Label_589:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_785(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_827(var_1_object);
		if(!var_180_bool) { //@nz
			func_180(var_174_object, "Neutral");
			var_0_object->SetMessage(522183); //@t
			var_0_object->ClearReplies(); //@t
			bool var_202_bool;
			func_839(var_1_object);
			if(var_202_bool != 0)
				var_0_object->AddReply(523114, 24315, 24314); //@t
			bool var_211_bool;
			func_851(var_1_object);
			if(var_211_bool != 0)
				var_0_object->AddReply(523126, 24327, 24326); //@t
			var_0_object->AddReply(523113, -1, 24313); //@t
		} else {
					func_180(var_174_object, "Neutral");
					var_0_object->SetMessage(523167); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522184, -1, 23351); //@t
					var_0_object->AddReply(523175, -1, 24377); //@t
		}
	}
	for(;;) {
		bool var_223_bool;
		func_888(var_223_bool);
		if(var_223_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_750(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_179;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_179:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_595(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_888(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_611;
		@UnlookAsync("head");
	}
Label_611:
	
}


// @pe
void func_851(bool var_211_bool)
{
	int var_213_int;
	func_801(var_213_int, "oob12KlaraSobor2");
	if(var_213_int == 0) {
		var_211_bool = true;
		return 0;
	}
	var_211_bool = false;
}


void func_791(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_477(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_670(bool var_29_bool, object var_30_object)
{
	string var_36_string; bool var_38_bool; int var_39_int; string var_40_string;
	var_36_string = "c";
	int var_37_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_30_object->HasProperty((var_36_string + (var_37_int + 1)), var_38_bool);
			if(!var_38_bool) { //@nz
			} else {
				var_37_int += 1;
			}
		}
		if(!var_37_int) { //@nz
			var_29_bool = false;
			return 10;
		}
		var_39_int = 0;
		if(var_37_int > 1)
			@irand(var_39_int, var_37_int);
		var_30_object->GetProperty((var_36_string + (var_39_int + 1)), var_40_string);
		bool var_52_bool; string var_53_string;
		var_40_string = var_53_string;
		func_763(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_863(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x36e";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


void func_801(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


void func_612(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_670(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_707(var_60_bool, var_61_object);
			if(!var_60_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@irand(var_26_int, 2);
		if(var_26_int != 0)
			@SetVariable("voice_common", ((var_25_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_105_bool; object var_106_object;
		var_19_object = var_106_object;
		func_707(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_670(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_668;
	
Label_668:
	var_18_bool = true;
	
}


void func_806(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_750(string var_225_string)
{
	float var_228_float; float var_229_float;
	@lshGetAnimTimes(var_225_string, var_228_float, var_229_float);
	@lshPlayAnimation(var_228_float, var_229_float, false);
}


// @pe
void func_815(void)
{
	@SetVariable("oob12KlaraSobor1", 1);
}


void func_880(int var_161_int)
{
	var_161_int = 515540;
}


void func_882(int var_160_int)
{
	var_160_int = 502865;
}


// @pe
void func_180(object var_2_object, string var_189_string)
{
	bool var_190_bool;
	func_888(var_190_bool);
	if(!var_190_bool) //@nz
		return 0;
	if(var_189_string == var_2_object)
		return 0;
	string var_193_string; bool var_194_bool;
	var_189_string = var_193_string;
	if(var_189_string == "")
		var_194_bool = false;
	else
		var_194_bool = true;
	func_757(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	
}


// @pe
void func_821(void)
{
	@SetVariable("oob12KlaraSobor2", 1);
}


void func_884(string var_162_string)
{
	var_162_string = "ui/NPC_Klara.png";
}


void func_757(string var_193_string, bool var_194_bool)
{
	float var_199_float; float var_200_float;
	@lshGetAnimTimes(var_193_string, var_199_float, var_200_float);
	@lshPlayAnimation(var_199_float, var_200_float, var_194_bool);
}


void func_886(string var_163_string)
{
	var_163_string = "ui/NPC_Klara_b.png";
}


void func_888(bool var_56_bool)
{
	var_56_bool = true;
}


// @pe
void func_827(bool var_180_bool)
{
	int var_182_int;
	func_801(var_182_int, "game_final");
	if(var_182_int != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_763(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_888(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


