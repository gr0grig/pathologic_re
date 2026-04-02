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
			func_895();
			if(var_7_bool == 42288) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_932();
			}
			if(var_7_bool == 42302) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_938();
			}
			if(var_7_bool == 42305) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_944();
			}
			if(var_6_int == 42287) {
				bool var_30_bool;
				func_950(var_1_object);
				if(!var_30_bool) { //@nz
					func_190(var_7_bool, "Neutral");
					var_0_object->SetMessage(540306); //@t
					var_0_object->ClearReplies(); //@t
					bool var_57_bool;
					func_962(var_1_object);
					if(var_57_bool != 0)
						var_0_object->AddReply(540307, 42289, 42288); //@t
					bool var_66_bool;
					func_974(var_1_object);
					if(var_66_bool != 0)
						var_0_object->AddReply(540320, 42303, 42302); //@t
					bool var_75_bool;
					func_986(var_1_object);
					if(var_75_bool != 0)
						var_0_object->AddReply(540323, 42306, 42305); //@t
					var_0_object->AddReply(540333, -1, 42315); //@t
					return 0;
				}
				func_190(var_7_bool, "Neutral");
				var_0_object->SetMessage(541636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541637, -1, 43809); //@t
				var_0_object->AddReply(541638, -1, 43810); //@t
				return 0;
			}
			if(var_6_int == 42306) {
				func_190(var_7_bool, "Neutral");
				var_0_object->SetMessage(540324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540325, 42308, 42307); //@t
				var_0_object->AddReply(540384, -1, 42370); //@t
				return 0;
			}
			if(var_6_int == 42308) {
				func_190(var_7_bool, "Neutral");
				var_0_object->SetMessage(540326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540327, 42310, 42309); //@t
				return 0;
			}
			if(var_6_int == 42310) {
				func_190(var_7_bool, "Sorrow");
				var_0_object->SetMessage(540328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540329, -1, 42311); //@t
				var_0_object->AddReply(540385, -1, 42371); //@t
				return 0;
			}
			if(var_6_int == 42303) {
				func_190(var_7_bool, "Agression");
				var_0_object->SetMessage(540321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540322, -1, 42304); //@t
				var_0_object->AddReply(540372, -1, 42355); //@t
				return 0;
			}
			if(var_6_int == 42289) {
				func_190(var_7_bool, "Doubt");
				var_0_object->SetMessage(540308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540309, 42356, 42290); //@t
				var_0_object->AddReply(540319, 42351, 42300); //@t
				return 0;
			}
			if(var_6_int == 42351) {
				func_190(var_7_bool, "Doubt");
				var_0_object->SetMessage(540368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540369, 42354, 42352); //@t
				var_0_object->AddReply(540370, 42356, 42353); //@t
				return 0;
			}
			if(var_6_int == 42354) {
				func_190(var_7_bool, "Doubt");
				var_0_object->SetMessage(540371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540375, 42360, 42359); //@t
				return 0;
			}
			if(var_6_int == 42356) {
				func_190(var_7_bool, "Doubt");
				var_0_object->SetMessage(540373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540374, 42360, 42358); //@t
				return 0;
			}
			if(var_6_int == 42360) {
				func_190(var_7_bool, "Agression");
				var_0_object->SetMessage(540376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540377, 42363, 42362); //@t
				var_0_object->AddReply(540379, 42365, 42364); //@t
				return 0;
			}
			if(var_6_int == 42365) {
				func_190(var_7_bool, "Sorrow");
				var_0_object->SetMessage(540380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540381, 42363, 42366); //@t
				return 0;
			}
			if(var_6_int == 42363) {
				func_190(var_7_bool, "Agression");
				var_0_object->SetMessage(540378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540382, -1, 42368); //@t
				var_0_object->AddReply(540383, -1, 42369); //@t
				return 0;
			}
			var_3_string = true;
			bool var_193_bool;
			func_1023(var_193_bool);
			if(var_193_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd5";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_574();
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
				func_622(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_902(var_14_object);
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
			func_622(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_902(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_624(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1017(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1015(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1019(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1021(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_998(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_902(var_81_object);
	var_81_object = var_80_object;
	func_711(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_264_bool = !var_17_bool; //@nz
		if(var_264_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_265_object;
	var_8_object = var_265_object;
	func_693();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_769(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_880(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


// @pe
void func_962(bool var_208_bool)
{
	int var_210_int;
	func_918(var_210_int, "ood12BurahSobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_902(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_711(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_769(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_806(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_806(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_769(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_767;
	
Label_767:
	var_79_bool = true;
	
}


void func_908(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_974(bool var_217_bool)
{
	int var_219_int;
	func_918(var_219_int, "ood12BurahSobor2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_950(var_1_object);
		if(!var_181_bool) { //@nz
			func_190(var_175_object, "Neutral");
			var_0_object->SetMessage(540306); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_962(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(540307, 42289, 42288); //@t
			bool var_217_bool;
			func_974(var_1_object);
			if(var_217_bool != 0)
				var_0_object->AddReply(540320, 42303, 42302); //@t
			bool var_226_bool;
			func_986(var_1_object);
			if(var_226_bool != 0)
				var_0_object->AddReply(540323, 42306, 42305); //@t
			var_0_object->AddReply(540333, -1, 42315); //@t
		} else {
					func_190(var_175_object, "Neutral");
					var_0_object->SetMessage(541636); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541637, -1, 43809); //@t
					var_0_object->AddReply(541638, -1, 43810); //@t
		}
	}
	for(;;) {
		bool var_238_bool;
		func_1023(var_238_bool);
		if(var_238_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_849(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_189;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_189:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_849(string var_240_string)
{
	bool var_244_bool; float var_245_float; float var_246_float;
	@lshHasAnimation(var_244_bool, var_240_string);
	if(var_244_bool != 0) {
		@lshGetAnimTimes(var_240_string, var_245_float, var_246_float);
		@lshPlayAnimation(var_245_float, var_246_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_240_string);
	}
	
}


void func_918(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


// @pe
void func_986(bool var_226_bool)
{
	int var_228_int;
	func_918(var_228_int, "ood12BurahSobor3");
	if(var_228_int == 0) {
		var_226_bool = true;
		return 0;
	}
	var_226_bool = false;
}


void func_923(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_1023(bool var_61_bool)
{
	var_61_bool = true;
}


void func_865(string var_194_string, bool var_195_bool)
{
	bool var_201_bool; float var_202_float; float var_203_float;
	@lshHasAnimation(var_201_bool, var_194_string);
	if(var_201_bool != 0) {
		@lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		@lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_194_string);
	}
	
}


// @pe
void func_932(void)
{
	@SetVariable("ood12BurahSobor1", 1);
}


void func_806(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_923(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_880(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


void func_998(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3f5";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_938(void)
{
	@SetVariable("ood12BurahSobor2", 1);
}


void func_622(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_944(void)
{
	@SetVariable("ood12BurahSobor3", 1);
}


void func_624(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_908(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_1023(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_687;
		@LookAsyncCamera("head");
	}
Label_687:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_880(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1023(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_693(void)
{
	bool var_267_bool;
	@CameraSwitchToNormal(true);
	bool var_269_bool;
	func_1023(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_267_bool, "head");
		if(var_267_bool == 0) goto Label_710;
		@UnlookAsync("head");
	}
Label_710:
	
}


// @pe
void func_950(bool var_181_bool)
{
	int var_183_int;
	func_918(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_1015(int var_67_int)
{
	var_67_int = 515592;
}


void func_1017(int var_66_int)
{
	var_66_int = 511961;
}


void func_1019(string var_68_string)
{
	var_68_string = "ui/NPC_Burah.png";
}


// @pe
void func_190(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_1023(var_191_bool);
	if(!var_191_bool) //@nz
		return 0;
	if(var_190_string == var_2_object)
		return 0;
	string var_194_string; bool var_195_bool;
	var_190_string = var_194_string;
	if(var_190_string == "")
		var_195_bool = false;
	else
		var_195_bool = true;
	func_865(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


void func_1021(string var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png";
}


void func_574(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_895(void)
{
	bool var_9_bool;
	func_1023(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


