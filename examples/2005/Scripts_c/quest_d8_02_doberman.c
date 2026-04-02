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
			func_809();
			if(var_12_bool == 34820) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_858();
				object var_68_object = var_1_object;
				func_842(var_0_object);
			}
			if(var_12_bool == 37604) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_858();
				object var_98_object = var_1_object;
				func_842(var_0_object);
			}
			if(var_11_object == 34821) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(533313); //@t
				var_0_object->ClearReplies(); //@t
				bool var_115_bool;
				func_884(var_1_object);
				if(var_115_bool != 0)
					var_0_object->AddReply(535847, 37548, 37547); //@t
				var_0_object->AddReply(535882, -1, 37588); //@t
				var_0_object->AddReply(535851, -1, 37551); //@t
				return 0;
			}
			if(var_11_object == 37548) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535883, 37590, 37589); //@t
				var_0_object->AddReply(535849, 37590, 37549); //@t
				return 0;
			}
			if(var_11_object == 37590) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535885, 37550, 37591); //@t
				var_0_object->AddReply(535886, 37550, 37592); //@t
				return 0;
			}
			if(var_11_object == 37550) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535887, 37595, 37594); //@t
				return 0;
			}
			if(var_11_object == 37595) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533308, 34817, 34816); //@t
				var_0_object->AddReply(535889, 37605, 37597); //@t
				return 0;
			}
			if(var_11_object == 37605) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535897, 37600, 37606); //@t
				return 0;
			}
			if(var_11_object == 34817) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(533309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533310, 34819, 34818); //@t
				var_0_object->AddReply(535890, 37601, 37598); //@t
				return 0;
			}
			if(var_11_object == 37601) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535893); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535894, 37600, 37602); //@t
				return 0;
			}
			if(var_11_object == 34819) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(533311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535891, 37600, 37599); //@t
				return 0;
			}
			if(var_11_object == 37600) {
				func_142(var_12_bool, "Neutral");
				var_0_object->SetMessage(535892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533312, -1, 34820); //@t
				var_0_object->AddReply(535895, -1, 37604); //@t
				return 0;
			}
			var_3_string = true;
			bool var_210_bool;
			func_1062(var_210_bool);
			if(var_210_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_443((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		TaskCall(0);
		int var_12_int;
		func_0(var_14_object, var_12_int, var_13_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_468(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_587(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_520(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_816(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_549(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
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


void func_768(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_1062(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_784;
		@UnlookAsync("head");
	}
Label_784:
	
}


void func_0(object var_0_object, int var_12_int, object var_13_object)
{
	var_0_object = var_13_object;
	bool var_23_bool; object var_24_object;
	var_13_object = var_24_object;
	func_700(var_23_bool, var_24_object, 70.0);
	if(!var_23_bool) { //@nz
		var_12_int = -2;
		return 8;
	}
	object var_19_object;
	@CreateDialog(var_19_object);
	int var_70_int;
	func_1056(var_70_int);
	var_19_object->SetNPCName(var_70_int);
	int var_71_int;
	func_1054(var_71_int);
	var_19_object->SetNPCDescription(var_71_int);
	string var_72_string;
	func_1058(var_72_string);
	var_19_object->SetPhoto(var_72_string);
	string var_73_string;
	func_1060(var_73_string);
	var_19_object->SetPhoto2(var_73_string);
	int var_74_int;
	func_1013(var_74_int);
	var_19_object->SetPlayerName(var_74_int);
	bool var_20_bool;
	@IsOverrideActive(var_20_bool);
	if(var_20_bool != 0) {
		var_12_int = -2;
		return 8;
	}
	@DoDialog(var_19_object);
	object var_83_object; object var_84_object;
	var_13_object = var_83_object;
	var_19_object = var_84_object;
	TaskCall(1);
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	bool var_22_bool;
	var_19_object->IsDialogEnd(var_22_bool);
	
	for(;;) {
		var_133_bool = !var_22_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_19_object->IsDialogEnd(var_22_bool);
	}
	
Label_63:
	object var_134_object;
	var_13_object = var_134_object;
	func_768();
	@StopDialog(var_19_object);
	var_19_object->GetReturnValue(-1);
	int var_21_int = var_12_int;
}
EMIT "Stack[-4] = 0";


void func_896(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 127, 2, 513772);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_935(var_42_bool, var_43_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1030(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_520(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_522(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_695(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_601();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1037(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_1030(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_142(object var_2_object, string var_90_string)
{
	bool var_91_bool;
	func_1062(var_91_bool);
	if(!var_91_bool) //@nz
		return 0;
	if(var_90_string == var_2_object)
		return 0;
	string var_94_string; bool var_95_bool;
	var_90_string = var_94_string;
	if(var_90_string == "")
		var_95_bool = false;
	else
		var_95_bool = true;
	func_792(var_94_string, var_95_bool);
	var_2_object = var_90_string;
	
}


void func_909(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 648, 2, 533321);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_935(var_65_bool, var_66_object, 127);
}
EMIT "Stack[-1] = 0";


void func_785(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


void func_792(string var_94_string, bool var_95_bool)
{
	float var_100_float; float var_101_float;
	@lshGetAnimTimes(var_94_string, var_100_float, var_101_float);
	@lshPlayAnimation(var_100_float, var_101_float, var_95_bool);
}


void func_922(object var_51_object)
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


void func_798(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_1054(int var_71_int)
{
	var_71_int = 518097;
}


void func_1056(int var_70_int)
{
	var_70_int = 518096;
}


void func_1058(string var_72_string)
{
	var_72_string = "ui/NPC_Citizen2.png";
}


void func_1060(string var_73_string)
{
	var_73_string = "ui/NPC_Citizen2_b.png";
}


void func_549(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_687(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_1062(bool var_65_bool)
{
	var_65_bool = false;
}


void func_935(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_922(var_51_object);
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


void func_680(bool var_70_bool)
{
	var_70_bool = true;
}


void func_809(void)
{
	bool var_14_bool;
	func_1062(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_682(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_687(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_816(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_822(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_695(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_443(float var_11_float, float var_12_float)
{
	
Label_444:
	for(;;) {
		bool var_15_bool;
		func_695(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_452;
		@Hold();
	}
	
Label_452:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_522(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_444;
}
EMIT "Return(); Pop(2)";


void func_700(bool var_23_bool, object var_24_object, float var_25_float)
{
	cvector var_36_cvector; bool var_43_bool;
	var_24_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_24_object->GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_44_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_45_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_48_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_48_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_822(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * var_25_float) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_23_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	bool var_65_bool;
	func_1062(var_65_bool);
	if(var_65_bool != 0) {
	} else {
		@HasAnimationTrack(var_43_bool, "head");
		if(var_43_bool == 0) goto Label_762;
		@LookAsyncCamera("head");
	}
Label_762:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_23_bool = true;
	
}


void func_832(int var_105_int, string var_106_string)
{
	int var_108_int;
	@GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
}


void func_963(object var_23_object)
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


void func_837(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_83_object, object var_84_object)
{
	var_0_object = var_84_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_84_object, "Neutral");
		var_0_object->SetMessage(533313); //@t
		var_0_object->ClearReplies(); //@t
		bool var_103_bool;
		func_884(var_83_object);
		if(var_103_bool != 0)
			var_0_object->AddReply(535847, 37548, 37547); //@t
		var_0_object->AddReply(535882, -1, 37588); //@t
		var_0_object->AddReply(535851, -1, 37551); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_120_bool;
	func_1062(var_120_bool);
	if(var_120_bool != 0) {

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


// @pe
void func_842(object var_69_object)
{
	object var_73_object;
	func_963(var_73_object);
	object var_70_object;
	var_73_object = var_70_object;
	func_980(var_70_object, "pt_map_kapella", (float)2);
	object var_93_object;
	func_963(var_93_object);
	var_69_object->ShowMap(var_93_object);
}


// @pe
void func_587(object var_2_object, string var_3_string)
{
	func_682();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_468(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_520(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_816(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_980(object var_70_object, string var_71_string, float var_72_float)
{
	object var_80_object;
	@GetMainOutdoorScene(var_80_object);
	if(var_80_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_78_cvector;
	cvector var_79_cvector;
	bool var_81_bool;
	var_80_object->GetLocator(var_71_string, var_81_bool, var_78_cvector, var_79_cvector);
	if(!var_81_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_71_string) + " doesnt exist");
	var_80_object->GetMap(var_70_object);
	if(var_70_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_91_float = GetByIndex(var_78_cvector, 0);
	var_92_float = GetByIndex(var_78_cvector, 2);
	var_70_object->SetMapParams(var_91_float, var_92_float, var_72_float);
}
EMIT "Stack[-2] = 0";


void func_601(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_695(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_1037(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_695(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_648;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_1030(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_677;
				}
			} else if(var_37_int != 0) {
				goto Label_677;
			}
			}
					bool var_70_bool;
					func_680(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_672;
			}
		}
	Label_677:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_672:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_858(void)
{
	@SetVariable("d8q02", 1);
	object var_23_object;
	func_963(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_837(var_34_float);
	var_20_object->AddMark("d8q02GotoKapella", "pt_map_kapella", 0, 540068, var_34_float);
	func_896();
	func_909();
}
EMIT "Stack[-1] = 0";


// @pe
void func_884(bool var_103_bool)
{
	int var_105_int;
	func_832(var_105_int, "ood8Doberman1");
	if(var_105_int == 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


void func_1013(int var_74_int)
{
	int var_76_int;
	@GetVariable("branch", var_76_int);
	if(var_76_int == 0) {
		var_74_int = 1;
		return 2;
	EMIT "GOTO 0x404";
	}
	if(var_76_int == 1) {
		var_74_int = 2;
		return 2;
	}
	var_74_int = 3;
}


