// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_783();
			if(var_13_bool == 16264) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_849();
			}
			if(var_13_bool == 16277) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_811();
			}
			if(var_12_bool == 16263) {
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_817();
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(515005); //@t
				var_0_object->ClearReplies(); //@t
				bool var_95_bool;
				func_867(var_1_object);
				if(var_95_bool != 0)
					var_0_object->AddReply(515006, 42522, 16264); //@t
				bool var_104_bool;
				func_855(var_1_object);
				if(var_104_bool != 0)
					var_0_object->AddReply(515018, 16278, 16277); //@t
				var_0_object->AddReply(515017, -1, 16276); //@t
				return 0;
			}
			if(var_12_bool == 16278) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(515019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515020, -1, 16279); //@t
				var_0_object->AddReply(515021, -1, 16280); //@t
				return 0;
			}
			if(var_12_bool == 42522) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(540515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540516, 16265, 42523); //@t
				var_0_object->AddReply(540517, 42525, 42524); //@t
				return 0;
			}
			if(var_12_bool == 42525) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(540518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540519, -1, 42526); //@t
				return 0;
			}
			if(var_12_bool == 16265) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(515007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515008, 16267, 16266); //@t
				return 0;
			}
			if(var_12_bool == 16267) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(515009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515010, -1, 16268); //@t
				var_0_object->AddReply(515011, -1, 16269); //@t
				var_0_object->AddReply(515012, 16271, 16270); //@t
				var_0_object->AddReply(515016, 16271, 16274); //@t
				return 0;
			}
			if(var_12_bool == 16271) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(515013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515014, -1, 16272); //@t
				var_0_object->AddReply(515015, -1, 16273); //@t
				return 0;
			}
			var_3_string = true;
			bool var_176_bool;
			func_975(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_407(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_541(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_425(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_541(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_474(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_790(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_503(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_772(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_654(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_969(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_967(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_971(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_973(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_950(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_199_bool = !var_26_bool; //@nz
		if(var_199_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_200_object;
	var_17_object = var_200_object;
	func_723();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_641(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_636(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_772(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_649(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_905(bool var_110_bool, object var_111_object, int var_112_int)
{
	object var_119_object;
	func_892(var_119_object);
	object var_116_object;
	var_119_object = var_116_object;
	object var_117_object;
	var_116_object->Find(var_112_int, var_117_object);
	if(!var_117_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_112_int);
		var_110_bool = false;
	}
	var_117_object->AddChild(var_111_object);
	@SendWorldWndMessage(7);
	int var_118_int;
	var_111_object->GetCategory(var_118_int);
	@SetDiarySection(var_118_int);
	var_110_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_654(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_796(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_975(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_717;
		@LookAsyncCamera("head");
	}
Label_717:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_783(void)
{
	bool var_15_bool;
	func_975(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_790(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_407(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_476(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


// @pe
void func_152(object var_2_object, string var_142_string)
{
	bool var_143_bool;
	func_975(var_143_bool);
	if(!var_143_bool) //@nz
		return 0;
	if(var_142_string == var_2_object)
		return 0;
	string var_146_string; bool var_147_bool;
	var_142_string = var_146_string;
	if(var_142_string == "")
		var_147_bool = false;
	else
		var_147_bool = true;
	func_757(var_146_string, var_147_bool);
	var_2_object = var_142_string;
	
}


void func_796(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_541(object var_2_object, string var_3_string)
{
	func_636();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_933(bool var_128_bool, int var_129_int)
{
	object var_134_object;
	func_892(var_134_object);
	object var_132_object;
	var_134_object = var_132_object;
	object var_133_object;
	var_132_object->Find(var_129_int, var_133_object);
	if(!var_133_object) //@nz
		var_128_bool = false;
	var_133_object->Remove();
	var_128_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_806(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_425(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_649(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_474(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_790(var_21_object);
		@RemoveActor(var_21_object);
	}
}


// @pe
void func_811(void)
{
	@SetVariable("ood12Littlegirl2", 1);
}


void func_555(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_649(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_984(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_649(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_602;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_977(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_631;
				}
			} else if(var_38_int != 0) {
				goto Label_631;
			}
			}
					bool var_71_bool;
					func_634(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_626;
			}
		}
	Label_631:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_626:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_817(void)
{
	int var_97_int;
	func_806(var_97_int, "D_Mission5");
	if(var_97_int == 0) {
		@SetVariable("D_Mission5", 1);
		func_879();
		bool var_128_bool;
		func_933(var_128_bool, 30);
		bool var_136_bool;
		func_933(var_136_bool, 3);
		bool var_138_bool;
		func_933(var_138_bool, 4);
		bool var_140_bool;
		func_933(var_140_bool, 5);
	}
}


void func_950(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3c5";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_967(int var_76_int)
{
	var_76_int = 515561;
}


void func_969(int var_75_int)
{
	var_75_int = 503346;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		object var_95_object; object var_96_object;
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_817();
		func_152(var_89_object, "Neutral");
		var_0_object->SetMessage(515005); //@t
		var_0_object->ClearReplies(); //@t
		bool var_160_bool;
		func_867(var_1_object);
		if(var_160_bool != 0)
			var_0_object->AddReply(515006, 42522, 16264); //@t
		bool var_169_bool;
		func_855(var_1_object);
		if(var_169_bool != 0)
			var_0_object->AddReply(515018, 16278, 16277); //@t
		var_0_object->AddReply(515017, -1, 16276); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_122:
	bool var_181_bool;
	func_975(var_181_bool);
	if(var_181_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_741(var_2_object);
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


void func_971(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_973(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_975(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_849(void)
{
	@SetVariable("ood12Littlegirl1", 1);
}


void func_977(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_723(void)
{
	bool var_202_bool;
	@CameraSwitchToNormal(true);
	bool var_204_bool;
	func_975(var_204_bool);
	if(var_204_bool != 0) {
	} else {
		@HasAnimationTrack(var_202_bool, "head");
		if(var_202_bool == 0) goto Label_740;
		@UnlookAsync("head");
	}
Label_740:
	
}


// @pe
void func_855(bool var_169_bool)
{
	int var_171_int;
	func_806(var_171_int, "ood12Littlegirl2");
	if(var_171_int == 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


void func_984(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_977(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_474(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_476(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_649(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_555();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_867(bool var_160_bool)
{
	int var_162_int;
	func_806(var_162_int, "ood12Littlegirl1");
	if(var_162_int == 0) {
		var_160_bool = true;
		return 0;
	}
	var_160_bool = false;
}


void func_741(string var_183_string)
{
	bool var_187_bool; float var_188_float; float var_189_float;
	@lshHasAnimation(var_187_bool, var_183_string);
	if(var_187_bool != 0) {
		@lshGetAnimTimes(var_183_string, var_188_float, var_189_float);
		@lshPlayAnimation(var_188_float, var_189_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_183_string);
	}
	
}


void func_879(void)
{
	object var_106_object;
	@CreateDiaryEntry(var_106_object, 561, 0, 530575);
	bool var_110_bool; object var_111_object;
	var_106_object = var_111_object;
	func_905(var_110_bool, var_111_object, -1);
}
EMIT "Stack[-1] = 0";


void func_757(string var_146_string, bool var_147_bool)
{
	bool var_153_bool; float var_154_float; float var_155_float;
	@lshHasAnimation(var_153_bool, var_146_string);
	if(var_153_bool != 0) {
		@lshGetAnimTimes(var_146_string, var_154_float, var_155_float);
		@lshPlayAnimation(var_154_float, var_155_float, var_147_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_146_string);
	}
	
}


void func_503(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_641(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_634(bool var_71_bool)
{
	var_71_bool = true;
}


void func_892(object var_119_object)
{
	object var_121_object;
	@GetDiaryRoot(var_121_object);
	if(!var_121_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_119_object = false;
	}
	var_121_object = var_119_object;
}
EMIT "Stack[-1] = 0";


