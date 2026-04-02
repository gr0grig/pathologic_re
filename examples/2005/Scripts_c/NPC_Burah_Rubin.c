// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1020();
			if(var_11_bool == 36971) {
				func_157(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_11_bool == 36973) {
				func_157(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_11_bool == 36975) {
				func_157(var_12_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_59_bool;
			func_1090(var_59_bool);
			if(var_59_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1020();
			if(var_11_int == 42563) {
				func_411(var_12_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_36_bool;
			func_1090(var_36_bool);
			if(var_36_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b2";
	
	}

}


maintask task_5
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		func_479(var_10_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, int var_11_int)
	{
		if(var_11_int == 10) {
			func_550();
			bool var_15_bool = false;
			bool var_16_bool;
			func_764(var_16_bool);
			if(var_16_bool != 0) {
				bool var_19_bool;
				func_519(var_19_bool);
				if(var_19_bool != 0)
					var_15_bool = true;
			}
			if(var_15_bool != 0) {
				bool var_36_bool;
				func_499(var_36_bool);
				if(var_36_bool != 0) {
					bool var_55_bool; object var_56_object;
					object var_57_object;
					func_1027(var_57_object);
					var_57_object = var_56_object;
					func_912(var_55_bool, var_56_object);
				}
			} else {
				func_514(var_11_int);
				func_541();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
	{
		func_732();
		func_550();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector)
		{
		@StopGroup0();
		func_550();
		func_992("Neutral");
		func_541();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_11_bool != 0)
			func_541();
		else
			func_992("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			disable OnUse;
			func_732();
			bool var_15_bool; object var_16_object;
			var_11_object = var_16_object;
			func_755(var_15_bool, var_16_object);
			enable OnUse;
			object var_29_object;
			var_11_object = var_29_object;
			func_1109(var_29_object);
			func_992("Neutral");
			func_550();
			func_541();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_15_bool;
	func_764(var_15_bool);
	if(!var_15_bool) goto Label_0; //@nz
}


void func_769(bool var_144_bool, object var_145_object, float var_146_float)
{
	cvector var_157_cvector; bool var_164_bool;
	var_145_object->GetPosition(var_157_cvector);
	float var_156_float;
	var_145_object->GetEyesHeight(var_156_float);
	var_165_float = GetByIndex(var_157_cvector, 1);
	SetByIndex(var_157_cvector, 1) = (var_165_float + var_156_float);
	cvector var_158_cvector;
	@GetPosition(var_158_cvector);
	@GetEyesHeight(var_156_float);
	var_166_float = GetByIndex(var_158_cvector, 1);
	SetByIndex(var_158_cvector, 1) = (var_166_float + var_156_float);
	cvector var_159_cvector = var_157_cvector - var_158_cvector;
	var_167_float = GetByIndex(var_159_cvector, 1);
	SetByIndex(var_159_cvector, 1) = (float)0;
	var_169_float = sqrt(var_159_cvector | var_159_cvector);
	var_159_cvector /= var_169_float;
	cvector var_160_cvector = -var_159_cvector;
	cvector var_171_cvector;
	func_1033(var_171_cvector, (var_160_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_161_cvector = ((var_159_cvector * var_146_float) + (var_171_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_163_bool;
	@IsOverrideActive(var_163_bool);
	if(var_163_bool != 0)
		var_144_bool = false;
	@StopWorld();
	@CameraTransit((var_158_cvector + var_161_cvector), var_160_cvector);
	var_184_float = GetByIndex(var_161_cvector, 0);
	var_185_float = GetByIndex(var_161_cvector, 2);
	@Rotate(var_184_float, var_185_float);
	bool var_186_bool;
	func_1090(var_186_bool);
	if(var_186_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_831;
		@LookAsyncCamera("head");
	}
Label_831:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_144_bool = true;
	
}


void func_514(object var_0_object)
{
	var_88_float = GetByIndex(var_0_object, 0);
	var_89_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_88_float, var_89_float);
}


void func_1027(object var_56_object)
{
	object var_58_object;
	@self(var_58_object);
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_764(bool var_11_bool)
{
	bool var_13_bool;
	@IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
}


void func_519(bool var_19_bool)
{
	object var_22_object;
	@FindActor(var_22_object, "player");
	if(!var_22_object) { //@nz
		var_19_bool = false;
		return 4;
	}
	float var_26_float; object var_27_object;
	func_737(var_26_float, var_27_object);
	if(var_26_float > 90000.0) {
		var_19_bool = false;
		return 4;
	}
	bool var_23_bool;
	@CanSee(var_23_bool, var_27_object);
	var_23_bool = var_19_bool;
}
EMIT "Stack[-2] = 0";


void func_1033(cvector var_171_cvector, cvector var_172_cvector)
{
	float var_175_float = sqrt(var_172_cvector | var_172_cvector);
	if(var_175_float < 0.000001)
		var_171_cvector = [0.0, 0.0, 0.0];
	var_171_cvector = var_172_cvector / var_175_float;
}


void func_13(object var_0_object, int var_43_int, object var_44_object)
{
	var_0_object = var_44_object;
	bool var_54_bool; object var_55_object;
	object var_56_object;
	func_1027(var_56_object);
	var_56_object = var_55_object;
	func_854(var_54_bool, var_55_object);
	bool var_144_bool; object var_145_object;
	var_44_object = var_145_object;
	func_769(var_144_bool, var_145_object, 70.0);
	if(!var_144_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_191_int;
	func_1084(var_191_int);
	var_50_object->SetNPCName(var_191_int);
	int var_192_int;
	func_1082(var_192_int);
	var_50_object->SetNPCDescription(var_192_int);
	string var_193_string;
	func_1086(var_193_string);
	var_50_object->SetPhoto(var_193_string);
	string var_194_string;
	func_1088(var_194_string);
	var_50_object->SetPhoto2(var_194_string);
	int var_195_int;
	func_1092(var_195_int);
	var_50_object->SetPlayerName(var_195_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	object var_204_object; object var_205_object;
	var_44_object = var_204_object;
	var_50_object = var_205_object;
	TaskCall(2);
	func_94(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_246_bool = !var_53_bool; //@nz
		if(var_246_bool == 0) goto Label_83;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_83:
	object var_247_object;
	var_44_object = var_247_object;
	func_837();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


void func_912(bool var_65_bool, object var_66_object)
{
	string var_72_string; bool var_74_bool; int var_75_int; string var_76_string;
	var_72_string = "c";
	int var_73_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_66_object->HasProperty((var_72_string + (var_73_int + 1)), var_74_bool);
			if(!var_74_bool) { //@nz
			} else {
				var_73_int += 1;
			}
		}
		if(!var_73_int) { //@nz
			var_65_bool = false;
			return 10;
		}
		var_75_int = 0;
		if(var_73_int > 1)
			@irand(var_75_int, var_73_int);
		var_66_object->GetProperty((var_72_string + (var_75_int + 1)), var_76_string);
		bool var_88_bool; string var_89_string;
		var_76_string = var_89_string;
		func_1005(var_88_bool, var_89_string);
		var_88_bool = var_65_bool;
		return 10;

	}
}


void func_272(object var_0_object, int var_256_int, object var_257_object)
{
	var_0_object = var_257_object;
	bool var_267_bool; object var_268_object;
	object var_269_object;
	func_1027(var_269_object);
	var_269_object = var_268_object;
	func_854(var_267_bool, var_268_object);
	bool var_270_bool; object var_271_object;
	var_257_object = var_271_object;
	func_769(var_270_bool, var_271_object, 70.0);
	if(!var_270_bool) { //@nz
		var_256_int = -2;
		return 8;
	}
	object var_263_object;
	@CreateDialog(var_263_object);
	int var_274_int;
	func_1084(var_274_int);
	var_263_object->SetNPCName(var_274_int);
	int var_275_int;
	func_1082(var_275_int);
	var_263_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_1086(var_276_string);
	var_263_object->SetPhoto(var_276_string);
	string var_277_string;
	func_1088(var_277_string);
	var_263_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_1092(var_278_int);
	var_263_object->SetPlayerName(var_278_int);
	bool var_264_bool;
	@IsOverrideActive(var_264_bool);
	if(var_264_bool != 0) {
		var_256_int = -2;
		return 8;
	}
	@DoDialog(var_263_object);
	object var_280_object; object var_281_object;
	var_257_object = var_280_object;
	var_263_object = var_281_object;
	TaskCall(4);
	func_353(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_266_bool;
	var_263_object->IsDialogEnd(var_266_bool);
	
	for(;;) {
		var_310_bool = !var_266_bool; //@nz
		if(var_310_bool == 0) goto Label_342;
		@sync();
		var_263_object->IsDialogEnd(var_266_bool);
	}
	
Label_342:
	object var_311_object;
	var_257_object = var_311_object;
	func_837();
	@StopDialog(var_263_object);
	var_263_object->GetReturnValue(-1);
	int var_265_int = var_256_int;
}
EMIT "Stack[-4] = 0";


void func_1043(int var_36_int)
{
	float var_38_float;
	@GetGameTime(var_38_float);
	var_36_int = 1 + (var_38_float / 24);
}


void func_661(void)
{
	bool var_37_bool; int var_38_int; int var_39_int; bool var_40_bool;
	@WaitForAnimEnd();
	bool var_41_bool;
	func_764(var_41_bool);
	if(!var_41_bool) //@nz
		return 12;
	int var_43_int;
	func_1065(var_43_int);
	int var_35_int;
	var_43_int = var_35_int;
	int var_36_int = 0;
	
	for(;;) {
		bool var_56_bool = false;
		if(var_36_int < 5) {
			bool var_59_bool;
			func_764(var_59_bool);
			if(var_59_bool != 0)
				var_56_bool = true;
		}
		if(var_56_bool != 0) {
			if(!var_35_int) { //@nz
				@Sleep(3, var_37_bool);
				if(!var_37_bool) { //@nz
				} else {
			} else {
			@irand(var_38_int, var_35_int);
			@irand(var_39_int, 5);
			if(var_39_int != 0)
				var_38_int = 0;
			string var_70_string; int var_71_int;
			var_38_int = var_71_int;
			func_1058(var_70_string, var_71_int);
			@PlayAnimation("all", var_70_string);
			@WaitForAnimEnd(var_40_bool);
			var_72_bool = !var_40_bool; //@nz
			if(var_72_bool == 0) goto Label_716;
			goto Label_727;
			}
				Label_716:
					bool var_63_bool;
					func_730(var_63_bool);
					var_64_bool = !var_63_bool; //@nz
					if(var_64_bool == 0) goto Label_722;
			}
		}
	Label_727:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_722:
		@ResetAAS();
		var_36_int += 1;
	}
	
}


// @pe
void func_411(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_1090(var_288_bool);
	if(!var_288_bool) //@nz
		return 0;
	if(var_287_string == var_2_object)
		return 0;
	string var_291_string; bool var_292_bool;
	var_287_string = var_291_string;
	if(var_287_string == "")
		var_292_bool = false;
	else
		var_292_bool = true;
	func_999(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


// @pe
void func_1052(bool var_34_bool, int var_35_int)
{
	int var_36_int;
	func_1043(var_36_int);
	var_34_bool = var_36_int == var_35_int;
}


void func_541(void)
{
	float var_25_float;
	@rand(var_25_float, 8, 16);
	@SetTimer(10, var_25_float);
}


// @pe
void func_157(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1090(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_999(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1058(string var_49_string, int var_50_int)
{
	string var_52_string = "idle";
	if(var_50_int != 0)
		var_52_string += var_50_int;
	var_52_string = var_49_string;
}


void func_550(void)
{
	@KillTimer(10);
}


void func_1065(int var_43_int)
{
	int var_46_int; bool var_47_bool;
	var_46_int = 0;
	
	for(;;) {
		string var_49_string; int var_50_int;
		var_46_int = var_50_int;
		func_1058(var_49_string, var_50_int);
		@HasAnimation(var_47_bool, "all", var_49_string);
		if(!var_47_bool) //@nz
			break;
		var_46_int += 1;
	}
	var_46_int = var_43_int;
}


void func_949(bool var_96_bool, object var_97_object)
{
	bool var_105_bool; int var_106_int; string var_107_string;
	int var_109_int;
	func_1043(var_109_int);
	string var_103_string = ("d" + var_109_int) + "m";
	int var_104_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_97_object->HasProperty((var_103_string + (var_104_int + 1)), var_105_bool);
			if(!var_105_bool) { //@nz
			} else {
				var_104_int += 1;
			}
		}
		if(!var_104_int) { //@nz
			var_96_bool = false;
			return 10;
		}
		var_106_int = 0;
		if(var_104_int > 1)
			@irand(var_106_int, var_104_int);
		var_97_object->GetProperty((var_103_string + (var_106_int + 1)), var_107_string);
		bool var_123_bool; string var_124_string;
		var_107_string = var_124_string;
		func_1005(var_123_bool, var_124_string);
		var_123_bool = var_96_bool;
		return 10;

	}
}


void func_1082(int var_192_int)
{
	var_192_int = 515551;
}


void func_1084(int var_191_int)
{
	var_191_int = 502876;
}


void func_1086(string var_193_string)
{
	var_193_string = "ui/NPC_Rubin.png";
}


void func_1088(string var_194_string)
{
	var_194_string = "ui/NPC_Rubin_b.png";
}


void func_1090(bool var_92_bool)
{
	var_92_bool = true;
}


void func_1092(int var_195_int)
{
	int var_197_int;
	@GetVariable("branch", var_197_int);
	if(var_197_int == 0) {
		var_195_int = 1;
		return 2;
	EMIT "GOTO 0x453";
	}
	if(var_197_int == 1) {
		var_195_int = 2;
		return 2;
	}
	var_195_int = 3;
}


void func_837(void)
{
	bool var_249_bool;
	@CameraSwitchToNormal();
	bool var_250_bool;
	func_1090(var_250_bool);
	if(var_250_bool != 0) {
	} else {
		@HasAnimationTrack(var_249_bool, "head");
		if(var_249_bool == 0) goto Label_853;
		@UnlookAsync("head");
	}
Label_853:
	
}


void func_1109(object var_29_object)
{
	int var_31_int;
	@GetVariable("d12_rubin", var_31_int);
	bool var_33_bool = false;
	bool var_34_bool;
	func_1052(var_34_bool, 12);
	if(var_34_bool != 0) {
		if(!var_31_int) //@nz
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		int var_43_int; object var_44_object;
		var_29_object = var_44_object;
		TaskCall(1);
		func_13(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		@SetVariable("d12_rubin", 1);
	}
	int var_256_int; object var_257_object;
	var_29_object = var_257_object;
	TaskCall(3);
	func_272(var_258_object, var_256_int, var_257_object);
	TaskReturn();
}


void func_854(bool var_54_bool, object var_55_object)
{
	int var_61_int; int var_62_int;
	@GetVariable("voice_common", var_61_int);
	if(var_61_int != 0) {
		bool var_65_bool; object var_66_object;
		var_55_object = var_66_object;
		func_912(var_65_bool, var_66_object);
		if(!var_65_bool) { //@nz
			bool var_96_bool; object var_97_object;
			var_55_object = var_97_object;
			func_949(var_96_bool, var_97_object);
			if(!var_96_bool) { //@nz
				var_54_bool = false;
				return 4;
			}
		}
		@irand(var_62_int, 2);
		if(var_62_int != 0)
			@SetVariable("voice_common", ((var_61_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_136_bool; object var_137_object;
		var_55_object = var_137_object;
		func_949(var_136_bool, var_137_object);
		if(!var_136_bool) { //@nz
			bool var_139_bool; object var_140_object;
			var_55_object = var_140_object;
			func_912(var_139_bool, var_140_object);
			if(!var_139_bool) { //@nz
				var_54_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_910;
	
Label_910:
	var_54_bool = true;
	
}


void func_730(bool var_63_bool)
{
	var_63_bool = true;
}


void func_732(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_204_object, object var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_205_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_233_bool;
	func_1090(var_233_bool);
	if(var_233_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_992(var_2_object);
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


void func_479(object var_0_object)
{
	bool var_11_bool;
	func_764(var_11_bool);
	if(!var_11_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_607();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_661();
	}
}
EMIT "Return(); Pop(0)";


void func_992(string var_18_string)
{
	float var_21_float; float var_22_float;
	@lshGetAnimTimes(var_18_string, var_21_float, var_22_float);
	@lshPlayAnimation(var_21_float, var_22_float, false);
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_1_object = var_280_object;
	var_3_string = false;
	if(1 != 0) {
		func_411(var_281_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_381;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_381:
	bool var_302_bool;
	func_1090(var_302_bool);
	if(var_302_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_992(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_410;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_410:
		return 0;

	}
	
}


void func_737(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_999(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_745(bool var_19_bool, cvector var_20_cvector)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector = var_20_cvector - var_24_cvector;
	var_27_float = GetByIndex(var_25_cvector, 0);
	var_28_float = GetByIndex(var_25_cvector, 2);
	bool var_26_bool;
	@Rotate(var_27_float, var_28_float, var_26_bool);
	var_26_bool = var_19_bool;
}


void func_1005(bool var_88_bool, string var_89_string)
{
	bool var_91_bool;
	bool var_92_bool;
	func_1090(var_92_bool);
	if(var_92_bool != 0) {
		@lshHasSpeech(var_91_bool, var_89_string);
		if(var_91_bool != 0) {
			@lshPlaySpeech(var_89_string);
			var_88_bool = true;
		}
	}
	var_88_bool = false;
}


void func_755(bool var_15_bool, object var_16_object)
{
	cvector var_18_cvector;
	var_16_object->GetPosition(var_18_cvector);
	bool var_19_bool; cvector var_20_cvector;
	var_18_cvector = var_20_cvector;
	func_745(var_19_bool, var_20_cvector);
	var_19_bool = var_15_bool;
}


void func_499(bool var_36_bool)
{
	object var_38_object;
	@FindActor(var_38_object, "player");
	if(!var_38_object) //@nz
		var_36_bool = false;
	bool var_41_bool; object var_42_object;
	var_38_object = var_42_object;
	func_755(var_41_bool, var_42_object);
	var_41_bool = var_36_bool;
}
EMIT "Stack[-1] = 0";


void func_1020(void)
{
	bool var_14_bool;
	func_1090(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


