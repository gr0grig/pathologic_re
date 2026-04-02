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
			func_1045();
			if(var_8_bool == 27767) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1106();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1112();
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1118();
			}
			if(var_7_cvector == 27765) {
				func_153(var_8_bool, "Neutral");
				var_0_object->SetMessage(526499); //@t
				var_0_object->ClearReplies(); //@t
				bool var_79_bool = false;
				bool var_80_bool;
				func_1145(var_1_object);
				if(var_80_bool != 0) {
					bool var_86_bool;
					func_1157(var_1_object);
					if(var_86_bool != 0)
						var_79_bool = true;
				}
				if(var_79_bool != 0)
					var_0_object->AddReply(526501, 27768, 27767); //@t
				var_0_object->AddReply(526500, -1, 27766); //@t
				return 0;
			}
			if(var_7_cvector == 27768) {
				func_153(var_8_bool, "Neutral");
				var_0_object->SetMessage(526502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526503, 30235, 27769); //@t
				var_0_object->AddReply(528825, 30242, 30241); //@t
				return 0;
			}
			if(var_7_cvector == 30242) {
				func_153(var_8_bool, "Neutral");
				var_0_object->SetMessage(528826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528827, 30235, 30243); //@t
				return 0;
			}
			if(var_7_cvector == 30235) {
				func_153(var_8_bool, "Neutral");
				var_0_object->SetMessage(528819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528820, 30246, 30236); //@t
				var_0_object->AddReply(528828, 30246, 30245); //@t
				return 0;
			}
			if(var_7_cvector == 30246) {
				func_153(var_8_bool, "Smile");
				var_0_object->SetMessage(528829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528830, 30248, 30247); //@t
				var_0_object->AddReply(528833, 30252, 30251); //@t
				return 0;
			}
			if(var_7_cvector == 30252) {
				func_153(var_8_bool, "Agression");
				var_0_object->SetMessage(528834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528835, 30248, 30253); //@t
				return 0;
			}
			if(var_7_cvector == 30248) {
				func_153(var_8_bool, "Sorrow");
				var_0_object->SetMessage(528831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528832, 30237, 30249); //@t
				var_0_object->AddReply(542482, 44868, 44867); //@t
				return 0;
			}
			if(var_7_cvector == 30237) {
				func_153(var_8_bool, "Sorrow");
				var_0_object->SetMessage(528821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528822, 30239, 30238); //@t
				return 0;
			}
			if(var_7_cvector == 30239) {
				func_153(var_8_bool, "Doubt");
				var_0_object->SetMessage(528823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528824, -1, 30240); //@t
				var_0_object->AddReply(541115, 44868, 43231); //@t
				return 0;
			}
			if(var_7_cvector == 44868) {
				func_153(var_8_bool, "Neutral");
				var_0_object->SetMessage(542483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542484, -1, 44870); //@t
				var_0_object->AddReply(542485, -1, 44871); //@t
				return 0;
			}
			var_3_string = true;
			bool var_179_bool;
			func_1248(var_179_bool);
			if(var_179_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb0";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_490(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1052(var_13_object);
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
			func_1052(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_597();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_612();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_555();
			bool var_11_bool = false;
			bool var_12_bool;
			func_769(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_524(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_504(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1052(var_53_object);
					var_53_object = var_52_object;
					func_919(var_51_bool, var_52_object);
				}
			} else {
				func_519(var_7_int);
				func_546();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_546();
		else
			func_999("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_737();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_760(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_441(var_25_object);
			func_999("Neutral");
			func_555();
			func_546();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_774(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1242(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1240(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1244(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1246(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1223(var_89_int);
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
	func_1052(var_100_object);
	var_100_object = var_99_object;
	func_861(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_257_bool = !var_36_bool; //@nz
		if(var_257_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_258_object;
	var_27_object = var_258_object;
	func_843();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_769(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1157(bool var_227_bool)
{
	int var_229_int;
	func_1068(var_229_int, "ook9BurahTermitnik2_1");
	if(var_229_int == 0) {
		var_227_bool = true;
		return 0;
	}
	var_227_bool = false;
}


void func_774(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1058(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1248(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_837;
		@LookAsyncCamera("head");
	}
Label_837:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_519(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1030(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1248(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_524(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_742(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1169(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 520, 1, 529812);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_1195(var_41_bool, var_42_object, 517);
}
EMIT "Stack[-1] = 0";


void func_1045(void)
{
	bool var_10_bool;
	func_1248(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_919(bool var_109_bool, object var_110_object)
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
		func_1030(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_153(object var_2_object, string var_200_string)
{
	bool var_201_bool;
	func_1248(var_201_bool);
	if(!var_201_bool) //@nz
		return 0;
	if(var_200_string == var_2_object)
		return 0;
	string var_204_string; bool var_205_bool;
	var_200_string = var_204_string;
	if(var_200_string == "")
		var_205_bool = false;
	else
		var_205_bool = true;
	func_1015(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	
}


void func_666(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_769(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1089(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_769(var_41_bool);
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
			func_1082(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_721;
			goto Label_732;
			}
				Label_721:
					bool var_45_bool;
					func_735(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_727;
			}
		}
	Label_732:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_727:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1052(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1182(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_546(void)
{
	float var_269_float;
	@rand(var_269_float, 8, 16);
	@SetTimer(10, var_269_float);
}


void func_1058(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_555(void)
{
	@KillTimer(10);
}


void func_1068(int var_221_int, string var_222_string)
{
	int var_224_int;
	@GetVariable(var_222_string, var_224_int);
	var_224_int = var_221_int;
}


void func_1195(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_1182(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SendWorldWndMessage(7);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1073(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_441(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1082(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_956(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1073(var_153_int);
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
		func_1030(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1089(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1082(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1223(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4d6";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_843(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal(true);
	bool var_262_bool;
	func_1248(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_860;
		@UnlookAsync("head");
	}
Label_860:
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		func_153(var_194_object, "Neutral");
		var_0_object->SetMessage(526499); //@t
		var_0_object->ClearReplies(); //@t
		bool var_218_bool = false;
		bool var_219_bool;
		func_1145(var_1_object);
		if(var_219_bool != 0) {
			bool var_227_bool;
			func_1157(var_1_object);
			if(var_227_bool != 0)
				var_218_bool = true;
		}
		if(var_218_bool != 0)
			var_0_object->AddReply(526501, 27768, 27767); //@t
		var_0_object->AddReply(526500, -1, 27766); //@t
		goto Label_123;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_123:
	bool var_239_bool;
	func_1248(var_239_bool);
	if(var_239_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_999(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_152;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_152:
		return 0;

	}
	
}


// @pe
void func_1106(void)
{
	@SetVariable("ook9BurahTermitnik2_1", 1);
}


// @pe
void func_597(void)
{
	func_737();
	func_555();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1240(int var_86_int)
{
	var_86_int = 515592;
}


// @pe
void func_1112(void)
{
	@SetVariable("k9q01BurahTalk", 1);
}


void func_1242(int var_85_int)
{
	var_85_int = 511961;
}


void func_1244(string var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
}


void func_861(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_919(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_956(var_140_bool, var_141_object);
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
		func_956(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_919(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_917;
	
Label_917:
	var_98_bool = true;
	
}


void func_1246(string var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
}


// @pe
void func_1118(void)
{
	bool var_23_bool = false;
	int var_24_int;
	func_1068(var_24_int, "k9q01BurahTalk");
	if(var_24_int != 0) {
		int var_30_int;
		func_1068(var_30_int, "k9q01DankoTalk");
		if(var_30_int != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		@SetVariable("k9q01", 3);
		func_1169();
	}
}


void func_1248(bool var_80_bool)
{
	var_80_bool = true;
}


void func_737(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_735(bool var_45_bool)
{
	var_45_bool = true;
}


void func_612(void)
{
	@StopGroup0();
	func_555();
	func_999("Neutral");
	func_546();
}


void func_742(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_999(string var_241_string)
{
	bool var_245_bool; float var_246_float; float var_247_float;
	@lshHasAnimation(var_245_bool, var_241_string);
	if(var_245_bool != 0) {
		@lshGetAnimTimes(var_241_string, var_246_float, var_247_float);
		@lshPlayAnimation(var_246_float, var_247_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_241_string);
	}
	
}


void func_490(object var_0_object)
{
	bool var_7_bool;
	func_769(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_666();
	}
}
EMIT "Return(); Pop(0)";


void func_750(bool var_15_bool, cvector var_16_cvector)
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


void func_760(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_750(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1015(string var_204_string, bool var_205_bool)
{
	bool var_211_bool; float var_212_float; float var_213_float;
	@lshHasAnimation(var_211_bool, var_204_string);
	if(var_211_bool != 0) {
		@lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		@lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_204_string);
	}
	
}


void func_504(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_760(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1145(bool var_219_bool)
{
	int var_221_int;
	func_1068(var_221_int, "k9q01");
	if(var_221_int == 2)
		var_219_bool = true;
	var_219_bool = false;
}


