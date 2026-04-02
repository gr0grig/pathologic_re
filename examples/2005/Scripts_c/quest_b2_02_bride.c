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
			func_789();
			if(var_11_object == 19375) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_901();
			}
			if(var_11_object == 29121) {
				object var_22_object = var_1_object;
				func_942(var_0_object);
				object var_46_object = var_1_object;
				func_931(var_0_object);
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_953();
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_907();
			}
			if(var_11_object == 29122) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_917();
			}
			if(var_10_bool == 19374) {
				func_176(var_11_object, "Neutral");
				var_0_object->SetMessage(518265); //@t
				var_0_object->ClearReplies(); //@t
				bool var_119_bool = false;
				bool var_120_bool = false;
				bool var_121_bool = false;
				bool var_122_bool;
				func_1007(var_1_object);
				if(var_122_bool != 0) {
					bool var_130_bool;
					func_983(var_1_object);
					if(!var_130_bool) //@nz
						var_121_bool = true;
				}
				if(var_121_bool != 0) {
					bool var_137_bool;
					func_971(var_1_object);
					if(!var_137_bool) //@nz
						var_120_bool = true;
				}
				if(var_120_bool != 0) {
					bool var_144_bool;
					func_995(var_1_object);
					if(var_144_bool != 0)
						var_119_bool = true;
				}
				if(var_119_bool != 0)
					var_0_object->AddReply(518266, 20687, 19375); //@t
				bool var_153_bool;
				func_959(var_1_object);
				if(var_153_bool != 0)
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
			bool var_230_bool;
			func_899(var_230_bool);
			if(var_230_bool != 0)
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
					func_778(var_4_bool);
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
	int var_72_int;
	func_893(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_891(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_895(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_897(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1086(var_76_int);
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
		var_164_bool = !var_24_bool; //@nz
		if(var_164_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_165_object;
	var_15_object = var_165_object;
	func_748();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_897(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png";
}


void func_899(bool var_67_bool)
{
	var_67_bool = false;
}


void func_772(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


// @pe
void func_901(void)
{
	@SetVariable("oob2TravnikWife1", 1);
}


void func_891(int var_73_int)
{
	var_73_int = 515596;
}


void func_1032(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 460, 2, 527776);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_1058(var_63_bool, var_64_object, 456);
}
EMIT "Stack[-1] = 0";


void func_765(string var_153_string)
{
	float var_156_float; float var_157_float;
	@lshGetAnimTimes(var_153_string, var_156_float, var_157_float);
	@lshPlayAnimation(var_156_float, var_157_float, false);
}


void func_778(object var_27_object)
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
void func_907(void)
{
	func_1032();
	bool var_81_bool;
	func_855(var_81_bool, "quest_b2_02", "fail");
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


void func_660(bool var_61_bool)
{
	var_61_bool = true;
}


void func_789(void)
{
	bool var_13_bool;
	func_899(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_917(void)
{
	@SetVariable("b2q02", 2);
	func_1019();
	bool var_101_bool;
	func_855(var_101_bool, "quest_b2_02", "move_bride");
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1045(object var_72_object)
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


void func_667(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_796(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_1058(bool var_63_bool, object var_64_object, int var_65_int)
{
	object var_72_object;
	func_1045(var_72_object);
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
void func_931(object var_46_object)
{
	@Trace("white plet 3 is given");
	object var_49_object;
	var_46_object = var_49_object;
	func_842(var_49_object, "grass_white_plet", 3);
}


void func_675(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_806(int var_110_int, string var_111_string)
{
	int var_113_int;
	@GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
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
	func_796(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_899(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_742;
		@LookAsyncCamera("head");
	}
Label_742:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_811(int var_41_int, int var_42_int)
{
	object var_44_object;
	@CreateIntVector(var_44_object);
	var_44_object->add(var_41_int);
	var_44_object->add(var_42_int);
	@SendWorldWndMessage(3, var_44_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_942(object var_22_object)
{
	@Trace("savyur 3 is given");
	object var_25_object;
	var_22_object = var_25_object;
	func_842(var_25_object, "grass_savyur", 3);
}


// @pe
void func_176(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_899(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_772(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
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


void func_823(object var_30_object, object var_31_object, int var_32_int)
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
		func_811(var_41_int, var_42_int);
	}
	
}


// @pe
void func_953(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1086(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x44d";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_959(bool var_139_bool)
{
	int var_141_int;
	func_806(var_141_int, "b2q02");
	if(var_141_int == 1)
		var_139_bool = true;
	var_139_bool = false;
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
	func_874(var_36_int);
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
				func_867(var_58_string, var_59_int);
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
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_176(var_86_object, "Neutral");
		var_0_object->SetMessage(518265); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool = false;
		bool var_106_bool = false;
		bool var_107_bool = false;
		bool var_108_bool;
		func_1007(var_1_object);
		if(var_108_bool != 0) {
			bool var_116_bool;
			func_983(var_1_object);
			if(!var_116_bool) //@nz
				var_107_bool = true;
		}
		if(var_107_bool != 0) {
			bool var_123_bool;
			func_971(var_1_object);
			if(!var_123_bool) //@nz
				var_106_bool = true;
		}
		if(var_106_bool != 0) {
			bool var_130_bool;
			func_995(var_1_object);
			if(var_130_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool != 0)
			var_0_object->AddReply(518266, 20687, 19375); //@t
		bool var_139_bool;
		func_959(var_1_object);
		if(var_139_bool != 0)
			var_0_object->AddReply(527751, 29118, 29108); //@t
		var_0_object->AddReply(518267, -1, 19376); //@t
		goto Label_146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_146:
	bool var_151_bool;
	func_899(var_151_bool);
	if(var_151_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_765(var_2_object);
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


// @pe
void func_971(bool var_123_bool)
{
	int var_125_int;
	func_806(var_125_int, "b2q02");
	if(var_125_int == 2)
		var_123_bool = true;
	var_123_bool = false;
}


void func_842(object var_25_object, string var_26_string, int var_27_int)
{
	object var_29_object;
	@CreateInvItem(var_29_object);
	var_29_object->SetItemName(var_26_string);
	object var_30_object; object var_31_object; int var_32_int;
	var_25_object = var_30_object;
	var_29_object = var_31_object;
	var_27_int = var_32_int;
	func_823(var_30_object, var_31_object, var_32_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_983(bool var_116_bool)
{
	int var_118_int;
	func_806(var_118_int, "b2q02");
	if(var_118_int == -1)
		var_116_bool = true;
	var_116_bool = false;
}


void func_855(bool var_81_bool, string var_82_string, string var_83_string)
{
	object var_85_object;
	@FindActor(var_85_object, var_82_string);
	if(var_85_object == null)
		var_81_bool = false;
	@Trigger(var_85_object, var_83_string);
	var_81_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_995(bool var_130_bool)
{
	int var_132_int;
	func_806(var_132_int, "b2q02");
	if(var_132_int == 1000)
		var_130_bool = true;
	var_130_bool = false;
}


void func_867(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_874(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_867(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_748(void)
{
	bool var_167_bool;
	@CameraSwitchToNormal();
	bool var_168_bool;
	func_899(var_168_bool);
	if(var_168_bool != 0) {
	} else {
		@HasAnimationTrack(var_167_bool, "head");
		if(var_167_bool == 0) goto Label_764;
		@UnlookAsync("head");
	}
Label_764:
	
}


// @pe
void func_1007(bool var_108_bool)
{
	int var_110_int;
	func_806(var_110_int, "oob2TravnikWife1");
	if(var_110_int == 0) {
		var_108_bool = true;
		return 0;
	}
	var_108_bool = false;
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


void func_1019(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 458, 2, 527774);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_1058(var_98_bool, var_99_object, 456);
}
EMIT "Stack[-1] = 0";


void func_893(int var_72_int)
{
	var_72_int = 514839;
}


void func_895(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png";
}


