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
			func_751();
			if(var_13_bool == 27665) {
				object var_18_object = var_1_object;
				func_878(var_0_object);
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_901();
			}
			if(var_13_bool == 30081) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_891();
				object var_71_object = var_1_object;
				func_871(var_0_object);
			}
			if(var_12_bool == 27662) {
				func_151(var_13_bool, "Neutral");
				var_0_object->SetMessage(526382); //@t
				var_0_object->ClearReplies(); //@t
				bool var_131_bool = false;
				bool var_132_bool;
				func_907(var_1_object);
				if(var_132_bool != 0) {
					bool var_140_bool;
					func_919(var_140_bool, var_1_object);
					if(var_140_bool != 0)
						var_131_bool = true;
				}
				if(var_131_bool != 0)
					var_0_object->AddReply(526383, 27664, 27663); //@t
				var_0_object->AddReply(526386, -1, 27666); //@t
				var_0_object->AddReply(528664, -1, 30075); //@t
				return 0;
			}
			if(var_12_bool == 27664) {
				func_151(var_13_bool, "Neutral");
				var_0_object->SetMessage(526384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528665, 30078, 30076); //@t
				var_0_object->AddReply(528666, 30078, 30077); //@t
				return 0;
			}
			if(var_12_bool == 30078) {
				func_151(var_13_bool, "Neutral");
				var_0_object->SetMessage(528667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528668, 30082, 30079); //@t
				var_0_object->AddReply(528669, -1, 30081); //@t
				return 0;
			}
			if(var_12_bool == 30082) {
				func_151(var_13_bool, "Neutral");
				var_0_object->SetMessage(528670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526385, -1, 27665); //@t
				return 0;
			}
			var_3_string = true;
			bool var_185_bool;
			func_1032(var_185_bool);
			if(var_185_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xae";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_341(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_475(var_11_bool, var_12_object);
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
			func_359(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_475(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_408(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_758(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_437(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_740(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_1024(int var_76_int)
{
	var_76_int = 515564;
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_622(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_1026(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1024(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1028(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1030(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_1007(var_79_int);
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
		var_158_bool = !var_26_bool; //@nz
		if(var_158_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_159_object;
	var_17_object = var_159_object;
	func_691();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1026(int var_75_int)
{
	var_75_int = 503349;
}


void func_1028(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_901(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1030(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
}


// @pe
void func_774(float var_102_float, float var_103_float, float var_104_float, float var_105_float)
{
	if(var_103_float < var_104_float) {
		var_104_float = var_102_float;
		return 0;
	}
	if(var_103_float > var_105_float) {
		var_105_float = var_102_float;
		return 0;
	}
	var_103_float = var_102_float;
}


void func_1032(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_907(bool var_114_bool)
{
	int var_116_int;
	func_785(var_116_int, "k7q03");
	if(var_116_int == 1)
		var_114_bool = true;
	var_114_bool = false;
}


void func_785(int var_116_int, string var_117_string)
{
	int var_119_int;
	@GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
}


// @pe
void func_790(bool var_73_bool, object var_74_object, float var_75_float)
{
	if(!var_74_object) { //@nz
		var_73_bool = false;
		return 0;
	}
	if(var_75_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_75_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_80_float;
		var_75_float = var_80_float;
		func_825(var_80_float);
		bool var_84_bool; object var_85_object; float var_87_float;
		var_74_object = var_85_object;
		var_75_float = var_87_float;
		func_595(var_84_bool, var_85_object, "reputation", var_87_float, (float)0, (float)1);
		var_73_bool = true;
		return 0;

	}
	
	var_73_bool = false;
}


// @pe
void func_919(bool var_122_bool, object var_123_object)
{
	object var_125_object;
	var_123_object = var_125_object;
	bool var_124_bool;
	func_929(var_124_bool, var_125_object);
	if(var_124_bool != 0) {
		var_122_bool = true;
		return 0;
	}
	var_122_bool = false;
}


void func_408(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_151(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_1032(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_725(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


// @pe
void func_410(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_617(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_489();
	if(!false) //@nz
		@KillTimer(10);
}


void func_929(bool var_124_bool, object var_125_object)
{
	int var_127_int;
	var_125_object->GetItemCountOfType(var_127_int, "tvirin");
	if(var_127_int >= 5)
		var_124_bool = true;
	var_124_bool = false;
}


void func_940(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 779, 2, 541759);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_979(var_62_bool, var_63_object, 434);
}
EMIT "Stack[-1] = 0";


void func_691(void)
{
	bool var_161_bool;
	@CameraSwitchToNormal(true);
	bool var_163_bool;
	func_1032(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		@HasAnimationTrack(var_161_bool, "head");
		if(var_161_bool == 0) goto Label_708;
		@UnlookAsync("head");
	}
Label_708:
	
}


void func_437(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_575(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_568(bool var_71_bool)
{
	var_71_bool = true;
}


void func_825(float var_80_float)
{
	object var_82_object;
	@CreateFloatVector(var_82_object);
	var_82_object->add(var_80_float);
	@SendWorldWndMessage(16, var_82_object);
}
EMIT "Stack[-1] = 0";


void func_570(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_953(void)
{
	object var_25_object;
	@CreateDiaryEntry(var_25_object, 436, 2, 526392);
	bool var_29_bool; object var_30_object;
	var_25_object = var_30_object;
	func_979(var_29_bool, var_30_object, 434);
}
EMIT "Stack[-1] = 0";


void func_575(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_835(bool var_65_bool, string var_66_string, string var_67_string)
{
	object var_69_object;
	@FindActor(var_69_object, var_66_string);
	if(var_69_object == null)
		var_65_bool = false;
	@Trigger(var_69_object, var_67_string);
	var_65_bool = true;
}
EMIT "Stack[-1] = 0";


void func_709(string var_142_string)
{
	bool var_146_bool; float var_147_float; float var_148_float;
	@lshHasAnimation(var_146_bool, var_142_string);
	if(var_146_bool != 0) {
		@lshGetAnimTimes(var_142_string, var_147_float, var_148_float);
		@lshPlayAnimation(var_147_float, var_148_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_142_string);
	}
	
}


void func_966(object var_38_object)
{
	object var_40_object;
	@GetDiaryRoot(var_40_object);
	if(!var_40_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_38_object = false;
	}
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_583(bool var_92_bool, object var_93_object, string var_94_string)
{
	var_99_bool = IsFuncExist(var_93_object, "HasProperty", 2);
	if(!var_99_bool) { //@nz
		var_92_bool = false;
		return 2;
	}
	bool var_96_bool;
	var_93_object->HasProperty(var_94_string, var_96_bool);
	var_96_bool = var_92_bool;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		func_151(var_89_object, "Neutral");
		var_0_object->SetMessage(526382); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool = false;
		bool var_114_bool;
		func_907(var_1_object);
		if(var_114_bool != 0) {
			bool var_122_bool;
			func_919(var_122_bool, var_1_object);
			if(var_122_bool != 0)
				var_113_bool = true;
		}
		if(var_113_bool != 0)
			var_0_object->AddReply(526383, 27664, 27663); //@t
		var_0_object->AddReply(526386, -1, 27666); //@t
		var_0_object->AddReply(528664, -1, 30075); //@t
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	bool var_140_bool;
	func_1032(var_140_bool);
	if(var_140_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_709(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_150;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_150:
		return 0;

	}
	
}


void func_847(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_595(bool var_84_bool, object var_85_object, string var_86_string, float var_87_float, float var_88_float, float var_89_float)
{
	object var_93_object;
	var_85_object = var_93_object;
	string var_94_string;
	var_86_string = var_94_string;
	bool var_92_bool;
	func_583(var_92_bool, var_93_object, var_94_string);
	if(!var_92_bool) //@nz
		var_84_bool = false;
	float var_91_float;
	var_85_object->GetProperty(var_86_string, var_91_float);
	float var_102_float; float var_104_float; float var_105_float;
	var_88_float = var_104_float;
	var_89_float = var_105_float;
	func_774(var_102_float, (var_91_float + var_87_float), var_104_float, var_105_float);
	var_85_object->SetProperty(var_86_string, var_102_float);
	var_84_bool = true;
}


void func_979(bool var_29_bool, object var_30_object, int var_31_int)
{
	object var_38_object;
	func_966(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	object var_36_object;
	var_35_object->Find(var_31_int, var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_31_int);
		var_29_bool = false;
	}
	var_36_object->AddChild(var_30_object);
	@SendWorldWndMessage(7);
	int var_37_int;
	var_30_object->GetCategory(var_37_int);
	@SetDiarySection(var_37_int);
	var_29_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_725(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_341(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_410(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_854(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_847(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_475(object var_2_object, string var_3_string)
{
	func_570();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_740(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


// @pe
void func_871(object var_71_object)
{
	object var_74_object;
	var_71_object = var_74_object;
	bool var_73_bool;
	func_790(var_73_bool, var_74_object, -0.05);
}


void func_359(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_617(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_408(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_758(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_617(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_489(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_617(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_854(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_617(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_536;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_847(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_565;
				}
			} else if(var_38_int != 0) {
				goto Label_565;
			}
			}
					bool var_71_bool;
					func_568(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_560;
			}
		}
	Label_565:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_560:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_622(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_764(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1032(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_685;
		@LookAsyncCamera("head");
	}
Label_685:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_1007(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3fe";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_751(void)
{
	bool var_15_bool;
	func_1032(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_878(object var_18_object)
{
	@SetVariable("k7q03", 2);
	func_953();
	int var_21_int;
	var_18_object->RemoveItemByType(var_21_int, "tvirin", 5);
}


void func_758(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_891(void)
{
	func_940();
	bool var_65_bool;
	func_835(var_65_bool, "quest_k7_03", "fail");
}


void func_764(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


