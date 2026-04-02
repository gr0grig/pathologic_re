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
			func_1060();
			if(var_8_bool == 27115) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1121();
			}
			if(var_8_bool == 27116) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1130();
			}
			if(var_8_bool == 44698) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1121();
			}
			if(var_7_cvector == 27114) {
				bool var_60_bool;
				func_1145(var_1_object);
				if(var_60_bool != 0) {
					object var_68_object; object var_69_object;
					var_68_object = var_1_object;
					var_69_object = var_0_object;
					func_1139();
					func_169(var_8_bool, "Agression");
					var_0_object->SetMessage(525808); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(542324, 44685, 44683); //@t
					var_0_object->AddReply(542325, 44686, 44684); //@t
					return 0;
				}
				func_169(var_8_bool, "Smile");
				var_0_object->SetMessage(525811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525812, -1, 27118); //@t
				var_0_object->AddReply(529232, -1, 30686); //@t
				return 0;
			}
			if(var_7_cvector == 44686) {
				func_169(var_8_bool, "Agression");
				var_0_object->SetMessage(542327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542330, 44690, 44689); //@t
				var_0_object->AddReply(542332, 44692, 44691); //@t
				return 0;
			}
			if(var_7_cvector == 44692) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(542333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542334, 44694, 44693); //@t
				return 0;
			}
			if(var_7_cvector == 44694) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(542335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542336, 44697, 44695); //@t
				var_0_object->AddReply(542337, 44697, 44696); //@t
				return 0;
			}
			if(var_7_cvector == 44697) {
				func_169(var_8_bool, "Agression");
				var_0_object->SetMessage(542338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542339, -1, 44698); //@t
				var_0_object->AddReply(542340, 44690, 44700); //@t
				return 0;
			}
			if(var_7_cvector == 44690) {
				func_169(var_8_bool, "Doubt");
				var_0_object->SetMessage(542331); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542341, 44704, 44702); //@t
				var_0_object->AddReply(542342, 44704, 44703); //@t
				return 0;
			}
			if(var_7_cvector == 44704) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(542343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525810, -1, 27116); //@t
				return 0;
			}
			if(var_7_cvector == 44685) {
				func_169(var_8_bool, "Sorrow");
				var_0_object->SetMessage(542326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542328, 44688, 44687); //@t
				var_0_object->AddReply(542344, 44688, 44706); //@t
				return 0;
			}
			if(var_7_cvector == 44688) {
				func_169(var_8_bool, "Neutral");
				var_0_object->SetMessage(542329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525809, -1, 27115); //@t
				return 0;
			}
			var_3_string = true;
			bool var_175_bool;
			func_1249(var_175_bool);
			if(var_175_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc0";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_505(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1067(var_13_object);
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
			func_1067(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_612();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_627();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_570();
			bool var_11_bool = false;
			bool var_12_bool;
			func_784(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_539(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_519(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1067(var_53_object);
					var_53_object = var_52_object;
					func_934(var_51_bool, var_52_object);
				}
			} else {
				func_534(var_7_int);
				func_561();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_561();
		else
			func_1014("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_752();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_775(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_456(var_25_object);
			func_1014("Neutral");
			func_570();
			func_561();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_789(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1243(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1241(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1245(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1247(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1224(var_89_int);
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
	func_1067(var_100_object);
	var_100_object = var_99_object;
	func_876(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_262_bool = !var_36_bool; //@nz
		if(var_262_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_263_object;
	var_27_object = var_263_object;
	func_858();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1145(bool var_200_bool)
{
	int var_202_int;
	func_1083(var_202_int, "ook4BurahIndoor1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1157(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 506, 2, 529270);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_1196(var_51_bool, var_52_object, 384);
}
EMIT "Stack[-1] = 0";


void func_1030(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_519(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_775(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_775(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_765(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_784(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1170(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 505, 2, 529269);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1196(var_22_bool, var_23_object, 384);
}
EMIT "Stack[-1] = 0";


void func_789(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1073(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1249(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_852;
		@LookAsyncCamera("head");
	}
Label_852:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_534(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1045(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1249(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_539(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_757(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1183(object var_31_object)
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


void func_1060(void)
{
	bool var_10_bool;
	func_1249(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_934(bool var_109_bool, object var_110_object)
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
		func_1045(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_169(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1249(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_1030(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_681(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_784(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1104(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_784(var_41_bool);
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
			func_1097(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_736;
			goto Label_747;
			}
				Label_736:
					bool var_45_bool;
					func_750(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_742;
			}
		}
	Label_747:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_742:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1067(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1196(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1183(var_31_object);
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


void func_561(void)
{
	float var_274_float;
	@rand(var_274_float, 8, 16);
	@SetTimer(10, var_274_float);
}


void func_1073(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_570(void)
{
	@KillTimer(10);
}


void func_1083(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1088(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1224(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4d7";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_456(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1097(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_971(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1088(var_153_int);
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
		func_1045(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1104(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1097(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1145(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1139();
			func_169(var_194_object, "Agression");
			var_0_object->SetMessage(525808); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(542324, 44685, 44683); //@t
			var_0_object->AddReply(542325, 44686, 44684); //@t
		} else {
					func_169(var_194_object, "Smile");
					var_0_object->SetMessage(525811); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525812, -1, 27118); //@t
					var_0_object->AddReply(529232, -1, 30686); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_1249(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1014(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_168;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_168:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1241(int var_86_int)
{
	var_86_int = 515592;
}


void func_858(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal(true);
	bool var_267_bool;
	func_1249(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_875;
		@UnlookAsync("head");
	}
Label_875:
	
}


void func_1243(int var_85_int)
{
	var_85_int = 511961;
}


void func_1245(string var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
}


void func_1247(string var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
}


void func_1249(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1121(void)
{
	@SetVariable("k4q03", 3);
	func_1170();
}


// @pe
void func_612(void)
{
	func_752();
	func_570();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1130(void)
{
	@SetVariable("k4q03", 4);
	func_1157();
}


void func_876(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_934(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_971(var_140_bool, var_141_object);
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
		func_971(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_934(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_932;
	
Label_932:
	var_98_bool = true;
	
}


void func_750(bool var_45_bool)
{
	var_45_bool = true;
}


void func_752(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1139(void)
{
	@SetVariable("ook4BurahIndoor1", 1);
}


void func_627(void)
{
	@StopGroup0();
	func_570();
	func_1014("Neutral");
	func_561();
}


void func_757(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1014(string var_238_string)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_238_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


void func_505(object var_0_object)
{
	bool var_7_bool;
	func_784(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_681();
	}
}
EMIT "Return(); Pop(0)";


void func_765(bool var_15_bool, cvector var_16_cvector)
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


