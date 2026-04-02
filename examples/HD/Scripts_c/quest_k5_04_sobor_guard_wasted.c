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
			func_815();
			if(var_11_object == 41375) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_878();
			}
			if(var_11_object == 41380) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_887();
				object var_57_object = var_1_object;
				func_896(var_0_object);
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_902();
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_908();
			}
			if(var_10_bool == 41372) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539441); //@t
				var_0_object->ClearReplies(); //@t
				bool var_99_bool = true;
				bool var_100_bool = false;
				bool var_101_bool;
				func_927(var_1_object);
				if(var_101_bool != 0) {
					bool var_109_bool;
					func_939(var_1_object);
					if(!var_109_bool) //@nz
						var_100_bool = true;
				}
				if(var_100_bool != 1) {
					bool var_116_bool = false;
					bool var_117_bool;
					func_915(var_1_object);
					if(var_117_bool != 0) {
						bool var_123_bool;
						func_939(var_1_object);
						if(!var_123_bool) //@nz
							var_116_bool = true;
					}
					if(var_116_bool != 1)
						var_99_bool = false;
				}
				if(var_99_bool != 0)
					var_0_object->AddReply(539442, 41374, 41373); //@t
				bool var_129_bool = true;
				bool var_130_bool = false;
				bool var_131_bool = false;
				bool var_132_bool;
				func_927(var_1_object);
				if(var_132_bool != 0) {
					bool var_134_bool;
					func_939(var_1_object);
					if(var_134_bool != 0)
						var_131_bool = true;
				}
				if(var_131_bool != 0) {
					bool var_136_bool;
					func_951(var_136_bool, var_1_object);
					if(var_136_bool != 0)
						var_130_bool = true;
				}
				if(var_130_bool != 1) {
					bool var_145_bool = false;
					bool var_146_bool = false;
					bool var_147_bool;
					func_939(var_1_object);
					if(var_147_bool != 0) {
						bool var_149_bool;
						func_951(var_149_bool, var_1_object);
						if(var_149_bool != 0)
							var_146_bool = true;
					}
					if(var_146_bool != 0) {
						bool var_151_bool;
						func_915(var_1_object);
						if(var_151_bool != 0)
							var_145_bool = true;
					}
					if(var_145_bool != 1)
						var_129_bool = false;
				}
				if(var_129_bool != 0)
					var_0_object->AddReply(539445, 41377, 41376); //@t
				var_0_object->AddReply(539450, -1, 41381); //@t
				var_0_object->AddReply(540739, -1, 42777); //@t
				return 0;
			}
			if(var_10_bool == 41377) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540737, 42776, 42775); //@t
				return 0;
			}
			if(var_10_bool == 42776) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(540738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539447, 41379, 41378); //@t
				return 0;
			}
			if(var_10_bool == 41379) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539449, -1, 41380); //@t
				return 0;
			}
			if(var_10_bool == 41374) {
				func_226(var_11_object, "Neutral");
				var_0_object->SetMessage(539443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539444, -1, 41375); //@t
				return 0;
			}
			var_3_string = true;
			bool var_190_bool;
			func_1064(var_190_bool);
			if(var_190_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_508(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_573(var_9_object, var_10_object);
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
			func_535(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_804(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_896(object var_57_object)
{
	int var_60_int;
	var_57_object->RemoveItemByType(var_60_int, "bottle_water", 20);
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_686(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_1058(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1056(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1060(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1062(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1039(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_192_bool = !var_24_bool; //@nz
		if(var_192_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_193_object;
	var_15_object = var_193_object;
	func_755();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_773(string var_176_string)
{
	bool var_180_bool; float var_181_float; float var_182_float;
	@lshHasAnimation(var_180_bool, var_176_string);
	if(var_180_bool != 0) {
		@lshGetAnimTimes(var_176_string, var_181_float, var_182_float);
		@lshPlayAnimation(var_181_float, var_182_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_176_string);
	}
	
}


// @pe
void func_902(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_908(void)
{
	func_837("sobor@door1", false);
}


void func_1039(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x41e";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_915(bool var_129_bool)
{
	int var_131_int;
	func_832(var_131_int, "k5q04");
	if(var_131_int == 2)
		var_129_bool = true;
	var_129_bool = false;
}


void func_789(string var_97_string, bool var_98_bool)
{
	bool var_104_bool; float var_105_float; float var_106_float;
	@lshHasAnimation(var_104_bool, var_97_string);
	if(var_104_bool != 0) {
		@lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		@lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_97_string);
	}
	
}


void func_535(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_673(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_666(bool var_61_bool)
{
	var_61_bool = true;
}


void func_668(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_927(bool var_113_bool)
{
	int var_115_int;
	func_832(var_115_int, "k5q04");
	if(var_115_int == 3)
		var_113_bool = true;
	var_113_bool = false;
}


void func_1056(int var_74_int)
{
	var_74_int = 515556;
}


void func_673(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_1058(int var_73_int)
{
	var_73_int = 503341;
}


void func_1060(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_804(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_1062(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_1064(bool var_68_bool)
{
	var_68_bool = false;
}


void func_681(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_939(bool var_121_bool)
{
	int var_123_int;
	func_832(var_123_int, "k5q04_bring_water");
	if(var_123_int != 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_686(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_822(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_1064(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_749;
		@LookAsyncCamera("head");
	}
Label_749:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_815(void)
{
	bool var_13_bool;
	func_1064(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_822(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_951(bool var_148_bool, object var_149_object)
{
	object var_151_object;
	var_149_object = var_151_object;
	bool var_150_bool;
	func_961(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
}


// @pe
void func_573(object var_2_object, string var_3_string)
{
	func_668();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_832(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_961(bool var_150_bool, object var_151_object)
{
	int var_153_int;
	var_151_object->GetItemCountOfType(var_153_int, "bottle_water");
	if(var_153_int >= 20)
		var_150_bool = true;
	var_150_bool = false;
}


void func_837(string var_69_string, bool var_70_bool)
{
	object var_72_object;
	@FindActor(var_72_object, var_69_string);
	if(!var_72_object) //@nz
		@Trace(("Door " + var_69_string) + " not found");
	else
		var_72_object->SetProperty("locked", var_70_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_226(var_87_object, "Neutral");
		var_0_object->SetMessage(539441); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool = true;
		bool var_112_bool = false;
		bool var_113_bool;
		func_927(var_1_object);
		if(var_113_bool != 0) {
			bool var_121_bool;
			func_939(var_1_object);
			if(!var_121_bool) //@nz
				var_112_bool = true;
		}
		if(var_112_bool != 1) {
			bool var_128_bool = false;
			bool var_129_bool;
			func_915(var_1_object);
			if(var_129_bool != 0) {
				bool var_135_bool;
				func_939(var_1_object);
				if(!var_135_bool) //@nz
					var_128_bool = true;
			}
			if(var_128_bool != 1)
				var_111_bool = false;
		}
		if(var_111_bool != 0)
			var_0_object->AddReply(539442, 41374, 41373); //@t
		bool var_141_bool = true;
		bool var_142_bool = false;
		bool var_143_bool = false;
		bool var_144_bool;
		func_927(var_1_object);
		if(var_144_bool != 0) {
			bool var_146_bool;
			func_939(var_1_object);
			if(var_146_bool != 0)
				var_143_bool = true;
		}
		if(var_143_bool != 0) {
			bool var_148_bool;
			func_951(var_148_bool, var_1_object);
			if(var_148_bool != 0)
				var_142_bool = true;
		}
		if(var_142_bool != 1) {
			bool var_157_bool = false;
			bool var_158_bool = false;
			bool var_159_bool;
			func_939(var_1_object);
			if(var_159_bool != 0) {
				bool var_161_bool;
				func_951(var_161_bool, var_1_object);
				if(var_161_bool != 0)
					var_158_bool = true;
			}
			if(var_158_bool != 0) {
				bool var_163_bool;
				func_915(var_1_object);
				if(var_163_bool != 0)
					var_157_bool = true;
			}
			if(var_157_bool != 1)
				var_141_bool = false;
		}
		if(var_141_bool != 0)
			var_0_object->AddReply(539445, 41377, 41376); //@t
		var_0_object->AddReply(539450, -1, 41381); //@t
		var_0_object->AddReply(540739, -1, 42777); //@t
		goto Label_196;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_196:
	bool var_174_bool;
	func_1064(var_174_bool);
	if(var_174_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_773(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_225;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_225:
		return 0;

	}
	
}


void func_587(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_681(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_861(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_681(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_634;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_854(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_663;
				}
			} else if(var_28_int != 0) {
				goto Label_663;
			}
			}
					bool var_61_bool;
					func_666(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_658;
			}
		}
	Label_663:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_658:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_972(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 744, 2, 539461);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1011(var_25_bool, var_26_object, 740);
}
EMIT "Stack[-1] = 0";


void func_854(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_985(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 745, 2, 539462);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_1011(var_54_bool, var_55_object, 740);
}
EMIT "Stack[-1] = 0";


void func_861(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_854(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


// @pe
void func_226(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_1064(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_789(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_998(object var_34_object)
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


// @pe
void func_878(void)
{
	@SetVariable("k5q04_bring_water", 1);
	func_972();
}


void func_755(void)
{
	bool var_195_bool;
	@CameraSwitchToNormal(true);
	bool var_197_bool;
	func_1064(var_197_bool);
	if(var_197_bool != 0) {
	} else {
		@HasAnimationTrack(var_195_bool, "head");
		if(var_195_bool == 0) goto Label_772;
		@UnlookAsync("head");
	}
Label_772:
	
}


void func_1011(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_998(var_34_object);
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
void func_887(void)
{
	@SetVariable("k5q04", 4);
	func_985();
}


// @pe
void func_508(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_681(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_587();
	if(!false) //@nz
		@KillTimer(10);
}


