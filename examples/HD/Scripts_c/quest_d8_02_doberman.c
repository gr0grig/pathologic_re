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
			func_827();
			if(var_13_bool == 37547) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_860();
			}
			if(var_13_bool == 34820) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_882();
				object var_75_object = var_1_object;
				func_866(var_0_object);
			}
			if(var_13_bool == 37604) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_882();
				object var_105_object = var_1_object;
				func_866(var_0_object);
			}
			if(var_12_bool == 34821) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(533313); //@t
				var_0_object->ClearReplies(); //@t
				bool var_127_bool;
				func_908(var_1_object);
				if(var_127_bool != 0)
					var_0_object->AddReply(535847, 37548, 37547); //@t
				var_0_object->AddReply(535882, -1, 37588); //@t
				var_0_object->AddReply(535851, -1, 37551); //@t
				return 0;
			}
			if(var_12_bool == 37548) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535883, 37590, 37589); //@t
				var_0_object->AddReply(535849, 37590, 37549); //@t
				return 0;
			}
			if(var_12_bool == 37590) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535885, 37550, 37591); //@t
				var_0_object->AddReply(535886, 37550, 37592); //@t
				return 0;
			}
			if(var_12_bool == 37550) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535887, 37595, 37594); //@t
				return 0;
			}
			if(var_12_bool == 37595) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533308, 34817, 34816); //@t
				var_0_object->AddReply(535889, 37605, 37597); //@t
				return 0;
			}
			if(var_12_bool == 37605) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535897, 37600, 37606); //@t
				return 0;
			}
			if(var_12_bool == 34817) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(533309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533310, 34819, 34818); //@t
				var_0_object->AddReply(535890, 37601, 37598); //@t
				return 0;
			}
			if(var_12_bool == 37601) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535894, 37600, 37602); //@t
				return 0;
			}
			if(var_12_bool == 34819) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(533311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535891, 37600, 37599); //@t
				return 0;
			}
			if(var_12_bool == 37600) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533312, -1, 34820); //@t
				var_0_object->AddReply(535895, -1, 37604); //@t
				return 0;
			}
			var_3_string = true;
			bool var_222_bool;
			func_1086(var_222_bool);
			if(var_222_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_451(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		TaskCall(0);
		int var_13_int;
		func_0(var_15_object, var_13_int, var_14_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_469(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_585(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_518(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_834(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_547(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_816(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_13_int, object var_14_object)
{
	var_0_object = var_14_object;
	bool var_24_bool; object var_25_object;
	var_14_object = var_25_object;
	func_698(var_24_bool, var_25_object, 70.0);
	if(!var_24_bool) { //@nz
		var_13_int = -2;
		return 8;
	}
	object var_20_object;
	@CreateDialog(var_20_object);
	int var_72_int;
	func_1080(var_72_int);
	var_20_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1078(var_73_int);
	var_20_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1082(var_74_string);
	var_20_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1084(var_75_string);
	var_20_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1037(var_76_int);
	var_20_object->SetPlayerName(var_76_int);
	bool var_21_bool;
	@IsOverrideActive(var_21_bool);
	if(var_21_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	@DoDialog(var_20_object);
	object var_85_object; object var_86_object;
	var_14_object = var_85_object;
	var_20_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_23_bool;
	var_20_object->IsDialogEnd(var_23_bool);
	
	for(;;) {
		var_145_bool = !var_23_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_20_object->IsDialogEnd(var_23_bool);
	}
	
Label_63:
	object var_146_object;
	var_14_object = var_146_object;
	func_767();
	@StopDialog(var_20_object);
	var_20_object->GetReturnValue(-1);
	int var_22_int = var_13_int;
}
EMIT "Stack[-4] = 0";


void func_518(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_520(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_693(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_599();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_908(bool var_110_bool)
{
	int var_112_int;
	func_850(var_112_int, "ood8Doberman1");
	if(var_112_int == 0) {
		var_110_bool = true;
		return 0;
	}
	var_110_bool = false;
}


void func_1037(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x41c";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_142(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_1086(var_93_bool);
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
	func_801(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_785(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


void func_920(void)
{
	object var_45_object;
	@CreateDiaryEntry(var_45_object, 127, 2, 513772);
	bool var_49_bool; object var_50_object;
	var_45_object = var_50_object;
	func_959(var_49_bool, var_50_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1054(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_801(string var_96_string, bool var_97_bool)
{
	bool var_103_bool; float var_104_float; float var_105_float;
	@lshHasAnimation(var_103_bool, var_96_string);
	if(var_103_bool != 0) {
		@lshGetAnimTimes(var_96_string, var_104_float, var_105_float);
		@lshPlayAnimation(var_104_float, var_105_float, var_97_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_96_string);
	}
	
}


void func_547(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_685(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_1061(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_1054(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_678(bool var_71_bool)
{
	var_71_bool = true;
}


void func_933(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 648, 2, 533321);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_959(var_72_bool, var_73_object, 127);
}
EMIT "Stack[-1] = 0";


void func_680(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_685(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_816(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_946(object var_58_object)
{
	object var_60_object;
	@GetDiaryRoot(var_60_object);
	if(!var_60_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_58_object = false;
	}
	var_60_object = var_58_object;
}
EMIT "Stack[-1] = 0";


void func_693(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_1078(int var_73_int)
{
	var_73_int = 518097;
}


void func_1080(int var_72_int)
{
	var_72_int = 518096;
}


void func_1082(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_698(bool var_24_bool, object var_25_object, float var_26_float)
{
	cvector var_37_cvector; bool var_44_bool;
	var_25_object->GetPosition(var_37_cvector);
	float var_36_float;
	var_25_object->GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_45_float + var_36_float);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	@GetEyesHeight(var_36_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_36_float);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_49_float = sqrt(var_39_cvector | var_39_cvector);
	var_39_cvector /= var_49_float;
	cvector var_40_cvector = -var_39_cvector;
	cvector var_51_cvector;
	func_840(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_41_cvector = ((var_39_cvector * var_26_float) + (var_51_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0)
		var_24_bool = false;
	@StopWorld();
	@CameraTransit((var_38_cvector + var_41_cvector), var_40_cvector, true);
	var_65_float = GetByIndex(var_41_cvector, 0);
	var_66_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_1086(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_44_bool, "head");
		if(var_44_bool == 0) goto Label_761;
		@LookAsyncCamera("head");
	}
Label_761:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_24_bool = true;
	
}


void func_827(void)
{
	bool var_15_bool;
	func_1086(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_1084(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_1086(bool var_67_bool)
{
	var_67_bool = false;
}


void func_959(bool var_49_bool, object var_50_object, int var_51_int)
{
	object var_58_object;
	func_946(var_58_object);
	object var_55_object;
	var_58_object = var_55_object;
	object var_56_object;
	var_55_object->Find(var_51_int, var_56_object);
	if(!var_56_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_51_int);
		var_49_bool = false;
	}
	var_56_object->AddChild(var_50_object);
	@SendWorldWndMessage(7);
	int var_57_int;
	var_50_object->GetCategory(var_57_int);
	@SetDiarySection(var_57_int);
	var_49_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_834(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_451(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_520(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_840(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


// @pe
void func_585(object var_2_object, string var_3_string)
{
	func_680();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_86_object, "Neutral");
		var_0_object->SetMessage(533313); //@t
		var_0_object->ClearReplies(); //@t
		bool var_110_bool;
		func_908(var_85_object);
		if(var_110_bool != 0)
			var_0_object->AddReply(535847, 37548, 37547); //@t
		var_0_object->AddReply(535882, -1, 37588); //@t
		var_0_object->AddReply(535851, -1, 37551); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_127_bool;
	func_1086(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_785(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_850(int var_112_int, string var_113_string)
{
	int var_115_int;
	@GetVariable(var_113_string, var_115_int);
	var_115_int = var_112_int;
}


void func_469(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_693(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_518(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_834(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_599(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_693(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_1061(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_693(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_646;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_1054(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_675;
				}
			} else if(var_38_int != 0) {
				goto Label_675;
			}
			}
					bool var_71_bool;
					func_678(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_670;
			}
		}
	Label_675:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_670:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_855(float var_41_float)
{
	float var_43_float;
	@GetGameTime(var_43_float);
	var_43_float = var_41_float;
}


void func_987(object var_30_object)
{
	object var_33_object; object var_34_object;
	@GetMainOutdoorScene(var_33_object);
	if(var_33_object == null) {
		@Trace("Can't find main outdoor scene");
		var_34_object = null;
		var_34_object = var_30_object;
	}
	var_33_object->GetMap(var_34_object);
	var_34_object = var_30_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_860(void)
{
	@SetVariable("ood8Doberman1", 1);
}


// @pe
void func_866(object var_76_object)
{
	object var_80_object;
	func_987(var_80_object);
	object var_77_object;
	var_80_object = var_77_object;
	func_1004(var_77_object, "pt_map_kapella", (float)2);
	object var_100_object;
	func_987(var_100_object);
	var_76_object->ShowMap(var_100_object);
}


void func_1004(object var_77_object, string var_78_string, float var_79_float)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_85_cvector;
	cvector var_86_cvector;
	bool var_88_bool;
	var_87_object->GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	if(!var_88_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_78_string) + " doesnt exist");
	var_87_object->GetMap(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	var_77_object->SetMapParams(var_98_float, var_99_float, var_79_float);
}
EMIT "Stack[-2] = 0";


void func_882(void)
{
	@SetVariable("d8q02", 1);
	object var_30_object;
	func_987(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	float var_41_float;
	func_855(var_41_float);
	var_27_object->AddMark("d8q02GotoKapella", "pt_map_kapella", 0, 540068, var_41_float);
	func_920();
	func_933();
}
EMIT "Stack[-1] = 0";


void func_767(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_1086(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_784;
		@UnlookAsync("head");
	}
Label_784:
	
}


