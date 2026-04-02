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
			func_506();
			if(var_7_bool == 8110) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_583();
				object var_16_object = var_1_object;
				func_589(var_0_object);
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_577();
			}
			if(var_6_int == 7438) {
				bool var_90_bool;
				func_626(var_1_object);
				if(var_90_bool != 0) {
					func_146(var_7_bool, "Neutral");
					var_0_object->SetMessage(6748); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6749, 7440, 7439); //@t
					var_0_object->AddReply(7345, 7440, 8098); //@t
					var_0_object->AddReply(7350, 7440, 8104); //@t
					return 0;
				}
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(6753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6754, 8102, 7444); //@t
				return 0;
			}
			if(var_6_int == 8102) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(7348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7349, -1, 8103); //@t
				return 0;
			}
			if(var_6_int == 7440) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(6750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6751, 8099, 7441); //@t
				var_0_object->AddReply(7356, 8106, 8111); //@t
				return 0;
			}
			if(var_6_int == 8099) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(7346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7347, 8106, 8100); //@t
				return 0;
			}
			if(var_6_int == 8106) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(7351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7352, 7442, 8107); //@t
				var_0_object->AddReply(7357, 7442, 8113); //@t
				return 0;
			}
			if(var_6_int == 7442) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(6752); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7353, 8109, 8108); //@t
				var_0_object->AddReply(7358, 8109, 8115); //@t
				return 0;
			}
			if(var_6_int == 8109) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(7354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7355, -1, 8110); //@t
				return 0;
			}
			var_3_string = true;
			bool var_179_bool;
			func_734(var_179_bool);
			if(var_179_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa3";
	
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
				func_426(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_513(var_14_object);
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
			func_426(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_513(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_428(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_730(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_732(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_697(var_61_int);
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
		var_123_bool = !var_17_bool; //@nz
		if(var_123_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_124_object;
	var_8_object = var_124_object;
	func_484();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_513(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_577(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_519(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


// @pe
void func_583(void)
{
	@SetVariable("ood2WomanD1", 1);
}


void func_714(void)
{
	@Trace("Adding diary entry");
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 54, 1, 12136);
	bool var_42_bool; object var_43_object;
	var_37_object = var_43_object;
	func_651(var_42_bool, var_43_object, 10);
}
EMIT "Stack[-1] = 0";


void func_651(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_638(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SetVariable("player_diary", 1);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_589(object var_16_object)
{
	@SetVariable("d2q01", 5);
	object var_22_object;
	func_680(var_22_object);
	object var_19_object;
	var_22_object = var_19_object;
	float var_33_float;
	func_572(var_33_float);
	var_19_object->AddMark("d2q01WomanDGotoAlexandr", "pt_map_alexandr", 1, 15271, var_33_float);
	func_714();
	@Trace("key is given");
	object var_62_object;
	var_16_object = var_62_object;
	func_547(var_62_object, "d2q01_key", 1);
	bool var_78_bool;
	func_560(var_78_bool, "quest_d2_01", "cursed_women");
}
EMIT "Stack[-1] = 0";


void func_529(int var_79_int, string var_80_string)
{
	int var_82_int;
	@GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
}


// @pe
void func_146(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_734(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string;
	func_488(var_89_string);
	var_2_object = var_89_string;
}


void func_534(object var_67_object, object var_68_object, int var_69_int)
{
	int var_73_int;
	var_68_object->GetItemID(var_73_int);
	int var_74_int;
	@GetInvItemProperty(var_74_int, var_73_int, "Category");
	bool var_75_bool;
	var_67_object->AddItem(var_75_bool, var_68_object, var_74_int, var_69_int);
	if(!var_75_bool) //@nz
		var_67_object->DropItems(var_68_object, var_69_int);
}


void func_730(int var_59_int)
{
	var_59_int = 3352;
}


void func_732(string var_60_string)
{
	var_60_string = "ui/NPC_None.png";
}


void func_734(bool var_86_bool)
{
	var_86_bool = false;
}


void func_547(object var_62_object, string var_63_string, int var_64_int)
{
	object var_66_object;
	@CreateInvItem(var_66_object);
	var_66_object->SetItemName(var_63_string);
	object var_67_object; object var_68_object; int var_69_int;
	var_62_object = var_67_object;
	var_66_object = var_68_object;
	var_64_int = var_69_int;
	func_534(var_67_object, var_68_object, var_69_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_484(void)
{
	@CameraSwitchToNormal();
}


void func_680(object var_22_object)
{
	object var_25_object; object var_26_object;
	@GetMainOutdoorScene(var_25_object);
	if(var_25_object == null) {
		@Trace("Can't find main outdoor scene");
		var_26_object = null;
		var_26_object = var_22_object;
	}
	var_25_object->GetMap(var_26_object);
	var_26_object = var_22_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_488(string var_89_string)
{
	@Trace("playing " + var_89_string);
	float var_92_float;
	float var_93_float;
	@lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	@lshPlayAnimation(var_92_float, var_93_float);
	@Trace("start: " + var_92_float);
	@Trace("end: " + var_93_float);
}


void func_426(bool var_8_bool)
{
	var_8_bool = true;
}


void func_428(bool var_18_bool, object var_19_object)
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
	func_519(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
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


void func_560(bool var_78_bool, string var_79_string, string var_80_string)
{
	object var_82_object;
	@FindActor(var_82_object, var_79_string);
	if(var_82_object == null)
		var_78_bool = false;
	@Trigger(var_82_object, var_80_string);
	var_78_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_626(bool var_77_bool)
{
	int var_79_int;
	func_529(var_79_int, "ood2WomanD1");
	if(var_79_int == 0) {
		var_77_bool = true;
		return 0;
	}
	var_77_bool = false;
}


void func_697(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x2c8";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_506(void)
{
	bool var_9_bool;
	func_734(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_572(float var_33_float)
{
	float var_35_float;
	@GetGameTime(var_35_float);
	var_35_float = var_33_float;
}


void func_638(object var_51_object)
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


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_626(var_70_object);
		if(var_77_bool != 0) {
			func_146(var_71_object, "Neutral");
			var_0_object->SetMessage(6748); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6749, 7440, 7439); //@t
			var_0_object->AddReply(7345, 7440, 8098); //@t
			var_0_object->AddReply(7350, 7440, 8104); //@t
		} else {
					func_146(var_71_object, "Neutral");
					var_0_object->SetMessage(6753); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6754, 8102, 7444); //@t
		}
	}
	for(;;) {
		bool var_110_bool;
		func_734(var_110_bool);
		if(var_110_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_488(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_145;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_145:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


