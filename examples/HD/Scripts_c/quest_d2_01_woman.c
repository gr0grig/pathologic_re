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
			if(var_7_bool == 8110) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_658();
				object var_16_object = var_1_object;
				func_664(var_0_object);
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_652();
			}
			if(var_6_int == 7438) {
				bool var_93_bool;
				func_701(var_1_object);
				if(var_93_bool != 0) {
					func_157(var_7_bool, "Neutral");
					var_0_object->SetMessage(506748); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506749, 7440, 7439); //@t
					var_0_object->AddReply(507345, 7440, 8098); //@t
					var_0_object->AddReply(507350, 7440, 8104); //@t
					return 0;
				}
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(506753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506754, 8102, 7444); //@t
				return 0;
			}
			if(var_6_int == 8102) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(507348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507349, -1, 8103); //@t
				return 0;
			}
			if(var_6_int == 7440) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(506750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506751, 8099, 7441); //@t
				var_0_object->AddReply(507356, 8106, 8111); //@t
				return 0;
			}
			if(var_6_int == 8099) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(507346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507347, 8106, 8100); //@t
				return 0;
			}
			if(var_6_int == 8106) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(507351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507352, 7442, 8107); //@t
				var_0_object->AddReply(507357, 7442, 8113); //@t
				return 0;
			}
			if(var_6_int == 7442) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(506752); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507353, 8109, 8108); //@t
				var_0_object->AddReply(507358, 8109, 8115); //@t
				return 0;
			}
			if(var_6_int == 8109) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(507354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507355, -1, 8110); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_809(var_184_bool);
			if(var_184_bool != 0)
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
				func_443(var_13_bool);
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
			func_443(var_8_bool);
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
	func_445(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_803(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_801(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_805(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_807(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_784(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_79_object; object var_80_object;
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_144_bool = !var_17_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_145_object;
	var_8_object = var_145_object;
	func_514();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_576(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_514(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal(true);
	bool var_149_bool;
	func_809(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_531;
		@UnlookAsync("head");
	}
Label_531:
	
}


void func_647(float var_33_float)
{
	float var_35_float;
	@GetGameTime(var_35_float);
	var_35_float = var_33_float;
}


void func_713(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 54, 1, 512136);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_739(var_41_bool, var_42_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_701(var_79_object);
		if(var_86_bool != 0) {
			func_157(var_80_object, "Neutral");
			var_0_object->SetMessage(506748); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506749, 7440, 7439); //@t
			var_0_object->AddReply(507345, 7440, 8098); //@t
			var_0_object->AddReply(507350, 7440, 8104); //@t
		} else {
					func_157(var_80_object, "Neutral");
					var_0_object->SetMessage(506753); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506754, 8102, 7444); //@t
		}
	}
	for(;;) {
		bool var_121_bool;
		func_809(var_121_bool);
		if(var_121_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_532(var_2_object);
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


void func_586(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


// @pe
void func_652(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_591(int var_76_int, int var_77_int)
{
	object var_79_object;
	@CreateIntVector(var_79_object);
	var_79_object->add(var_76_int);
	var_79_object->add(var_77_int);
	@SendWorldWndMessage(3, var_79_object);
}
EMIT "Stack[-1] = 0";


void func_784(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x31f";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_658(void)
{
	@SetVariable("ood2WomanD1", 1);
}


void func_767(object var_22_object)
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


void func_532(string var_123_string)
{
	bool var_127_bool; float var_128_float; float var_129_float;
	@lshHasAnimation(var_127_bool, var_123_string);
	if(var_127_bool != 0) {
		@lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		@lshPlayAnimation(var_128_float, var_129_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_123_string);
	}
	
}


void func_726(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_664(object var_16_object)
{
	@SetVariable("d2q01", 5);
	object var_22_object;
	func_767(var_22_object);
	object var_19_object;
	var_22_object = var_19_object;
	float var_33_float;
	func_647(var_33_float);
	var_19_object->AddMark("d2q01WomanDGotoAlexandr", "pt_map_alexandr", 1, 515271, var_33_float);
	func_713();
	@Trace("key is given");
	object var_60_object;
	var_16_object = var_60_object;
	func_622(var_60_object, "d2q01_key", 1);
	bool var_81_bool;
	func_635(var_81_bool, "quest_d2_01", "cursed_women");
}
EMIT "Stack[-1] = 0";


void func_603(object var_65_object, object var_66_object, int var_67_int)
{
	int var_71_int;
	var_66_object->GetItemID(var_71_int);
	int var_72_int;
	@GetInvItemProperty(var_72_int, var_71_int, "Category");
	bool var_73_bool;
	var_65_object->AddItem(var_73_bool, var_66_object, var_72_int, var_67_int);
	if(!var_73_bool) { //@nz
		var_65_object->DropItems(var_66_object, var_67_int);
	} else {
		int var_76_int; int var_77_int;
		var_71_int = var_76_int;
		var_67_int = var_77_int;
		func_591(var_76_int, var_77_int);
	}
	
}


// @pe
void func_157(object var_2_object, string var_94_string)
{
	bool var_95_bool;
	func_809(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_object)
		return 0;
	string var_98_string; bool var_99_bool;
	var_94_string = var_98_string;
	if(var_94_string == "")
		var_99_bool = false;
	else
		var_99_bool = true;
	func_548(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	
}


void func_801(int var_67_int)
{
	var_67_int = 515567;
}


void func_803(int var_66_int)
{
	var_66_int = 503352;
}


void func_548(string var_98_string, bool var_99_bool)
{
	bool var_105_bool; float var_106_float; float var_107_float;
	@lshHasAnimation(var_105_bool, var_98_string);
	if(var_105_bool != 0) {
		@lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		@lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_98_string);
	}
	
}


void func_805(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
}


void func_739(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_726(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SendWorldWndMessage(7);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_807(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
}


void func_635(bool var_81_bool, string var_82_string, string var_83_string)
{
	object var_85_object;
	@FindActor(var_85_object, var_82_string);
	if(var_85_object == null)
		var_81_bool = false;
	@Trigger(var_85_object, var_83_string);
	var_81_bool = true;
}
EMIT "Stack[-1] = 0";


void func_809(bool var_61_bool)
{
	var_61_bool = false;
}


void func_622(object var_60_object, string var_61_string, int var_62_int)
{
	object var_64_object;
	@CreateInvItem(var_64_object);
	var_64_object->SetItemName(var_61_string);
	object var_65_object; object var_66_object; int var_67_int;
	var_60_object = var_65_object;
	var_64_object = var_66_object;
	var_62_int = var_67_int;
	func_603(var_65_object, var_66_object, var_67_int);
}
EMIT "Stack[-1] = 0";


void func_563(void)
{
	bool var_9_bool;
	func_809(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_570(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_443(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_701(bool var_86_bool)
{
	int var_88_int;
	func_586(var_88_int, "ood2WomanD1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_445(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_576(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_809(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_508;
		@LookAsyncCamera("head");
	}
Label_508:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


