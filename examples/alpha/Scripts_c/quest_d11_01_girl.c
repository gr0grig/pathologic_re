// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_563();
			if(var_7_bool == 15659) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_614();
			}
			if(var_7_bool == 15660) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_614();
			}
			if(var_6_int == 15646) {
				bool var_69_bool = false;
				bool var_70_bool;
				func_642(var_1_object);
				if(var_70_bool != 0) {
					bool var_78_bool;
					func_654(var_1_object);
					if(var_78_bool != 0)
						var_69_bool = true;
				}
				if(var_69_bool != 0) {
					object var_84_object; object var_85_object;
					var_84_object = var_1_object;
					var_85_object = var_0_object;
					func_608();
					func_155(var_7_bool, "Neutral");
					var_0_object->SetMessage(14421); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14422, 15648, 15647); //@t
					var_0_object->AddReply(14443, 15650, 15670); //@t
					return 0;
				}
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14503, -1, 15740); //@t
				return 0;
			}
			if(var_6_int == 15648) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14423); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14424, 15650, 15649); //@t
				var_0_object->AddReply(14440, 15667, 15666); //@t
				return 0;
			}
			if(var_6_int == 15667) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14442, 15650, 15668); //@t
				return 0;
			}
			if(var_6_int == 15650) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14426, 15652, 15651); //@t
				var_0_object->AddReply(14436, 15662, 15661); //@t
				return 0;
			}
			if(var_6_int == 15662) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14438, 15652, 15663); //@t
				var_0_object->AddReply(14439, 15652, 15665); //@t
				return 0;
			}
			if(var_6_int == 15652) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14428, 15654, 15653); //@t
				return 0;
			}
			if(var_6_int == 15654) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14430, 15656, 15655); //@t
				return 0;
			}
			if(var_6_int == 15656) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14432, 15658, 15657); //@t
				return 0;
			}
			if(var_6_int == 15658) {
				func_155(var_7_bool, "Neutral");
				var_0_object->SetMessage(14433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14434, -1, 15659); //@t
				var_0_object->AddReply(14435, -1, 15660); //@t
				return 0;
			}
			var_3_string = true;
			bool var_183_bool;
			func_762(var_183_bool);
			if(var_183_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_483(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_570(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_483(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_570(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_485(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_758(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_760(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_725(var_61_int);
	var_14_object->SetPlayerName(var_61_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_70_object; object var_71_object;
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_131_bool = !var_17_bool; //@nz
		if(var_131_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_132_object;
	var_8_object = var_132_object;
	func_541();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_576(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


// @pe
void func_642(bool var_78_bool)
{
	int var_80_int;
	func_586(var_80_int, "d11q01");
	if(var_80_int == 1)
		var_78_bool = true;
	var_78_bool = false;
}


void func_708(object var_18_object)
{
	object var_21_object; object var_22_object;
	@GetMainOutdoorScene(var_21_object);
	if(var_21_object == null) {
		@Trace("Can't find main outdoor scene");
		var_22_object = null;
		var_22_object = var_18_object;
	}
	var_21_object->GetMap(var_22_object);
	var_22_object = var_18_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_586(int var_80_int, string var_81_string)
{
	int var_83_int;
	@GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
}


// @pe
void func_654(bool var_86_bool)
{
	int var_88_int;
	func_586(var_88_int, "ood11Nude1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_591(bool var_57_bool, string var_58_string, string var_59_string)
{
	object var_61_object;
	@FindActor(var_61_object, var_58_string);
	if(var_61_object == null)
		var_57_bool = false;
	@Trigger(var_61_object, var_59_string);
	var_57_bool = true;
}
EMIT "Stack[-1] = 0";


void func_725(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x2e4";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_666(object var_47_object)
{
	object var_49_object;
	@GetDiaryRoot(var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_47_object = false;
	}
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_155(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_762(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string;
	func_545(var_100_string);
	var_2_object = var_100_string;
}


void func_603(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


// @pe
void func_541(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_608(void)
{
	@SetVariable("ood11Nude1", 1);
}


void func_545(string var_100_string)
{
	@Trace("playing " + var_100_string);
	float var_103_float;
	float var_104_float;
	@lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float);
	@Trace("start: " + var_103_float);
	@Trace("end: " + var_104_float);
}


void func_483(bool var_8_bool)
{
	var_8_bool = true;
}


void func_762(bool var_97_bool)
{
	var_97_bool = false;
}


void func_485(bool var_18_bool, object var_19_object)
{
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	float var_28_float;
	var_19_object->GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_28_float);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	@GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_28_float);
	cvector var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_40_float = sqrt(var_31_cvector | var_31_cvector);
	var_31_cvector /= var_40_float;
	cvector var_32_cvector = -var_31_cvector;
	cvector var_43_cvector;
	func_576(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_33_cvector = ((var_31_cvector * 70) + (var_43_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_30_cvector + var_33_cvector), var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	@Rotate(var_56_float, var_57_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
}


void func_614(void)
{
	@SetVariable("d11q01", 2);
	object var_18_object;
	func_708(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_603(var_29_float);
	var_15_object->AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", 1, 15482, var_29_float);
	func_742();
	bool var_57_bool;
	func_591(var_57_bool, "quest_d11_01", "init_soldiers");
}
EMIT "Stack[-1] = 0";


void func_679(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_666(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	object var_45_object;
	var_44_object->Find(var_40_int, var_45_object);
	if(!var_45_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_40_int);
		var_38_bool = false;
	}
	var_45_object->AddChild(var_39_object);
	@SetVariable("player_diary", 1);
	int var_46_int;
	var_39_object->GetCategory(var_46_int);
	@SetDiarySection(var_46_int);
	var_38_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_742(void)
{
	@Trace("Adding diary entry");
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 194, 1, 15479);
	bool var_38_bool; object var_39_object;
	var_33_object = var_39_object;
	func_679(var_38_bool, var_39_object, 192);
}
EMIT "Stack[-1] = 0";


void func_563(void)
{
	bool var_9_bool;
	func_762(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_758(int var_59_int)
{
	var_59_int = 14839;
}


void func_760(string var_60_string)
{
	var_60_string = "ui/NPC_None.png";
}


void func_570(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool = false;
		bool var_78_bool;
		func_642(var_1_object);
		if(var_78_bool != 0) {
			bool var_86_bool;
			func_654(var_1_object);
			if(var_86_bool != 0)
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			object var_92_object; object var_93_object;
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_608();
			func_155(var_71_object, "Neutral");
			var_0_object->SetMessage(14421); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14422, 15648, 15647); //@t
			var_0_object->AddReply(14443, 15650, 15670); //@t
		} else {
					func_155(var_71_object, "Neutral");
					var_0_object->SetMessage(14502); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14503, -1, 15740); //@t
		}
	}
	for(;;) {
		bool var_118_bool;
		func_762(var_118_bool);
		if(var_118_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_545(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_154;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_154:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


