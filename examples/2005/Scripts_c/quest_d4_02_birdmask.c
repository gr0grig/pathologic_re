// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_691();
			if(var_6_int == 13059) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_810();
				object var_15_object; object var_16_object;
				var_15_object = var_1_object;
				var_16_object = var_0_object;
				func_873();
			}
			if(var_6_int == 13065) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_816();
				object var_52_object = var_1_object;
				func_799(var_0_object);
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_793();
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_822();
			}
			if(var_5_int == 13056) {
				bool var_116_bool;
				func_883(var_1_object);
				if(var_116_bool != 0) {
					func_192(var_6_int, "Neutral");
					var_0_object->SetMessage(511843); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511844, 13058, 13057); //@t
					var_0_object->AddReply(536103, 37857, 37856); //@t
					return 0;
				}
				bool var_143_bool;
				func_907(var_1_object);
				if(!var_143_bool) { //@nz
					func_192(var_6_int, "Neutral");
					var_0_object->SetMessage(511847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511848, -1, 13061); //@t
					return 0;
				}
				bool var_155_bool = false;
				bool var_156_bool;
				func_895(var_1_object);
				if(var_156_bool != 0) {
					bool var_162_bool;
					func_907(var_1_object);
					if(var_162_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0) {
					func_192(var_6_int, "Neutral");
					var_0_object->SetMessage(511849); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(536115, 13064, 37870); //@t
					var_0_object->AddReply(511850, 13064, 13063); //@t
					return 0;
				}
			}
			if(var_5_int == 13064) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(511851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511852, -1, 13065); //@t
				return 0;
			}
			if(var_5_int == 37857) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(536104); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536105, 13058, 37858); //@t
				return 0;
			}
			if(var_5_int == 13058) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(511845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536106, 37861, 37860); //@t
				return 0;
			}
			if(var_5_int == 37861) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(536107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536108, 37863, 37862); //@t
				var_0_object->AddReply(536114, 37863, 37868); //@t
				return 0;
			}
			if(var_5_int == 37863) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(536109); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536110, 37865, 37864); //@t
				return 0;
			}
			if(var_5_int == 37865) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(536111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536112, 37867, 37866); //@t
				return 0;
			}
			if(var_5_int == 37867) {
				func_192(var_6_int, "Neutral");
				var_0_object->SetMessage(536113); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511846, -1, 13059); //@t
				return 0;
			}
			var_3_string = true;
			bool var_224_bool;
			func_1028(var_224_bool);
			if(var_224_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd7";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_502();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		func_583();
		int var_6_int; object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_1024(string var_66_string)
{
	var_66_string = "ui/NPC_bmask.png";
}


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_593(var_17_bool, var_18_object, 130.0);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_64_int;
	func_1022(var_64_int);
	var_13_object->SetNPCName(var_64_int);
	int var_65_int;
	func_1020(var_65_int);
	var_13_object->SetNPCDescription(var_65_int);
	string var_66_string;
	func_1024(var_66_string);
	var_13_object->SetPhoto(var_66_string);
	string var_67_string;
	func_1026(var_67_string);
	var_13_object->SetPhoto2(var_67_string);
	int var_68_int;
	func_1003(var_68_int);
	var_13_object->SetPlayerName(var_68_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_77_object; object var_78_object;
	var_7_object = var_77_object;
	var_13_object = var_78_object;
	TaskCall(1);
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_153_bool = !var_16_bool; //@nz
		if(var_153_bool == 0) goto Label_63;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_63:
	object var_154_object;
	var_7_object = var_154_object;
	func_661();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_1026(string var_67_string)
{
	var_67_string = "ui/NPC_bmask_b.png";
}


void func_769(string var_30_string, int var_31_int)
{
	string var_33_string = "idle";
	if(var_31_int != 0)
		var_33_string += var_31_int;
	var_33_string = var_30_string;
}


void func_1028(bool var_59_bool)
{
	var_59_bool = false;
}


void func_776(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string; int var_31_int;
		var_27_int = var_31_int;
		func_769(var_30_string, var_31_int);
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


// @pe
void func_907(bool var_124_bool)
{
	int var_126_int;
	func_708(var_126_int, "d4q02_survived");
	if(var_126_int == 1)
		var_124_bool = true;
	var_124_bool = false;
}


void func_661(void)
{
	bool var_156_bool;
	@CameraSwitchToNormal();
	bool var_157_bool;
	func_1028(var_157_bool);
	if(var_157_bool != 0) {
	} else {
		@HasAnimationTrack(var_156_bool, "head");
		if(var_156_bool == 0) goto Label_677;
		@UnlookAsync("head");
	}
Label_677:
	
}


void func_919(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 138, 2, 515329);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_958(var_22_bool, var_23_object, 21);
}
EMIT "Stack[-1] = 0";


// @pe
void func_793(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_799(object var_52_object)
{
	@Trace("powder is given");
	object var_55_object;
	var_52_object = var_55_object;
	func_744(var_55_object, "powder", 1);
}


void func_932(void)
{
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 94, 2, 512176);
	bool var_108_bool; object var_109_object;
	var_104_object = var_109_object;
	func_958(var_108_bool, var_109_object, 21);
}
EMIT "Stack[-1] = 0";


void func_678(string var_113_string)
{
	float var_116_float; float var_117_float;
	@lshGetAnimTimes(var_113_string, var_116_float, var_117_float);
	@lshPlayAnimation(var_116_float, var_117_float, false);
}


// @pe
void func_810(void)
{
	@SetVariable("ood4BirdmaskHome1", 1);
}


void func_685(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


// @pe
void func_816(void)
{
	@SetVariable("ood4BirdmaskHome2", 1);
}


void func_945(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_691(void)
{
	bool var_8_bool;
	func_1028(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_822(void)
{
	object var_86_object;
	func_986(var_86_object);
	object var_84_object;
	var_86_object = var_84_object;
	object var_85_object;
	var_84_object->FindMark(var_85_object, "d4q02BirdmaskNearHome");
	if(var_85_object != 0)
		var_85_object->Remove();
	var_84_object->FindMark(var_85_object, "d4q02MladVladGotoAJLSelf");
	if(var_85_object != 0)
		var_85_object->Remove();
	var_84_object->FindMark(var_85_object, "d4q02MladVladGotoAnna");
	if(var_85_object != 0)
		var_85_object->Remove();
	var_84_object->FindMark(var_85_object, "d4q02MladVladGotoJulia");
	if(var_85_object != 0)
		var_85_object->Remove();
	var_84_object->FindMark(var_85_object, "d4q02MladVladGotoLara");
	if(var_85_object != 0)
		var_85_object->Remove();
	func_932();
	bool var_111_bool;
	func_757(var_111_bool, "quest_d4_02", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_698(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_48_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_48_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_48_float;
}


void func_958(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_945(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_192(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_1028(var_93_bool);
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
	func_685(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_708(int var_86_int, string var_87_string)
{
	int var_89_int;
	@GetVariable(var_87_string, var_89_int);
	var_89_int = var_86_int;
}


void func_581(bool var_49_bool)
{
	var_49_bool = true;
}


void func_583(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_713(int var_71_int, int var_72_int)
{
	object var_74_object;
	@CreateIntVector(var_74_object);
	var_74_object->add(var_71_int);
	var_74_object->add(var_72_int);
	@SendWorldWndMessage(3, var_74_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_84_bool;
		func_883(var_1_object);
		if(var_84_bool != 0) {
			func_192(var_78_object, "Neutral");
			var_0_object->SetMessage(511843); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511844, 13058, 13057); //@t
			var_0_object->AddReply(536103, 37857, 37856); //@t
		} else {
					bool var_124_bool;
					func_907(var_1_object);
					var_130_bool = !var_124_bool; //@nz
					if(var_130_bool == 0) goto Label_126;
					func_192(var_78_object, "Neutral");
					var_0_object->SetMessage(511847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511848, -1, 13061); //@t
		}
	}
Label_162:
	for(;;) {
		bool var_111_bool;
		func_1028(var_111_bool);
		if(var_111_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_678(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_191;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_191:
			return 0;

		}

	}
	
Label_126:
	bool var_136_bool = false;
	bool var_137_bool;
	func_895(var_1_object);
	if(var_137_bool != 0) {
		bool var_143_bool;
		func_907(var_1_object);
		if(var_143_bool != 0)
			var_136_bool = true;
	}
	if(var_136_bool != 0) {
		func_192(var_78_object, "Neutral");
		var_0_object->SetMessage(511849); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(536115, 13064, 37870); //@t
		var_0_object->AddReply(511850, 13064, 13063); //@t
		goto Label_162;
	}
}
EMIT "GOTO 0x4e";


void func_588(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_593(bool var_17_bool, object var_18_object, float var_19_float)
{
	cvector var_30_cvector; bool var_37_bool;
	var_18_object->GetPosition(var_30_cvector);
	float var_29_float;
	var_18_object->GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_38_float + var_29_float);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	@GetEyesHeight(var_29_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_29_float);
	cvector var_32_cvector = var_30_cvector - var_31_cvector;
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_42_float = sqrt(var_32_cvector | var_32_cvector);
	var_32_cvector /= var_42_float;
	cvector var_33_cvector = -var_32_cvector;
	cvector var_44_cvector;
	func_698(var_44_cvector, (var_33_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_34_cvector = ((var_32_cvector * var_19_float) + (var_44_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_31_cvector + var_34_cvector), var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	@Rotate(var_57_float, var_58_float);
	bool var_59_bool;
	func_1028(var_59_bool);
	if(var_59_bool != 0) {
	} else {
		@HasAnimationTrack(var_37_bool, "head");
		if(var_37_bool == 0) goto Label_655;
		@LookAsyncCamera("head");
	}
Label_655:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
	
}


void func_725(object var_60_object, object var_61_object, int var_62_int)
{
	int var_66_int;
	var_61_object->GetItemID(var_66_int);
	int var_67_int;
	@GetInvItemProperty(var_67_int, var_66_int, "Category");
	bool var_68_bool;
	var_60_object->AddItem(var_68_bool, var_61_object, var_67_int, var_62_int);
	if(!var_68_bool) { //@nz
		var_60_object->DropItems(var_61_object, var_62_int);
	} else {
		int var_71_int; int var_72_int;
		var_66_int = var_71_int;
		var_62_int = var_72_int;
		func_713(var_71_int, var_72_int);
	}
	
}


void func_986(object var_86_object)
{
	object var_89_object; object var_90_object;
	@GetMainOutdoorScene(var_89_object);
	if(var_89_object == null) {
		@Trace("Can't find main outdoor scene");
		var_90_object = null;
		var_90_object = var_86_object;
	}
	var_89_object->GetMap(var_90_object);
	var_90_object = var_86_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_744(object var_55_object, string var_56_string, int var_57_int)
{
	object var_59_object;
	@CreateInvItem(var_59_object);
	var_59_object->SetItemName(var_56_string);
	object var_60_object; object var_61_object; int var_62_int;
	var_55_object = var_60_object;
	var_59_object = var_61_object;
	var_57_int = var_62_int;
	func_725(var_60_object, var_61_object, var_62_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_873(void)
{
	func_919();
	bool var_40_bool;
	func_757(var_40_bool, "quest_d4_02", "birdmask_talk");
}


void func_1003(int var_68_int)
{
	int var_70_int;
	@GetVariable("branch", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 1;
		return 2;
	EMIT "GOTO 0x3fa";
	}
	if(var_70_int == 1) {
		var_68_int = 2;
		return 2;
	}
	var_68_int = 3;
}


// @pe
void func_883(bool var_84_bool)
{
	int var_86_int;
	func_708(var_86_int, "ood4BirdmaskHome1");
	if(var_86_int == 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


void func_757(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


void func_502(void)
{
	int var_15_int; int var_16_int; bool var_17_bool; float var_18_float; bool var_19_bool;
	@WaitForAnimEnd();
	bool var_20_bool;
	func_588(var_20_bool);
	if(!var_20_bool) //@nz
		return 14;
	int var_24_int;
	func_776(var_24_int);
	int var_13_int;
	var_24_int = var_13_int;
	int var_14_int = 0;
	
	for(;;) {
		bool var_37_bool = false;
		if(var_14_int < 5) {
			bool var_40_bool;
			func_588(var_40_bool);
			if(var_40_bool != 0)
				var_37_bool = true;
		}
		if(var_37_bool != 0) {
			@irand(var_15_int, 3);
			if(var_15_int == 0) {
				if(var_13_int == 0) goto Label_549;
				@irand(var_16_int, var_13_int);
				string var_46_string; int var_47_int;
				var_16_int = var_47_int;
				func_769(var_46_string, var_47_int);
				@PlayAnimation("all", var_46_string);
				@WaitForAnimEnd(var_17_bool);
				if(!var_17_bool) { //@nz
				} else {
			} else {
			if(var_15_int == 1) {
				@rand(var_18_float, 4);
				@Sleep((var_18_float + 1), var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_578;
				}
			} else if(var_14_int != 0) {
				goto Label_578;
			}
			}
					bool var_49_bool;
					func_581(var_49_bool);
					var_50_bool = !var_49_bool; //@nz
					if(var_50_bool == 0) goto Label_573;
			}
		}
	Label_578:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_573:
		@ResetAAS();
		var_14_int += 1;
	}
	
}


void func_1020(int var_65_int)
{
	var_65_int = 515571;
}


void func_1022(int var_64_int)
{
	var_64_int = 504029;
}


// @pe
void func_895(bool var_137_bool)
{
	int var_139_int;
	func_708(var_139_int, "ood4BirdmaskHome2");
	if(var_139_int == 0) {
		var_137_bool = true;
		return 0;
	}
	var_137_bool = false;
}


