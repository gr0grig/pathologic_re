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
			func_578();
			if(var_11_object == 36162) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_653();
			}
			if(var_10_bool == 36161) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(534520); //@t
				var_0_object->ClearReplies(); //@t
				bool var_69_bool;
				func_667(var_69_bool, var_1_object);
				if(var_69_bool != 0)
					var_0_object->AddReply(539598, 41545, 41544); //@t
				var_0_object->AddReply(539597, -1, 41543); //@t
				return 0;
			}
			if(var_10_bool == 41545) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(539599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540801, 42853, 42852); //@t
				return 0;
			}
			if(var_10_bool == 42853) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(540802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534521, -1, 36162); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_627(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_271(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_336(var_9_object, var_10_object);
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
			func_298(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_567(var_4_bool);
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
	func_449(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_621(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_619(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_623(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_625(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_749(var_77_int);
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
		var_154_bool = !var_24_bool; //@nz
		if(var_154_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_155_object;
	var_15_object = var_155_object;
	func_518();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_518(void)
{
	bool var_157_bool;
	@CameraSwitchToNormal(true);
	bool var_159_bool;
	func_627(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		@HasAnimationTrack(var_157_bool, "head");
		if(var_157_bool == 0) goto Label_535;
		@UnlookAsync("head");
	}
Label_535:
	
}


// @pe
void func_137(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_627(var_94_bool);
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
	func_552(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


// @pe
void func_653(void)
{
	@SetVariable("d11q06", 3);
	func_695();
	bool var_43_bool;
	func_607(var_43_bool, "quest_d11_06", "place_maria");
}


// @pe
void func_271(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_444(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_350();
	if(!false) //@nz
		@KillTimer(10);
}


void func_536(string var_138_string)
{
	bool var_142_bool; float var_143_float; float var_144_float;
	@lshHasAnimation(var_142_bool, var_138_string);
	if(var_142_bool != 0) {
		@lshGetAnimTimes(var_138_string, var_143_float, var_144_float);
		@lshPlayAnimation(var_143_float, var_144_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_138_string);
	}
	
}


// @pe
void func_667(bool var_111_bool, object var_112_object)
{
	bool var_113_bool = false;
	bool var_114_bool; object var_115_object;
	var_112_object = var_115_object;
	func_600(var_114_bool, var_115_object, "d11q06KapellaBeads");
	if(var_114_bool != 0) {
		bool var_121_bool; object var_122_object;
		var_112_object = var_122_object;
		func_600(var_121_bool, var_122_object, "d11q06KlaraRing");
		if(var_121_bool != 0)
			var_113_bool = true;
	}
	if(var_113_bool != 0) {
		int var_124_int;
		func_595(var_124_int, "d11q06");
		if(var_124_int == 2) {
			var_111_bool = true;
			return 0;
		}
	}
	var_111_bool = false;
}


void func_552(string var_97_string, bool var_98_bool)
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


void func_298(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_436(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_429(bool var_60_bool)
{
	var_60_bool = true;
}


void func_431(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_436(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_695(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 691, 2, 534539);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_721(var_25_bool, var_26_object, 686);
}
EMIT "Stack[-1] = 0";


void func_567(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_444(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_449(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_585(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_627(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_512;
		@LookAsyncCamera("head");
	}
Label_512:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_578(void)
{
	bool var_13_bool;
	func_627(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_708(object var_34_object)
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


void func_585(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_87_object, "Neutral");
		var_0_object->SetMessage(534520); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_667(var_111_bool, var_86_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(539598, 41545, 41544); //@t
		var_0_object->AddReply(539597, -1, 41543); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_136_bool;
	func_627(var_136_bool);
	if(var_136_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_536(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


// @pe
void func_336(object var_2_object, string var_3_string)
{
	func_431();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_721(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_708(var_34_object);
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


void func_595(int var_124_int, string var_125_string)
{
	int var_127_int;
	@GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
}


void func_600(bool var_114_bool, object var_115_object, string var_116_string)
{
	int var_119_int;
	@GetInvItemByName(var_119_int, var_116_string);
	bool var_120_bool;
	var_115_object->HasItem(var_119_int, var_120_bool);
	var_120_bool = var_114_bool;
}


void func_350(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_444(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_636(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_444(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_397;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_629(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_426;
				}
			} else if(var_27_int != 0) {
				goto Label_426;
			}
			}
					bool var_60_bool;
					func_429(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_421;
			}
		}
	Label_426:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_421:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_607(bool var_43_bool, string var_44_string, string var_45_string)
{
	object var_47_object;
	@FindActor(var_47_object, var_44_string);
	if(var_47_object == null)
		var_43_bool = false;
	@Trigger(var_47_object, var_45_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


void func_619(int var_74_int)
{
	var_74_int = 515556;
}


void func_621(int var_73_int)
{
	var_73_int = 503341;
}


void func_749(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x2fc";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_623(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_625(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_627(bool var_68_bool)
{
	var_68_bool = false;
}


void func_629(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_636(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_629(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


