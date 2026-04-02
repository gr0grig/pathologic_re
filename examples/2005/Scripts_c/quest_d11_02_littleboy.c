// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_629();
			if(var_8_bool == 15360) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_730();
			}
			if(var_8_bool == 15363) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_764();
			}
			if(var_8_bool == 15365) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_747();
				object var_81_object = var_1_object;
				func_719(var_0_object);
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_713();
				object var_109_object = var_1_object;
				func_776(var_0_object);
			}
			if(var_8_bool == 15366) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_770();
			}
			if(var_8_bool == 15368) {
				object var_120_object = var_1_object;
				func_776(var_0_object);
			}
			if(var_7_bool == 15356) {
				bool var_124_bool;
				func_781(var_1_object);
				if(var_124_bool != 0) {
					func_208(var_8_bool, "Neutral");
					var_0_object->SetMessage(514142); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514143, 41559, 15357); //@t
					var_0_object->AddReply(539612, 41559, 41558); //@t
					return 0;
				}
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514147); //@t
				var_0_object->ClearReplies(); //@t
				bool var_151_bool = true;
				bool var_152_bool = false;
				bool var_153_bool;
				func_793(var_1_object);
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_829(var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 1) {
					bool var_165_bool = false;
					bool var_166_bool;
					func_817(var_1_object);
					if(var_166_bool != 0) {
						bool var_172_bool;
						func_829(var_1_object);
						if(var_172_bool != 0)
							var_165_bool = true;
					}
					if(var_165_bool != 1)
						var_151_bool = false;
				}
				if(var_151_bool != 0)
					var_0_object->AddReply(514149, 15364, 15363); //@t
				bool var_177_bool = false;
				bool var_178_bool;
				func_805(var_1_object);
				if(var_178_bool != 0) {
					bool var_184_bool;
					func_841(var_1_object);
					if(var_184_bool != 0)
						var_177_bool = true;
				}
				if(var_177_bool != 0)
					var_0_object->AddReply(514152, 15367, 15366); //@t
				var_0_object->AddReply(514148, -1, 15362); //@t
				return 0;
			}
			if(var_7_bool == 15367) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514153); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514154, -1, 15368); //@t
				return 0;
			}
			if(var_7_bool == 15364) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514151, -1, 15365); //@t
				return 0;
			}
			if(var_7_bool == 41559) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(539613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514146, -1, 15360); //@t
				var_0_object->AddReply(514144, -1, 15358); //@t
				return 0;
			}
			var_3_string = true;
			bool var_220_bool;
			func_958(var_220_bool);
			if(var_220_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe7";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = true;
		func_481();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		if(var_1_object != 0) {
			int var_9_int; object var_10_object;
			var_7_object = var_10_object;
			TaskCall(0);
			func_0(var_11_object, var_9_int, var_10_object);
			TaskReturn();
			if(var_11_object == 1000)
				var_1_object = false;
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_9_bool);
			bool var_12_bool = false;
			if(!var_9_bool) { //@nz
				bool var_14_bool;
				func_529(var_14_bool);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0) {
				object var_15_object;
				func_636(var_15_object);
				@RemoveActor(var_15_object);
			}
		} else if(var_7_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_529(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_636(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_531(var_20_bool, var_21_object, 70.0);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_67_int;
	func_952(var_67_int);
	var_16_object->SetNPCName(var_67_int);
	int var_68_int;
	func_950(var_68_int);
	var_16_object->SetNPCDescription(var_68_int);
	string var_69_string;
	func_954(var_69_string);
	var_16_object->SetPhoto(var_69_string);
	string var_70_string;
	func_956(var_70_string);
	var_16_object->SetPhoto2(var_70_string);
	int var_71_int;
	func_933(var_71_int);
	var_16_object->SetPlayerName(var_71_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_80_object; object var_81_object;
	var_10_object = var_80_object;
	var_16_object = var_81_object;
	TaskCall(1);
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_174_bool = !var_19_bool; //@nz
		if(var_174_bool == 0) goto Label_63;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_63:
	object var_175_object;
	var_10_object = var_175_object;
	func_599();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_636(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_770(void)
{
	@SetVariable("ood11ULittleBoy2", 1);
}


void func_642(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_51_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_51_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_51_float;
}


// @pe
void func_764(void)
{
	@SetVariable("ood11ULittleBoy1", 1);
}


// @pe
void func_776(object var_110_object)
{
	var_110_object->SetReturnValue(1000);
}


void func_905(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_892(var_31_object);
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


void func_652(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
}


// @pe
void func_781(bool var_87_bool)
{
	int var_89_int;
	func_652(var_89_int, "d11q02");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
}


void func_529(bool var_9_bool)
{
	var_9_bool = true;
}


void func_657(int var_100_int, int var_101_int)
{
	object var_103_object;
	@CreateIntVector(var_103_object);
	var_103_object->add(var_100_int);
	var_103_object->add(var_101_int);
	@SendWorldWndMessage(3, var_103_object);
}
EMIT "Stack[-1] = 0";


void func_531(bool var_20_bool, object var_21_object, float var_22_float)
{
	cvector var_33_cvector; bool var_40_bool;
	var_21_object->GetPosition(var_33_cvector);
	float var_32_float;
	var_21_object->GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_41_float + var_32_float);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	@GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_42_float + var_32_float);
	cvector var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_45_float = sqrt(var_35_cvector | var_35_cvector);
	var_35_cvector /= var_45_float;
	cvector var_36_cvector = -var_35_cvector;
	cvector var_47_cvector;
	func_642(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector);
	var_60_float = GetByIndex(var_37_cvector, 0);
	var_61_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_60_float, var_61_float);
	bool var_62_bool;
	func_958(var_62_bool);
	if(var_62_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_593;
		@LookAsyncCamera("head");
	}
Label_593:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


// @pe
void func_793(bool var_131_bool)
{
	int var_133_int;
	func_652(var_133_int, "d11q02");
	if(var_133_int == 2)
		var_131_bool = true;
	var_131_bool = false;
}


void func_669(object var_89_object, object var_90_object, int var_91_int)
{
	int var_95_int;
	var_90_object->GetItemID(var_95_int);
	int var_96_int;
	@GetInvItemProperty(var_96_int, var_95_int, "Category");
	bool var_97_bool;
	var_89_object->AddItem(var_97_bool, var_90_object, var_96_int, var_91_int);
	if(!var_97_bool) { //@nz
		var_89_object->DropItems(var_90_object, var_91_int);
	} else {
		int var_100_int; int var_101_int;
		var_95_int = var_100_int;
		var_91_int = var_101_int;
		func_657(var_100_int, var_101_int);
	}
	
}


void func_933(int var_71_int)
{
	int var_73_int;
	@GetVariable("branch", var_73_int);
	if(var_73_int == 0) {
		var_71_int = 1;
		return 2;
	EMIT "GOTO 0x3b4";
	}
	if(var_73_int == 1) {
		var_71_int = 2;
		return 2;
	}
	var_71_int = 3;
}


// @pe
void func_805(bool var_156_bool)
{
	int var_158_int;
	func_652(var_158_int, "d11q02");
	if(var_158_int == -1)
		var_156_bool = true;
	var_156_bool = false;
}


void func_688(object var_84_object, string var_85_string, int var_86_int)
{
	object var_88_object;
	@CreateInvItem(var_88_object);
	var_88_object->SetItemName(var_85_string);
	object var_89_object; object var_90_object; int var_91_int;
	var_84_object = var_89_object;
	var_88_object = var_90_object;
	var_86_int = var_91_int;
	func_669(var_89_object, var_90_object, var_91_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_817(bool var_144_bool)
{
	int var_146_int;
	func_652(var_146_int, "d11q02");
	if(var_146_int == 1000)
		var_144_bool = true;
	var_144_bool = false;
}


void func_950(int var_68_int)
{
	var_68_int = 515560;
}


void func_952(int var_67_int)
{
	var_67_int = 503345;
}


void func_954(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen3.png";
}


void func_956(string var_70_string)
{
	var_70_string = "ui/NPC_Citizen3_b.png";
}


// @pe
void func_829(bool var_137_bool)
{
	int var_139_int;
	func_652(var_139_int, "ood11ULittleBoy1");
	if(var_139_int == 0) {
		var_137_bool = true;
		return 0;
	}
	var_137_bool = false;
}


void func_958(bool var_62_bool)
{
	var_62_bool = false;
}


void func_701(bool var_48_bool, string var_49_string, string var_50_string)
{
	object var_52_object;
	@FindActor(var_52_object, var_49_string);
	if(var_52_object == null)
		var_48_bool = false;
	@Trigger(var_52_object, var_50_string);
	var_48_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_841(bool var_162_bool)
{
	int var_164_int;
	func_652(var_164_int, "ood11ULittleBoy2");
	if(var_164_int == 0) {
		var_162_bool = true;
		return 0;
	}
	var_162_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_80_object, object var_81_object)
{
	var_0_object = var_81_object;
	var_1_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_87_bool;
		func_781(var_1_object);
		if(var_87_bool != 0) {
			func_208(var_81_object, "Neutral");
			var_0_object->SetMessage(514142); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514143, 41559, 15357); //@t
			var_0_object->AddReply(539612, 41559, 41558); //@t
		} else {
					func_208(var_81_object, "Neutral");
					var_0_object->SetMessage(514147); //@t
					var_0_object->ClearReplies(); //@t
					bool var_129_bool = true;
					bool var_130_bool = false;
					bool var_131_bool;
					func_793(var_1_object);
					if(var_131_bool != 0) {
						bool var_137_bool;
						func_829(var_1_object);
						if(var_137_bool != 0)
							var_130_bool = true;
					}
					if(var_130_bool != 1) {
						bool var_143_bool = false;
						bool var_144_bool;
						func_817(var_1_object);
						if(var_144_bool != 0) {
							bool var_150_bool;
							func_829(var_1_object);
							if(var_150_bool != 0)
								var_143_bool = true;
						}
						if(var_143_bool != 1)
							var_129_bool = false;
					}
					if(var_129_bool != 0)
						var_0_object->AddReply(514149, 15364, 15363); //@t
					bool var_155_bool = false;
					bool var_156_bool;
					func_805(var_1_object);
					if(var_156_bool != 0) {
						bool var_162_bool;
						func_841(var_1_object);
						if(var_162_bool != 0)
							var_155_bool = true;
					}
					if(var_155_bool != 0)
						var_0_object->AddReply(514152, 15367, 15366); //@t
					var_0_object->AddReply(514148, -1, 15362); //@t
		}
	}
	for(;;) {
		bool var_114_bool;
		func_958(var_114_bool);
		if(var_114_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_616(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_207;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_207:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_713(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_719(object var_81_object)
{
	@Trace("revolver ammo6 is given");
	object var_84_object;
	var_81_object = var_84_object;
	func_688(var_84_object, "revolver_ammo", 6);
}


// @pe
void func_208(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_958(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_623(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_853(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 197, 2, 515485);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_905(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_599(void)
{
	bool var_177_bool;
	@CameraSwitchToNormal();
	bool var_178_bool;
	func_958(var_178_bool);
	if(var_178_bool != 0) {
	} else {
		@HasAnimationTrack(var_177_bool, "head");
		if(var_177_bool == 0) goto Label_615;
		@UnlookAsync("head");
	}
Label_615:
	
}


// @pe
void func_730(void)
{
	@SetVariable("d11q02", 1);
	func_853();
	func_879();
	bool var_48_bool;
	func_701(var_48_bool, "quest_d11_02", "init_graveyard");
}


void func_481(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_866(void)
{
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 198, 2, 515486);
	bool var_75_bool; object var_76_object;
	var_71_object = var_76_object;
	func_905(var_75_bool, var_76_object, 197);
}
EMIT "Stack[-1] = 0";


void func_616(string var_116_string)
{
	float var_119_float; float var_120_float;
	@lshGetAnimTimes(var_116_string, var_119_float, var_120_float);
	@lshPlayAnimation(var_119_float, var_120_float, false);
}


// @pe
void func_747(void)
{
	int var_64_int;
	func_652(var_64_int, "d11q02");
	if(var_64_int != 1000) {
		func_866();
		bool var_78_bool;
		func_701(var_78_bool, "quest_d11_02", "completed");
	}
}


void func_623(string var_99_string, bool var_100_bool)
{
	float var_105_float; float var_106_float;
	@lshGetAnimTimes(var_99_string, var_105_float, var_106_float);
	@lshPlayAnimation(var_105_float, var_106_float, var_100_bool);
}


void func_879(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 199, 2, 515487);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_905(var_45_bool, var_46_object, 197);
}
EMIT "Stack[-1] = 0";


void func_629(void)
{
	bool var_10_bool;
	func_958(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_892(object var_31_object)
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


