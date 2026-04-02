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
			func_830();
			if(var_11_object == 27024) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_945();
			}
			if(var_10_bool == 27023) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(525700); //@t
				var_0_object->ClearReplies(); //@t
				bool var_35_bool;
				func_951(var_1_object);
				if(var_35_bool != 0)
					var_0_object->AddReply(525701, 27026, 27024); //@t
				var_0_object->AddReply(525702, -1, 27025); //@t
				return 0;
			}
			if(var_10_bool == 27026) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(525703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525704, -1, 27027); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_1073(var_56_bool);
			if(var_56_bool != 0)
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
			@Sleep(3);
			func_253(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_318(var_9_object, var_10_object);
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
			func_280(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_819(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_986(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_634(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_702(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
{
	bool var_11_bool;
	func_909(var_11_bool, "quest_k4_01", "grabitel_entrance_dead");
	object var_17_object;
	var_10_object = var_17_object;
	func_1075(var_17_object);
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_721(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_1067(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1065(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1069(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1071(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_963(var_76_int);
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
		var_132_bool = !var_24_bool; //@nz
		if(var_132_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_133_object;
	var_15_object = var_133_object;
	func_789();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_899(bool var_48_bool, int var_49_int, int var_50_int)
{
	int var_52_int;
	@irand(var_52_int, var_50_int);
	var_48_bool = var_52_int < var_49_int;
}


void func_1030(void)
{
	@ClearSubContainer(0);
	func_999(300, 750);
	func_837("Knife", 1, 8);
	func_837("lockpick", 1, 6);
	int var_57_int;
	func_1060(var_57_int, "grabitel_mark");
	bool var_22_bool;
	@AddItem(var_22_bool, var_57_int, 0, 1);
}


void func_904(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


// @pe
void func_137(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_1073(var_93_bool);
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
	func_813(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_909(bool var_11_bool, string var_12_string, string var_13_string)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(var_15_object == null)
		var_11_bool = false;
	@Trigger(var_15_object, var_13_string);
	var_11_bool = true;
}
EMIT "Stack[-1] = 0";


void func_789(void)
{
	bool var_135_bool;
	@CameraSwitchToNormal();
	bool var_136_bool;
	func_1073(var_136_bool);
	if(var_136_bool != 0) {
	} else {
		@HasAnimationTrack(var_135_bool, "head");
		if(var_135_bool == 0) goto Label_805;
		@UnlookAsync("head");
	}
Label_805:
	
}


void func_280(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_582(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_921(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_411(bool var_61_bool)
{
	var_61_bool = true;
}


void func_413(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_543(string var_84_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_85_string;
	var_84_string = var_85_string;
	func_848(var_85_string);
	@PlayAnimation("all", var_84_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_84_string);
	@RemoveEnvelope();
}


void func_928(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_921(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


// @pe
void func_418(object var_18_object)
{
	func_1030();
	object var_61_object;
	var_18_object = var_61_object;
	func_427(var_61_object);
}


void func_1060(int var_36_int, string var_37_string)
{
	int var_39_int;
	@GetInvItemByName(var_39_int, var_37_string);
	var_39_int = var_36_int;
}


void func_806(string var_121_string)
{
	float var_124_float; float var_125_float;
	@lshGetAnimTimes(var_121_string, var_124_float, var_125_float);
	@lshPlayAnimation(var_124_float, var_125_float, false);
}


void func_1065(int var_73_int)
{
	var_73_int = 518411;
}


void func_1067(int var_72_int)
{
	var_72_int = 518410;
}


// @pe
void func_427(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	func_452(var_62_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1069(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
}


void func_813(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


void func_1071(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
}


void func_1073(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_945(void)
{
	@SetVariable("ook4GrabitelEntrance1", 1);
}


void func_819(object var_27_object)
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
void func_1075(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(3);
	func_418(var_18_object);
	TaskReturn();
}


// @pe
void func_951(bool var_105_bool)
{
	int var_107_int;
	func_904(var_107_int, "ook4GrabitelEntrance1");
	if(var_107_int == 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


// @pe
void func_318(object var_2_object, string var_3_string)
{
	func_413();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_830(void)
{
	bool var_13_bool;
	func_1073(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_575(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_702(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_590(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_963(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x3d2";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_452(object var_62_object)
{
	cvector var_73_cvector; cvector var_74_cvector; cvector var_75_cvector; cvector var_76_cvector; string var_77_string; object var_78_object; bool var_79_bool; bool var_80_bool; float var_81_float; cvector var_82_cvector;
	if(var_62_object == null) {
		func_543("fdie");
	} else {
		var_62_object->GetPosition(var_73_cvector);
		@GetPosition(var_74_cvector);
		@GetDirection(var_75_cvector);
		var_76_cvector = var_74_cvector - var_73_cvector;
		var_116_float = GetByIndex(var_76_cvector, 0);
		var_117_float = GetByIndex(var_75_cvector, 0);
		var_119_float = GetByIndex(var_76_cvector, 2);
		var_120_float = GetByIndex(var_75_cvector, 2);
		if(((var_116_float * var_117_float) + (var_119_float * var_120_float)) >= 0)
			var_77_string = "fdie";
		else
			var_77_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_62_object = var_78_object;
		var_127_bool = IsFuncExist(var_62_object, "GetScriptProperty", 2);
		if(var_127_bool != 0) {
			var_62_object->HasScriptProperty(var_79_bool, "Owner");
			if(var_79_bool != 0) {
				var_62_object->GetScriptProperty(var_78_object, "Owner");
				if(var_78_object == null)
					var_62_object = var_78_object;
			}
		}
		var_134_bool = IsFuncExist(var_78_object, "@GetEyesHeight", 1);
		if(var_134_bool != 0) {
			var_78_object->GetEyesHeight(var_81_float);
			var_82_cvector = [0.0, 0.0, 0.0];
			var_135_float = GetByIndex(var_82_cvector, 1);
			var_81_float = var_135_float;
			SetByIndex(var_82_cvector, 1) = var_135_float;
			@LookAsync(var_62_object, "head", var_82_cvector);
			var_80_bool = true;
		} else {
			var_80_bool = false;

		}
		string var_137_string;
		var_77_string = var_137_string;
		func_848(var_137_string);
		@PlayAnimation("all", var_77_string);
		@WaitForAnimEnd();
		if(var_80_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_77_string);
		@RemoveEnvelope();
		var_78_object = null;
	}
	
}


void func_837(string var_43_string, int var_44_int, int var_45_int)
{
	bool var_47_bool;
	int var_49_int;
	var_44_int = var_49_int;
	int var_50_int;
	var_45_int = var_50_int;
	bool var_48_bool;
	func_899(var_48_bool, var_49_int, var_50_int);
	if(var_48_bool != 0)
		@AddItem(var_47_bool, var_43_string, 0);
}


void func_582(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_86_object, "Neutral");
		var_0_object->SetMessage(525700); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool;
		func_951(var_85_object);
		if(var_105_bool != 0)
			var_0_object->AddReply(525701, 27026, 27024); //@t
		var_0_object->AddReply(525702, -1, 27025); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_119_bool;
	func_1073(var_119_bool);
	if(var_119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_806(var_2_object);
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


void func_716(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_332(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_716(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_928(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_716(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_379;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_921(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_408;
				}
			} else if(var_28_int != 0) {
				goto Label_408;
			}
			}
					bool var_61_bool;
					func_411(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_403;
			}
		}
	Label_408:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_403:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_590(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_848(string var_85_string)
{
	bool var_94_bool; int var_95_int; bool var_96_bool; int var_97_int; bool var_98_bool; float var_99_float; cvector var_100_cvector; cvector var_101_cvector;
	@IsExisting3DSound(var_94_bool, var_85_string);
	if(!var_94_bool) { //@nz
		var_95_int = 0;

		for(;;) {
			@IsExisting3DSound(var_96_bool, (var_85_string + (var_95_int + 1)));
			if(!var_96_bool) { //@nz
				break;
			Label_868:
				@irand(var_97_int, var_95_int);
				var_85_string += (var_97_int + 1);
	}
			@Is3DSoundLoaded(var_98_bool, var_85_string);
			if(var_98_bool != 0) {
				@GetEyesHeight(var_99_float);
				@GetDirection(var_100_cvector);
				var_101_cvector = var_100_cvector * 50;
				var_112_float = GetByIndex(var_101_cvector, 1);
				SetByIndex(var_101_cvector, 1) = (var_112_float + var_99_float);
				@PlayGlobalSound(var_85_string, var_101_cvector);
			}
		}
		var_95_int += 1;
	}
	var_107_bool = !var_95_int; //@nz
	if(var_107_bool == 0) goto Label_868;
}


void func_721(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_889(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1073(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_783;
		@LookAsyncCamera("head");
	}
Label_783:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_980(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


// @pe
void func_986(object var_14_object)
{
	int var_15_int;
	func_980(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_999(int var_24_int, int var_25_int)
{
	if(var_24_int > var_25_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_28_int = 0;
	if(var_24_int != var_25_int) {
		@irand(var_28_int, (var_25_int - var_24_int));
	} else if(var_24_int == 0) {
		return 4;
	}
	var_28_int += var_24_int;
	if(var_28_int == 0)
		return 4;
	int var_36_int;
	func_1060(var_36_int, "Money");
	bool var_29_bool;
	@AddItem(var_29_bool, var_36_int, 0, var_28_int);
	
}


void func_889(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_634(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_575(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_889(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_696:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_590(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_696;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_702(var_61_float, var_62_cvector, var_63_cvector);
}


// @pe
void func_253(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_716(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_332();
	if(!false) //@nz
		@KillTimer(10);
}


