// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_755();
			if(var_11_object == 27064) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_885();
				object var_43_object = var_1_object;
				func_901(var_0_object);
			}
			if(var_11_object == 43039) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_885();
			}
			if(var_11_object == 27080) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_879();
			}
			if(var_11_object == 27082) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_894();
			}
			if(var_10_bool == 27061) {
				bool var_105_bool = false;
				bool var_106_bool;
				func_908(var_1_object);
				if(var_106_bool != 0) {
					bool var_114_bool;
					func_944(var_1_object);
					if(!var_114_bool) //@nz
						var_105_bool = true;
				}
				if(var_105_bool != 0) {
					func_181(var_11_object, "Neutral");
					var_0_object->SetMessage(525749); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525750, 27063, 27062); //@t
					var_0_object->AddReply(540951, 43036, 43035); //@t
					return 0;
				}
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525753); //@t
				var_0_object->ClearReplies(); //@t
				bool var_142_bool = false;
				bool var_143_bool;
				func_920(var_1_object);
				if(var_143_bool != 0) {
					bool var_149_bool;
					func_932(var_1_object);
					if(var_149_bool != 0)
						var_142_bool = true;
				}
				if(var_142_bool != 0)
					var_0_object->AddReply(525768, 27081, 27080); //@t
				var_0_object->AddReply(525754, -1, 27066); //@t
				return 0;
			}
			if(var_10_bool == 27081) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525770, -1, 27082); //@t
				return 0;
			}
			if(var_10_bool == 43036) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(540952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540953, 27063, 43037); //@t
				return 0;
			}
			if(var_10_bool == 27063) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529230, 30685, 30684); //@t
				return 0;
			}
			if(var_10_bool == 30685) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(529231); //@t
				var_0_object->ClearReplies(); //@t
				bool var_186_bool;
				func_956(var_186_bool, var_1_object);
				if(var_186_bool != 0)
					var_0_object->AddReply(525752, -1, 27064); //@t
				var_0_object->AddReply(540954, -1, 43039); //@t
				return 0;
			}
			var_3_string = true;
			bool var_201_bool;
			func_853(var_201_bool);
			if(var_201_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_434(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_499(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_461(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_744(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_646(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_847(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_845(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_849(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_851(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1031(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_161_bool = !var_24_bool; //@nz
		if(var_161_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_162_object;
	var_15_object = var_162_object;
	func_714();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_641(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_513(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_641(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_862(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_641(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_560;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_855(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_589;
				}
			} else if(var_27_int != 0) {
				goto Label_589;
			}
			}
					bool var_60_bool;
					func_592(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_584;
			}
		}
	Label_589:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_584:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


// @pe
void func_772(float var_74_float, float var_75_float, float var_76_float, float var_77_float)
{
	if(var_75_float < var_76_float) {
		var_76_float = var_74_float;
		return 0;
	}
	if(var_75_float > var_77_float) {
		var_77_float = var_74_float;
		return 0;
	}
	var_75_float = var_74_float;
}


// @pe
void func_901(object var_43_object)
{
	object var_46_object;
	var_43_object = var_46_object;
	bool var_45_bool;
	func_788(var_45_bool, var_46_object, 0.1);
}


void func_646(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_762(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_853(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_708;
		@LookAsyncCamera("head");
	}
Label_708:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_1031(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x416";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_908(bool var_93_bool)
{
	int var_95_int;
	func_783(var_95_int, "k4q02");
	if(var_95_int == 1)
		var_93_bool = true;
	var_93_bool = false;
}


void func_783(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


// @pe
void func_788(bool var_45_bool, object var_46_object, float var_47_float)
{
	if(!var_46_object) { //@nz
		var_45_bool = false;
		return 0;
	}
	if(var_47_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_47_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_52_float;
		var_47_float = var_52_float;
		func_823(var_52_float);
		bool var_56_bool; object var_57_object; float var_59_float;
		var_46_object = var_57_object;
		var_47_float = var_59_float;
		func_619(var_56_bool, var_57_object, "reputation", var_59_float, (float)0, (float)1);
		var_45_bool = true;
		return 0;

	}
	
	var_45_bool = false;
}


// @pe
void func_920(bool var_143_bool)
{
	int var_145_int;
	func_783(var_145_int, "k4q02");
	if(var_145_int == 2)
		var_143_bool = true;
	var_143_bool = false;
}


// @pe
void func_932(bool var_149_bool)
{
	int var_151_int;
	func_783(var_151_int, "ook4BirdmaskTheater1");
	if(var_151_int == 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


// @pe
void func_944(bool var_101_bool)
{
	int var_103_int;
	func_783(var_103_int, "k4q02BirdmaskGotoMaria");
	if(var_103_int != 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


// @pe
void func_434(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_641(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_513();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_181(object var_2_object, string var_108_string)
{
	bool var_109_bool;
	func_853(var_109_bool);
	if(!var_109_bool) //@nz
		return 0;
	if(var_108_string == var_2_object)
		return 0;
	string var_112_string; bool var_113_bool;
	var_108_string = var_112_string;
	if(var_108_string == "")
		var_113_bool = false;
	else
		var_113_bool = true;
	func_738(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	
}


void func_823(float var_52_float)
{
	object var_54_object;
	@CreateFloatVector(var_54_object);
	var_54_object->add(var_52_float);
	@SendWorldWndMessage(16, var_54_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_956(bool var_186_bool, object var_187_object)
{
	object var_189_object;
	var_187_object = var_189_object;
	bool var_188_bool;
	func_966(var_188_bool, var_189_object);
	if(var_188_bool != 0) {
		var_186_bool = true;
		return 0;
	}
	var_186_bool = false;
}


void func_833(bool var_97_bool, string var_98_string, string var_99_string)
{
	object var_101_object;
	@FindActor(var_101_object, var_98_string);
	if(var_101_object == null)
		var_97_bool = false;
	@Trigger(var_101_object, var_99_string);
	var_97_bool = true;
}
EMIT "Stack[-1] = 0";


void func_966(bool var_188_bool, object var_189_object)
{
	float var_191_float;
	var_189_object->GetProperty("money", var_191_float);
	if(var_191_float >= 500)
		var_188_bool = true;
	var_188_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool = false;
		bool var_93_bool;
		func_908(var_1_object);
		if(var_93_bool != 0) {
			bool var_101_bool;
			func_944(var_1_object);
			if(!var_101_bool) //@nz
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			func_181(var_86_object, "Neutral");
			var_0_object->SetMessage(525749); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525750, 27063, 27062); //@t
			var_0_object->AddReply(540951, 43036, 43035); //@t
		} else {
					func_181(var_86_object, "Neutral");
					var_0_object->SetMessage(525753); //@t
					var_0_object->ClearReplies(); //@t
					bool var_142_bool = false;
					bool var_143_bool;
					func_920(var_1_object);
					if(var_143_bool != 0) {
						bool var_149_bool;
						func_932(var_1_object);
						if(var_149_bool != 0)
							var_142_bool = true;
					}
					if(var_142_bool != 0)
						var_0_object->AddReply(525768, 27081, 27080); //@t
					var_0_object->AddReply(525754, -1, 27066); //@t
		}
	}
	for(;;) {
		bool var_127_bool;
		func_853(var_127_bool);
		if(var_127_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_731(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_180;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_180:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_714(void)
{
	bool var_164_bool;
	@CameraSwitchToNormal();
	bool var_165_bool;
	func_853(var_165_bool);
	if(var_165_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_730;
		@UnlookAsync("head");
	}
Label_730:
	
}


void func_845(int var_73_int)
{
	var_73_int = 515571;
}


void func_461(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_599(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_847(int var_72_int)
{
	var_72_int = 504029;
}


void func_592(bool var_60_bool)
{
	var_60_bool = true;
}


void func_849(string var_74_string)
{
	var_74_string = "ui/NPC_bmask.png";
}


void func_594(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_851(string var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png";
}


void func_977(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 380, 2, 525786);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1003(var_25_bool, var_26_object, 378);
}
EMIT "Stack[-1] = 0";


void func_853(bool var_67_bool)
{
	var_67_bool = false;
}


void func_599(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_855(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_731(string var_129_string)
{
	float var_132_float; float var_133_float;
	@lshGetAnimTimes(var_129_string, var_132_float, var_133_float);
	@lshPlayAnimation(var_132_float, var_133_float, false);
}


void func_862(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_855(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_607(bool var_64_bool, object var_65_object, string var_66_string)
{
	var_71_bool = IsFuncExist(var_65_object, "HasProperty", 2);
	if(!var_71_bool) { //@nz
		var_64_bool = false;
		return 2;
	}
	bool var_68_bool;
	var_65_object->HasProperty(var_66_string, var_68_bool);
	var_68_bool = var_64_bool;
}


void func_990(object var_34_object)
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


void func_738(string var_112_string, bool var_113_bool)
{
	float var_118_float; float var_119_float;
	@lshGetAnimTimes(var_112_string, var_118_float, var_119_float);
	@lshPlayAnimation(var_118_float, var_119_float, var_113_bool);
}


void func_744(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_619(bool var_56_bool, object var_57_object, string var_58_string, float var_59_float, float var_60_float, float var_61_float)
{
	object var_65_object;
	var_57_object = var_65_object;
	string var_66_string;
	var_58_string = var_66_string;
	bool var_64_bool;
	func_607(var_64_bool, var_65_object, var_66_string);
	if(!var_64_bool) //@nz
		var_56_bool = false;
	float var_63_float;
	var_57_object->GetProperty(var_58_string, var_63_float);
	float var_74_float; float var_76_float; float var_77_float;
	var_60_float = var_76_float;
	var_61_float = var_77_float;
	func_772(var_74_float, (var_63_float + var_59_float), var_76_float, var_77_float);
	var_57_object->SetProperty(var_58_string, var_74_float);
	var_56_bool = true;
}


void func_1003(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_990(var_34_object);
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


// @pe
void func_879(void)
{
	@SetVariable("ook4BirdmaskTheater1", 1);
}


void func_755(void)
{
	bool var_13_bool;
	func_853(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_499(object var_2_object, string var_3_string)
{
	func_594();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_885(void)
{
	@SetVariable("k4q02BirdmaskGotoMaria", 1);
	func_977();
}


void func_762(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_894(void)
{
	bool var_97_bool;
	func_833(var_97_bool, "quest_k4_02", "init_theater");
}


