// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, bool var_13_bool)
	{
		if(1 != 0) {
			func_1337();
			if(var_12_cvector == 41008) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(539060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539061, 43176, 41009); //@t
				var_0_object->AddReply(541070, -1, 43175); //@t
				return 0;
			}
			if(var_12_cvector == 43176) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(541071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541072, -1, 43177); //@t
				var_0_object->AddReply(541073, -1, 43178); //@t
				return 0;
			}
			var_3_string = true;
			bool var_47_bool;
			func_1413(var_47_bool);
			if(var_47_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, cvector var_12_cvector, bool var_13_bool)
	{
		if(1 != 0) {
			func_1337();
			if(var_13_bool == 41701) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1415();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1435();
			}
			if(var_13_bool == 41704) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_1420();
			}
			if(var_13_bool == 41707) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_1425();
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_1435();
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_1440();
			}
			if(var_13_bool == 41710) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_1430();
			}
			if(var_12_cvector == 41011) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(539063); //@t
				var_0_object->ClearReplies(); //@t
				bool var_129_bool;
				func_1445(var_129_bool, var_1_object);
				if(var_129_bool != 0)
					var_0_object->AddReply(539064, 41700, 41012); //@t
				bool var_146_bool;
				func_1445(var_146_bool, var_1_object);
				if(var_146_bool != 0)
					var_0_object->AddReply(539750, 41703, 41702); //@t
				bool var_151_bool;
				func_1455(var_151_bool, var_1_object);
				if(var_151_bool != 0)
					var_0_object->AddReply(539753, 41706, 41705); //@t
				bool var_168_bool;
				func_1465(var_168_bool, var_1_object);
				if(var_168_bool != 0)
					var_0_object->AddReply(539756, 41709, 41708); //@t
				var_0_object->AddReply(539759, -1, 41711); //@t
				var_0_object->AddReply(541075, -1, 43180); //@t
				return 0;
			}
			if(var_12_cvector == 41709) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(539757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539758, -1, 41710); //@t
				return 0;
			}
			if(var_12_cvector == 41706) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(539754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541088, 43197, 43196); //@t
				var_0_object->AddReply(541090, 43197, 43198); //@t
				return 0;
			}
			if(var_12_cvector == 43197) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(541089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539755, -1, 41707); //@t
				return 0;
			}
			if(var_12_cvector == 41703) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(539751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541077, 43183, 43182); //@t
				return 0;
			}
			if(var_12_cvector == 43183) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(541078); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541085, 43194, 43192); //@t
				var_0_object->AddReply(541086, 43194, 43193); //@t
				return 0;
			}
			if(var_12_cvector == 43194) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(541087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539752, -1, 41704); //@t
				return 0;
			}
			if(var_12_cvector == 41700) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(539748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541079, 43186, 43184); //@t
				var_0_object->AddReply(541080, 43186, 43185); //@t
				return 0;
			}
			if(var_12_cvector == 43186) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(541081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541082, 43189, 43187); //@t
				var_0_object->AddReply(541083, 43189, 43188); //@t
				return 0;
			}
			if(var_12_cvector == 43189) {
				func_418(var_13_bool, "Neutral");
				var_0_object->SetMessage(541084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539749, -1, 41701); //@t
				return 0;
			}
			var_3_string = true;
			bool var_266_bool;
			func_1413(var_266_bool);
			if(var_266_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b9";
	
	}

}


maintask task_5
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_755();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, string var_12_string)
	{
		bool var_14_bool;
		if(var_12_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_14_bool);
			if(!var_14_bool) { //@nz
				object var_18_object;
				func_1344(var_18_object);
				@RemoveActor(var_18_object);
			}
		} else if(var_12_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_1_object != 0) {
			object var_13_object;
			func_1344(var_13_object);
			@RemoveActor(var_13_object);
			@Hold();
		}
		func_909();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
		{
		func_924();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			func_867();
			bool var_16_bool = false;
			bool var_17_bool;
			func_1081(var_17_bool);
			if(var_17_bool != 0) {
				bool var_20_bool;
				func_836(var_20_bool);
				if(var_20_bool != 0)
					var_16_bool = true;
			}
			if(var_16_bool != 0) {
				bool var_37_bool;
				func_816(var_37_bool);
				if(var_37_bool != 0) {
					bool var_56_bool; object var_57_object;
					object var_58_object;
					func_1344(var_58_object);
					var_58_object = var_57_object;
					func_1229(var_56_bool, var_57_object);
				}
			} else {
				func_831(var_12_int);
				func_858();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool != 0)
			func_858();
		else
			func_1309("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			disable OnUse;
			func_1049();
			bool var_16_bool; object var_17_object;
			var_12_object = var_17_object;
			func_1072(var_16_bool, var_17_object);
			enable OnUse;
			object var_30_object;
			var_12_object = var_30_object;
			func_1730(var_30_object);
			func_1309("Neutral");
			func_867();
			func_858();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_16_bool;
	func_1081(var_16_bool);
	if(!var_16_bool) goto Label_0; //@nz
}


void func_1545(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_1532(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_13(object var_0_object, int var_314_int, object var_315_object)
{
	var_0_object = var_315_object;
	bool var_325_bool; object var_326_object;
	object var_327_object;
	func_1344(var_327_object);
	var_327_object = var_326_object;
	func_1171(var_325_bool, var_326_object);
	bool var_328_bool; object var_329_object;
	var_315_object = var_329_object;
	func_1086(var_328_bool, var_329_object, 70.0);
	if(!var_328_bool) { //@nz
		var_314_int = -2;
		return 8;
	}
	object var_321_object;
	@CreateDialog(var_321_object);
	int var_332_int;
	func_1407(var_332_int);
	var_321_object->SetNPCName(var_332_int);
	int var_333_int;
	func_1405(var_333_int);
	var_321_object->SetNPCDescription(var_333_int);
	string var_334_string;
	func_1409(var_334_string);
	var_321_object->SetPhoto(var_334_string);
	string var_335_string;
	func_1411(var_335_string);
	var_321_object->SetPhoto2(var_335_string);
	int var_336_int;
	func_1573(var_336_int);
	var_321_object->SetPlayerName(var_336_int);
	bool var_322_bool;
	@IsOverrideActive(var_322_bool);
	if(var_322_bool != 0) {
		var_314_int = -2;
		return 8;
	}
	@DoDialog(var_321_object);
	object var_338_object; object var_339_object;
	var_315_object = var_338_object;
	var_321_object = var_339_object;
	TaskCall(2);
	func_94(var_340_object, var_341_object, var_342_string, var_343_bool, var_338_object, var_339_object);
	TaskReturn();
	bool var_324_bool;
	var_321_object->IsDialogEnd(var_324_bool);
	
	for(;;) {
		var_368_bool = !var_324_bool; //@nz
		if(var_368_bool == 0) goto Label_83;
		@sync();
		var_321_object->IsDialogEnd(var_324_bool);
	}
	
Label_83:
	object var_369_object;
	var_315_object = var_369_object;
	func_1154();
	@StopDialog(var_321_object);
	var_321_object->GetReturnValue(-1);
	int var_323_int = var_314_int;
}
EMIT "Stack[-4] = 0";


void func_1047(bool var_64_bool)
{
	var_64_bool = true;
}


void func_1049(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_796(object var_0_object)
{
	bool var_12_bool;
	func_1081(var_12_bool);
	if(!var_12_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_792();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_978();
	}
}
EMIT "Return(); Pop(0)";


void func_1309(string var_19_string)
{
	float var_22_float; float var_23_float;
	@lshGetAnimTimes(var_19_string, var_22_float, var_23_float);
	@lshPlayAnimation(var_22_float, var_23_float, false);
}


void func_1054(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_1316(string var_213_string, bool var_214_bool)
{
	float var_219_float; float var_220_float;
	@lshGetAnimTimes(var_213_string, var_219_float, var_220_float);
	@lshPlayAnimation(var_219_float, var_220_float, var_214_bool);
}


void func_1573(int var_193_int)
{
	int var_195_int;
	@GetVariable("branch", var_195_int);
	if(var_195_int == 0) {
		var_193_int = 1;
		return 2;
	EMIT "GOTO 0x634";
	}
	if(var_195_int == 1) {
		var_193_int = 2;
		return 2;
	}
	var_193_int = 3;
}


void func_1062(bool var_20_bool, cvector var_21_cvector)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector = var_21_cvector - var_25_cvector;
	var_28_float = GetByIndex(var_26_cvector, 0);
	var_29_float = GetByIndex(var_26_cvector, 2);
	bool var_27_bool;
	@Rotate(var_28_float, var_29_float, var_27_bool);
	var_27_bool = var_20_bool;
}


void func_1322(bool var_86_bool, string var_87_string)
{
	bool var_89_bool;
	bool var_90_bool;
	func_1413(var_90_bool);
	if(var_90_bool != 0) {
		@lshHasSpeech(var_89_bool, var_87_string);
		if(var_89_bool != 0) {
			@lshPlaySpeech(var_87_string);
			var_86_bool = true;
		}
	}
	var_86_bool = false;
}


void func_1072(bool var_16_bool, object var_17_object)
{
	cvector var_19_cvector;
	var_17_object->GetPosition(var_19_cvector);
	bool var_20_bool; cvector var_21_cvector;
	var_19_cvector = var_21_cvector;
	func_1062(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
}


void func_816(bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, "player");
	if(!var_39_object) //@nz
		var_37_bool = false;
	bool var_42_bool; object var_43_object;
	var_39_object = var_43_object;
	func_1072(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
}
EMIT "Stack[-1] = 0";


void func_1590(void)
{
	bool var_98_bool;
	func_1360(var_98_bool, "klara2_npc_positioner", "remove_danko");
}


void func_1081(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_1337(void)
{
	bool var_15_bool;
	func_1413(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_1596(void)
{
	bool var_54_bool;
	func_1360(var_54_bool, "klara2_npc_positioner", "remove_burah");
}


void func_1086(bool var_142_bool, object var_143_object, float var_144_float)
{
	cvector var_155_cvector; bool var_162_bool;
	var_143_object->GetPosition(var_155_cvector);
	float var_154_float;
	var_143_object->GetEyesHeight(var_154_float);
	var_163_float = GetByIndex(var_155_cvector, 1);
	SetByIndex(var_155_cvector, 1) = (var_163_float + var_154_float);
	cvector var_156_cvector;
	@GetPosition(var_156_cvector);
	@GetEyesHeight(var_154_float);
	var_164_float = GetByIndex(var_156_cvector, 1);
	SetByIndex(var_156_cvector, 1) = (var_164_float + var_154_float);
	cvector var_157_cvector = var_155_cvector - var_156_cvector;
	var_165_float = GetByIndex(var_157_cvector, 1);
	SetByIndex(var_157_cvector, 1) = (float)0;
	var_167_float = sqrt(var_157_cvector | var_157_cvector);
	var_157_cvector /= var_167_float;
	cvector var_158_cvector = -var_157_cvector;
	cvector var_169_cvector;
	func_1350(var_169_cvector, (var_158_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_159_cvector = ((var_157_cvector * var_144_float) + (var_169_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_161_bool;
	@IsOverrideActive(var_161_bool);
	if(var_161_bool != 0)
		var_142_bool = false;
	@StopWorld();
	@CameraTransit((var_156_cvector + var_159_cvector), var_158_cvector);
	var_182_float = GetByIndex(var_159_cvector, 0);
	var_183_float = GetByIndex(var_159_cvector, 2);
	@Rotate(var_182_float, var_183_float);
	bool var_184_bool;
	func_1413(var_184_bool);
	if(var_184_bool != 0) {
	} else {
		@HasAnimationTrack(var_162_bool, "head");
		if(var_162_bool == 0) goto Label_1148;
		@LookAsyncCamera("head");
	}
Label_1148:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_142_bool = true;
	
}


void func_831(object var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_89_float, var_90_float);
}


void func_1344(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_202_object, object var_203_object)
{
	var_0_object = var_203_object;
	var_1_object = var_202_object;
	var_3_string = false;
	if(1 != 0) {
		func_418(var_203_object, "Neutral");
		var_0_object->SetMessage(539063); //@t
		var_0_object->ClearReplies(); //@t
		bool var_222_bool;
		func_1445(var_222_bool, var_1_object);
		if(var_222_bool != 0)
			var_0_object->AddReply(539064, 41700, 41012); //@t
		bool var_242_bool;
		func_1445(var_242_bool, var_1_object);
		if(var_242_bool != 0)
			var_0_object->AddReply(539750, 41703, 41702); //@t
		bool var_247_bool;
		func_1455(var_247_bool, var_1_object);
		if(var_247_bool != 0)
			var_0_object->AddReply(539753, 41706, 41705); //@t
		bool var_267_bool;
		func_1465(var_267_bool, var_1_object);
		if(var_267_bool != 0)
			var_0_object->AddReply(539756, 41709, 41708); //@t
		var_0_object->AddReply(539759, -1, 41711); //@t
		var_0_object->AddReply(541075, -1, 43180); //@t
		goto Label_388;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x144";
	}
Label_388:
	bool var_293_bool;
	func_1413(var_293_bool);
	if(var_293_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1309(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_417;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_417:
		return 0;

	}
	
}


void func_1602(int var_277_int)
{
	int var_279_int;
	@GetVariable("k2system_klara_day", var_279_int);
	var_279_int = var_277_int;
}


void func_836(bool var_20_bool)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
		var_20_bool = false;
		return 4;
	}
	float var_27_float; object var_28_object;
	func_1054(var_27_float, var_28_object);
	if(var_27_float > 90000.0) {
		var_20_bool = false;
		return 4;
	}
	bool var_24_bool;
	@CanSee(var_24_bool, var_28_object);
	var_24_bool = var_20_bool;
}
EMIT "Stack[-2] = 0";


void func_1350(cvector var_169_cvector, cvector var_170_cvector)
{
	float var_173_float = sqrt(var_170_cvector | var_170_cvector);
	if(var_173_float < 0.000001)
		var_169_cvector = [0.0, 0.0, 0.0];
	var_169_cvector = var_170_cvector / var_173_float;
}


void func_1608(int var_232_int)
{
	int var_234_int;
	@GetVariable("k2system_burah_day", var_234_int);
	var_234_int = var_232_int;
}


void func_1614(int var_257_int)
{
	int var_259_int;
	@GetVariable("k2system_danko_day", var_259_int);
	var_259_int = var_257_int;
}


void func_1360(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1620(int var_227_int)
{
	int var_232_int;
	func_1608(var_232_int);
	int var_230_int;
	var_232_int = var_230_int;
	int var_231_int;
	@GetVariable(("k2system_burah_state" + var_230_int), var_231_int);
	var_231_int = var_227_int;
}


void func_858(void)
{
	float var_26_float;
	@rand(var_26_float, 8, 16);
	@SetTimer(10, var_26_float);
}


void func_1372(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_338_object, object var_339_object)
{
	var_0_object = var_339_object;
	var_1_object = var_338_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_339_object, "Neutral");
		var_0_object->SetMessage(539060); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539061, 43176, 41009); //@t
		var_0_object->AddReply(541070, -1, 43175); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_360_bool;
	func_1413(var_360_bool);
	if(var_360_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1309(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_1631(int var_43_int)
{
	int var_46_int;
	func_1608(var_46_int);
	int var_45_int;
	var_46_int = var_45_int;
	@SetVariable(("k2system_burah_state" + var_45_int), var_43_int);
}


void func_867(void)
{
	@KillTimer(10);
}


void func_1381(string var_50_string, int var_51_int)
{
	string var_53_string = "idle";
	if(var_51_int != 0)
		var_53_string += var_51_int;
	var_53_string = var_50_string;
}


void func_1641(int var_252_int)
{
	int var_257_int;
	func_1614(var_257_int);
	int var_255_int;
	var_257_int = var_255_int;
	int var_256_int;
	@GetVariable(("k2system_danko_state" + var_255_int), var_256_int);
	var_256_int = var_252_int;
}


void func_1388(int var_44_int)
{
	int var_47_int; bool var_48_bool;
	var_47_int = 0;
	
	for(;;) {
		string var_50_string; int var_51_int;
		var_47_int = var_51_int;
		func_1381(var_50_string, var_51_int);
		@HasAnimation(var_48_bool, "all", var_50_string);
		if(!var_48_bool) //@nz
			break;
		var_47_int += 1;
	}
	var_47_int = var_44_int;
}


void func_1652(int var_85_int)
{
	int var_88_int;
	func_1614(var_88_int);
	int var_87_int;
	var_88_int = var_87_int;
	@SetVariable(("k2system_danko_state" + var_87_int), var_85_int);
}


void func_1405(int var_190_int)
{
	var_190_int = 515592;
}


void func_1662(int var_272_int)
{
	int var_277_int;
	func_1602(var_277_int);
	int var_275_int;
	var_277_int = var_275_int;
	int var_276_int;
	@GetVariable(("k2system_klara_state" + var_275_int), var_276_int);
	var_276_int = var_272_int;
}


void func_1407(int var_189_int)
{
	var_189_int = 511961;
}


void func_1409(string var_191_string)
{
	var_191_string = "ui/NPC_Burah.png";
}


void func_1154(void)
{
	bool var_309_bool;
	@CameraSwitchToNormal();
	bool var_310_bool;
	func_1413(var_310_bool);
	if(var_310_bool != 0) {
	} else {
		@HasAnimationTrack(var_309_bool, "head");
		if(var_309_bool == 0) goto Label_1170;
		@UnlookAsync("head");
	}
Label_1170:
	
}


void func_1411(string var_192_string)
{
	var_192_string = "ui/NPC_Burah_b.png";
}


void func_1413(bool var_90_bool)
{
	var_90_bool = true;
}


// @pe
void func_1415(void)
{
	func_1697();
}


void func_1673(int var_105_int)
{
	int var_108_int;
	func_1602(var_108_int);
	int var_107_int;
	var_108_int = var_107_int;
	@SetVariable(("k2system_klara_state" + var_107_int), var_105_int);
}


// @pe
void func_1420(void)
{
	func_1705();
}


// @pe
void func_909(void)
{
	func_1049();
	func_867();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1425(void)
{
	func_1683();
}


void func_1171(bool var_52_bool, object var_53_object)
{
	int var_59_int; int var_60_int;
	@GetVariable("voice_common", var_59_int);
	if(var_59_int != 0) {
		bool var_63_bool; object var_64_object;
		var_53_object = var_64_object;
		func_1229(var_63_bool, var_64_object);
		if(!var_63_bool) { //@nz
			bool var_94_bool; object var_95_object;
			var_53_object = var_95_object;
			func_1266(var_94_bool, var_95_object);
			if(!var_94_bool) { //@nz
				var_52_bool = false;
				return 4;
			}
		}
		@irand(var_60_int, 2);
		if(var_60_int != 0)
			@SetVariable("voice_common", ((var_59_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_134_bool; object var_135_object;
		var_53_object = var_135_object;
		func_1266(var_134_bool, var_135_object);
		if(!var_134_bool) { //@nz
			bool var_137_bool; object var_138_object;
			var_53_object = var_138_object;
			func_1229(var_137_bool, var_138_object);
			if(!var_137_bool) { //@nz
				var_52_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1227;
	
Label_1227:
	var_52_bool = true;
	
}


// @pe
void func_1683(void)
{
	func_1519();
	func_1652(3);
}


// @pe
void func_1430(void)
{
	func_1725();
}


// @pe
void func_152(object var_2_object, string var_345_string)
{
	bool var_346_bool;
	func_1413(var_346_bool);
	if(!var_346_bool) //@nz
		return 0;
	if(var_345_string == var_2_object)
		return 0;
	string var_349_string; bool var_350_bool;
	var_345_string = var_349_string;
	if(var_345_string == "")
		var_350_bool = false;
	else
		var_350_bool = true;
	func_1316(var_349_string, var_350_bool);
	var_2_object = var_345_string;
	
}


void func_1691(bool var_251_bool)
{
	int var_252_int;
	func_1641(var_252_int);
	var_251_bool = var_252_int == 1;
}


// @pe
void func_1435(void)
{
	func_1596();
}


void func_924(void)
{
	@StopGroup0();
	func_867();
	func_1309("Neutral");
	func_858();
}


// @pe
void func_1440(void)
{
	func_1590();
}


// @pe
void func_1697(void)
{
	func_1493();
	func_1631(2);
}


// @pe
void func_418(object var_2_object, string var_209_string)
{
	bool var_210_bool;
	func_1413(var_210_bool);
	if(!var_210_bool) //@nz
		return 0;
	if(var_209_string == var_2_object)
		return 0;
	string var_213_string; bool var_214_bool;
	var_209_string = var_213_string;
	if(var_209_string == "")
		var_214_bool = false;
	else
		var_214_bool = true;
	func_1316(var_213_string, var_214_bool);
	var_2_object = var_209_string;
	
}


// @pe
void func_1445(bool var_222_bool, object var_223_object)
{
	object var_225_object;
	var_223_object = var_225_object;
	func_1475(var_225_object);
	bool var_224_bool;
	if(var_224_bool != 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


// @pe
void func_1705(void)
{
	func_1506();
	func_1631(1);
}


// @pe
void func_1455(bool var_247_bool, object var_248_object)
{
	object var_250_object;
	var_248_object = var_250_object;
	func_1481(var_250_object);
	bool var_249_bool;
	if(var_249_bool != 0) {
		var_247_bool = true;
		return 0;
	}
	var_247_bool = false;
}


void func_1713(bool var_226_bool)
{
	int var_227_int;
	func_1620(var_227_int);
	var_226_bool = var_227_int == 0;
}


void func_1719(bool var_271_bool)
{
	int var_272_int;
	func_1662(var_272_int);
	var_271_bool = var_272_int == 1;
}


// @pe
void func_1465(bool var_267_bool, object var_268_object)
{
	object var_270_object;
	var_268_object = var_270_object;
	func_1487(var_270_object);
	bool var_269_bool;
	if(var_269_bool != 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


void func_1725(void)
{
	func_1673(3);
}


void func_1730(object var_30_object)
{
	int var_32_int;
	@GetProperty("day", var_32_int);
	int var_34_int;
	func_1372(var_34_int);
	if(var_32_int == var_34_int) {
		int var_41_int; object var_42_object;
		var_30_object = var_42_object;
		TaskCall(3);
		func_239(var_43_object, var_41_int, var_42_object);
		TaskReturn();
	} else {
		int var_314_int; object var_315_object;
		var_30_object = var_315_object;
		TaskCall(1);
		func_13(var_316_object, var_314_int, var_315_object);
		TaskReturn();
	}
	
}


// @pe
void func_1475(bool var_224_bool)
{
	bool var_226_bool;
	func_1713(var_226_bool);
	var_226_bool = var_224_bool;
}


// @pe
void func_1481(bool var_249_bool)
{
	bool var_251_bool;
	func_1691(var_251_bool);
	var_251_bool = var_249_bool;
}


void func_1229(bool var_63_bool, object var_64_object)
{
	string var_70_string; bool var_72_bool; int var_73_int; string var_74_string;
	var_70_string = "c";
	int var_71_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_64_object->HasProperty((var_70_string + (var_71_int + 1)), var_72_bool);
			if(!var_72_bool) { //@nz
			} else {
				var_71_int += 1;
			}
		}
		if(!var_71_int) { //@nz
			var_63_bool = false;
			return 10;
		}
		var_73_int = 0;
		if(var_71_int > 1)
			@irand(var_73_int, var_71_int);
		var_64_object->GetProperty((var_70_string + (var_73_int + 1)), var_74_string);
		bool var_86_bool; string var_87_string;
		var_74_string = var_87_string;
		func_1322(var_86_bool, var_87_string);
		var_86_bool = var_63_bool;
		return 10;

	}
}


// @pe
void func_1487(bool var_269_bool)
{
	bool var_271_bool;
	func_1719(var_271_bool);
	var_271_bool = var_269_bool;
}


void func_978(void)
{
	bool var_38_bool; int var_39_int; int var_40_int; bool var_41_bool;
	@WaitForAnimEnd();
	bool var_42_bool;
	func_1081(var_42_bool);
	if(!var_42_bool) //@nz
		return 12;
	int var_44_int;
	func_1388(var_44_int);
	int var_36_int;
	var_44_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_57_bool = false;
		if(var_37_int < 5) {
			bool var_60_bool;
			func_1081(var_60_bool);
			if(var_60_bool != 0)
				var_57_bool = true;
		}
		if(var_57_bool != 0) {
			if(!var_36_int) { //@nz
				@Sleep(3, var_38_bool);
				if(!var_38_bool) { //@nz
				} else {
			} else {
			@irand(var_39_int, var_36_int);
			@irand(var_40_int, 5);
			if(var_40_int != 0)
				var_39_int = 0;
			string var_71_string; int var_72_int;
			var_39_int = var_72_int;
			func_1381(var_71_string, var_72_int);
			@PlayAnimation("all", var_71_string);
			@WaitForAnimEnd(var_41_bool);
			var_73_bool = !var_41_bool; //@nz
			if(var_73_bool == 0) goto Label_1033;
			goto Label_1044;
			}
				Label_1033:
					bool var_64_bool;
					func_1047(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1039;
			}
		}
	Label_1044:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1039:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_1493(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 753, 2, 539738);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1545(var_25_bool, var_26_object, 751);
}
EMIT "Stack[-1] = 0";


void func_1506(void)
{
	object var_65_object;
	@CreateDiaryEntry(var_65_object, 754, 2, 539739);
	bool var_69_bool; object var_70_object;
	var_65_object = var_70_object;
	func_1545(var_69_bool, var_70_object, 751);
}
EMIT "Stack[-1] = 0";


void func_239(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	object var_54_object;
	func_1344(var_54_object);
	var_54_object = var_53_object;
	func_1171(var_52_bool, var_53_object);
	bool var_142_bool; object var_143_object;
	var_42_object = var_143_object;
	func_1086(var_142_bool, var_143_object, 70.0);
	if(!var_142_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_189_int;
	func_1407(var_189_int);
	var_48_object->SetNPCName(var_189_int);
	int var_190_int;
	func_1405(var_190_int);
	var_48_object->SetNPCDescription(var_190_int);
	string var_191_string;
	func_1409(var_191_string);
	var_48_object->SetPhoto(var_191_string);
	string var_192_string;
	func_1411(var_192_string);
	var_48_object->SetPhoto2(var_192_string);
	int var_193_int;
	func_1573(var_193_int);
	var_48_object->SetPlayerName(var_193_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	object var_202_object; object var_203_object;
	var_42_object = var_202_object;
	var_48_object = var_203_object;
	TaskCall(4);
	func_320(var_204_object, var_205_object, var_206_string, var_207_bool, var_202_object, var_203_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_306_bool = !var_51_bool; //@nz
		if(var_306_bool == 0) goto Label_309;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_309:
	object var_307_object;
	var_42_object = var_307_object;
	func_1154();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_1519(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 761, 2, 539746);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_1545(var_82_bool, var_83_object, 757);
}
EMIT "Stack[-1] = 0";


void func_1266(bool var_94_bool, object var_95_object)
{
	bool var_103_bool; int var_104_int; string var_105_string;
	int var_107_int;
	func_1372(var_107_int);
	string var_101_string = ("d" + var_107_int) + "m";
	int var_102_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_95_object->HasProperty((var_101_string + (var_102_int + 1)), var_103_bool);
			if(!var_103_bool) { //@nz
			} else {
				var_102_int += 1;
			}
		}
		if(!var_102_int) { //@nz
			var_94_bool = false;
			return 10;
		}
		var_104_int = 0;
		if(var_102_int > 1)
			@irand(var_104_int, var_102_int);
		var_95_object->GetProperty((var_101_string + (var_104_int + 1)), var_105_string);
		bool var_121_bool; string var_122_string;
		var_105_string = var_122_string;
		func_1322(var_121_bool, var_122_string);
		var_121_bool = var_94_bool;
		return 10;

	}
}


// @pe
void func_755(void)
{
	func_796(var_11_bool);
}


void func_1532(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


