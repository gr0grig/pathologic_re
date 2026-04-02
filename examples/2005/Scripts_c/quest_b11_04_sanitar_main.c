// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_706();
			if(var_12_bool == 31870) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_785();
				object var_66_object = var_1_object;
				func_813(var_0_object);
			}
			if(var_11_object == 31863) {
				bool var_94_bool;
				func_829(var_1_object);
				if(var_94_bool != 0) {
					func_157(var_12_bool, "Neutral");
					var_0_object->SetMessage(530504); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530505, 31865, 31864); //@t
					var_0_object->AddReply(531423, -1, 32766); //@t
					return 0;
				}
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(530512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530513, -1, 31872); //@t
				var_0_object->AddReply(531422, -1, 32765); //@t
				return 0;
			}
			if(var_11_object == 31865) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(530506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530507, 31867, 31866); //@t
				var_0_object->AddReply(531424, 31869, 32767); //@t
				return 0;
			}
			if(var_11_object == 31867) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(530508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530509, 31869, 31868); //@t
				var_0_object->AddReply(531425, -1, 32769); //@t
				return 0;
			}
			if(var_11_object == 31869) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(530510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530511, -1, 31870); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_783(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_340((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_484(var_10_bool, var_11_object);
		int var_15_int; object var_16_object;
		var_11_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_365(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_484(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_417(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_713(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_446(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_695(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_597(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_777(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_775(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_779(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_781(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_945(var_77_int);
	var_22_object->SetPlayerName(var_77_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_86_object; object var_87_object;
	var_16_object = var_86_object;
	var_22_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_141_bool = !var_25_bool; //@nz
		if(var_141_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_142_object;
	var_16_object = var_142_object;
	func_665();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_775(int var_74_int)
{
	var_74_int = 530494;
}


void func_777(int var_73_int)
{
	var_73_int = 530493;
}


void func_779(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_781(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_783(bool var_68_bool)
{
	var_68_bool = false;
}


void func_912(object var_68_object, string var_69_string, float var_70_float)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	if(var_78_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_76_cvector;
	cvector var_77_cvector;
	bool var_79_bool;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_69_string) + " doesnt exist");
	var_78_object->GetMap(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	var_68_object->SetMapParams(var_89_float, var_90_float, var_70_float);
}
EMIT "Stack[-2] = 0";


void func_785(void)
{
	@SetVariable("b11q04", 2);
	object var_23_object;
	func_895(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_746(var_34_float);
	var_20_object->AddMark("b11q04SanitarGotoOfficer", "pt_gmap_vagon_army", 0, 530531, var_34_float);
	func_841();
	bool var_60_bool;
	func_734(var_60_bool, "quest_b11_04", "place_officer");
}
EMIT "Stack[-1] = 0";


void func_665(void)
{
	bool var_144_bool;
	@CameraSwitchToNormal();
	bool var_145_bool;
	func_783(var_145_bool);
	if(var_145_bool != 0) {
	} else {
		@HasAnimationTrack(var_144_bool, "head");
		if(var_144_bool == 0) goto Label_681;
		@UnlookAsync("head");
	}
Label_681:
	
}


// @pe
void func_157(object var_2_object, string var_101_string)
{
	bool var_102_bool;
	func_783(var_102_bool);
	if(!var_102_bool) //@nz
		return 0;
	if(var_101_string == var_2_object)
		return 0;
	string var_105_string; bool var_106_bool;
	var_101_string = var_105_string;
	if(var_101_string == "")
		var_106_bool = false;
	else
		var_106_bool = true;
	func_689(var_105_string, var_106_bool);
	var_2_object = var_101_string;
	
}


void func_417(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_419(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_592(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_498();
	if(!false) //@nz
		@KillTimer(10);
}


void func_682(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


// @pe
void func_813(object var_67_object)
{
	object var_71_object;
	func_895(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_912(var_68_object, "pt_gmap_vagon_army", (float)2);
	object var_91_object;
	func_895(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


void func_945(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3c0";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_689(string var_105_string, bool var_106_bool)
{
	float var_111_float; float var_112_float;
	@lshGetAnimTimes(var_105_string, var_111_float, var_112_float);
	@lshPlayAnimation(var_111_float, var_112_float, var_106_bool);
}


void func_695(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


// @pe
void func_829(bool var_93_bool)
{
	int var_95_int;
	func_729(var_95_int, "b11q04");
	if(var_95_int == 1)
		var_93_bool = true;
	var_93_bool = false;
}


void func_446(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_584(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_577(bool var_70_bool)
{
	var_70_bool = true;
}


void func_706(void)
{
	bool var_14_bool;
	func_783(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_579(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_584(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_713(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_829(var_86_object);
		if(var_93_bool != 0) {
			func_157(var_87_object, "Neutral");
			var_0_object->SetMessage(530504); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530505, 31865, 31864); //@t
			var_0_object->AddReply(531423, -1, 32766); //@t
		} else {
					func_157(var_87_object, "Neutral");
					var_0_object->SetMessage(530512); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530513, -1, 31872); //@t
					var_0_object->AddReply(531422, -1, 32765); //@t
		}
	}
	for(;;) {
		bool var_120_bool;
		func_783(var_120_bool);
		if(var_120_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_682(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_841(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 553, 2, 530528);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_867(var_42_bool, var_43_object, 551);
}
EMIT "Stack[-1] = 0";


void func_719(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_592(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_340(float var_11_float, float var_12_float)
{
	
Label_341:
	for(;;) {
		bool var_15_bool;
		func_592(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_349;
		@Hold();
	}
	
Label_349:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_419(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_341;
}
EMIT "Return(); Pop(2)";


void func_597(bool var_26_bool, object var_27_object, float var_28_float)
{
	cvector var_39_cvector; bool var_46_bool;
	var_27_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_27_object->GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_51_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_51_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_719(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * var_28_float) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_783(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_659;
		@LookAsyncCamera("head");
	}
Label_659:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_854(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_729(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_734(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


void func_867(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_854(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_484(object var_2_object, string var_3_string)
{
	func_579();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_746(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_365(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_417(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_713(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_751(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_498(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_592(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_758(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_592(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_545;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_751(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_574;
				}
			} else if(var_37_int != 0) {
				goto Label_574;
			}
			}
					bool var_70_bool;
					func_577(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_569;
			}
		}
	Label_574:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_569:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_758(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_751(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_895(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


