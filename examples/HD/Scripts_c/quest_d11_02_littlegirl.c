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
			func_713();
			if(var_8_bool == 15373) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_820();
			}
			if(var_8_bool == 15376) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_854();
			}
			if(var_8_bool == 15378) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_837();
				object var_81_object = var_1_object;
				func_803(var_0_object);
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_797();
				object var_109_object = var_1_object;
				func_860(var_0_object);
			}
			if(var_8_bool == 41554) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_837();
				object var_116_object = var_1_object;
				func_860(var_0_object);
			}
			if(var_8_bool == 15379) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_814();
			}
			if(var_8_bool == 15381) {
				object var_126_object = var_1_object;
				func_860(var_0_object);
			}
			if(var_7_bool == 15370) {
				bool var_130_bool;
				func_877(var_1_object);
				if(var_130_bool != 0) {
					func_208(var_8_bool, "Neutral");
					var_0_object->SetMessage(514156); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514169, 15384, 15383); //@t
					var_0_object->AddReply(539603, 15384, 41547); //@t
					return 0;
				}
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514161); //@t
				var_0_object->ClearReplies(); //@t
				bool var_162_bool = true;
				bool var_163_bool = false;
				bool var_164_bool;
				func_889(var_1_object);
				if(var_164_bool != 0) {
					bool var_170_bool;
					func_913(var_1_object);
					if(var_170_bool != 0)
						var_163_bool = true;
				}
				if(var_163_bool != 1) {
					bool var_176_bool = false;
					bool var_177_bool;
					func_925(var_1_object);
					if(var_177_bool != 0) {
						bool var_183_bool;
						func_913(var_1_object);
						if(var_183_bool != 0)
							var_176_bool = true;
					}
					if(var_176_bool != 1)
						var_162_bool = false;
				}
				if(var_162_bool != 0)
					var_0_object->AddReply(514162, 15377, 15376); //@t
				bool var_188_bool = false;
				bool var_189_bool;
				func_901(var_1_object);
				if(var_189_bool != 0) {
					bool var_195_bool;
					func_865(var_1_object);
					if(var_195_bool != 0)
						var_188_bool = true;
				}
				if(var_188_bool != 0)
					var_0_object->AddReply(514165, 15380, 15379); //@t
				var_0_object->AddReply(514168, -1, 15382); //@t
				return 0;
			}
			if(var_7_bool == 15380) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514167, -1, 15381); //@t
				return 0;
			}
			if(var_7_bool == 15377) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514163); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514164, -1, 15378); //@t
				var_0_object->AddReply(539608, -1, 41554); //@t
				return 0;
			}
			if(var_7_bool == 15384) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514157, 15372, 15371); //@t
				var_0_object->AddReply(539604, 41550, 41549); //@t
				return 0;
			}
			if(var_7_bool == 41550) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(539605); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539606, 15372, 41551); //@t
				var_0_object->AddReply(539609, -1, 41555); //@t
				return 0;
			}
			if(var_7_bool == 15372) {
				func_208(var_8_bool, "Neutral");
				var_0_object->SetMessage(514158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514159, -1, 15373); //@t
				var_0_object->AddReply(514160, -1, 15374); //@t
				return 0;
			}
			var_3_string = true;
			bool var_254_bool;
			func_1042(var_254_bool);
			if(var_254_bool != 0)
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
		func_545();
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
				func_593(var_14_bool);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0) {
				object var_15_object;
				func_720(var_15_object);
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
			func_593(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_720(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_595(var_20_bool, var_21_object, 70.0);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_68_int;
	func_1036(var_68_int);
	var_16_object->SetNPCName(var_68_int);
	int var_69_int;
	func_1034(var_69_int);
	var_16_object->SetNPCDescription(var_69_int);
	string var_70_string;
	func_1038(var_70_string);
	var_16_object->SetPhoto(var_70_string);
	string var_71_string;
	func_1040(var_71_string);
	var_16_object->SetPhoto2(var_71_string);
	int var_72_int;
	func_1017(var_72_int);
	var_16_object->SetPlayerName(var_72_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_81_object; object var_82_object;
	var_10_object = var_81_object;
	var_16_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_185_bool = !var_19_bool; //@nz
		if(var_185_bool == 0) goto Label_63;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_63:
	object var_186_object;
	var_10_object = var_186_object;
	func_664();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_772(object var_84_object, string var_85_string, int var_86_int)
{
	object var_88_object;
	@CreateInvItem(var_88_object);
	var_88_object->SetItemName(var_85_string);
	object var_89_object; object var_90_object; int var_91_int;
	var_84_object = var_89_object;
	var_88_object = var_90_object;
	var_86_int = var_91_int;
	func_753(var_89_object, var_90_object, var_91_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_901(bool var_167_bool)
{
	int var_169_int;
	func_736(var_169_int, "d11q02");
	if(var_169_int == -1)
		var_167_bool = true;
	var_167_bool = false;
}


void func_1034(int var_69_int)
{
	var_69_int = 515561;
}


void func_1036(int var_68_int)
{
	var_68_int = 503346;
}


void func_1038(string var_70_string)
{
	var_70_string = "ui/NPC_Citizen1.png";
}


void func_1040(string var_71_string)
{
	var_71_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_913(bool var_148_bool)
{
	int var_150_int;
	func_736(var_150_int, "ood11ULittleGirl2");
	if(var_150_int == 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
}


void func_1042(bool var_63_bool)
{
	var_63_bool = false;
}


void func_785(bool var_48_bool, string var_49_string, string var_50_string)
{
	object var_52_object;
	@FindActor(var_52_object, var_49_string);
	if(var_52_object == null)
		var_48_bool = false;
	@Trigger(var_52_object, var_50_string);
	var_48_bool = true;
}
EMIT "Stack[-1] = 0";


void func_664(void)
{
	bool var_188_bool;
	@CameraSwitchToNormal(true);
	bool var_190_bool;
	func_1042(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_681;
		@UnlookAsync("head");
	}
Label_681:
	
}


// @pe
void func_797(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_925(bool var_155_bool)
{
	int var_157_int;
	func_736(var_157_int, "d11q02");
	if(var_157_int == 1000)
		var_155_bool = true;
	var_155_bool = false;
}


void func_545(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_803(object var_81_object)
{
	@Trace("powder is given");
	object var_84_object;
	var_81_object = var_84_object;
	func_772(var_84_object, "powder", 1);
}


void func_937(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 197, 2, 515485);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_989(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_682(string var_122_string)
{
	bool var_126_bool; float var_127_float; float var_128_float;
	@lshHasAnimation(var_126_bool, var_122_string);
	if(var_126_bool != 0) {
		@lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		@lshPlayAnimation(var_127_float, var_128_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_122_string);
	}
	
}


// @pe
void func_814(void)
{
	@SetVariable("ood11ULittleGirl1", 1);
}


// @pe
void func_820(void)
{
	@SetVariable("d11q02", 1);
	func_937();
	func_963();
	bool var_48_bool;
	func_785(var_48_bool, "quest_d11_02", "init_graveyard");
}


void func_950(void)
{
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 198, 2, 515486);
	bool var_75_bool; object var_76_object;
	var_71_object = var_76_object;
	func_989(var_75_bool, var_76_object, 197);
}
EMIT "Stack[-1] = 0";


void func_698(string var_100_string, bool var_101_bool)
{
	bool var_107_bool; float var_108_float; float var_109_float;
	@lshHasAnimation(var_107_bool, var_100_string);
	if(var_107_bool != 0) {
		@lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		@lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_100_string);
	}
	
}


void func_963(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 199, 2, 515487);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_989(var_45_bool, var_46_object, 197);
}
EMIT "Stack[-1] = 0";


// @pe
void func_837(void)
{
	int var_64_int;
	func_736(var_64_int, "d11q02");
	if(var_64_int != 1000) {
		func_950();
		bool var_78_bool;
		func_785(var_78_bool, "quest_d11_02", "completed");
	}
}


void func_713(void)
{
	bool var_10_bool;
	func_1042(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_81_object, object var_82_object)
{
	var_0_object = var_82_object;
	var_1_object = var_81_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_88_bool;
		func_877(var_1_object);
		if(var_88_bool != 0) {
			func_208(var_82_object, "Neutral");
			var_0_object->SetMessage(514156); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514169, 15384, 15383); //@t
			var_0_object->AddReply(539603, 15384, 41547); //@t
		} else {
					func_208(var_82_object, "Neutral");
					var_0_object->SetMessage(514161); //@t
					var_0_object->ClearReplies(); //@t
					bool var_140_bool = true;
					bool var_141_bool = false;
					bool var_142_bool;
					func_889(var_1_object);
					if(var_142_bool != 0) {
						bool var_148_bool;
						func_913(var_1_object);
						if(var_148_bool != 0)
							var_141_bool = true;
					}
					if(var_141_bool != 1) {
						bool var_154_bool = false;
						bool var_155_bool;
						func_925(var_1_object);
						if(var_155_bool != 0) {
							bool var_161_bool;
							func_913(var_1_object);
							if(var_161_bool != 0)
								var_154_bool = true;
						}
						if(var_154_bool != 1)
							var_140_bool = false;
					}
					if(var_140_bool != 0)
						var_0_object->AddReply(514162, 15377, 15376); //@t
					bool var_166_bool = false;
					bool var_167_bool;
					func_901(var_1_object);
					if(var_167_bool != 0) {
						bool var_173_bool;
						func_865(var_1_object);
						if(var_173_bool != 0)
							var_166_bool = true;
					}
					if(var_166_bool != 0)
						var_0_object->AddReply(514165, 15380, 15379); //@t
					var_0_object->AddReply(514168, -1, 15382); //@t
		}
	}
	for(;;) {
		bool var_120_bool;
		func_1042(var_120_bool);
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
void func_208(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_1042(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string; bool var_101_bool;
	var_96_string = var_100_string;
	if(var_96_string == "")
		var_101_bool = false;
	else
		var_101_bool = true;
	func_698(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	
}


void func_593(bool var_9_bool)
{
	var_9_bool = true;
}


void func_720(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_595(bool var_20_bool, object var_21_object, float var_22_float)
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
	func_726(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector, true);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_61_float, var_62_float);
	bool var_63_bool;
	func_1042(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_658;
		@LookAsyncCamera("head");
	}
Label_658:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


void func_976(object var_31_object)
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


// @pe
void func_854(void)
{
	@SetVariable("ood11ULittleGirl2", 1);
}


void func_726(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_51_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_51_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_51_float;
}


// @pe
void func_860(object var_110_object)
{
	var_110_object->SetReturnValue(1000);
}


void func_989(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_976(var_31_object);
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


void func_736(int var_90_int, string var_91_string)
{
	int var_93_int;
	@GetVariable(var_91_string, var_93_int);
	var_93_int = var_90_int;
}


// @pe
void func_865(bool var_173_bool)
{
	int var_175_int;
	func_736(var_175_int, "ood11ULittleGirl1");
	if(var_175_int == 0) {
		var_173_bool = true;
		return 0;
	}
	var_173_bool = false;
}


void func_741(int var_100_int, int var_101_int)
{
	object var_103_object;
	@CreateIntVector(var_103_object);
	var_103_object->add(var_100_int);
	var_103_object->add(var_101_int);
	@SendWorldWndMessage(3, var_103_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_877(bool var_88_bool)
{
	int var_90_int;
	func_736(var_90_int, "d11q02");
	if(var_90_int == 0) {
		var_88_bool = true;
		return 0;
	}
	var_88_bool = false;
}


void func_753(object var_89_object, object var_90_object, int var_91_int)
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
		func_741(var_100_int, var_101_int);
	}
	
}


// @pe
void func_889(bool var_142_bool)
{
	int var_144_int;
	func_736(var_144_int, "d11q02");
	if(var_144_int == 2)
		var_142_bool = true;
	var_142_bool = false;
}


void func_1017(int var_72_int)
{
	int var_74_int;
	@GetVariable("branch", var_74_int);
	if(var_74_int == 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x408";
	}
	if(var_74_int == 1) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
}


