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
			func_838();
			if(var_7_bool == 42263) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_875();
			}
			if(var_7_bool == 42277) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_881();
			}
			if(var_6_int == 42262) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540282); //@t
				var_0_object->ClearReplies(); //@t
				bool var_37_bool;
				func_887(var_1_object);
				if(var_37_bool != 0)
					var_0_object->AddReply(540283, 42264, 42263); //@t
				bool var_48_bool;
				func_899(var_1_object);
				if(var_48_bool != 0)
					var_0_object->AddReply(540296, 42278, 42277); //@t
				var_0_object->AddReply(540305, -1, 42286); //@t
				return 0;
			}
			if(var_6_int == 42278) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540298, 42280, 42279); //@t
				var_0_object->AddReply(540479, 42283, 42474); //@t
				return 0;
			}
			if(var_6_int == 42280) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540300, 42476, 42281); //@t
				var_0_object->AddReply(540301, 42283, 42282); //@t
				return 0;
			}
			if(var_6_int == 42283) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540303, 42476, 42284); //@t
				var_0_object->AddReply(540304, 42478, 42285); //@t
				return 0;
			}
			if(var_6_int == 42478) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540482, -1, 42479); //@t
				var_0_object->AddReply(540483, 42476, 42480); //@t
				return 0;
			}
			if(var_6_int == 42476) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540484, -1, 42482); //@t
				var_0_object->AddReply(540485, 42484, 42483); //@t
				return 0;
			}
			if(var_6_int == 42484) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540487, -1, 42485); //@t
				var_0_object->AddReply(540488, -1, 42486); //@t
				return 0;
			}
			if(var_6_int == 42264) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540285, 42266, 42265); //@t
				var_0_object->AddReply(540489, 42266, 42487); //@t
				return 0;
			}
			if(var_6_int == 42266) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540287, 42268, 42267); //@t
				var_0_object->AddReply(540295, 42270, 42275); //@t
				return 0;
			}
			if(var_6_int == 42268) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540289, 42270, 42269); //@t
				var_0_object->AddReply(540490, 42490, 42489); //@t
				return 0;
			}
			if(var_6_int == 42490) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540492, -1, 42491); //@t
				var_0_object->AddReply(540493, -1, 42492); //@t
				return 0;
			}
			if(var_6_int == 42270) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540291, 42272, 42271); //@t
				var_0_object->AddReply(540494, -1, 42493); //@t
				return 0;
			}
			if(var_6_int == 42272) {
				func_154(var_7_bool, "Neutral");
				var_0_object->SetMessage(540292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540293, -1, 42273); //@t
				var_0_object->AddReply(540294, -1, 42274); //@t
				return 0;
			}
			var_3_string = true;
			bool var_180_bool;
			func_936(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb1";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_537();
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
				func_585(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_845(var_14_object);
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
			func_585(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_845(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_845(var_20_object);
	var_20_object = var_19_object;
	func_672(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_587(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_930(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_928(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_932(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_934(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_911(var_164_int);
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
		var_229_bool = !var_17_bool; //@nz
		if(var_229_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_230_object;
	var_8_object = var_230_object;
	func_655();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_899(bool var_204_bool)
{
	int var_206_int;
	func_861(var_206_int, "ood12KlaraSobor2");
	if(var_206_int == 0) {
		var_204_bool = true;
		return 0;
	}
	var_204_bool = false;
}


void func_838(void)
{
	bool var_9_bool;
	func_936(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_585(bool var_8_bool)
{
	var_8_bool = true;
}


void func_587(bool var_113_bool, object var_114_object, float var_115_float)
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
	func_851(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
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
	func_936(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_649;
		@LookAsyncCamera("head");
	}
Label_649:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_845(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_655(void)
{
	bool var_232_bool;
	@CameraSwitchToNormal();
	bool var_233_bool;
	func_936(var_233_bool);
	if(var_233_bool != 0) {
	} else {
		@HasAnimationTrack(var_232_bool, "head");
		if(var_232_bool == 0) goto Label_671;
		@UnlookAsync("head");
	}
Label_671:
	
}


void func_911(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x39e";
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
		func_154(var_174_object, "Neutral");
		var_0_object->SetMessage(540282); //@t
		var_0_object->ClearReplies(); //@t
		bool var_193_bool;
		func_887(var_1_object);
		if(var_193_bool != 0)
			var_0_object->AddReply(540283, 42264, 42263); //@t
		bool var_204_bool;
		func_899(var_1_object);
		if(var_204_bool != 0)
			var_0_object->AddReply(540296, 42278, 42277); //@t
		var_0_object->AddReply(540305, -1, 42286); //@t
		goto Label_124;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_124:
	bool var_216_bool;
	func_936(var_216_bool);
	if(var_216_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_810(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_153;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_153:
		return 0;

	}
	
}


void func_851(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


void func_537(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_154(object var_2_object, string var_180_string)
{
	bool var_181_bool;
	func_936(var_181_bool);
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
	func_817(var_184_string, var_185_bool);
	var_2_object = var_180_string;
	
}


void func_730(bool var_29_bool, object var_30_object)
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
		func_823(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_861(int var_195_int, string var_196_string)
{
	int var_198_int;
	@GetVariable(var_196_string, var_198_int);
	var_198_int = var_195_int;
}


void func_672(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_730(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_767(var_60_bool, var_61_object);
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
		func_767(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_730(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_728;
	
Label_728:
	var_18_bool = true;
	
}


void func_928(int var_161_int)
{
	var_161_int = 515540;
}


void func_930(int var_160_int)
{
	var_160_int = 502865;
}


void func_866(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_932(string var_162_string)
{
	var_162_string = "ui/NPC_Klara.png";
}


void func_934(string var_163_string)
{
	var_163_string = "ui/NPC_Klara_b.png";
}


void func_936(bool var_56_bool)
{
	var_56_bool = true;
}


void func_810(string var_218_string)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_218_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, false);
}


// @pe
void func_875(void)
{
	@SetVariable("ood12KlaraSobor1", 1);
}


// @pe
void func_887(bool var_193_bool)
{
	int var_195_int;
	func_861(var_195_int, "ood12KlaraSobor1");
	if(var_195_int == 0) {
		var_193_bool = true;
		return 0;
	}
	var_193_bool = false;
}


void func_817(string var_184_string, bool var_185_bool)
{
	float var_190_float; float var_191_float;
	@lshGetAnimTimes(var_184_string, var_190_float, var_191_float);
	@lshPlayAnimation(var_190_float, var_191_float, var_185_bool);
}


// @pe
void func_881(void)
{
	@SetVariable("ood12KlaraSobor2", 1);
}


void func_823(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_936(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


void func_767(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_866(var_73_int);
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
		func_823(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


