// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_998();
			if(var_7_cvector == 32383) {
				bool var_13_bool = false;
				bool var_14_bool;
				func_1071(var_1_object);
				if(var_14_bool != 0) {
					bool var_22_bool;
					func_1083(var_1_object);
					if(var_22_bool != 0)
						var_13_bool = true;
				}
				if(var_13_bool != 0) {
					object var_28_object; object var_29_object;
					var_28_object = var_1_object;
					var_29_object = var_0_object;
					func_1059();
					func_225(var_8_bool, "Neutral");
					var_0_object->SetMessage(531057); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531274, 32589, 32588); //@t
					return 0;
				}
				bool var_48_bool = false;
				bool var_49_bool;
				func_1107(var_1_object);
				if(var_49_bool != 0) {
					bool var_55_bool;
					func_1095(var_1_object);
					if(var_55_bool != 0)
						var_48_bool = true;
				}
				if(var_48_bool != 0) {
					object var_61_object; object var_62_object;
					var_61_object = var_1_object;
					var_62_object = var_0_object;
					func_1065();
					func_225(var_8_bool, "Neutral");
					var_0_object->SetMessage(531059); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531060, -1, 32386); //@t
					var_0_object->AddReply(531242, -1, 32557); //@t
					return 0;
				}
				func_225(var_8_bool, "Neutral");
				var_0_object->SetMessage(531055); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531056, -1, 32382); //@t
				var_0_object->AddReply(531241, -1, 32556); //@t
				return 0;
			}
			if(var_7_cvector == 32589) {
				func_225(var_8_bool, "Neutral");
				var_0_object->SetMessage(531275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531243, 32559, 32558); //@t
				var_0_object->AddReply(531058, -1, 32384); //@t
				return 0;
			}
			if(var_7_cvector == 32559) {
				func_225(var_8_bool, "Neutral");
				var_0_object->SetMessage(531244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531245, -1, 32560); //@t
				var_0_object->AddReply(531246, -1, 32561); //@t
				return 0;
			}
			var_3_string = true;
			bool var_101_bool;
			func_1144(var_101_bool);
			if(var_101_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf8";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_457(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1005(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1005(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_570();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_585();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_528();
			bool var_11_bool = false;
			bool var_12_bool;
			func_742(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_497(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_477(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1005(var_53_object);
					var_53_object = var_52_object;
					func_890(var_51_bool, var_52_object);
				}
			} else {
				func_492(var_7_int);
				func_519();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_519();
		else
			func_970("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_710();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_733(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_408(var_25_object);
			func_970("Neutral");
			func_528();
			func_519();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_742(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1026(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_519(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1035(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1005(var_39_object);
	var_39_object = var_38_object;
	func_832(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_747(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1138(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1136(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1140(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1142(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1119(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_280_bool = !var_36_bool; //@nz
		if(var_280_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_281_object;
	var_27_object = var_281_object;
	func_815();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_528(void)
{
	@KillTimer(10);
}


void func_1042(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1035(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


// @pe
void func_408(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_927(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1026(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_983(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1059(void)
{
	@SetVariable("oob2PetrKabak1", 1);
}


// @pe
void func_1065(void)
{
	@SetVariable("oob2PetrKabak2", 1);
}


void func_815(void)
{
	bool var_283_bool;
	@CameraSwitchToNormal();
	bool var_284_bool;
	func_1144(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		@HasAnimationTrack(var_283_bool, "head");
		if(var_283_bool == 0) goto Label_831;
		@UnlookAsync("head");
	}
Label_831:
	
}


// @pe
void func_1071(bool var_200_bool)
{
	int var_202_int;
	func_1021(var_202_int, "b2q03");
	if(var_202_int == 1)
		var_200_bool = true;
	var_200_bool = false;
}


// @pe
void func_570(void)
{
	func_710();
	func_528();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1083(bool var_208_bool)
{
	int var_210_int;
	func_1021(var_210_int, "oob2PetrKabak1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_832(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_890(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_927(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_927(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_890(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_888;
	
Label_888:
	var_37_bool = true;
	
}


void func_708(bool var_59_bool)
{
	var_59_bool = true;
}


void func_710(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1095(bool var_254_bool)
{
	int var_256_int;
	func_1021(var_256_int, "oob2PetrKabak2");
	if(var_256_int == 0) {
		var_254_bool = true;
		return 0;
	}
	var_254_bool = false;
}


void func_457(object var_0_object)
{
	bool var_7_bool;
	func_742(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_453();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_639();
	}
}
EMIT "Return(); Pop(0)";


void func_970(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_585(void)
{
	@StopGroup0();
	func_528();
	func_970("Neutral");
	func_519();
}


void func_715(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_977(string var_222_string, bool var_223_bool)
{
	float var_228_float; float var_229_float;
	@lshGetAnimTimes(var_222_string, var_228_float, var_229_float);
	@lshPlayAnimation(var_228_float, var_229_float, var_223_bool);
}


// @pe
void func_1107(bool var_248_bool)
{
	int var_250_int;
	func_1021(var_250_int, "b2q03");
	if(var_250_int == 1000)
		var_248_bool = true;
	var_248_bool = false;
}


void func_723(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_983(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1144(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_733(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_723(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool = false;
		bool var_200_bool;
		func_1071(var_1_object);
		if(var_200_bool != 0) {
			bool var_208_bool;
			func_1083(var_1_object);
			if(var_208_bool != 0)
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			object var_214_object; object var_215_object;
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1059();
			func_225(var_193_object, "Neutral");
			var_0_object->SetMessage(531057); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531274, 32589, 32588); //@t
		} else {
					bool var_247_bool = false;
					bool var_248_bool;
					func_1107(var_1_object);
					if(var_248_bool != 0) {
						bool var_254_bool;
						func_1095(var_1_object);
						if(var_254_bool != 0)
							var_247_bool = true;
					}
					if(var_247_bool == 0) goto Label_173;
					object var_260_object; object var_261_object;
					var_260_object = var_1_object;
					var_261_object = var_0_object;
					func_1065();
					func_225(var_193_object, "Neutral");
					var_0_object->SetMessage(531059); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531060, -1, 32386); //@t
					var_0_object->AddReply(531242, -1, 32557); //@t
		}
	}
Label_195:
	for(;;) {
		bool var_234_bool;
		func_1144(var_234_bool);
		if(var_234_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_970(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_224;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_224:
			return 0;

		}

	}
	
Label_173:
	func_225(var_193_object, "Neutral");
	var_0_object->SetMessage(531055); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(531056, -1, 32382); //@t
	var_0_object->AddReply(531241, -1, 32556); //@t
	goto Label_195;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1119(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x46e";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_477(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_733(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_225(object var_2_object, string var_218_string)
{
	bool var_219_bool;
	func_1144(var_219_bool);
	if(!var_219_bool) //@nz
		return 0;
	if(var_218_string == var_2_object)
		return 0;
	string var_222_string; bool var_223_bool;
	var_218_string = var_222_string;
	if(var_218_string == "")
		var_223_bool = false;
	else
		var_223_bool = true;
	func_977(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	
}


void func_742(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_998(void)
{
	bool var_10_bool;
	func_1144(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_747(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1011(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1144(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_809;
		@LookAsyncCamera("head");
	}
Label_809:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_492(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1005(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1136(int var_180_int)
{
	var_180_int = 515550;
}


void func_497(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_715(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1138(int var_179_int)
{
	var_179_int = 502875;
}


void func_1011(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1140(string var_181_string)
{
	var_181_string = "ui/NPC_Petr.png";
}


void func_1142(string var_182_string)
{
	var_182_string = "ui/NPC_Petr_b.png";
}


void func_1144(bool var_75_bool)
{
	var_75_bool = true;
}


void func_890(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_983(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1021(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_639(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_742(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1042(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_742(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1035(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_694;
			goto Label_705;
			}
				Label_694:
					bool var_59_bool;
					func_708(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_700;
			}
		}
	Label_705:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_700:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


