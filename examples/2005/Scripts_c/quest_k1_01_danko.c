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
			func_837();
			if(var_6_int == 26038) {
				bool var_12_bool = false;
				bool var_13_bool = false;
				bool var_14_bool;
				func_886(var_1_object);
				if(var_14_bool != 0) {
					bool var_22_bool;
					func_898(var_1_object);
					if(!var_22_bool) //@nz
						var_13_bool = true;
				}
				if(var_13_bool != 0) {
					bool var_29_bool;
					func_910(var_1_object);
					if(var_29_bool != 0)
						var_12_bool = true;
				}
				if(var_12_bool != 0) {
					object var_35_object; object var_36_object;
					var_35_object = var_1_object;
					var_36_object = var_0_object;
					func_874();
					func_222(var_7_bool, "Neutral");
					var_0_object->SetMessage(524699); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524700, 28105, 26039); //@t
					var_0_object->AddReply(526838, 28123, 28122); //@t
					return 0;
				}
				bool var_58_bool = false;
				bool var_59_bool;
				func_898(var_1_object);
				if(var_59_bool != 0) {
					bool var_61_bool;
					func_922(var_1_object);
					if(var_61_bool != 0)
						var_58_bool = true;
				}
				if(var_58_bool != 0) {
					object var_67_object; object var_68_object;
					var_67_object = var_1_object;
					var_68_object = var_0_object;
					func_880();
					func_222(var_7_bool, "Neutral");
					var_0_object->SetMessage(524714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524715, 28112, 26054); //@t
					return 0;
				}
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526835, -1, 28118); //@t
				var_0_object->AddReply(526836, -1, 28119); //@t
				return 0;
			}
			if(var_6_int == 28112) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526831, 26055, 28113); //@t
				var_0_object->AddReply(526832, 26055, 28114); //@t
				return 0;
			}
			if(var_6_int == 26055) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(524716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524717, -1, 26056); //@t
				var_0_object->AddReply(526829, -1, 28111); //@t
				return 0;
			}
			if(var_6_int == 28123) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526840, 28125, 28124); //@t
				return 0;
			}
			if(var_6_int == 28125) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526842, 28127, 28126); //@t
				return 0;
			}
			if(var_6_int == 28127) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526844, 28105, 28128); //@t
				return 0;
			}
			if(var_6_int == 28105) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526824, 28107, 28106); //@t
				return 0;
			}
			if(var_6_int == 28107) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526826, 28109, 28108); //@t
				return 0;
			}
			if(var_6_int == 28109) {
				func_222(var_7_bool, "Neutral");
				var_0_object->SetMessage(526827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526828, -1, 28110); //@t
				var_0_object->AddReply(526833, -1, 28115); //@t
				return 0;
			}
			var_3_string = true;
			bool var_149_bool;
			func_959(var_149_bool);
			if(var_149_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

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
				func_584(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_844(var_14_object);
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
			func_584(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_844(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_844(var_20_object);
	var_20_object = var_19_object;
	func_671(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_586(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_953(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_951(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_955(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_957(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_934(var_164_int);
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
		var_265_bool = !var_17_bool; //@nz
		if(var_265_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_266_object;
	var_8_object = var_266_object;
	func_654();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_898(bool var_190_bool)
{
	int var_192_int;
	func_860(var_192_int, "k1q01Healed");
	if(var_192_int != 0) {
		var_190_bool = true;
		return 0;
	}
	var_190_bool = false;
}


void func_837(void)
{
	bool var_9_bool;
	func_959(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_584(bool var_8_bool)
{
	var_8_bool = true;
}


void func_586(bool var_113_bool, object var_114_object, float var_115_float)
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
	func_850(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
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
	func_959(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_648;
		@LookAsyncCamera("head");
	}
Label_648:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_844(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_910(bool var_197_bool)
{
	int var_199_int;
	func_860(var_199_int, "ook1Danko1");
	if(var_199_int == 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


void func_654(void)
{
	bool var_268_bool;
	@CameraSwitchToNormal();
	bool var_269_bool;
	func_959(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_268_bool, "head");
		if(var_268_bool == 0) goto Label_670;
		@UnlookAsync("head");
	}
Label_670:
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool = false;
		bool var_181_bool = false;
		bool var_182_bool;
		func_886(var_1_object);
		if(var_182_bool != 0) {
			bool var_190_bool;
			func_898(var_1_object);
			if(!var_190_bool) //@nz
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			bool var_197_bool;
			func_910(var_1_object);
			if(var_197_bool != 0)
				var_180_bool = true;
		}
		if(var_180_bool != 0) {
			object var_203_object; object var_204_object;
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_874();
			func_222(var_174_object, "Neutral");
			var_0_object->SetMessage(524699); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524700, 28105, 26039); //@t
			var_0_object->AddReply(526838, 28123, 28122); //@t
		} else {
					bool var_239_bool = false;
					bool var_240_bool;
					func_898(var_1_object);
					if(var_240_bool != 0) {
						bool var_242_bool;
						func_922(var_1_object);
						if(var_242_bool != 0)
							var_239_bool = true;
					}
					if(var_239_bool == 0) goto Label_170;
					object var_248_object; object var_249_object;
					var_248_object = var_1_object;
					var_249_object = var_0_object;
					func_880();
					func_222(var_174_object, "Neutral");
					var_0_object->SetMessage(524714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524715, 28112, 26054); //@t
		}
	}
Label_192:
	for(;;) {
		bool var_226_bool;
		func_959(var_226_bool);
		if(var_226_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_809(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_221;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_221:
			return 0;

		}

	}
	
Label_170:
	func_222(var_174_object, "Neutral");
	var_0_object->SetMessage(526834); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(526835, -1, 28118); //@t
	var_0_object->AddReply(526836, -1, 28119); //@t
	goto Label_192;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_850(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_729(bool var_29_bool, object var_30_object)
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
		func_822(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


// @pe
void func_922(bool var_242_bool)
{
	int var_244_int;
	func_860(var_244_int, "ook1Danko2");
	if(var_244_int == 0) {
		var_242_bool = true;
		return 0;
	}
	var_242_bool = false;
}


void func_860(int var_184_int, string var_185_string)
{
	int var_187_int;
	@GetVariable(var_185_string, var_187_int);
	var_187_int = var_184_int;
}


// @pe
void func_222(object var_2_object, string var_207_string)
{
	bool var_208_bool;
	func_959(var_208_bool);
	if(!var_208_bool) //@nz
		return 0;
	if(var_207_string == var_2_object)
		return 0;
	string var_211_string; bool var_212_bool;
	var_207_string = var_211_string;
	if(var_207_string == "")
		var_212_bool = false;
	else
		var_212_bool = true;
	func_816(var_211_string, var_212_bool);
	var_2_object = var_207_string;
	
}


void func_671(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_729(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_766(var_60_bool, var_61_object);
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
		func_766(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_729(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_727;
	
Label_727:
	var_18_bool = true;
	
}


void func_865(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_934(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x3b5";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


void func_809(string var_228_string)
{
	float var_231_float; float var_232_float;
	@lshGetAnimTimes(var_228_string, var_231_float, var_232_float);
	@lshPlayAnimation(var_231_float, var_232_float, false);
}


// @pe
void func_874(void)
{
	@SetVariable("ook1Danko1", 1);
}


void func_816(string var_211_string, bool var_212_bool)
{
	float var_217_float; float var_218_float;
	@lshGetAnimTimes(var_211_string, var_217_float, var_218_float);
	@lshPlayAnimation(var_217_float, var_218_float, var_212_bool);
}


// @pe
void func_880(void)
{
	@SetVariable("ook1Danko2", 1);
}


void func_822(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_959(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_951(int var_161_int)
{
	var_161_int = 515573;
}


// @pe
void func_886(bool var_182_bool)
{
	int var_184_int;
	func_860(var_184_int, "k1q01");
	if(var_184_int == 4)
		var_182_bool = true;
	var_182_bool = false;
}


void func_953(int var_160_int)
{
	var_160_int = 504032;
}


void func_955(string var_162_string)
{
	var_162_string = "ui/NPC_Bakalavr.png";
}


void func_957(string var_163_string)
{
	var_163_string = "ui/NPC_Bakalavr_b.png";
}


void func_766(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_865(var_73_int);
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
		func_822(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


void func_959(bool var_56_bool)
{
	var_56_bool = true;
}


