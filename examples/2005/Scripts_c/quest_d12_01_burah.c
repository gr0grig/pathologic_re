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
			func_823();
			if(var_7_bool == 42288) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_860();
			}
			if(var_7_bool == 42302) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_866();
			}
			if(var_7_bool == 42305) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_872();
			}
			if(var_6_int == 42287) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540306); //@t
				var_0_object->ClearReplies(); //@t
				bool var_43_bool;
				func_878(var_1_object);
				if(var_43_bool != 0)
					var_0_object->AddReply(540307, 42289, 42288); //@t
				bool var_54_bool;
				func_890(var_1_object);
				if(var_54_bool != 0)
					var_0_object->AddReply(540320, 42303, 42302); //@t
				bool var_63_bool;
				func_902(var_1_object);
				if(var_63_bool != 0)
					var_0_object->AddReply(540323, 42306, 42305); //@t
				var_0_object->AddReply(540333, -1, 42315); //@t
				return 0;
			}
			if(var_6_int == 42306) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540325, 42308, 42307); //@t
				var_0_object->AddReply(540384, -1, 42370); //@t
				return 0;
			}
			if(var_6_int == 42308) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540327, 42310, 42309); //@t
				return 0;
			}
			if(var_6_int == 42310) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540329, -1, 42311); //@t
				var_0_object->AddReply(540385, -1, 42371); //@t
				return 0;
			}
			if(var_6_int == 42303) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540322, -1, 42304); //@t
				var_0_object->AddReply(540372, -1, 42355); //@t
				return 0;
			}
			if(var_6_int == 42289) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540309, 42356, 42290); //@t
				var_0_object->AddReply(540319, 42351, 42300); //@t
				return 0;
			}
			if(var_6_int == 42351) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540369, 42354, 42352); //@t
				var_0_object->AddReply(540370, 42356, 42353); //@t
				return 0;
			}
			if(var_6_int == 42354) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540375, 42360, 42359); //@t
				return 0;
			}
			if(var_6_int == 42356) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540374, 42360, 42358); //@t
				return 0;
			}
			if(var_6_int == 42360) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540377, 42363, 42362); //@t
				var_0_object->AddReply(540379, 42365, 42364); //@t
				return 0;
			}
			if(var_6_int == 42365) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540381, 42363, 42366); //@t
				return 0;
			}
			if(var_6_int == 42363) {
				func_164(var_7_bool, "Neutral");
				var_0_object->SetMessage(540378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540382, -1, 42368); //@t
				var_0_object->AddReply(540383, -1, 42369); //@t
				return 0;
			}
			var_3_string = true;
			bool var_173_bool;
			func_939(var_173_bool);
			if(var_173_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_522();
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
				func_570(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_830(var_14_object);
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
			func_570(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_830(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_640(void)
{
	bool var_241_bool;
	@CameraSwitchToNormal();
	bool var_242_bool;
	func_939(var_242_bool);
	if(var_242_bool != 0) {
	} else {
		@HasAnimationTrack(var_241_bool, "head");
		if(var_241_bool == 0) goto Label_656;
		@UnlookAsync("head");
	}
Label_656:
	
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_830(var_20_object);
	var_20_object = var_19_object;
	func_657(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_572(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_933(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_931(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_935(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_937(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_914(var_164_int);
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
		var_238_bool = !var_17_bool; //@nz
		if(var_238_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_239_object;
	var_8_object = var_239_object;
	func_640();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_836(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


// @pe
void func_902(bool var_213_bool)
{
	int var_215_int;
	func_846(var_215_int, "ood12BurahSobor3");
	if(var_215_int == 0) {
		var_213_bool = true;
		return 0;
	}
	var_213_bool = false;
}


void func_522(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_715(bool var_29_bool, object var_30_object)
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
		func_808(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_846(int var_195_int, string var_196_string)
{
	int var_198_int;
	@GetVariable(var_196_string, var_198_int);
	var_198_int = var_195_int;
}


void func_657(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_715(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_752(var_60_bool, var_61_object);
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
		func_752(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_715(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_713;
	
Label_713:
	var_18_bool = true;
	
}


void func_914(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x3a1";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		func_164(var_174_object, "Neutral");
		var_0_object->SetMessage(540306); //@t
		var_0_object->ClearReplies(); //@t
		bool var_193_bool;
		func_878(var_1_object);
		if(var_193_bool != 0)
			var_0_object->AddReply(540307, 42289, 42288); //@t
		bool var_204_bool;
		func_890(var_1_object);
		if(var_204_bool != 0)
			var_0_object->AddReply(540320, 42303, 42302); //@t
		bool var_213_bool;
		func_902(var_1_object);
		if(var_213_bool != 0)
			var_0_object->AddReply(540323, 42306, 42305); //@t
		var_0_object->AddReply(540333, -1, 42315); //@t
		goto Label_134;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_134:
	bool var_225_bool;
	func_939(var_225_bool);
	if(var_225_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_795(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_163;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_163:
		return 0;

	}
	
}


void func_851(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


// @pe
void func_890(bool var_204_bool)
{
	int var_206_int;
	func_846(var_206_int, "ood12BurahSobor2");
	if(var_206_int == 0) {
		var_204_bool = true;
		return 0;
	}
	var_204_bool = false;
}


void func_795(string var_227_string)
{
	float var_230_float; float var_231_float;
	@lshGetAnimTimes(var_227_string, var_230_float, var_231_float);
	@lshPlayAnimation(var_230_float, var_231_float, false);
}


// @pe
void func_860(void)
{
	@SetVariable("ood12BurahSobor1", 1);
}


void func_802(string var_184_string, bool var_185_bool)
{
	float var_190_float; float var_191_float;
	@lshGetAnimTimes(var_184_string, var_190_float, var_191_float);
	@lshPlayAnimation(var_190_float, var_191_float, var_185_bool);
}


void func_931(int var_161_int)
{
	var_161_int = 515592;
}


// @pe
void func_164(object var_2_object, string var_180_string)
{
	bool var_181_bool;
	func_939(var_181_bool);
	if(!var_181_bool) //@nz
		return 0;
	if(var_180_string == var_2_object)
		return 0;
	string var_184_string; bool var_185_bool;
	var_180_string = var_184_string;
	if(var_180_string == "")
		var_185_bool = false;
	else
		var_185_bool = true;
	func_802(var_184_string, var_185_bool);
	var_2_object = var_180_string;
	
}


void func_933(int var_160_int)
{
	var_160_int = 511961;
}


// @pe
void func_866(void)
{
	@SetVariable("ood12BurahSobor2", 1);
}


void func_935(string var_162_string)
{
	var_162_string = "ui/NPC_Burah.png";
}


void func_808(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_939(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_937(string var_163_string)
{
	var_163_string = "ui/NPC_Burah_b.png";
}


// @pe
void func_872(void)
{
	@SetVariable("ood12BurahSobor3", 1);
}


void func_939(bool var_56_bool)
{
	var_56_bool = true;
}


// @pe
void func_878(bool var_193_bool)
{
	int var_195_int;
	func_846(var_195_int, "ood12BurahSobor1");
	if(var_195_int == 0) {
		var_193_bool = true;
		return 0;
	}
	var_193_bool = false;
}


void func_752(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_851(var_73_int);
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
		func_808(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


void func_823(void)
{
	bool var_9_bool;
	func_939(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_570(bool var_8_bool)
{
	var_8_bool = true;
}


void func_572(bool var_113_bool, object var_114_object, float var_115_float)
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
	func_836(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
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
	func_939(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_634;
		@LookAsyncCamera("head");
	}
Label_634:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_830(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


