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
			func_958();
			if(var_7_bool == 41218) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_1024();
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1030();
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_1042();
			}
			if(var_7_bool == 41204) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_1018();
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_1030();
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_1037();
			}
			if(var_7_bool == 41213) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_1012();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_1030();
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_1047();
			}
			if(var_7_bool == 42255) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_1052();
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_1030();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_1058();
			}
			if(var_6_int == 41196) {
				bool var_109_bool;
				func_1063(var_1_object);
				if(!var_109_bool) { //@nz
					func_195(var_7_bool, "Doubt");
					var_0_object->SetMessage(539253); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539254, 41198, 41197); //@t
					var_0_object->AddReply(539271, 41215, 41214); //@t
					bool var_142_bool;
					func_1087(var_1_object);
					if(var_142_bool != 0)
						var_0_object->AddReply(539257, 41201, 41200); //@t
					bool var_151_bool;
					func_1075(var_1_object);
					if(var_151_bool != 0)
						var_0_object->AddReply(539262, 41206, 41205); //@t
					var_0_object->AddReply(540270, 42254, 42253); //@t
					return 0;
				}
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(539276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539277, -1, 41220); //@t
				var_0_object->AddReply(542911, -1, 45342); //@t
				var_0_object->AddReply(542912, -1, 45343); //@t
				return 0;
			}
			if(var_6_int == 42254) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(540271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542922, 45358, 45356); //@t
				var_0_object->AddReply(542923, 45358, 45357); //@t
				var_0_object->AddReply(542925, 45358, 45359); //@t
				return 0;
			}
			if(var_6_int == 45358) {
				func_195(var_7_bool, "Doubt");
				var_0_object->SetMessage(542924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540272, -1, 42255); //@t
				return 0;
			}
			if(var_6_int == 41206) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(539263); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542926, 45363, 45362); //@t
				return 0;
			}
			if(var_6_int == 45363) {
				func_195(var_7_bool, "Doubt");
				var_0_object->SetMessage(542927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539270, -1, 41213); //@t
				return 0;
			}
			if(var_6_int == 41201) {
				func_195(var_7_bool, "Untrust");
				var_0_object->SetMessage(539258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539259, 41203, 41202); //@t
				return 0;
			}
			if(var_6_int == 41203) {
				func_195(var_7_bool, "Untrust");
				var_0_object->SetMessage(539260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539261, -1, 41204); //@t
				return 0;
			}
			if(var_6_int == 41215) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(539272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539273, 41217, 41216); //@t
				var_0_object->AddReply(542914, 45346, 45345); //@t
				return 0;
			}
			if(var_6_int == 45346) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(542915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542916, 41217, 45347); //@t
				return 0;
			}
			if(var_6_int == 41217) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(539274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539275, -1, 41218); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=134";
			EMIT "Call2 0xc3";
			EMIT "Pop(1)";
			EMIT "Push((int) 542917)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=112";
			EMIT "Pop(0)";
			EMIT "Push((int) 542918)";
			EMIT "Push((int) 41217)";
			EMIT "Push((int) 45349)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=125";
			EMIT "Pop(3)";
			EMIT "Push((int) 542919)";
			EMIT "Push((int) 45351)";
			EMIT "Push((int) 45350)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=125";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_6_int == 45351) {
				func_195(var_7_bool, "Neutral");
				var_0_object->SetMessage(542920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542921, 41217, 45352); //@t
				return 0;
			}
			if(var_6_int == 41198) {
				func_195(var_7_bool, "Untrust");
				var_0_object->SetMessage(539255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539256, -1, 41199); //@t
				var_0_object->AddReply(542913, -1, 45344); //@t
				return 0;
			}
			var_3_string = true;
			bool var_263_bool;
			func_1217(var_263_bool);
			if(var_263_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xda";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_637();
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
				func_685(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_965(var_14_object);
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
			func_685(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_965(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


// @pe
void func_1024(void)
{
	@SetVariable("game_final", 3);
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_687(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1211(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1209(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1213(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1215(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1192(var_70_int);
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
	func_965(var_81_object);
	var_81_object = var_80_object;
	func_774(var_79_bool, var_80_object);
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
	func_756();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_774(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_832(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_869(var_121_bool, var_122_object);
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
		func_869(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_832(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_830;
	
Label_830:
	var_79_bool = true;
	
}


// @pe
void func_1030(void)
{
	func_986("isobor@door1", false);
}


void func_1164(bool var_35_bool, object var_36_object, int var_37_int)
{
	object var_44_object;
	func_1151(var_44_object);
	object var_41_object;
	var_44_object = var_41_object;
	object var_42_object;
	var_41_object->Find(var_37_int, var_42_object);
	if(!var_42_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_37_int);
		var_35_bool = false;
	}
	var_42_object->AddChild(var_36_object);
	@SendWorldWndMessage(7);
	int var_43_int;
	var_36_object->GetCategory(var_43_int);
	@SetDiarySection(var_43_int);
	var_35_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1037(void)
{
	func_1138();
}


void func_912(string var_237_string)
{
	bool var_241_bool; float var_242_float; float var_243_float;
	@lshHasAnimation(var_241_bool, var_237_string);
	if(var_241_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_242_float, var_243_float);
		@lshPlayAnimation(var_242_float, var_243_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


// @pe
void func_1042(void)
{
	func_1112();
}


// @pe
void func_1047(void)
{
	func_1125();
}


// @pe
void func_1052(void)
{
	@SetVariable("game_final", 4);
}


void func_928(string var_194_string, bool var_195_bool)
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
void func_1058(void)
{
	func_1099();
}


// @pe
void func_1063(bool var_181_bool)
{
	int var_183_int;
	func_981(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_1192(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x4b7";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_685(bool var_8_bool)
{
	var_8_bool = true;
}


void func_687(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_971(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1217(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_750;
		@LookAsyncCamera("head");
	}
Label_750:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_943(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1217(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


// @pe
void func_1075(bool var_223_bool)
{
	int var_225_int;
	func_981(var_225_int, "k12q01BurahInSobor");
	if(var_225_int != 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


void func_1209(int var_67_int)
{
	var_67_int = 515532;
}


void func_1211(int var_66_int)
{
	var_66_int = 514840;
}


void func_1213(string var_68_string)
{
	var_68_string = "ui/NPC_Block.png";
}


void func_958(void)
{
	bool var_9_bool;
	func_1217(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1087(bool var_214_bool)
{
	int var_216_int;
	func_981(var_216_int, "k12q01DankoInSobor");
	if(var_216_int != 0) {
		var_214_bool = true;
		return 0;
	}
	var_214_bool = false;
}


void func_1215(string var_69_string)
{
	var_69_string = "ui/NPC_Block_b.png";
}


void func_1217(bool var_61_bool)
{
	var_61_bool = true;
}


void func_832(bool var_90_bool, object var_91_object)
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
		func_943(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


// @pe
void func_195(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_1217(var_191_bool);
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
	func_928(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


void func_965(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_971(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_1099(void)
{
	object var_100_object;
	@CreateDiaryEntry(var_100_object, 774, 1, 540275);
	bool var_104_bool; object var_105_object;
	var_100_object = var_105_object;
	func_1164(var_104_bool, var_105_object, 729);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_1063(var_1_object);
		if(!var_181_bool) { //@nz
			func_195(var_175_object, "Doubt");
			var_0_object->SetMessage(539253); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539254, 41198, 41197); //@t
			var_0_object->AddReply(539271, 41215, 41214); //@t
			bool var_214_bool;
			func_1087(var_1_object);
			if(var_214_bool != 0)
				var_0_object->AddReply(539257, 41201, 41200); //@t
			bool var_223_bool;
			func_1075(var_1_object);
			if(var_223_bool != 0)
				var_0_object->AddReply(539262, 41206, 41205); //@t
			var_0_object->AddReply(540270, 42254, 42253); //@t
		} else {
					func_195(var_175_object, "Neutral");
					var_0_object->SetMessage(539276); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539277, -1, 41220); //@t
					var_0_object->AddReply(542911, -1, 45342); //@t
					var_0_object->AddReply(542912, -1, 45343); //@t
		}
	}
	for(;;) {
		bool var_235_bool;
		func_1217(var_235_bool);
		if(var_235_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_912(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_194;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_194:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_981(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_1112(void)
{
	object var_31_object;
	@CreateDiaryEntry(var_31_object, 734, 1, 539364);
	bool var_35_bool; object var_36_object;
	var_31_object = var_36_object;
	func_1164(var_35_bool, var_36_object, 729);
}
EMIT "Stack[-1] = 0";


void func_986(string var_18_string, bool var_19_bool)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(!var_21_object) //@nz
		@Trace(("Door " + var_18_string) + " not found");
	else
		var_21_object->SetProperty("locked", var_19_bool);
	
}
EMIT "Stack[-1] = 0";


void func_869(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_1003(var_134_int);
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
		func_943(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


void func_1125(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 732, 1, 539362);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_1164(var_86_bool, var_87_object, 729);
}
EMIT "Stack[-1] = 0";


void func_1003(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_1138(void)
{
	object var_64_object;
	@CreateDiaryEntry(var_64_object, 733, 1, 539363);
	bool var_68_bool; object var_69_object;
	var_64_object = var_69_object;
	func_1164(var_68_bool, var_69_object, 729);
}
EMIT "Stack[-1] = 0";


void func_756(void)
{
	bool var_267_bool;
	@CameraSwitchToNormal(true);
	bool var_269_bool;
	func_1217(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_267_bool, "head");
		if(var_267_bool == 0) goto Label_773;
		@UnlookAsync("head");
	}
Label_773:
	
}


// @pe
void func_1012(void)
{
	@SetVariable("game_final", 1);
}


// @pe
void func_1018(void)
{
	@SetVariable("game_final", 2);
}


void func_637(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1151(object var_44_object)
{
	object var_46_object;
	@GetDiaryRoot(var_46_object);
	if(!var_46_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_44_object = false;
	}
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


