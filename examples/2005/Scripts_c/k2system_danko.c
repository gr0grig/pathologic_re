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
			func_1314();
			if(var_12_cvector == 41014) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(539066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539067, -1, 41015); //@t
				var_0_object->AddReply(541074, -1, 43179); //@t
				return 0;
			}
			var_3_string = true;
			bool var_37_bool;
			func_1390(var_37_bool);
			if(var_37_bool != 0)
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
			func_1314();
			if(var_13_bool == 41715) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1392();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1417();
			}
			if(var_13_bool == 41718) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_1397();
			}
			if(var_13_bool == 41721) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_1402();
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_1412();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_1417();
			}
			if(var_13_bool == 41724) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_1407();
			}
			if(var_12_cvector == 41712) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(539760); //@t
				var_0_object->ClearReplies(); //@t
				bool var_129_bool;
				func_1432(var_129_bool, var_1_object);
				if(var_129_bool != 0)
					var_0_object->AddReply(539761, 41714, 41713); //@t
				bool var_146_bool;
				func_1432(var_146_bool, var_1_object);
				if(var_146_bool != 0)
					var_0_object->AddReply(539764, 41717, 41716); //@t
				bool var_151_bool;
				func_1422(var_151_bool, var_1_object);
				if(var_151_bool != 0)
					var_0_object->AddReply(539767, 41720, 41719); //@t
				bool var_168_bool;
				func_1442(var_168_bool, var_1_object);
				if(var_168_bool != 0)
					var_0_object->AddReply(539770, 41723, 41722); //@t
				var_0_object->AddReply(539773, -1, 41725); //@t
				var_0_object->AddReply(541091, -1, 43200); //@t
				return 0;
			}
			if(var_12_cvector == 41723) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(539771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541092, 43203, 43201); //@t
				var_0_object->AddReply(541093, 43203, 43202); //@t
				return 0;
			}
			if(var_12_cvector == 43203) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(541094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539772, -1, 41724); //@t
				return 0;
			}
			if(var_12_cvector == 41720) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(539768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541095, 43207, 43205); //@t
				var_0_object->AddReply(541096, 43207, 43206); //@t
				return 0;
			}
			if(var_12_cvector == 43207) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(541097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541098, 43211, 43209); //@t
				var_0_object->AddReply(541099, 43211, 43210); //@t
				return 0;
			}
			if(var_12_cvector == 43211) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(541100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539769, -1, 41721); //@t
				return 0;
			}
			if(var_12_cvector == 41717) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(539765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541101, 43215, 43213); //@t
				var_0_object->AddReply(541102, 43216, 43214); //@t
				return 0;
			}
			if(var_12_cvector == 43216) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(541104); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541105, 43215, 43217); //@t
				return 0;
			}
			if(var_12_cvector == 43215) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(541103); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539766, -1, 41718); //@t
				return 0;
			}
			if(var_12_cvector == 41714) {
				func_395(var_13_bool, "Neutral");
				var_0_object->SetMessage(539762); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539763, -1, 41715); //@t
				return 0;
			}
			var_3_string = true;
			bool var_266_bool;
			func_1390(var_266_bool);
			if(var_266_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a2";
	
	}

}


maintask task_5
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_732();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, string var_12_string)
	{
		bool var_14_bool;
		if(var_12_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_14_bool);
			if(!var_14_bool) { //@nz
				object var_18_object;
				func_1321(var_18_object);
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
			func_1321(var_13_object);
			@RemoveActor(var_13_object);
			@Hold();
		}
		func_886();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
		{
		func_901();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			func_844();
			bool var_16_bool = false;
			bool var_17_bool;
			func_1058(var_17_bool);
			if(var_17_bool != 0) {
				bool var_20_bool;
				func_813(var_20_bool);
				if(var_20_bool != 0)
					var_16_bool = true;
			}
			if(var_16_bool != 0) {
				bool var_37_bool;
				func_793(var_37_bool);
				if(var_37_bool != 0) {
					bool var_56_bool; object var_57_object;
					object var_58_object;
					func_1321(var_58_object);
					var_58_object = var_57_object;
					func_1206(var_56_bool, var_57_object);
				}
			} else {
				func_808(var_12_int);
				func_835();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool != 0)
			func_835();
		else
			func_1286("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			disable OnUse;
			func_1026();
			bool var_16_bool; object var_17_object;
			var_12_object = var_17_object;
			func_1049(var_16_bool, var_17_object);
			enable OnUse;
			object var_30_object;
			var_12_object = var_30_object;
			func_1707(var_30_object);
			func_1286("Neutral");
			func_844();
			func_835();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_16_bool;
	func_1058(var_16_bool);
	if(!var_16_bool) goto Label_0; //@nz
}


void func_1024(bool var_64_bool)
{
	var_64_bool = true;
}


void func_1026(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_773(object var_0_object)
{
	bool var_12_bool;
	func_1058(var_12_bool);
	if(!var_12_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_769();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_955();
	}
}
EMIT "Return(); Pop(0)";


void func_1286(string var_19_string)
{
	float var_22_float; float var_23_float;
	@lshGetAnimTimes(var_19_string, var_22_float, var_23_float);
	@lshPlayAnimation(var_22_float, var_23_float, false);
}


void func_1031(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_13(object var_0_object, int var_314_int, object var_315_object)
{
	var_0_object = var_315_object;
	bool var_325_bool; object var_326_object;
	object var_327_object;
	func_1321(var_327_object);
	var_327_object = var_326_object;
	func_1148(var_325_bool, var_326_object);
	bool var_328_bool; object var_329_object;
	var_315_object = var_329_object;
	func_1063(var_328_bool, var_329_object, 70.0);
	if(!var_328_bool) { //@nz
		var_314_int = -2;
		return 8;
	}
	object var_321_object;
	@CreateDialog(var_321_object);
	int var_332_int;
	func_1384(var_332_int);
	var_321_object->SetNPCName(var_332_int);
	int var_333_int;
	func_1382(var_333_int);
	var_321_object->SetNPCDescription(var_333_int);
	string var_334_string;
	func_1386(var_334_string);
	var_321_object->SetPhoto(var_334_string);
	string var_335_string;
	func_1388(var_335_string);
	var_321_object->SetPhoto2(var_335_string);
	int var_336_int;
	func_1550(var_336_int);
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
	func_1131();
	@StopDialog(var_321_object);
	var_321_object->GetReturnValue(-1);
	int var_323_int = var_314_int;
}
EMIT "Stack[-4] = 0";


void func_1550(int var_193_int)
{
	int var_195_int;
	@GetVariable("branch", var_195_int);
	if(var_195_int == 0) {
		var_193_int = 1;
		return 2;
	EMIT "GOTO 0x61d";
	}
	if(var_195_int == 1) {
		var_193_int = 2;
		return 2;
	}
	var_193_int = 3;
}


void func_1039(bool var_20_bool, cvector var_21_cvector)
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


void func_1293(string var_213_string, bool var_214_bool)
{
	float var_219_float; float var_220_float;
	@lshGetAnimTimes(var_213_string, var_219_float, var_220_float);
	@lshPlayAnimation(var_219_float, var_220_float, var_214_bool);
}


void func_1299(bool var_86_bool, string var_87_string)
{
	bool var_89_bool;
	bool var_90_bool;
	func_1390(var_90_bool);
	if(var_90_bool != 0) {
		@lshHasSpeech(var_89_bool, var_87_string);
		if(var_89_bool != 0) {
			@lshPlaySpeech(var_87_string);
			var_86_bool = true;
		}
	}
	var_86_bool = false;
}


void func_1049(bool var_16_bool, object var_17_object)
{
	cvector var_19_cvector;
	var_17_object->GetPosition(var_19_cvector);
	bool var_20_bool; cvector var_21_cvector;
	var_19_cvector = var_21_cvector;
	func_1039(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
}


void func_793(bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, "player");
	if(!var_39_object) //@nz
		var_37_bool = false;
	bool var_42_bool; object var_43_object;
	var_39_object = var_43_object;
	func_1049(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
}
EMIT "Stack[-1] = 0";


void func_1567(void)
{
	bool var_54_bool;
	func_1337(var_54_bool, "klara2_npc_positioner", "remove_danko");
}


void func_1058(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_1314(void)
{
	bool var_15_bool;
	func_1390(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_1573(void)
{
	bool var_96_bool;
	func_1337(var_96_bool, "klara2_npc_positioner", "remove_burah");
}


void func_1063(bool var_142_bool, object var_143_object, float var_144_float)
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
	func_1327(var_169_cvector, (var_158_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1390(var_184_bool);
	if(var_184_bool != 0) {
	} else {
		@HasAnimationTrack(var_162_bool, "head");
		if(var_162_bool == 0) goto Label_1125;
		@LookAsyncCamera("head");
	}
Label_1125:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_142_bool = true;
	
}


void func_808(object var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_89_float, var_90_float);
}


void func_1321(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_202_object, object var_203_object)
{
	var_0_object = var_203_object;
	var_1_object = var_202_object;
	var_3_string = false;
	if(1 != 0) {
		func_395(var_203_object, "Neutral");
		var_0_object->SetMessage(539760); //@t
		var_0_object->ClearReplies(); //@t
		bool var_222_bool;
		func_1432(var_222_bool, var_1_object);
		if(var_222_bool != 0)
			var_0_object->AddReply(539761, 41714, 41713); //@t
		bool var_242_bool;
		func_1432(var_242_bool, var_1_object);
		if(var_242_bool != 0)
			var_0_object->AddReply(539764, 41717, 41716); //@t
		bool var_247_bool;
		func_1422(var_247_bool, var_1_object);
		if(var_247_bool != 0)
			var_0_object->AddReply(539767, 41720, 41719); //@t
		bool var_267_bool;
		func_1442(var_267_bool, var_1_object);
		if(var_267_bool != 0)
			var_0_object->AddReply(539770, 41723, 41722); //@t
		var_0_object->AddReply(539773, -1, 41725); //@t
		var_0_object->AddReply(541091, -1, 43200); //@t
		goto Label_365;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12d";
	}
Label_365:
	bool var_293_bool;
	func_1390(var_293_bool);
	if(var_293_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1286(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_394;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_394:
		return 0;

	}
	
}


void func_1579(int var_277_int)
{
	int var_279_int;
	@GetVariable("k2system_klara_day", var_279_int);
	var_279_int = var_277_int;
}


void func_813(bool var_20_bool)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
		var_20_bool = false;
		return 4;
	}
	float var_27_float; object var_28_object;
	func_1031(var_27_float, var_28_object);
	if(var_27_float > 90000.0) {
		var_20_bool = false;
		return 4;
	}
	bool var_24_bool;
	@CanSee(var_24_bool, var_28_object);
	var_24_bool = var_20_bool;
}
EMIT "Stack[-2] = 0";


void func_1327(cvector var_169_cvector, cvector var_170_cvector)
{
	float var_173_float = sqrt(var_170_cvector | var_170_cvector);
	if(var_173_float < 0.000001)
		var_169_cvector = [0.0, 0.0, 0.0];
	var_169_cvector = var_170_cvector / var_173_float;
}


void func_1585(int var_257_int)
{
	int var_259_int;
	@GetVariable("k2system_burah_day", var_259_int);
	var_259_int = var_257_int;
}


void func_1591(int var_232_int)
{
	int var_234_int;
	@GetVariable("k2system_danko_day", var_234_int);
	var_234_int = var_232_int;
}


void func_1337(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1597(int var_252_int)
{
	int var_257_int;
	func_1585(var_257_int);
	int var_255_int;
	var_257_int = var_255_int;
	int var_256_int;
	@GetVariable(("k2system_burah_state" + var_255_int), var_256_int);
	var_256_int = var_252_int;
}


void func_835(void)
{
	float var_26_float;
	@rand(var_26_float, 8, 16);
	@SetTimer(10, var_26_float);
}


void func_1349(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


void func_1608(int var_85_int)
{
	int var_88_int;
	func_1585(var_88_int);
	int var_87_int;
	var_88_int = var_87_int;
	@SetVariable(("k2system_burah_state" + var_87_int), var_85_int);
}


void func_844(void)
{
	@KillTimer(10);
}


void func_1358(string var_50_string, int var_51_int)
{
	string var_53_string = "idle";
	if(var_51_int != 0)
		var_53_string += var_51_int;
	var_53_string = var_50_string;
}


void func_1618(int var_227_int)
{
	int var_232_int;
	func_1591(var_232_int);
	int var_230_int;
	var_232_int = var_230_int;
	int var_231_int;
	@GetVariable(("k2system_danko_state" + var_230_int), var_231_int);
	var_231_int = var_227_int;
}


void func_1365(int var_44_int)
{
	int var_47_int; bool var_48_bool;
	var_47_int = 0;
	
	for(;;) {
		string var_50_string; int var_51_int;
		var_47_int = var_51_int;
		func_1358(var_50_string, var_51_int);
		@HasAnimation(var_48_bool, "all", var_50_string);
		if(!var_48_bool) //@nz
			break;
		var_47_int += 1;
	}
	var_47_int = var_44_int;
}


void func_1629(int var_43_int)
{
	int var_46_int;
	func_1591(var_46_int);
	int var_45_int;
	var_46_int = var_45_int;
	@SetVariable(("k2system_danko_state" + var_45_int), var_43_int);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_338_object, object var_339_object)
{
	var_0_object = var_339_object;
	var_1_object = var_338_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_339_object, "Neutral");
		var_0_object->SetMessage(539066); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539067, -1, 41015); //@t
		var_0_object->AddReply(541074, -1, 43179); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_360_bool;
	func_1390(var_360_bool);
	if(var_360_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1286(var_2_object);
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


void func_1382(int var_190_int)
{
	var_190_int = 515573;
}


void func_1639(int var_272_int)
{
	int var_277_int;
	func_1579(var_277_int);
	int var_275_int;
	var_277_int = var_275_int;
	int var_276_int;
	@GetVariable(("k2system_klara_state" + var_275_int), var_276_int);
	var_276_int = var_272_int;
}


void func_1384(int var_189_int)
{
	var_189_int = 504032;
}


void func_1386(string var_191_string)
{
	var_191_string = "ui/NPC_Bakalavr.png";
}


void func_1131(void)
{
	bool var_309_bool;
	@CameraSwitchToNormal();
	bool var_310_bool;
	func_1390(var_310_bool);
	if(var_310_bool != 0) {
	} else {
		@HasAnimationTrack(var_309_bool, "head");
		if(var_309_bool == 0) goto Label_1147;
		@UnlookAsync("head");
	}
Label_1147:
	
}


void func_1388(string var_192_string)
{
	var_192_string = "ui/NPC_Bakalavr_b.png";
}


void func_1390(bool var_90_bool)
{
	var_90_bool = true;
}


// @pe
void func_1392(void)
{
	func_1660();
}


void func_1650(int var_105_int)
{
	int var_108_int;
	func_1579(var_108_int);
	int var_107_int;
	var_108_int = var_107_int;
	@SetVariable(("k2system_klara_state" + var_107_int), var_105_int);
}


// @pe
void func_1397(void)
{
	func_1668();
}


// @pe
void func_886(void)
{
	func_1026();
	func_844();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1402(void)
{
	func_1682();
}


void func_1148(bool var_52_bool, object var_53_object)
{
	int var_59_int; int var_60_int;
	@GetVariable("voice_common", var_59_int);
	if(var_59_int != 0) {
		bool var_63_bool; object var_64_object;
		var_53_object = var_64_object;
		func_1206(var_63_bool, var_64_object);
		if(!var_63_bool) { //@nz
			bool var_94_bool; object var_95_object;
			var_53_object = var_95_object;
			func_1243(var_94_bool, var_95_object);
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
		func_1243(var_134_bool, var_135_object);
		if(!var_134_bool) { //@nz
			bool var_137_bool; object var_138_object;
			var_53_object = var_138_object;
			func_1206(var_137_bool, var_138_object);
			if(!var_137_bool) { //@nz
				var_52_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1204;
	
Label_1204:
	var_52_bool = true;
	
}


// @pe
void func_1660(void)
{
	func_1483();
	func_1629(2);
}


// @pe
void func_1407(void)
{
	func_1702();
}


// @pe
void func_1668(void)
{
	func_1496();
	func_1629(1);
}


// @pe
void func_1412(void)
{
	func_1573();
}


void func_901(void)
{
	@StopGroup0();
	func_844();
	func_1286("Neutral");
	func_835();
}


// @pe
void func_1417(void)
{
	func_1567();
}


// @pe
void func_395(object var_2_object, string var_209_string)
{
	bool var_210_bool;
	func_1390(var_210_bool);
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
	func_1293(var_213_string, var_214_bool);
	var_2_object = var_209_string;
	
}


void func_1676(bool var_226_bool)
{
	int var_227_int;
	func_1618(var_227_int);
	var_226_bool = var_227_int == 0;
}


// @pe
void func_1422(bool var_247_bool, object var_248_object)
{
	object var_250_object;
	var_248_object = var_250_object;
	func_1452(var_250_object);
	bool var_249_bool;
	if(var_249_bool != 0) {
		var_247_bool = true;
		return 0;
	}
	var_247_bool = false;
}


// @pe
void func_1682(void)
{
	func_1470();
	func_1608(3);
}


// @pe
void func_152(object var_2_object, string var_345_string)
{
	bool var_346_bool;
	func_1390(var_346_bool);
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
	func_1293(var_349_string, var_350_bool);
	var_2_object = var_345_string;
	
}


// @pe
void func_1432(bool var_222_bool, object var_223_object)
{
	object var_225_object;
	var_223_object = var_225_object;
	func_1458(var_225_object);
	bool var_224_bool;
	if(var_224_bool != 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


void func_1690(bool var_251_bool)
{
	int var_252_int;
	func_1597(var_252_int);
	var_251_bool = var_252_int == 1;
}


void func_1696(bool var_271_bool)
{
	int var_272_int;
	func_1639(var_272_int);
	var_271_bool = var_272_int == 1;
}


// @pe
void func_1442(bool var_267_bool, object var_268_object)
{
	object var_270_object;
	var_268_object = var_270_object;
	func_1464(var_270_object);
	bool var_269_bool;
	if(var_269_bool != 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


void func_1702(void)
{
	func_1650(3);
}


void func_1707(object var_30_object)
{
	int var_32_int;
	@GetProperty("day", var_32_int);
	int var_34_int;
	func_1349(var_34_int);
	if(var_32_int == var_34_int) {
		int var_41_int; object var_42_object;
		var_30_object = var_42_object;
		TaskCall(3);
		func_216(var_43_object, var_41_int, var_42_object);
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
void func_1452(bool var_249_bool)
{
	bool var_251_bool;
	func_1690(var_251_bool);
	var_251_bool = var_249_bool;
}


// @pe
void func_1458(bool var_224_bool)
{
	bool var_226_bool;
	func_1676(var_226_bool);
	var_226_bool = var_224_bool;
}


void func_1206(bool var_63_bool, object var_64_object)
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
		func_1299(var_86_bool, var_87_string);
		var_86_bool = var_63_bool;
		return 10;

	}
}


// @pe
void func_1464(bool var_269_bool)
{
	bool var_271_bool;
	func_1696(var_271_bool);
	var_271_bool = var_269_bool;
}


void func_955(void)
{
	bool var_38_bool; int var_39_int; int var_40_int; bool var_41_bool;
	@WaitForAnimEnd();
	bool var_42_bool;
	func_1058(var_42_bool);
	if(!var_42_bool) //@nz
		return 12;
	int var_44_int;
	func_1365(var_44_int);
	int var_36_int;
	var_44_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_57_bool = false;
		if(var_37_int < 5) {
			bool var_60_bool;
			func_1058(var_60_bool);
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
			func_1358(var_71_string, var_72_int);
			@PlayAnimation("all", var_71_string);
			@WaitForAnimEnd(var_41_bool);
			var_73_bool = !var_41_bool; //@nz
			if(var_73_bool == 0) goto Label_1010;
			goto Label_1021;
			}
				Label_1010:
					bool var_64_bool;
					func_1024(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1016;
			}
		}
	Label_1021:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1016:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_1470(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 755, 2, 539740);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_1522(var_82_bool, var_83_object, 751);
}
EMIT "Stack[-1] = 0";


void func_1483(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 759, 2, 539744);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1522(var_25_bool, var_26_object, 757);
}
EMIT "Stack[-1] = 0";


void func_216(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	object var_54_object;
	func_1321(var_54_object);
	var_54_object = var_53_object;
	func_1148(var_52_bool, var_53_object);
	bool var_142_bool; object var_143_object;
	var_42_object = var_143_object;
	func_1063(var_142_bool, var_143_object, 70.0);
	if(!var_142_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_189_int;
	func_1384(var_189_int);
	var_48_object->SetNPCName(var_189_int);
	int var_190_int;
	func_1382(var_190_int);
	var_48_object->SetNPCDescription(var_190_int);
	string var_191_string;
	func_1386(var_191_string);
	var_48_object->SetPhoto(var_191_string);
	string var_192_string;
	func_1388(var_192_string);
	var_48_object->SetPhoto2(var_192_string);
	int var_193_int;
	func_1550(var_193_int);
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
	func_297(var_204_object, var_205_object, var_206_string, var_207_bool, var_202_object, var_203_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_306_bool = !var_51_bool; //@nz
		if(var_306_bool == 0) goto Label_286;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_286:
	object var_307_object;
	var_42_object = var_307_object;
	func_1131();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_1496(void)
{
	object var_65_object;
	@CreateDiaryEntry(var_65_object, 760, 2, 539745);
	bool var_69_bool; object var_70_object;
	var_65_object = var_70_object;
	func_1522(var_69_bool, var_70_object, 757);
}
EMIT "Stack[-1] = 0";


void func_1243(bool var_94_bool, object var_95_object)
{
	bool var_103_bool; int var_104_int; string var_105_string;
	int var_107_int;
	func_1349(var_107_int);
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
		func_1299(var_121_bool, var_122_string);
		var_121_bool = var_94_bool;
		return 10;

	}
}


// @pe
void func_732(void)
{
	func_773(var_11_bool);
}


void func_1509(object var_34_object)
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


void func_1522(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_1509(var_34_object);
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


