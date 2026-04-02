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
			func_472();
			if(var_7_bool == 13218) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_517();
			}
			if(var_7_bool == 13214) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_517();
			}
			if(var_7_bool == 13215) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_517();
			}
			if(var_6_int == 13203) {
				bool var_73_bool;
				func_545(var_1_object);
				if(var_73_bool != 0) {
					func_121(var_7_bool, "Neutral");
					var_0_object->SetMessage(11988); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11989, 13205, 13204); //@t
					return 0;
				}
			}
			if(var_6_int == 13205) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(11990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11991, 13207, 13206); //@t
				var_0_object->AddReply(12004, 13207, 13219); //@t
				return 0;
			}
			if(var_6_int == 13207) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(11992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11993, 13209, 13208); //@t
				var_0_object->AddReply(12005, 13209, 13221); //@t
				return 0;
			}
			if(var_6_int == 13209) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(11994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11995, 13211, 13210); //@t
				var_0_object->AddReply(12006, 13213, 13223); //@t
				return 0;
			}
			if(var_6_int == 13211) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(11996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11997, 13213, 13212); //@t
				return 0;
			}
			if(var_6_int == 13213) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(11998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12001, 13217, 13216); //@t
				var_0_object->AddReply(11999, -1, 13214); //@t
				var_0_object->AddReply(12000, -1, 13215); //@t
				return 0;
			}
			if(var_6_int == 13217) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(12002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12003, -1, 13218); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_653(var_157_bool);
			if(var_157_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8a";
	
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
				func_392(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_479(var_14_object);
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
			func_392(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_479(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_394(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_649(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_651(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_616(var_61_int);
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
		var_112_bool = !var_17_bool; //@nz
		if(var_112_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_113_object;
	var_8_object = var_113_object;
	func_450();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_512(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_517(void)
{
	@SetVariable("d5q02", 4);
	object var_18_object;
	func_599(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_512(var_29_float);
	var_15_object->AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", 0, 15364, var_29_float);
	func_633();
	bool var_57_bool;
	func_500(var_57_bool, "quest_d5_02", "remove_girl");
}
EMIT "Stack[-1] = 0";


void func_392(bool var_8_bool)
{
	var_8_bool = true;
}


void func_649(int var_59_int)
{
	var_59_int = 12582;
}


void func_394(bool var_18_bool, object var_19_object)
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
	func_485(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
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


void func_651(string var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
}


void func_653(bool var_86_bool)
{
	var_86_bool = false;
}


// @pe
void func_545(bool var_77_bool)
{
	int var_79_int;
	func_495(var_79_int, "d5q02");
	if(var_79_int == 3)
		var_77_bool = true;
	var_77_bool = false;
}


void func_557(object var_47_object)
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


void func_570(bool var_38_bool, object var_39_object, int var_40_int)
{
	object var_47_object;
	func_557(var_47_object);
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


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_545(var_70_object);
		if(var_77_bool != 0) {
			func_121(var_71_object, "Neutral");
			var_0_object->SetMessage(11988); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11989, 13205, 13204); //@t
		} else {
				return 0;
		}
	}
	bool var_104_bool;
	func_653(var_104_bool);
	if(var_104_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_454(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_120;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_120:
		return 0;

	}
	
}
EMIT "GOTO 0x43";


// @pe
void func_450(void)
{
	@CameraSwitchToNormal();
}


void func_454(string var_89_string)
{
	@Trace("playing " + var_89_string);
	float var_92_float;
	float var_93_float;
	@lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	@lshPlayAnimation(var_92_float, var_93_float);
	@Trace("start: " + var_92_float);
	@Trace("end: " + var_93_float);
}


void func_599(object var_18_object)
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


void func_472(void)
{
	bool var_9_bool;
	func_653(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_479(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_121(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_653(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string;
	func_454(var_89_string);
	var_2_object = var_89_string;
}


void func_485(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


void func_616(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x277";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_495(int var_79_int, string var_80_string)
{
	int var_82_int;
	@GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
}


void func_500(bool var_57_bool, string var_58_string, string var_59_string)
{
	object var_61_object;
	@FindActor(var_61_object, var_58_string);
	if(var_61_object == null)
		var_57_bool = false;
	@Trigger(var_61_object, var_59_string);
	var_57_bool = true;
}
EMIT "Stack[-1] = 0";


void func_633(void)
{
	@Trace("Adding diary entry");
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 152, 2, 15358);
	bool var_38_bool; object var_39_object;
	var_33_object = var_39_object;
	func_570(var_38_bool, var_39_object, 148);
}
EMIT "Stack[-1] = 0";


