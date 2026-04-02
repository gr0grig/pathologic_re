// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object)
	{
		if(1 != 0) {
			func_1079();
			if(var_16_object == 40486) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1141();
			}
			if(var_15_bool == 40483) {
				func_142(var_16_object, "Neutral");
				var_0_object->SetMessage(538595); //@t
				var_0_object->ClearReplies(); //@t
				bool var_46_bool;
				func_1173(var_46_bool, var_1_object);
				if(var_46_bool != 0)
					var_0_object->AddReply(538598, 40487, 40486); //@t
				var_0_object->AddReply(538596, -1, 40484); //@t
				var_0_object->AddReply(538597, -1, 40485); //@t
				return 0;
			}
			if(var_15_bool == 40487) {
				func_142(var_16_object, "Neutral");
				var_0_object->SetMessage(538599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538600, -1, 40488); //@t
				var_0_object->AddReply(538601, -1, 40489); //@t
				return 0;
			}
			var_3_string = true;
			bool var_80_bool;
			func_1272(var_80_bool);
			if(var_80_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object)
	{
		if(1 != 0) {
			func_1079();
			if(var_16_object == 40508) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1154();
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_1167();
			}
			if(var_16_object == 40511) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_1167();
			}
			if(var_16_object == 40507) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_1147();
			}
			if(var_16_object == 40510) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1167();
			}
			if(var_15_bool == 40491) {
				bool var_56_bool;
				func_1183(var_56_bool, var_1_object);
				if(var_56_bool != 0) {
					object var_71_object; object var_72_object;
					var_71_object = var_1_object;
					var_72_object = var_0_object;
					func_1161();
					func_439(var_16_object, "Neutral");
					var_0_object->SetMessage(538603); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538604, 40494, 40492); //@t
					var_0_object->AddReply(538605, 40496, 40493); //@t
					var_0_object->AddReply(538621, -1, 40512); //@t
					return 0;
				}
				bool var_96_bool;
				func_1193(var_96_bool, var_1_object);
				if(var_96_bool != 0) {
					func_439(var_16_object, "Neutral");
					var_0_object->SetMessage(538622); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538623, -1, 40514); //@t
					var_0_object->AddReply(538624, -1, 40515); //@t
					return 0;
				}
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538626, 40519, 40517); //@t
				var_0_object->AddReply(538627, -1, 40518); //@t
				return 0;
			}
			if(var_15_bool == 40519) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538629, -1, 40520); //@t
				var_0_object->AddReply(538630, -1, 40521); //@t
				return 0;
			}
			if(var_15_bool == 40496) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538609, 40501, 40497); //@t
				var_0_object->AddReply(538611, 40500, 40499); //@t
				return 0;
			}
			if(var_15_bool == 40500) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538614, 40498, 40502); //@t
				var_0_object->AddReply(538615, 40501, 40503); //@t
				return 0;
			}
			if(var_15_bool == 40501) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538617, -1, 40507); //@t
				var_0_object->AddReply(538619, -1, 40510); //@t
				return 0;
			}
			if(var_15_bool == 40494) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538607, 40498, 40495); //@t
				var_0_object->AddReply(538616, 40500, 40505); //@t
				return 0;
			}
			if(var_15_bool == 40498) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538618, -1, 40508); //@t
				var_0_object->AddReply(538620, -1, 40511); //@t
				return 0;
			}
			var_3_string = true;
			bool var_178_bool;
			func_1272(var_178_bool);
			if(var_178_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ce";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_792(var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object)
	{
		int var_18_int; int var_19_int;
		func_857(var_18_int, var_19_int);
		@GetProperty("day", var_18_int);
		int var_24_int;
		func_1108(var_24_int);
		if(var_18_int == var_24_int) {
			int var_31_int; object var_32_object;
			var_15_object = var_32_object;
			TaskCall(2);
			func_247(var_33_object, var_31_int, var_32_object);
			TaskReturn();
			var_33_object = var_19_int;
			if(var_19_int == 1) {
				bool var_201_bool;
				func_1096(var_201_bool, "klara2_svita_positioner", "wonder");
			} else if(var_19_int == 2) {
				bool var_209_bool;
				func_1096(var_209_bool, "klara2_svita_positioner", "wrong_wonder");
		}
			int var_212_int; object var_213_object;
			var_15_object = var_213_object;
			TaskCall(0);
			func_0(var_214_object, var_212_int, var_213_object);
			TaskReturn();
		}
		goto Label_791;
	
	Label_791:
	
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int)
	{
		if(var_15_int == 10) {
			bool var_18_bool;
			func_819(var_13_bool, var_14_object, var_15_int, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_object) { //@nz
					func_1068(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_212_int, object var_213_object)
{
	var_0_object = var_213_object;
	bool var_223_bool; object var_224_object;
	var_213_object = var_224_object;
	func_970(var_223_bool, var_224_object, 70.0);
	if(!var_223_bool) { //@nz
		var_212_int = -2;
		return 8;
	}
	object var_219_object;
	@CreateDialog(var_219_object);
	int var_227_int;
	func_1266(var_227_int);
	var_219_object->SetNPCName(var_227_int);
	int var_228_int;
	func_1264(var_228_int);
	var_219_object->SetNPCDescription(var_228_int);
	string var_229_string;
	func_1268(var_229_string);
	var_219_object->SetPhoto(var_229_string);
	string var_230_string;
	func_1270(var_230_string);
	var_219_object->SetPhoto2(var_230_string);
	int var_231_int;
	func_1224(var_231_int);
	var_219_object->SetPlayerName(var_231_int);
	bool var_220_bool;
	@IsOverrideActive(var_220_bool);
	if(var_220_bool != 0) {
		var_212_int = -2;
		return 8;
	}
	@DoDialog(var_219_object);
	object var_233_object; object var_234_object;
	var_213_object = var_233_object;
	var_219_object = var_234_object;
	TaskCall(1);
	func_74(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object);
	TaskReturn();
	bool var_222_bool;
	var_219_object->IsDialogEnd(var_222_bool);
	
	for(;;) {
		var_272_bool = !var_222_bool; //@nz
		if(var_272_bool == 0) goto Label_63;
		@sync();
		var_219_object->IsDialogEnd(var_222_bool);
	}
	
Label_63:
	object var_273_object;
	var_213_object = var_273_object;
	func_1038();
	@StopDialog(var_219_object);
	var_219_object->GetReturnValue(-1);
	int var_221_int = var_212_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1154(void)
{
	bool var_23_bool;
	func_1096(var_23_bool, "klara2_svita_positioner", "bad_wonder");
}


// @pe
void func_1161(void)
{
	func_1241("Albinos1");
}


// @pe
void func_142(object var_2_object, string var_240_string)
{
	bool var_241_bool;
	func_1272(var_241_bool);
	if(!var_241_bool) //@nz
		return 0;
	if(var_240_string == var_2_object)
		return 0;
	string var_244_string; bool var_245_bool;
	var_240_string = var_244_string;
	if(var_240_string == "")
		var_245_bool = false;
	else
		var_245_bool = true;
	func_1062(var_244_string, var_245_bool);
	var_2_object = var_240_string;
	
}


void func_1038(void)
{
	bool var_194_bool;
	@CameraSwitchToNormal();
	bool var_195_bool;
	func_1272(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_194_bool, "head");
		if(var_194_bool == 0) goto Label_1054;
		@UnlookAsync("head");
	}
Label_1054:
	
}


// @pe
void func_1167(void)
{
	func_1241("BadKlara");
}


// @pe
void func_1173(bool var_249_bool, object var_250_object)
{
	object var_252_object;
	var_250_object = var_252_object;
	func_1203(var_252_object);
	bool var_251_bool;
	if(var_251_bool != 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


// @pe
void func_792(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_16_float, float var_17_float)
{
	bool var_18_bool;
	func_965(var_18_bool);
	if(!var_18_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_16_float;
	var_1_object = var_17_float;
	@SetTimer(10, 1.0);
	func_871();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1055(string var_158_string)
{
	float var_161_float; float var_162_float;
	@lshGetAnimTimes(var_158_string, var_161_float, var_162_float);
	@lshPlayAnimation(var_161_float, var_162_float, false);
}


// @pe
void func_1183(bool var_109_bool, object var_110_object)
{
	object var_112_object;
	var_110_object = var_112_object;
	func_1210(var_112_object);
	bool var_111_bool;
	if(var_111_bool != 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


void func_1062(string var_138_string, bool var_139_bool)
{
	float var_144_float; float var_145_float;
	@lshGetAnimTimes(var_138_string, var_144_float, var_145_float);
	@lshPlayAnimation(var_144_float, var_145_float, var_139_bool);
}


// @pe
void func_1193(bool var_169_bool, object var_170_object)
{
	object var_172_object;
	var_170_object = var_172_object;
	func_1217(var_172_object);
	bool var_171_bool;
	if(var_171_bool != 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


void func_1068(object var_32_object)
{
	float var_35_float;
	var_32_object->GetEyesHeight(var_35_float);
	cvector var_36_cvector = [0.0, 0.0, 0.0];
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	@LookAsync(var_32_object, "head", var_36_cvector);
}


void func_819(object var_0_object, object var_1_object, bool var_4_bool, bool var_18_bool)
{
	if(var_4_bool == null)
		var_18_bool = false;
	float var_22_float;
	func_957(var_22_float, var_4_bool);
	float var_20_float = sqrt(var_22_float);
	if(var_2_object != 0)
		var_20_float -= var_1_object;
	var_18_bool = var_20_float < var_0_object;
}


// @pe
void func_1203(bool var_251_bool)
{
	bool var_253_bool;
	func_1252(var_253_bool, "AlbinosLate1");
	var_253_bool = var_251_bool;
}


void func_950(bool var_66_bool)
{
	var_66_bool = true;
}


// @pe
void func_439(object var_2_object, string var_134_string)
{
	bool var_135_bool;
	func_1272(var_135_bool);
	if(!var_135_bool) //@nz
		return 0;
	if(var_134_string == var_2_object)
		return 0;
	string var_138_string; bool var_139_bool;
	var_134_string = var_138_string;
	if(var_134_string == "")
		var_139_bool = false;
	else
		var_139_bool = true;
	func_1062(var_138_string, var_139_bool);
	var_2_object = var_134_string;
	
}


void func_1079(void)
{
	bool var_18_bool;
	func_1272(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_952(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1210(bool var_111_bool)
{
	bool var_113_bool;
	func_1252(var_113_bool, "Albinos1");
	var_113_bool = var_111_bool;
}


void func_957(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1086(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


// @pe
void func_321(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_109_bool;
		func_1183(var_109_bool, var_1_object);
		if(var_109_bool != 0) {
			object var_124_object; object var_125_object;
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_1161();
			func_439(var_103_object, "Neutral");
			var_0_object->SetMessage(538603); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(538604, 40494, 40492); //@t
			var_0_object->AddReply(538605, 40496, 40493); //@t
			var_0_object->AddReply(538621, -1, 40512); //@t
		} else {
					bool var_169_bool;
					func_1193(var_169_bool, var_1_object);
					if(var_169_bool == 0) goto Label_387;
					func_439(var_103_object, "Neutral");
					var_0_object->SetMessage(538622); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538623, -1, 40514); //@t
					var_0_object->AddReply(538624, -1, 40515); //@t
		}
	}
Label_409:
	for(;;) {
		bool var_156_bool;
		func_1272(var_156_bool);
		if(var_156_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1055(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_438;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_438:
			return 0;

		}

	}
	
Label_387:
	func_439(var_103_object, "Neutral");
	var_0_object->SetMessage(538625); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(538626, 40519, 40517); //@t
	var_0_object->AddReply(538627, -1, 40518); //@t
	goto Label_409;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x145";


// @pe
void func_1217(bool var_171_bool)
{
	bool var_173_bool;
	func_1252(var_173_bool, "BadKlara");
	var_171_bool = !var_173_bool;
}


void func_965(bool var_18_bool)
{
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
}


void func_1224(int var_93_int)
{
	int var_95_int;
	@GetVariable("branch", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 1;
		return 2;
	EMIT "GOTO 0x4d7";
	}
	if(var_95_int == 1) {
		var_93_int = 2;
		return 2;
	}
	var_93_int = 3;
}


void func_1096(bool var_201_bool, string var_202_string, string var_203_string)
{
	object var_205_object;
	@FindActor(var_205_object, var_202_string);
	if(var_205_object == null)
		var_201_bool = false;
	@Trigger(var_205_object, var_203_string);
	var_201_bool = true;
}
EMIT "Stack[-1] = 0";


void func_970(bool var_42_bool, object var_43_object, float var_44_float)
{
	cvector var_55_cvector; bool var_62_bool;
	var_43_object->GetPosition(var_55_cvector);
	float var_54_float;
	var_43_object->GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_54_float);
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	@GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_64_float + var_54_float);
	cvector var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_67_float = sqrt(var_57_cvector | var_57_cvector);
	var_57_cvector /= var_67_float;
	cvector var_58_cvector = -var_57_cvector;
	cvector var_69_cvector;
	func_1086(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector);
	var_82_float = GetByIndex(var_59_cvector, 0);
	var_83_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_82_float, var_83_float);
	bool var_84_bool;
	func_1272(var_84_bool);
	if(var_84_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_1032;
		@LookAsyncCamera("head");
	}
Label_1032:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_233_object, object var_234_object)
{
	var_0_object = var_234_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_234_object, "Neutral");
		var_0_object->SetMessage(538595); //@t
		var_0_object->ClearReplies(); //@t
		bool var_249_bool;
		func_1173(var_249_bool, var_233_object);
		if(var_249_bool != 0)
			var_0_object->AddReply(538598, 40487, 40486); //@t
		var_0_object->AddReply(538596, -1, 40484); //@t
		var_0_object->AddReply(538597, -1, 40485); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_264_bool;
	func_1272(var_264_bool);
	if(var_264_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1055(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_1108(int var_24_int)
{
	float var_26_float;
	@GetGameTime(var_26_float);
	var_24_int = 1 + (var_26_float / 24);
}


// @pe
void func_857(object var_2_object, string var_3_string)
{
	func_952();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1241(string var_126_string)
{
	int var_128_int;
	@GetProperty("day", var_128_int);
	@SetVariable((("K2S_Klara2Svita" + var_126_string) + var_128_int), 1);
}


void func_1117(string var_47_string, int var_48_int)
{
	string var_50_string = "idle";
	if(var_48_int != 0)
		var_50_string += var_48_int;
	var_50_string = var_47_string;
}


void func_1124(int var_41_int)
{
	int var_44_int; bool var_45_bool;
	var_44_int = 0;
	
	for(;;) {
		string var_47_string; int var_48_int;
		var_44_int = var_48_int;
		func_1117(var_47_string, var_48_int);
		@HasAnimation(var_45_bool, "all", var_47_string);
		if(!var_45_bool) //@nz
			break;
		var_44_int += 1;
	}
	var_44_int = var_41_int;
}


void func_1252(bool var_113_bool, string var_114_string)
{
	int var_117_int;
	@GetProperty("day", var_117_int);
	int var_118_int;
	@GetVariable((("K2S_Klara2Svita" + var_114_string) + var_117_int), var_118_int);
	var_113_bool = var_118_int == 0;
}


void func_871(void)
{
	int var_34_int; int var_35_int; bool var_36_bool; float var_37_float; bool var_38_bool;
	@WaitForAnimEnd();
	bool var_39_bool;
	func_965(var_39_bool);
	if(!var_39_bool) //@nz
		return 14;
	int var_41_int;
	func_1124(var_41_int);
	int var_32_int;
	var_41_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_54_bool = false;
		if(var_33_int < 5) {
			bool var_57_bool;
			func_965(var_57_bool);
			if(var_57_bool != 0)
				var_54_bool = true;
		}
		if(var_54_bool != 0) {
			@irand(var_34_int, 3);
			if(var_34_int == 0) {
				if(var_32_int == 0) goto Label_918;
				@irand(var_35_int, var_32_int);
				string var_63_string; int var_64_int;
				var_35_int = var_64_int;
				func_1117(var_63_string, var_64_int);
				@PlayAnimation("all", var_63_string);
				@WaitForAnimEnd(var_36_bool);
				if(!var_36_bool) { //@nz
				} else {
			} else {
			if(var_34_int == 1) {
				@rand(var_37_float, 4);
				@Sleep((var_37_float + 1), var_38_bool);
				if(!var_38_bool) { //@nz
					goto Label_947;
				}
			} else if(var_33_int != 0) {
				goto Label_947;
			}
			}
					bool var_66_bool;
					func_950(var_66_bool);
					var_67_bool = !var_66_bool; //@nz
					if(var_67_bool == 0) goto Label_942;
			}
		}
	Label_947:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_942:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


void func_1264(int var_90_int)
{
	var_90_int = 515595;
}


void func_1266(int var_89_int)
{
	var_89_int = 512611;
}


void func_1268(string var_91_string)
{
	var_91_string = "ui/NPC_Black.png";
}


// @pe
void func_1141(void)
{
	func_1241("AlbinosLate1");
}


void func_1270(string var_92_string)
{
	var_92_string = "ui/NPC_Black_b.png";
}


void func_247(object var_0_object, int var_31_int, object var_32_object)
{
	var_0_object = var_32_object;
	bool var_42_bool; object var_43_object;
	var_32_object = var_43_object;
	func_970(var_42_bool, var_43_object, 70.0);
	if(!var_42_bool) { //@nz
		var_31_int = -2;
		return 8;
	}
	object var_38_object;
	@CreateDialog(var_38_object);
	int var_89_int;
	func_1266(var_89_int);
	var_38_object->SetNPCName(var_89_int);
	int var_90_int;
	func_1264(var_90_int);
	var_38_object->SetNPCDescription(var_90_int);
	string var_91_string;
	func_1268(var_91_string);
	var_38_object->SetPhoto(var_91_string);
	string var_92_string;
	func_1270(var_92_string);
	var_38_object->SetPhoto2(var_92_string);
	int var_93_int;
	func_1224(var_93_int);
	var_38_object->SetPlayerName(var_93_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_102_object; object var_103_object;
	var_32_object = var_102_object;
	var_38_object = var_103_object;
	TaskCall(3);
	func_321(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_191_bool = !var_41_bool; //@nz
		if(var_191_bool == 0) goto Label_310;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_310:
	object var_192_object;
	var_32_object = var_192_object;
	func_1038();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_1272(bool var_84_bool)
{
	var_84_bool = false;
}


// @pe
void func_1147(void)
{
	bool var_47_bool;
	func_1096(var_47_bool, "klara2_svita_positioner", "wonder");
}


