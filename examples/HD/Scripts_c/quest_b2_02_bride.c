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
			func_809();
			if(var_11_object == 19375) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_921();
			}
			if(var_11_object == 29121) {
				object var_22_object = var_1_object;
				func_962(var_0_object);
				object var_46_object = var_1_object;
				func_951(var_0_object);
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_973();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_927();
			}
			if(var_11_object == 29122) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_937();
			}
			if(var_10_bool == 19374) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(518265); //@t
				var_0_object->ClearReplies(); //@t
				bool var_124_bool = false;
				bool var_125_bool = false;
				bool var_126_bool = false;
				bool var_127_bool;
				func_1027(var_1_object);
				if(var_127_bool != 0) {
					bool var_135_bool;
					func_1003(var_1_object);
					if(!var_135_bool) //@nz
						var_126_bool = true;
				}
				if(var_126_bool != 0) {
					bool var_142_bool;
					func_991(var_1_object);
					if(!var_142_bool) //@nz
						var_125_bool = true;
				}
				if(var_125_bool != 0) {
					bool var_149_bool;
					func_1015(var_1_object);
					if(var_149_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0)
					var_0_object->AddReply(518266, 20687, 19375); //@t
				bool var_158_bool;
				func_979(var_1_object);
				if(var_158_bool != 0)
					var_0_object->AddReply(527751, 29118, 29108); //@t
				var_0_object->AddReply(518267, -1, 19376); //@t
				return 0;
			}
			if(var_10_bool == 29118) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(527761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527762, 29120, 29119); //@t
				return 0;
			}
			if(var_10_bool == 29120) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(527763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527764, -1, 29121); //@t
				var_0_object->AddReply(527861, 29203, 29205); //@t
				return 0;
			}
			if(var_10_bool == 29203) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(527859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527765, -1, 29122); //@t
				return 0;
			}
			if(var_10_bool == 20687) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(519514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519515, 20689, 20688); //@t
				return 0;
			}
			if(var_10_bool == 20689) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(519516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519517, 20691, 20690); //@t
				return 0;
			}
			if(var_10_bool == 20691) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(519518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519519, 20693, 20692); //@t
				var_0_object->AddReply(527857, 20693, 29200); //@t
				return 0;
			}
			if(var_10_bool == 20693) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(519520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519521, 20695, 20694); //@t
				return 0;
			}
			if(var_10_bool == 20695) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(519522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519523, -1, 20696); //@t
				var_0_object->AddReply(527858, -1, 29202); //@t
				return 0;
			}
			var_3_string = true;
			bool var_235_bool;
			func_919(var_235_bool);
			if(var_235_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc7";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_502(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_567(var_9_object, var_10_object);
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
			func_529(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_798(var_4_bool);
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
	func_680(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_913(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_911(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_915(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_917(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1106(var_77_int);
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
		var_175_bool = !var_24_bool; //@nz
		if(var_175_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_176_object;
	var_15_object = var_176_object;
	func_749();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1027(bool var_114_bool)
{
	int var_116_int;
	func_826(var_116_int, "oob2TravnikWife1");
	if(var_116_int == 0) {
		var_114_bool = true;
		return 0;
	}
	var_114_bool = false;
}


void func_911(int var_74_int)
{
	var_74_int = 515596;
}


void func_783(string var_97_string, bool var_98_bool)
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


void func_913(int var_73_int)
{
	var_73_int = 514839;
}


void func_529(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_667(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_915(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_660(bool var_61_bool)
{
	var_61_bool = true;
}


void func_917(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_919(bool var_68_bool)
{
	var_68_bool = false;
}


void func_1039(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 458, 2, 527774);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_1078(var_98_bool, var_99_object, 456);
}
EMIT "Stack[-1] = 0";


// @pe
void func_921(void)
{
	@SetVariable("oob2TravnikWife1", 1);
}


void func_667(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_1052(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 460, 2, 527776);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_1078(var_63_bool, var_64_object, 456);
}
EMIT "Stack[-1] = 0";


void func_798(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_927(void)
{
	func_1052();
	bool var_81_bool;
	func_875(var_81_bool, "quest_b2_02", "fail");
}


void func_675(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_680(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_816(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_919(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_743;
		@LookAsyncCamera("head");
	}
Label_743:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_809(void)
{
	bool var_13_bool;
	func_919(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_937(void)
{
	@SetVariable("b2q02", 2);
	func_1039();
	bool var_101_bool;
	func_875(var_101_bool, "quest_b2_02", "move_bride");
}


void func_1065(object var_72_object)
{
	object var_74_object;
	@GetDiaryRoot(var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_72_object = false;
	}
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_176(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_919(var_94_bool);
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
	func_783(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_816(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_1078(bool var_63_bool, object var_64_object, int var_65_int)
{
	object var_72_object;
	func_1065(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	object var_70_object;
	var_69_object->Find(var_65_int, var_70_object);
	if(!var_70_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_65_int);
		var_63_bool = false;
	}
	var_70_object->AddChild(var_64_object);
	@SendWorldWndMessage(7);
	int var_71_int;
	var_64_object->GetCategory(var_71_int);
	@SetDiarySection(var_71_int);
	var_63_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_951(object var_46_object)
{
	@Trace("white plet 3 is given");
	object var_49_object;
	var_46_object = var_49_object;
	func_862(var_49_object, "grass_white_plet", 3);
}


// @pe
void func_567(object var_2_object, string var_3_string)
{
	func_662();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_826(int var_116_int, string var_117_string)
{
	int var_119_int;
	@GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
}


void func_831(int var_41_int, int var_42_int)
{
	object var_44_object;
	@CreateIntVector(var_44_object);
	var_44_object->add(var_41_int);
	var_44_object->add(var_42_int);
	@SendWorldWndMessage(3, var_44_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_962(object var_22_object)
{
	@Trace("savyur 3 is given");
	object var_25_object;
	var_22_object = var_25_object;
	func_862(var_25_object, "grass_savyur", 3);
}


void func_581(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_675(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_894(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_675(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_628;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_887(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_657;
				}
			} else if(var_28_int != 0) {
				goto Label_657;
			}
			}
					bool var_61_bool;
					func_660(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_652;
			}
		}
	Label_657:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_652:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_176(var_87_object, "Neutral");
		var_0_object->SetMessage(518265); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool = false;
		bool var_112_bool = false;
		bool var_113_bool = false;
		bool var_114_bool;
		func_1027(var_1_object);
		if(var_114_bool != 0) {
			bool var_122_bool;
			func_1003(var_1_object);
			if(!var_122_bool) //@nz
				var_113_bool = true;
		}
		if(var_113_bool != 0) {
			bool var_129_bool;
			func_991(var_1_object);
			if(!var_129_bool) //@nz
				var_112_bool = true;
		}
		if(var_112_bool != 0) {
			bool var_136_bool;
			func_1015(var_1_object);
			if(var_136_bool != 0)
				var_111_bool = true;
		}
		if(var_111_bool != 0)
			var_0_object->AddReply(518266, 20687, 19375); //@t
		bool var_145_bool;
		func_979(var_1_object);
		if(var_145_bool != 0)
			var_0_object->AddReply(527751, 29118, 29108); //@t
		var_0_object->AddReply(518267, -1, 19376); //@t
		goto Label_146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_146:
	bool var_157_bool;
	func_919(var_157_bool);
	if(var_157_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_767(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_175;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_175:
		return 0;

	}
	
}


void func_843(object var_30_object, object var_31_object, int var_32_int)
{
	int var_36_int;
	var_31_object->GetItemID(var_36_int);
	int var_37_int;
	@GetInvItemProperty(var_37_int, var_36_int, "Category");
	bool var_38_bool;
	var_30_object->AddItem(var_38_bool, var_31_object, var_37_int, var_32_int);
	if(!var_38_bool) { //@nz
		var_30_object->DropItems(var_31_object, var_32_int);
	} else {
		int var_41_int; int var_42_int;
		var_36_int = var_41_int;
		var_32_int = var_42_int;
		func_831(var_41_int, var_42_int);
	}
	
}


// @pe
void func_973(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1106(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x461";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_979(bool var_145_bool)
{
	int var_147_int;
	func_826(var_147_int, "b2q02");
	if(var_147_int == 1)
		var_145_bool = true;
	var_145_bool = false;
}


void func_862(object var_25_object, string var_26_string, int var_27_int)
{
	object var_29_object;
	@CreateInvItem(var_29_object);
	var_29_object->SetItemName(var_26_string);
	object var_30_object; object var_31_object; int var_32_int;
	var_25_object = var_30_object;
	var_29_object = var_31_object;
	var_27_int = var_32_int;
	func_843(var_30_object, var_31_object, var_32_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_991(bool var_129_bool)
{
	int var_131_int;
	func_826(var_131_int, "b2q02");
	if(var_131_int == 2)
		var_129_bool = true;
	var_129_bool = false;
}


// @pe
void func_1003(bool var_122_bool)
{
	int var_124_int;
	func_826(var_124_int, "b2q02");
	if(var_124_int == -1)
		var_122_bool = true;
	var_122_bool = false;
}


void func_875(bool var_81_bool, string var_82_string, string var_83_string)
{
	object var_85_object;
	@FindActor(var_85_object, var_82_string);
	if(var_85_object == null)
		var_81_bool = false;
	@Trigger(var_85_object, var_83_string);
	var_81_bool = true;
}
EMIT "Stack[-1] = 0";


void func_749(void)
{
	bool var_178_bool;
	@CameraSwitchToNormal(true);
	bool var_180_bool;
	func_919(var_180_bool);
	if(var_180_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_766;
		@UnlookAsync("head");
	}
Label_766:
	
}


// @pe
void func_1015(bool var_136_bool)
{
	int var_138_int;
	func_826(var_138_int, "b2q02");
	if(var_138_int == 1000)
		var_136_bool = true;
	var_136_bool = false;
}


// @pe
void func_502(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_675(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_581();
	if(!false) //@nz
		@KillTimer(10);
}


void func_887(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_894(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_887(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_767(string var_159_string)
{
	bool var_163_bool; float var_164_float; float var_165_float;
	@lshHasAnimation(var_163_bool, var_159_string);
	if(var_163_bool != 0) {
		@lshGetAnimTimes(var_159_string, var_164_float, var_165_float);
		@lshPlayAnimation(var_164_float, var_165_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_159_string);
	}
	
}


