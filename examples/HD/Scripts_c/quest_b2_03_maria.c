// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1192();
			if(var_8_bool == 32390) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1340();
			}
			if(var_8_bool == 32396) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1340();
			}
			if(var_8_bool == 32574) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_1340();
			}
			if(var_8_bool == 32398) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_1352();
				object var_76_object = var_1_object;
				func_1377(var_0_object);
				object var_97_object = var_1_object;
				func_1366(var_0_object);
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_1328();
			}
			if(var_8_bool == 32573) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_1352();
				object var_126_object = var_1_object;
				func_1377(var_0_object);
				object var_128_object = var_1_object;
				func_1366(var_0_object);
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1328();
			}
			if(var_7_cvector == 32388) {
				bool var_134_bool = false;
				bool var_135_bool;
				func_1399(var_1_object);
				if(var_135_bool != 0) {
					bool var_143_bool;
					func_1387(var_1_object);
					if(!var_143_bool) //@nz
						var_134_bool = true;
				}
				if(var_134_bool != 0) {
					object var_150_object; object var_151_object;
					var_150_object = var_1_object;
					var_151_object = var_0_object;
					func_1334();
					func_224(var_8_bool, "Staring");
					var_0_object->SetMessage(531063); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531064, 32569, 32389); //@t
					var_0_object->AddReply(531269, 32569, 32581); //@t
					return 0;
				}
				bool var_178_bool;
				func_1387(var_1_object);
				if(var_178_bool != 0) {
					func_224(var_8_bool, "Angry");
					var_0_object->SetMessage(531077); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531078, -1, 32400); //@t
					var_0_object->AddReply(531255, -1, 32571); //@t
					return 0;
				}
				func_224(var_8_bool, "Mysterious");
				var_0_object->SetMessage(531066); //@t
				var_0_object->ClearReplies(); //@t
				bool var_190_bool;
				func_1411(var_1_object);
				if(var_190_bool != 0)
					var_0_object->AddReply(531067, 32395, 32392); //@t
				bool var_199_bool;
				func_1423(var_1_object);
				if(var_199_bool != 0)
					var_0_object->AddReply(531068, 32397, 32393); //@t
				var_0_object->AddReply(531069, -1, 32394); //@t
				var_0_object->AddReply(531256, -1, 32572); //@t
				return 0;
			}
			if(var_7_cvector == 32397) {
				func_224(var_8_bool, "Staring");
				var_0_object->SetMessage(531072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531073, -1, 32398); //@t
				var_0_object->AddReply(531257, -1, 32573); //@t
				return 0;
			}
			if(var_7_cvector == 32395) {
				func_224(var_8_bool, "Staring");
				var_0_object->SetMessage(531070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531071, -1, 32396); //@t
				var_0_object->AddReply(531258, -1, 32574); //@t
				return 0;
			}
			if(var_7_cvector == 32569) {
				func_224(var_8_bool, "Staring");
				var_0_object->SetMessage(531253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531254, 32576, 32570); //@t
				var_0_object->AddReply(531270, -1, 32583); //@t
				return 0;
			}
			if(var_7_cvector == 32576) {
				func_224(var_8_bool, "Neutral");
				var_0_object->SetMessage(531264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531265, 32578, 32577); //@t
				var_0_object->AddReply(531271, -1, 32584); //@t
				return 0;
			}
			if(var_7_cvector == 32578) {
				func_224(var_8_bool, "Neutral");
				var_0_object->SetMessage(531266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531267, 32580, 32579); //@t
				var_0_object->AddReply(531272, 32580, 32585); //@t
				return 0;
			}
			if(var_7_cvector == 32580) {
				func_224(var_8_bool, "Neutral");
				var_0_object->SetMessage(531268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531065, -1, 32390); //@t
				var_0_object->AddReply(531273, -1, 32587); //@t
				return 0;
			}
			var_3_string = true;
			bool var_274_bool;
			func_1540(var_274_bool);
			if(var_274_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf7";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_630(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1199(var_13_object);
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
			func_1199(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_737();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_752();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_695();
			bool var_11_bool = false;
			bool var_12_bool;
			func_916(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_664(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_644(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1199(var_53_object);
					var_53_object = var_52_object;
					func_1066(var_51_bool, var_52_object);
				}
			} else {
				func_659(var_7_int);
				func_686();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_686();
		else
			func_1146("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_877();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_907(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_581(var_25_object);
			func_1146("Neutral");
			func_695();
			func_686();
		}
	}

}


void func_1536(string var_87_string)
{
	var_87_string = "ui/NPC_Maria.png";
}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_921(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1534(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1532(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1536(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1538(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1515(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1199(var_100_object);
	var_100_object = var_99_object;
	func_1008(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_298_bool = !var_36_bool; //@nz
		if(var_298_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_299_object;
	var_27_object = var_299_object;
	func_990();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1538(string var_88_string)
{
	var_88_string = "ui/NPC_Maria_b.png";
}


// @pe
void func_1411(bool var_274_bool)
{
	int var_276_int;
	func_1215(var_276_int, "b2q03_1");
	if(var_276_int == 0) {
		var_274_bool = true;
		return 0;
	}
	var_274_bool = false;
}


void func_1540(bool var_80_bool)
{
	var_80_bool = true;
}


void func_644(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_907(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_897(bool var_15_bool, cvector var_16_cvector)
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


void func_1283(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1146(string var_246_string)
{
	bool var_250_bool; float var_251_float; float var_252_float;
	@lshHasAnimation(var_250_bool, var_246_string);
	if(var_250_bool != 0) {
		@lshGetAnimTimes(var_246_string, var_251_float, var_252_float);
		@lshPlayAnimation(var_251_float, var_252_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_246_string);
	}
	
}


void func_1162(string var_224_string, bool var_225_bool)
{
	bool var_231_bool; float var_232_float; float var_233_float;
	@lshHasAnimation(var_231_bool, var_224_string);
	if(var_231_bool != 0) {
		@lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		@lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_224_string);
	}
	
}


void func_907(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_897(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


// @pe
void func_1423(bool var_283_bool)
{
	int var_285_int;
	func_1215(var_285_int, "b2q03_1");
	if(var_285_int == 2)
		var_283_bool = true;
	var_283_bool = false;
}


void func_1295(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_659(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_916(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1304(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1177(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1540(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_664(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_882(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_921(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1205(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1540(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_984;
		@LookAsyncCamera("head");
	}
Label_984:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1435(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 588, 2, 531074);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1487(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1311(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1304(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_806(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_916(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1311(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_916(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1304(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_861;
			goto Label_872;
			}
				Label_861:
					bool var_45_bool;
					func_875(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_867;
			}
		}
	Label_872:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_867:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1192(void)
{
	bool var_10_bool;
	func_1540(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1448(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 590, 2, 531076);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_1487(var_67_bool, var_68_object, 588);
}
EMIT "Stack[-1] = 0";


void func_1066(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1177(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_686(void)
{
	float var_310_float;
	@rand(var_310_float, 8, 16);
	@SetTimer(10, var_310_float);
}


void func_1199(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1328(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1205(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1334(void)
{
	@SetVariable("oob2MariaKabak1", 1);
}


void func_695(void)
{
	@KillTimer(10);
}


void func_1461(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 589, 2, 531075);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_1487(var_45_bool, var_46_object, 588);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1340(void)
{
	@SetVariable("b2q03_1", 1);
	func_1435();
	func_1461();
}


void func_1215(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


void func_1474(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1220(int var_92_int, int var_93_int)
{
	object var_95_object;
	@CreateIntVector(var_95_object);
	var_95_object->add(var_92_int);
	var_95_object->add(var_93_int);
	@SendWorldWndMessage(3, var_95_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_581(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1352(void)
{
	@SetVariable("b2q03_1", 1000);
	func_1448();
	bool var_70_bool;
	func_1283(var_70_bool, "quest_b2_03", "fail");
}


void func_1103(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1295(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1177(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1232(object var_79_object, int var_80_int)
{
	int var_82_int;
	object var_83_object;
	var_79_object = var_83_object;
	int var_85_int;
	func_890(var_83_object, "money", var_85_int);
	if(var_85_int > 0) {
		@GetInvItemByName(var_82_int, "Money");
		int var_92_int; int var_93_int;
		var_82_int = var_92_int;
		var_80_int = var_93_int;
		func_1220(var_92_int, var_93_int);
	}
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool = false;
		bool var_201_bool;
		func_1399(var_1_object);
		if(var_201_bool != 0) {
			bool var_209_bool;
			func_1387(var_1_object);
			if(!var_209_bool) //@nz
				var_200_bool = true;
		}
		if(var_200_bool != 0) {
			object var_216_object; object var_217_object;
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_1334();
			func_224(var_194_object, "Staring");
			var_0_object->SetMessage(531063); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531064, 32569, 32389); //@t
			var_0_object->AddReply(531269, 32569, 32581); //@t
		} else {
					bool var_262_bool;
					func_1387(var_1_object);
					if(var_262_bool == 0) goto Label_152;
					func_224(var_194_object, "Angry");
					var_0_object->SetMessage(531077); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531078, -1, 32400); //@t
					var_0_object->AddReply(531255, -1, 32571); //@t
		}
	}
Label_194:
	for(;;) {
		bool var_244_bool;
		func_1540(var_244_bool);
		if(var_244_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1146(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_223;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_223:
			return 0;

		}

	}
	
Label_152:
	func_224(var_194_object, "Mysterious");
	var_0_object->SetMessage(531066); //@t
	var_0_object->ClearReplies(); //@t
	bool var_274_bool;
	func_1411(var_1_object);
	if(var_274_bool != 0)
		var_0_object->AddReply(531067, 32395, 32392); //@t
	bool var_283_bool;
	func_1423(var_1_object);
	if(var_283_bool != 0)
		var_0_object->AddReply(531068, 32397, 32393); //@t
	var_0_object->AddReply(531069, -1, 32394); //@t
	var_0_object->AddReply(531256, -1, 32572); //@t
	goto Label_194;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1487(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1474(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1366(object var_97_object)
{
	@Trace("recipe5 is given");
	object var_100_object;
	var_97_object = var_100_object;
	func_1270(var_100_object, "recipe5", 1);
}


void func_990(void)
{
	bool var_301_bool;
	@CameraSwitchToNormal(true);
	bool var_303_bool;
	func_1540(var_303_bool);
	if(var_303_bool != 0) {
	} else {
		@HasAnimationTrack(var_301_bool, "head");
		if(var_301_bool == 0) goto Label_1007;
		@UnlookAsync("head");
	}
Label_1007:
	
}


// @pe
void func_224(object var_2_object, string var_220_string)
{
	bool var_221_bool;
	func_1540(var_221_bool);
	if(!var_221_bool) //@nz
		return 0;
	if(var_220_string == var_2_object)
		return 0;
	string var_224_string; bool var_225_bool;
	var_220_string = var_224_string;
	if(var_220_string == "")
		var_225_bool = false;
	else
		var_225_bool = true;
	func_1162(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	
}


// @pe
void func_1377(object var_76_object)
{
	@Trace("money 5000 is given");
	object var_79_object;
	var_76_object = var_79_object;
	func_1232(var_79_object, 5000);
}


// @pe
void func_737(void)
{
	func_877();
	func_695();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1251(object var_105_object, object var_106_object, int var_107_int)
{
	int var_111_int;
	var_106_object->GetItemID(var_111_int);
	int var_112_int;
	@GetInvItemProperty(var_112_int, var_111_int, "Category");
	bool var_113_bool;
	var_105_object->AddItem(var_113_bool, var_106_object, var_112_int, var_107_int);
	if(!var_113_bool) { //@nz
		var_105_object->DropItems(var_106_object, var_107_int);
	} else {
		int var_116_int; int var_117_int;
		var_111_int = var_116_int;
		var_107_int = var_117_int;
		func_1220(var_116_int, var_117_int);
	}
	
}


void func_1515(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x5fa";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1387(bool var_209_bool)
{
	int var_211_int;
	func_1215(var_211_int, "b2q03");
	if(var_211_int == 1000)
		var_209_bool = true;
	var_209_bool = false;
}


void func_877(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_875(bool var_45_bool)
{
	var_45_bool = true;
}


void func_1008(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1066(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1103(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1103(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1066(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1064;
	
Label_1064:
	var_98_bool = true;
	
}


void func_752(void)
{
	@StopGroup0();
	func_695();
	func_1146("Neutral");
	func_686();
}


void func_882(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_630(object var_0_object)
{
	bool var_7_bool;
	func_916(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_806();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1399(bool var_201_bool)
{
	int var_203_int;
	func_1215(var_203_int, "oob2MariaKabak1");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_1270(object var_100_object, string var_101_string, int var_102_int)
{
	object var_104_object;
	@CreateInvItem(var_104_object);
	var_104_object->SetItemName(var_101_string);
	object var_105_object; object var_106_object; int var_107_int;
	var_100_object = var_105_object;
	var_104_object = var_106_object;
	var_102_int = var_107_int;
	func_1251(var_105_object, var_106_object, var_107_int);
}
EMIT "Stack[-1] = 0";


void func_890(object var_83_object, string var_84_string, int var_85_int)
{
	int var_87_int;
	var_83_object->GetProperty(var_84_string, var_87_int);
	var_83_object->SetProperty(var_84_string, (var_87_int + var_85_int));
}


void func_1532(int var_86_int)
{
	var_86_int = 515543;
}


void func_1534(int var_85_int)
{
	var_85_int = 502868;
}


