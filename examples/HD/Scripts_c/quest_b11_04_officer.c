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
			func_750();
			if(var_13_bool == 31881) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_812();
			}
			if(var_13_bool == 32782) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_812();
			}
			if(var_12_bool == 31874) {
				bool var_51_bool;
				func_821(var_1_object);
				if(var_51_bool != 0) {
					func_152(var_13_bool, "Neutral");
					var_0_object->SetMessage(530515); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530516, 32774, 31875); //@t
					return 0;
				}
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(530523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530524, -1, 31883); //@t
				var_0_object->AddReply(531426, -1, 32770); //@t
				return 0;
			}
			if(var_12_bool == 32774) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(531430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531431, 32772, 32775); //@t
				return 0;
			}
			if(var_12_bool == 32772) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(531428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531429, 31876, 32773); //@t
				var_0_object->AddReply(531432, 31876, 32776); //@t
				return 0;
			}
			if(var_12_bool == 31876) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(530517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530518, 31880, 31877); //@t
				var_0_object->AddReply(531433, 32779, 32778); //@t
				return 0;
			}
			if(var_12_bool == 32779) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(531434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531435, 31880, 32780); //@t
				return 0;
			}
			if(var_12_bool == 31880) {
				func_152(var_13_bool, "Neutral");
				var_0_object->SetMessage(530521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530522, -1, 31881); //@t
				var_0_object->AddReply(531436, -1, 32782); //@t
				return 0;
			}
			var_3_string = true;
			bool var_132_bool;
			func_810(var_132_bool);
			if(var_132_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_374(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_508(var_11_bool, var_12_object);
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
			func_392(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_508(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_441(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_757(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_470(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_739(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_621(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_804(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_802(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_806(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_808(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_887(var_79_int);
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
		var_150_bool = !var_26_bool; //@nz
		if(var_150_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_151_object;
	var_17_object = var_151_object;
	func_690();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_773(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_392(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_616(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_441(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_757(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_778(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_522(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_616(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_785(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_616(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_569;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_778(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_598;
				}
			} else if(var_38_int != 0) {
				goto Label_598;
			}
			}
					bool var_71_bool;
					func_601(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_593;
			}
		}
	Label_598:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_593:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_785(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_778(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_152(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_810(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string; bool var_108_bool;
	var_103_string = var_107_string;
	if(var_103_string == "")
		var_108_bool = false;
	else
		var_108_bool = true;
	func_724(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


void func_802(int var_76_int)
{
	var_76_int = 515597;
}


void func_804(int var_75_int)
{
	var_75_int = 514841;
}


void func_806(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
}


void func_808(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
}


void func_810(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_812(void)
{
	@SetVariable("b11q04", 3);
	func_833();
}


void func_690(void)
{
	bool var_153_bool;
	@CameraSwitchToNormal(true);
	bool var_155_bool;
	func_810(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_153_bool, "head");
		if(var_153_bool == 0) goto Label_707;
		@UnlookAsync("head");
	}
Label_707:
	
}


// @pe
void func_821(bool var_95_bool)
{
	int var_97_int;
	func_773(var_97_int, "b11q04");
	if(var_97_int == 2)
		var_95_bool = true;
	var_95_bool = false;
}


void func_441(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_443(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_616(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_522();
	if(!false) //@nz
		@KillTimer(10);
}


void func_833(void)
{
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 554, 2, 530529);
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_859(var_27_bool, var_28_object, 551);
}
EMIT "Stack[-1] = 0";


void func_708(string var_126_string)
{
	bool var_130_bool; float var_131_float; float var_132_float;
	@lshHasAnimation(var_130_bool, var_126_string);
	if(var_130_bool != 0) {
		@lshGetAnimTimes(var_126_string, var_131_float, var_132_float);
		@lshPlayAnimation(var_131_float, var_132_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_126_string);
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_821(var_88_object);
		if(var_95_bool != 0) {
			func_152(var_89_object, "Neutral");
			var_0_object->SetMessage(530515); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530516, 32774, 31875); //@t
		} else {
					func_152(var_89_object, "Neutral");
					var_0_object->SetMessage(530523); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530524, -1, 31883); //@t
					var_0_object->AddReply(531426, -1, 32770); //@t
		}
	}
	for(;;) {
		bool var_124_bool;
		func_810(var_124_bool);
		if(var_124_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_708(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_151;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_151:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_846(object var_36_object)
{
	object var_38_object;
	@GetDiaryRoot(var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_36_object = false;
	}
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_724(string var_107_string, bool var_108_bool)
{
	bool var_114_bool; float var_115_float; float var_116_float;
	@lshHasAnimation(var_114_bool, var_107_string);
	if(var_114_bool != 0) {
		@lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		@lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_107_string);
	}
	
}


void func_470(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_608(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_601(bool var_71_bool)
{
	var_71_bool = true;
}


void func_603(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_859(bool var_27_bool, object var_28_object, int var_29_int)
{
	object var_36_object;
	func_846(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	object var_34_object;
	var_33_object->Find(var_29_int, var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_29_int);
		var_27_bool = false;
	}
	var_34_object->AddChild(var_28_object);
	@SendWorldWndMessage(7);
	int var_35_int;
	var_28_object->GetCategory(var_35_int);
	@SetDiarySection(var_35_int);
	var_27_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_608(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_739(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_616(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_621(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_763(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_810(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_684;
		@LookAsyncCamera("head");
	}
Label_684:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_750(void)
{
	bool var_15_bool;
	func_810(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_757(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_374(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_443(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_887(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x386";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_763(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_508(object var_2_object, string var_3_string)
{
	func_603();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


